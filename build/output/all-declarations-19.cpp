#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 454)) ;
  GGS_lstring var_lexiqueComponentName_16773 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 457)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_16863 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_16927 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_16990 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_17046 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_17105 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_17177 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_17252 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_17313 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_17360 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_16863, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_16927, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_16990, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_17046, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_17105, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_17252, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_17313, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_17313, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_17177, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_17360, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_16773, GGS_bool (false), var_templateDelimitorList_16863, var_templateReplacementList_16927, var_lexicalAttributeList_16990, var_lexicalStyleList_17046, var_terminalDeclarationList_17105, var_lexicalMessageDeclarationList_17177, var_lexicalListDeclarationList_17252, var_lexicalRuleList_17313, var_indexingListAST_17360, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 491)) ;
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
  GGS_lstring var_indexName_18727 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  GGS_lstring var_indexComment_18806 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_18727, var_indexComment_18806  COMMA_SOURCE_FILE ("lexique-component.galgas", 514)) ;
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
  GGS_lstring var_messageName_19138 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  GGS_lstring var_messageValue_19187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_19138, var_messageValue_19187  COMMA_SOURCE_FILE ("lexique-component.galgas", 525)) ;
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
  GGS_lstring var_listName_19507 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_19507, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 534)) ;
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
  GGS_lexicalExpressionAST var_lexicalRuleExpression_19837 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_19837, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 542)) ;
  GGS_lexicalInstructionListAST var_instructionList_19902 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_19902, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_19837, var_instructionList_19902, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 549)) ;
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
  GGS_lexicalInstructionAST var_instruction_20362 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_20362, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_20362  COMMA_SOURCE_FILE ("lexique-component.galgas", 557)) ;
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
  GGS_lexicalExpressionAST var_whileExpression_20668 ;
  nt_lexical_5F_expression_ (var_whileExpression_20668, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 565)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_20727 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_20727, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_20668, var_whileInstructionList_20727  COMMA_SOURCE_FILE ("lexique-component.galgas", 571)) ;
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
  GGS_lchar var_character_21152 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 577)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_21152, inCompiler COMMA_HERE) ;
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
  GGS_lbigint var_unsignedValue_21480 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 584)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_21480, inCompiler COMMA_HERE) ;
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
  GGS_location var_currentLocation_21801 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 591)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 592)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_21801, inCompiler COMMA_HERE) ;
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
  GGS_lstring var_idf_22173 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_22173, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 603)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_22327 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 607)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_22494 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_22494, inCompiler) ;
        var_functionActualArgumentList_22327.addAssignOperation (var_arg_22494  COMMA_SOURCE_FILE ("lexique-component.galgas", 609)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 611)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_22173, var_functionActualArgumentList_22327, inCompiler COMMA_HERE) ;
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
      GGS_lexicalExpressionAST var_rightExpression_23137 ;
      nt_lexical_5F_factor_ (var_rightExpression_23137, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_23137, inCompiler COMMA_HERE) ;
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
  GGS_lstring var_string_23430 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 637)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_23430, inCompiler COMMA_HERE) ;
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
  GGS_lstring var_string_23688 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  GGS_lstring var_errorMessage_23729 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 647)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_23688, var_errorMessage_23729, inCompiler COMMA_HERE) ;
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
  GGS_lchar var_character_24007 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_24007, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    GGS_lchar var_upperBound_24134 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 659)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_24007, var_upperBound_24134, inCompiler COMMA_HERE) ;
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
  GGS_lstring var_characterSet_24435 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 667)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_24435, inCompiler COMMA_HERE) ;
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
  GGS_lstring var_name_24751 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 675)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_24793 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_24862 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      GGS_lstring var_sentAttribute_24895 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
      var_sentAttributeList_24793.addAssignOperation (var_selector_24862, var_sentAttribute_24895  COMMA_SOURCE_FILE ("lexique-component.galgas", 681)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      GGS_lstring var_selector_24991 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 684)) ;
      GGS_lstring var_sentAttribute_25036 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
      var_sentAttributeList_24793.addAssignOperation (var_selector_24991, var_sentAttribute_25036  COMMA_SOURCE_FILE ("lexique-component.galgas", 686)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_25127 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
    var_theStyle_25127 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 691)) ;
  } break ;
  case 2: {
    var_theStyle_25127 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 693)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  GGS_lstring var_errorMessage_25331 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 697)) ;
  GGS_lexicalListEntryListAST var_entryList_25360 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_25360, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_24751, var_theStyle_25127, var_errorMessage_25331, var_sentAttributeList_24793, var_entryList_25360  COMMA_SOURCE_FILE ("lexique-component.galgas", 705)) ;
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
  GGS_lstring var_entrySpelling_25798 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 711)) ;
  GGS_bool var_isTemplateEndMark_25820 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_25854 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 716)) ;
      var_isTemplateEndMark_25820 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 719)) ;
      var_nonAtomicSelection_25854 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_26053 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
    var_terminalSpelling_26053 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 725)) ;
  } break ;
  case 2: {
    var_terminalSpelling_26053 = var_entrySpelling_25798 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_25798, var_terminalSpelling_26053, var_nonAtomicSelection_25854, var_isTemplateEndMark_25820  COMMA_SOURCE_FILE ("lexique-component.galgas", 729)) ;
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
  GGS_lstring var_typeName_26577 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  GGS_lstring var_name_26617 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_26577, var_name_26617  COMMA_SOURCE_FILE ("lexique-component.galgas", 741)) ;
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
  GGS_lstring var_name_26896 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 747)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_26938 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_27035 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      GGS_lstring var_sentAttribute_27068 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
      var_sentAttributeList_26938.addAssignOperation (var_selector_27035, var_sentAttribute_27068  COMMA_SOURCE_FILE ("lexique-component.galgas", 753)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      GGS_lstring var_selector_27164 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
      GGS_lstring var_sentAttribute_27209 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
      var_sentAttributeList_26938.addAssignOperation (var_selector_27164, var_sentAttribute_27209  COMMA_SOURCE_FILE ("lexique-component.galgas", 758)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_27300 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas", 760)) ;
  GGS_bool var_nonAtomicSelection_27359 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_27394 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 765)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_27300.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 767)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 767)) ;
        }
      }
      var_theStyle_27300 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 771)) ;
      var_nonAtomicSelection_27359 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 774)) ;
      var_templateEndMark_27394 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  GGS_lstring var_errorMessage_27780 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_26896, var_sentAttributeList_26938, var_errorMessage_27780, var_theStyle_27300, var_nonAtomicSelection_27359, var_templateEndMark_27394  COMMA_SOURCE_FILE ("lexique-component.galgas", 779)) ;
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
  GGS_lstring var_styleIdentifier_28210 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 792)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_28210.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28210.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas", 794)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_28210.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas", 796)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28210.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 797)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  GGS_lstring var_comment_28646 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_28210, var_comment_28646  COMMA_SOURCE_FILE ("lexique-component.galgas", 801)) ;
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
  GGS_lstring var_optionComponentName_3485 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 95)) ;
  GGS_commandLineOptionListAST var_options_3547 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_3547, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 101)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_3485, var_options_3547, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 102)) ;
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
  GGS_lstring var_mOptionTypeName_4008 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 112)) ;
  GGS_lstring var_mOptionInternalName_4055 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 114)) ;
  GGS_lchar var_mOptionInvocationLetter_4108 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 116)) ;
  GGS_lstring var_mOptionInvocationString_4169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  GGS_lstring var_mOptionComment_4231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  GGS_lstring var_defaultValue_4254 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 120)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_4335 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_4254 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
      var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 128)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_4628 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 130)) ;
      var_defaultValue_4254 = GGS_lstring::init_21__21_ (var_v_4628.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 131)), var_v_4628.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 132)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_4008, var_mOptionInternalName_4055, var_mOptionInvocationLetter_4108, var_mOptionInvocationString_4169, var_mOptionComment_4231, var_defaultValue_4254, var_optionDefaultValueKind_4335  COMMA_SOURCE_FILE ("optionCompilation.galgas", 135)) ;
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
  GGS_lstring var_syntaxComponentName_10302 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
  GGS_lstring var_importedLexiqueReference_10364 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_10364 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 253)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 255)) ;
    var_importedLexiqueReference_10364 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 256)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 257)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_10568 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10568 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 264)) ;
    var_hasTranslateFeature_10568 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 267)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_10745 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_10816 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_10745, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_10816, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 278)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_10302, var_importedLexiqueReference_10364, var_nonterminalDeclarationList_10745, var_ruleList_10816, var_hasTranslateFeature_10568  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 279)) ;
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
  GGS_lstring var_syntaxComponentName_11600 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 295)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11665 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_11736 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_11665, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_11736, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 306)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_11600.readProperty_string (), var_syntaxComponentName_11600, var_nonterminalDeclarationList_11665, var_ruleList_11736, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 307)) ;
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
  GGS_lstring var_mNonterminalName_12776 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 327)) ;
  GGS_nonTerminalLabelListAST var_labels_12850 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_12937 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_12937, inCompiler) ;
  var_labels_12850.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_12937, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 330)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 333)) ;
      GGS_lstring var_labelName_13098 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 334)) ;
      GGS_formalParameterListAST var_formalParameters_13184 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_13184, inCompiler) ;
      var_labels_12850.addAssignOperation (var_labelName_13098, var_formalParameters_13184, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 336))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 336)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_12776, var_labels_12850  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 338)) ;
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
  GGS_formalParameterListAST var_mFormalParameters_13798 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_13798, inCompiler) ;
  GGS_location var_endOfArguments_13824 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 348)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 349)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_13939 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_13939, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameters_13798, var_endOfArguments_13824, var_mSyntaxInstructionList_13939, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 356))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 351)) ;
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
  GGS_lstring var_mNonterminalName_14399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 365)) ;
  GGS_lstring var_labelName_14448 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 366)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_14499 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_14448, var_mLabelList_14499, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 371)) ;
      var_labelName_14448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 372)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_14399, var_mLabelList_14499  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 374)) ;
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
        GGS_semanticInstructionAST var_instruction_15318 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15318, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15318  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 391)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_15445 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15445, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15445  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 394)) ;
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
          GGS_string var_separator_15586 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 400)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_15586.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 401)).boolEnum () ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, outArgument_outElseInstructionList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  GGS_location var_instructionLocation_5202 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 119)) ;
  GGS_semanticExpressionAST var_whenExpression_5278 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whenExpression_5278, inCompiler) ;
  GGS_location var_endOfWhenExpression_5301 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  GGS_syntaxInstructionList var_whenInstructionList_5398 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_whenInstructionList_5398, inCompiler) ;
  GGS_location var_endOfWhenInstructions_5426 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 124)) ;
  GGS_syntaxInstructionList var_elseInstructionList_5541 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_5541, inCompiler) ;
  GGS_location var_endOfElseInstructions_5569 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 127)) ;
  outArgument_outElseInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  outArgument_outElseInstructionList.addAssignOperation (GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_5202, var_whenExpression_5278, var_endOfWhenExpression_5301, var_whenInstructionList_5398, var_endOfWhenInstructions_5426, var_elseInstructionList_5541, var_endOfElseInstructions_5569, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  GGS_location var_instructionLocation_6152 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  GGS_semanticExpressionAST var_whenExpression_6262 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whenExpression_6262, inCompiler) ;
  GGS_location var_endOfWhenExpression_6285 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  GGS_syntaxInstructionList var_whenInstructionList_6405 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_whenInstructionList_6405, inCompiler) ;
  GGS_location var_endOfWhenInstructions_6433 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 151)) ;
  GGS_syntaxInstructionList var_elseInstructionList_6571 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_6571, inCompiler) ;
  GGS_location var_endOfElseInstructions_6599 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
  outArgument_outInstruction = GGS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_6152, var_whenExpression_6262, var_endOfWhenExpression_6285, var_whenInstructionList_6405, var_endOfWhenInstructions_6433, var_elseInstructionList_6571, var_endOfElseInstructions_6599, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 71)) ;
  GGS_location var_instructionLocation_3146 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 73)) ;
  GGS_listOfSyntaxInstructionList var_mParseDoBranchList_3200 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_3328 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3328, inCompiler) ;
  var_mParseDoBranchList_3200.addAssignOperation (var_il_3328, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 76))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 76)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 78)) ;
    GGS_syntaxInstructionList var_instructionList_3480 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3480, inCompiler) ;
    var_mParseDoBranchList_3200.addAssignOperation (var_instructionList_3480, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 80))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 80)) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 83)) ;
  GGS_location var_endOfInstruction_3593 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 84)) ;
  outArgument_outInstruction = GGS_parseRewindInstruction::init_21__21__21_ (var_instructionLocation_3146, var_mParseDoBranchList_3200, var_endOfInstruction_3593, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 78)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 78)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_4022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_4118 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_4118, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_4184 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_4184, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449 ;
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 95)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_4022.readProperty_location (), var_terminalName_4022, var_actualInputParameterList_4118, var_indexNameList_4184, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4319, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4449, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 95)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 95)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_5639 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)) ;
      GGS_lstring var_postfixName_5701 ;
      switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
        var_postfixName_5701 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 121)) ;
      } break ;
      case 2: {
        var_postfixName_5701 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_5639, var_postfixName_5701  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 125)) ;
      if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 129)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  GGS_location var_instructionLocation_3431 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 78)) ;
  GGS_semanticExpressionAST var_variantExpression_3541 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_3541, inCompiler) ;
  GGS_location var_endOfVariantExpression_3567 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 81)) ;
  GGS_semanticExpressionAST var_whileExpression_3681 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whileExpression_3681, inCompiler) ;
  GGS_location var_endOfWhileExpression_3705 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 84)) ;
  GGS_syntaxInstructionList var_instructionList_3827 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3827, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 86)) ;
  GGS_location var_endOfInstructionList_3861 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 87)) ;
  outArgument_outInstruction = GGS_parseLoopInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_3431, var_variantExpression_3541, var_endOfVariantExpression_3567, var_whileExpression_3681, var_endOfWhileExpression_3705, var_instructionList_3827, var_endOfInstructionList_3861, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 78)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 81)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 84)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 86)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 78)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 81)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 84)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mLabelName_3078 ;
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler)) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler)) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler)) {
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
  GGS_lbool var_hasIndexing_8300 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_8300 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 238)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_8300 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 243)) ;
  GGS_lstring var_mGrammarName_8503 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 244)) ;
  GGS_lstring var_mGrammarClass_8581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 245)) ;
  GGS_bool var_hasTranslateFeature_8635 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_8635 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
    var_hasTranslateFeature_8635 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
  GGS_lstringlist var_syntaxComponents_8812 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)) ;
    GGS_lstring var_syntaxComponent_8894 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
    var_syntaxComponents_8812.addAssignOperation (var_syntaxComponent_8894  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 260)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_startSymbol_9026 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 264)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_9069 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)), inCompiler COMMA_HERE), var_mLabelList_9069, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 269)) ;
      GGS_lstring var_labelName_9273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_9273, var_mLabelList_9069, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_9412 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 277)) ;
      GGS_lstring var_nonterminalSymbolName_9526 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
      var_mUnusedNonterminalList_9412.addAssignOperation (var_nonterminalSymbolName_9526  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 279)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 282)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_8300, var_mGrammarName_8503, var_mGrammarClass_8581, var_syntaxComponents_8812, var_startSymbol_9026, var_mLabelList_9069, var_mUnusedNonterminalList_9412, var_hasTranslateFeature_8635, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 283)) ;
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
  GGS_stringset var_argumentNameSet_10265 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_formalParameterList_10319 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_argumentName_10439 ;
      nt_label_5F_formal_5F_parameter_ (ioArgument_ioDeclarations, var_argumentName_10439, var_formalParameterList_10319, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_10265.getter_hasKey (var_argumentName_10439.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 307)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_10439.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_10439.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)) ;
        }
      }
      var_argumentNameSet_10265.plusPlusAssignOperation (var_argumentName_10439.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 310)) ;
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
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameterList_10319, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 316))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 316)) ;
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
  GGS_lstring var_selector_11152 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 325)) ;
  GGS_lstring var_mTypeName_11224 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11224, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11152, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 334)), var_mTypeName_11224, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 332)) ;
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
  GGS_lstring var_selector_11795 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 346)) ;
  GGS_lstring var_mTypeName_11869 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11869, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11795, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 355)), var_mTypeName_11869, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 353)) ;
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
  GGS_lstring var_selector_12450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 367)) ;
  GGS_lstring var_mTypeName_12522 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_12522, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_12450, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 376)), var_mTypeName_12522, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 374)) ;
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
  GGS_lstring var_selector_13097 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 388)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 389)) ;
  GGS_lstring var_mTypeName_13181 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13181, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13097, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 398)), var_mTypeName_13181, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 396)) ;
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
  GGS_lstring var_selector_13793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 409)) ;
  GGS_lstring var_mTypeName_13855 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13855, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13793, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 418)), var_mTypeName_13855, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 416)) ;
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
  GGS_lstring var_selector_14456 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 430)) ;
  GGS_lstring var_mTypeName_14530 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_14530, inCompiler) ;
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
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_14456, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 439)), var_mTypeName_14530, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 437)) ;
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
  GGS_lstring var_selector_15136 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)) ;
  GGS_lstring var_mTypeName_15198 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15198, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 452)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15136, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 455)), var_mTypeName_15198, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 453)) ;
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
  GGS_lstring var_selector_15756 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 467)) ;
  GGS_lstring var_mTypeName_15830 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15830, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 469)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15756, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 472)), var_mTypeName_15830, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 470)) ;
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
  GGS_semanticInstructionListAST var_prologueInstructionList_5346 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5346, inCompiler) ;
  GGS_location var_endOfPrologue_5378 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_5346, var_endOfPrologue_5378  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 139)) ;
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
  GGS_semanticInstructionListAST var_prologueInstructionList_5911 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5911, inCompiler) ;
  GGS_location var_endOfPrologue_5943 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_5911, var_endOfPrologue_5943  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 154)) ;
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
  GGS_lstring var_mSourceFileExtension_6429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  GGS_lstring var_mSourceFileHelp_6499 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  GGS_lstring var_referenceGrammar_6558 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6558 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    var_referenceGrammar_6558 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_6734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_6734.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_6734.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_6940 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_6940.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_6940.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 186)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_7092 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7092 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
    var_isUnused_7092 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_7218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  GGS_semanticInstructionListAST var_mInstructionList_7340 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_7340, inCompiler) ;
  GGS_location var_endOfInstructionList_7365 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_6429, var_mSourceFileHelp_6499, var_mSourceFileVariableName_7218, var_isUnused_7092, var_referenceGrammar_6558, var_mInstructionList_7340, var_endOfInstructionList_7365  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 202)) ;
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
      GGS_unifiedTypeDefinition extractedValue_6471_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_6471_definition_0) ;
      result_result = extractedValue_6471_definition_0 ;
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
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GGS_analysisContext constin_inAnalysisContext,
                                                       GGS_unifiedTypeMap & io_ioTypeMap,
                                                       const GGS_bool constin_inHasTranslateFeature,
                                                       const GGS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GGS_stringlist & io_ioAssignementList,
                                                       GGS_localVarManager & io_ioVariableMap,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeGrammarInstructionSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
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
//
//Abstract extension method '@syntaxInstructionAST transformInstructionForGrammarAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstructionForGrammarAnalysis (cPtr_syntaxInstructionAST * inObject,
                                                                 GGS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                                                 const GGS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                                                 GGS_uint & io_ioAddedNonTerminalIndex,
                                                                 GGS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_transformInstructionForGrammarAnalysis (io_ioActuallyUsedTerminalSymbolMap, constin_inNonTerminalSymbolMap, io_ioAddedNonTerminalIndex, io_ioSyntaxInstructionList, inCompiler COMMA_THERE) ;
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
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (cPtr_syntaxInstructionAST * inObject,
                                                   const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                   GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const GGS_analysisContext constin_inAnalysisContext,
                                                   GGS_unifiedTypeMap & io_ioTypeMap,
                                                   const GGS_bool constin_inHasTranslateFeature,
                                                   const GGS_terminalMap constin_inTerminalMap,
                                                   const GGS_string constin_inLexiqueName,
                                                   const GGS_nonterminalMap constin_inNonterminalMap,
                                                   const GGS_string constin_inComponentName,
                                                   const GGS_stringset constin_inIndexNameSet,
                                                   GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   GGS_localVarManager & io_ioVariableMap,
                                                   GGS_uint & io_ioSelectMethodCount,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_analyzeSyntaxInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inTerminalMap, constin_inLexiqueName, constin_inNonterminalMap, constin_inComponentName, constin_inIndexNameSet, io_ioInstructionListForGeneration, io_ioVariableMap, io_ioSelectMethodCount, inCompiler COMMA_THERE) ;
  }
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
// @procCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionAST::objectCompare (const GGS_procCallInstructionAST & inOperand) const {
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

GGS_procCallInstructionAST::GGS_procCallInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mRoutineName,
                  const GGS_actualParameterListAST & in_mActualParameterList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_procCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_procCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->procCallInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mRoutineName, in_mActualParameterList, inCompiler) ;
  const GGS_procCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::
procCallInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                         const GGS_lstring & in_mRoutineName,
                                         const GGS_actualParameterListAST & in_mActualParameterList,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST::GGS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_procCallInstructionAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_procCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mRoutineName,
                                                          const GGS_actualParameterListAST & in_mActualParameterList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@procCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mProperty_mInstructionLocation, mProperty_mRoutineName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionAST result ;
  const GGS_procCallInstructionAST * p = (const GGS_procCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionForGeneration::objectCompare (const GGS_procCallInstructionForGeneration & inOperand) const {
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

GGS_procCallInstructionForGeneration::GGS_procCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration::
init_21_routineMangledName_21_ (const GGS_lstring & in_routineMangledName,
                                const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
  cPtr_procCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_procCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->procCallInstructionForGeneration_init_21_routineMangledName_21_ (in_routineMangledName, in_mActualParameterList, inCompiler) ;
  const GGS_procCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::
procCallInstructionForGeneration_init_21_routineMangledName_21_ (const GGS_lstring & in_routineMangledName,
                                                                 const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                 Compiler * /* inCompiler */) {
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration::GGS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_procCallInstructionForGeneration::readProperty_routineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_routineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_procCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_procCallInstructionForGeneration * p = (cPtr_procCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionForGeneration::cPtr_procCallInstructionForGeneration (const GGS_lstring & in_routineMangledName,
                                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mActualParameterList () {
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_procCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

void cPtr_procCallInstructionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@procCallInstructionForGeneration:") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procCallInstructionForGeneration (mProperty_routineMangledName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_routineMangledName.printNonNullClassInstanceProperties ("routineMangledName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration ("procCallInstructionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionForGeneration GGS_procCallInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_procCallInstructionForGeneration result ;
  const GGS_procCallInstructionForGeneration * p = (const GGS_procCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dropInstructionAST::objectCompare (const GGS_dropInstructionAST & inOperand) const {
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

GGS_dropInstructionAST::GGS_dropInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dropInstructionAST GGS_dropInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstringlist & in_mDropList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_dropInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_dropInstructionAST (inCompiler COMMA_THERE)) ;
  object->dropInstructionAST_init_21__21_ (in_mInstructionLocation, in_mDropList, inCompiler) ;
  const GGS_dropInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::
dropInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                 const GGS_lstringlist & in_mDropList,
                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDropList = in_mDropList ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST::GGS_dropInstructionAST (const cPtr_dropInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dropInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_dropInstructionAST::readProperty_mDropList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_dropInstructionAST * p = (cPtr_dropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionAST) ;
    return p->mProperty_mDropList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dropInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_dropInstructionAST::cPtr_dropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mDropList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dropInstructionAST::cPtr_dropInstructionAST (const GGS_location & in_mInstructionLocation,
                                                  const GGS_lstringlist & in_mDropList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mDropList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDropList = in_mDropList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

void cPtr_dropInstructionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@dropInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDropList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dropInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dropInstructionAST (mProperty_mInstructionLocation, mProperty_mDropList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dropInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDropList.printNonNullClassInstanceProperties ("mDropList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dropInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dropInstructionAST ("dropInstructionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dropInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST GGS_dropInstructionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_dropInstructionAST result ;
  const GGS_dropInstructionAST * p = (const GGS_dropInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstruction::objectCompare (const GGS_repeatInstruction & inOperand) const {
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

GGS_repeatInstruction::GGS_repeatInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                          const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                          const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                          const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_repeatInstruction * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstruction (inCompiler COMMA_THERE)) ;
  object->repeatInstruction_init_21__21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOf_5F_repeated_5F_instructions_5F_branch, in_mRepeatBranchList, in_mEndOf_5F_repeat_5F_instruction, inCompiler) ;
  const GGS_repeatInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::
repeatInstruction_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                            const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                            const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                            const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = in_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mEndOf_5F_repeat_5F_instruction = in_mEndOf_5F_repeat_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction::GGS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_repeatInstruction::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstruction::readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_repeatInstruction::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstruction::readProperty_mEndOf_5F_repeat_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeat_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (),
mProperty_mRepeatBranchList (),
mProperty_mEndOf_5F_repeat_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (const GGS_location & in_mInstructionLocation,
                                                const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (),
mProperty_mRepeatBranchList (),
mProperty_mEndOf_5F_repeat_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = in_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mEndOf_5F_repeat_5F_instruction = in_mEndOf_5F_repeat_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_repeatInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

void cPtr_repeatInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_repeat_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstruction (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch, mProperty_mRepeatBranchList, mProperty_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.printNonNullClassInstanceProperties ("mEndOf_repeated_instructions_branch") ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mEndOf_5F_repeat_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_repeat_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @repeatInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction result ;
  const GGS_repeatInstruction * p = (const GGS_repeatInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAssignmentInstructionAST::objectCompare (const GGS_selfAssignmentInstructionAST & inOperand) const {
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

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mSourceExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfAssignmentInstructionAST_init_21__21_ (in_mInstructionLocation, in_mSourceExpression, inCompiler) ;
  const GGS_selfAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::
selfAssignmentInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_semanticExpressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

void cPtr_selfAssignmentInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@selfAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ("selfAssignmentInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST result ;
  const GGS_selfAssignmentInstructionAST * p = (const GGS_selfAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionAST::objectCompare (const GGS_superInitInstructionAST & inOperand) const {
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

GGS_superInitInstructionAST::GGS_superInitInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_actualOutputArgumentList & in_mActualParameterList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionAST (inCompiler COMMA_THERE)) ;
  object->superInitInstructionAST_init_21__21_ (in_mInstructionLocation, in_mActualParameterList, inCompiler) ;
  const GGS_superInitInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::
superInitInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_actualOutputArgumentList & in_mActualParameterList,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST::GGS_superInitInstructionAST (const cPtr_superInitInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_superInitInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_superInitInstructionAST * p = (cPtr_superInitInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (const GGS_location & in_mInstructionLocation,
                                                            const GGS_actualOutputArgumentList & in_mActualParameterList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_superInitInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

void cPtr_superInitInstructionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@superInitInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superInitInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionAST (mProperty_mInstructionLocation, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superInitInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionAST ("superInitInstructionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superInitInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superInitInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superInitInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_superInitInstructionAST result ;
  const GGS_superInitInstructionAST * p = (const GGS_superInitInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superInitInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseWhenInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseWhenInstruction::objectCompare (const GGS_parseWhenInstruction & inOperand) const {
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

GGS_parseWhenInstruction::GGS_parseWhenInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_semanticExpressionAST & in_mWhenExpression,
                                  const GGS_location & in_mEndOfWhenExpression,
                                  const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                  const GGS_location & in_mEndOfWhenInstructionList,
                                  const GGS_syntaxInstructionList & in_mElseInstructionList,
                                  const GGS_location & in_mEndOfElseInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_parseWhenInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseWhenInstruction (inCompiler COMMA_THERE)) ;
  object->parseWhenInstruction_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mWhenExpression, in_mEndOfWhenExpression, in_mWhenInstructionList, in_mEndOfWhenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, inCompiler) ;
  const GGS_parseWhenInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::
parseWhenInstruction_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_semanticExpressionAST & in_mWhenExpression,
                                                       const GGS_location & in_mEndOfWhenExpression,
                                                       const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                       const GGS_location & in_mEndOfWhenInstructionList,
                                                       const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                       const GGS_location & in_mEndOfElseInstructionList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mWhenExpression = in_mWhenExpression ;
  mProperty_mEndOfWhenExpression = in_mEndOfWhenExpression ;
  mProperty_mWhenInstructionList = in_mWhenInstructionList ;
  mProperty_mEndOfWhenInstructionList = in_mEndOfWhenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction::GGS_parseWhenInstruction (const cPtr_parseWhenInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_parseWhenInstruction::readProperty_mWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseWhenInstruction::readProperty_mWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseWhenInstruction::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseWhenInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mWhenExpression (),
mProperty_mEndOfWhenExpression (),
mProperty_mWhenInstructionList (),
mProperty_mEndOfWhenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mWhenExpression,
                                                      const GGS_location & in_mEndOfWhenExpression,
                                                      const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                      const GGS_location & in_mEndOfWhenInstructionList,
                                                      const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                      const GGS_location & in_mEndOfElseInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mWhenExpression (),
mProperty_mEndOfWhenExpression (),
mProperty_mWhenInstructionList (),
mProperty_mEndOfWhenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mWhenExpression = in_mWhenExpression ;
  mProperty_mEndOfWhenExpression = in_mEndOfWhenExpression ;
  mProperty_mWhenInstructionList = in_mWhenInstructionList ;
  mProperty_mEndOfWhenInstructionList = in_mEndOfWhenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_parseWhenInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

void cPtr_parseWhenInstruction::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@parseWhenInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseWhenInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseWhenInstruction (mProperty_mInstructionLocation, mProperty_mWhenExpression, mProperty_mEndOfWhenExpression, mProperty_mWhenInstructionList, mProperty_mEndOfWhenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseWhenInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mWhenExpression.printNonNullClassInstanceProperties ("mWhenExpression") ;
    mProperty_mEndOfWhenExpression.printNonNullClassInstanceProperties ("mEndOfWhenExpression") ;
    mProperty_mWhenInstructionList.printNonNullClassInstanceProperties ("mWhenInstructionList") ;
    mProperty_mEndOfWhenInstructionList.printNonNullClassInstanceProperties ("mEndOfWhenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElseInstructionList.printNonNullClassInstanceProperties ("mEndOfElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @parseWhenInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseWhenInstruction ("parseWhenInstruction",
                                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_parseWhenInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseWhenInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseWhenInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstruction result ;
  const GGS_parseWhenInstruction * p = (const GGS_parseWhenInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseWhenInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @warningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionAST::objectCompare (const GGS_warningInstructionAST & inOperand) const {
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

GGS_warningInstructionAST::GGS_warningInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticExpressionAST & in_mLocationExpression,
                      const GGS_semanticExpressionAST & in_mMessageExpression,
                      const GGS_fixitListAST & in_mFixitListAST,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_warningInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_warningInstructionAST (inCompiler COMMA_THERE)) ;
  object->warningInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mFixitListAST, inCompiler) ;
  const GGS_warningInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::
warningInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_semanticExpressionAST & in_mLocationExpression,
                                            const GGS_semanticExpressionAST & in_mMessageExpression,
                                            const GGS_fixitListAST & in_mFixitListAST,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST::GGS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_warningInstructionAST::readProperty_mLocationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_warningInstructionAST::readProperty_mMessageExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_warningInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mFixitListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionAST & in_mLocationExpression,
                                                        const GGS_semanticExpressionAST & in_mMessageExpression,
                                                        const GGS_fixitListAST & in_mFixitListAST,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mFixitListAST () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_warningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

void cPtr_warningInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@warningInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_warningInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_warningInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mFixitListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_warningInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocationExpression.printNonNullClassInstanceProperties ("mLocationExpression") ;
    mProperty_mMessageExpression.printNonNullClassInstanceProperties ("mMessageExpression") ;
    mProperty_mFixitListAST.printNonNullClassInstanceProperties ("mFixitListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @warningInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_warningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_warningInstructionAST result ;
  const GGS_warningInstructionAST * p = (const GGS_warningInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @warningInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionForGeneration::objectCompare (const GGS_warningInstructionForGeneration & inOperand) const {
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

GGS_warningInstructionForGeneration::GGS_warningInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                      const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                      const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_warningInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_warningInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->warningInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mReceiverExpression, in_mWarningExpression, in_mFixitListForGeneration, inCompiler) ;
  const GGS_warningInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::
warningInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                      const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                                                      const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mWarningExpression = in_mWarningExpression ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration::GGS_warningInstructionForGeneration (const cPtr_warningInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_warningInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_warningInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_warningInstructionForGeneration::readProperty_mWarningExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mWarningExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_warningInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionForGeneration::cPtr_warningInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mWarningExpression (),
mProperty_mFixitListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionForGeneration::cPtr_warningInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                            const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                                                                            const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mWarningExpression (),
mProperty_mFixitListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mWarningExpression = in_mWarningExpression ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_warningInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

void cPtr_warningInstructionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@warningInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_warningInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_warningInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mWarningExpression, mProperty_mFixitListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_warningInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mWarningExpression.printNonNullClassInstanceProperties ("mWarningExpression") ;
    mProperty_mFixitListForGeneration.printNonNullClassInstanceProperties ("mFixitListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @warningInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration ("warningInstructionForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_warningInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_warningInstructionForGeneration result ;
  const GGS_warningInstructionForGeneration * p = (const GGS_warningInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction::objectCompare (const GGS_selectInstruction & inOperand) const {
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

GGS_selectInstruction::GGS_selectInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                  const GGS_location & in_mEndOf_5F_select_5F_instruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selectInstruction * object = nullptr ;
  macroMyNew (object, cPtr_selectInstruction (inCompiler COMMA_THERE)) ;
  object->selectInstruction_init_21__21__21_ (in_mInstructionLocation, in_mSelectBranchList, in_mEndOf_5F_select_5F_instruction, inCompiler) ;
  const GGS_selectInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::
selectInstruction_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                    const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                    const GGS_location & in_mEndOf_5F_select_5F_instruction,
                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mEndOf_5F_select_5F_instruction = in_mEndOf_5F_select_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction::GGS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_selectInstruction::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_selectInstruction::readProperty_mEndOf_5F_select_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mEndOf_5F_select_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mEndOf_5F_select_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (const GGS_location & in_mInstructionLocation,
                                                const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                const GGS_location & in_mEndOf_5F_select_5F_instruction,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mEndOf_5F_select_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mEndOf_5F_select_5F_instruction = in_mEndOf_5F_select_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

void cPtr_selectInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_select_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstruction (mProperty_mInstructionLocation, mProperty_mSelectBranchList, mProperty_mEndOf_5F_select_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mEndOf_5F_select_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_select_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_selectInstruction result ;
  const GGS_selectInstruction * p = (const GGS_selectInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @logInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionAST::objectCompare (const GGS_logInstructionAST & inOperand) const {
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

GGS_logInstructionAST::GGS_logInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_logListAST & in_mLogList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_logInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_logInstructionAST (inCompiler COMMA_THERE)) ;
  object->logInstructionAST_init_21__21_ (in_mInstructionLocation, in_mLogList, inCompiler) ;
  const GGS_logInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::
logInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                const GGS_logListAST & in_mLogList,
                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST::GGS_logInstructionAST (const cPtr_logInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_logListAST GGS_logInstructionAST::readProperty_mLogList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_logListAST () ;
  }else{
    cPtr_logInstructionAST * p = (cPtr_logInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionAST) ;
    return p->mProperty_mLogList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLogList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_logListAST & in_mLogList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLogList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_logInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

void cPtr_logInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@logInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLogList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logInstructionAST (mProperty_mInstructionLocation, mProperty_mLogList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLogList.printNonNullClassInstanceProperties ("mLogList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @logInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionAST ("logInstructionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionAST GGS_logInstructionAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_logInstructionAST result ;
  const GGS_logInstructionAST * p = (const GGS_logInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @logInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionForGeneration::objectCompare (const GGS_logInstructionForGeneration & inOperand) const {
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

GGS_logInstructionForGeneration::GGS_logInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_logInstructionForGeneration GGS_logInstructionForGeneration::
init_21__21_ (const GGS_lstring & in_mLogMessage,
              const GGS_semanticExpressionForGeneration & in_mLogExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_logInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_logInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->logInstructionForGeneration_init_21__21_ (in_mLogMessage, in_mLogExpression, inCompiler) ;
  const GGS_logInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::
logInstructionForGeneration_init_21__21_ (const GGS_lstring & in_mLogMessage,
                                          const GGS_semanticExpressionForGeneration & in_mLogExpression,
                                          Compiler * /* inCompiler */) {
  mProperty_mLogMessage = in_mLogMessage ;
  mProperty_mLogExpression = in_mLogExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration::GGS_logInstructionForGeneration (const cPtr_logInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_logInstructionForGeneration::readProperty_mLogMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    return p->mProperty_mLogMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_logInstructionForGeneration::readProperty_mLogExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionForGeneration) ;
    return p->mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionForGeneration::cPtr_logInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_logInstructionForGeneration::cPtr_logInstructionForGeneration (const GGS_lstring & in_mLogMessage,
                                                                    const GGS_semanticExpressionForGeneration & in_mLogExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mLogMessage (),
mProperty_mLogExpression () {
  mProperty_mLogMessage = in_mLogMessage ;
  mProperty_mLogExpression = in_mLogExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_logInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

void cPtr_logInstructionForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@logInstructionForGeneration:") ;
  mProperty_mLogMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logInstructionForGeneration (mProperty_mLogMessage, mProperty_mLogExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLogMessage.printNonNullClassInstanceProperties ("mLogMessage") ;
    mProperty_mLogExpression.printNonNullClassInstanceProperties ("mLogExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @logInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionForGeneration ("logInstructionForGeneration",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration GGS_logInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_logInstructionForGeneration result ;
  const GGS_logInstructionForGeneration * p = (const GGS_logInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecInstructionAST::objectCompare (const GGS_incDecInstructionAST & inOperand) const {
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

GGS_incDecInstructionAST::GGS_incDecInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_incDecInstructionAST GGS_incDecInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_bool & in_mPrefixedBySelf,
                          const GGS_lstring & in_mReceiverName,
                          const GGS_lstringlist & in_mStructAttributeList,
                          const GGS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_incDecInstructionAST (inCompiler COMMA_THERE)) ;
  object->incDecInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mPrefixedBySelf, in_mReceiverName, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GGS_incDecInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::
incDecInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_bool & in_mPrefixedBySelf,
                                               const GGS_lstring & in_mReceiverName,
                                               const GGS_lstringlist & in_mStructAttributeList,
                                               const GGS_incDecKind & in_mKind,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST::GGS_incDecInstructionAST (const cPtr_incDecInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_incDecInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_incDecInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_incDecInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionAST::cPtr_incDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_bool & in_mPrefixedBySelf,
                                                      const GGS_lstring & in_mReceiverName,
                                                      const GGS_lstringlist & in_mStructAttributeList,
                                                      const GGS_incDecKind & in_mKind,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_incDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

void cPtr_incDecInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @incDecInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecInstructionAST ("incDecInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_incDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST GGS_incDecInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionAST result ;
  const GGS_incDecInstructionAST * p = (const GGS_incDecInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecNoOVFInstructionAST::objectCompare (const GGS_incDecNoOVFInstructionAST & inOperand) const {
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

GGS_incDecNoOVFInstructionAST::GGS_incDecNoOVFInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST GGS_incDecNoOVFInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_bool & in_mPrefixedBySelf,
                          const GGS_lstring & in_mReceiverName,
                          const GGS_lstringlist & in_mStructAttributeList,
                          const GGS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecNoOVFInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_incDecNoOVFInstructionAST (inCompiler COMMA_THERE)) ;
  object->incDecNoOVFInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mPrefixedBySelf, in_mReceiverName, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GGS_incDecNoOVFInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::
incDecNoOVFInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_bool & in_mPrefixedBySelf,
                                                    const GGS_lstring & in_mReceiverName,
                                                    const GGS_lstringlist & in_mStructAttributeList,
                                                    const GGS_incDecKind & in_mKind,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST::GGS_incDecNoOVFInstructionAST (const cPtr_incDecNoOVFInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_incDecNoOVFInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_incDecNoOVFInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_incDecNoOVFInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionAST::cPtr_incDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionAST::cPtr_incDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                const GGS_bool & in_mPrefixedBySelf,
                                                                const GGS_lstring & in_mReceiverName,
                                                                const GGS_lstringlist & in_mStructAttributeList,
                                                                const GGS_incDecKind & in_mKind,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_incDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

void cPtr_incDecNoOVFInstructionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecNoOVFInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecNoOVFInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @incDecNoOVFInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ("incDecNoOVFInstructionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_incDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST GGS_incDecNoOVFInstructionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionAST result ;
  const GGS_incDecNoOVFInstructionAST * p = (const GGS_incDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecInstructionAST::objectCompare (const GGS_selfIncDecInstructionAST & inOperand) const {
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

GGS_selfIncDecInstructionAST::GGS_selfIncDecInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_selfIncDecInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::
selfIncDecInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                       const GGS_incDecKind & in_mKind,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST::GGS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_selfIncDecInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_incDecKind & in_mKind,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfIncDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

void cPtr_selfIncDecInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecInstructionAST (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfIncDecInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ("selfIncDecInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfIncDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST result ;
  const GGS_selfIncDecInstructionAST * p = (const GGS_selfIncDecInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecNoOVFInstructionAST::objectCompare (const GGS_selfIncDecNoOVFInstructionAST & inOperand) const {
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

GGS_selfIncDecNoOVFInstructionAST::GGS_selfIncDecNoOVFInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecNoOVFInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecNoOVFInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecNoOVFInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_selfIncDecNoOVFInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::
selfIncDecNoOVFInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_incDecKind & in_mKind,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST::GGS_selfIncDecNoOVFInstructionAST (const cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecNoOVFInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_selfIncDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_incDecKind & in_mKind,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfIncDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

void cPtr_selfIncDecNoOVFInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecNoOVFInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecNoOVFInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecNoOVFInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfIncDecNoOVFInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ("selfIncDecNoOVFInstructionAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfIncDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST result ;
  const GGS_selfIncDecNoOVFInstructionAST * p = (const GGS_selfIncDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseRewindInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstruction::objectCompare (const GGS_parseRewindInstruction & inOperand) const {
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

GGS_parseRewindInstruction::GGS_parseRewindInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                  const GGS_location & in_mEndOfParseDoInstruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_parseRewindInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseRewindInstruction (inCompiler COMMA_THERE)) ;
  object->parseRewindInstruction_init_21__21__21_ (in_mInstructionLocation, in_mParseRewindBranchList, in_mEndOfParseDoInstruction, inCompiler) ;
  const GGS_parseRewindInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::
parseRewindInstruction_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                         const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                         const GGS_location & in_mEndOfParseDoInstruction,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mParseRewindBranchList = in_mParseRewindBranchList ;
  mProperty_mEndOfParseDoInstruction = in_mEndOfParseDoInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction::GGS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_parseRewindInstruction::readProperty_mParseRewindBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mParseRewindBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseRewindInstruction::readProperty_mEndOfParseDoInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mEndOfParseDoInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mParseRewindBranchList (),
mProperty_mEndOfParseDoInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (const GGS_location & in_mInstructionLocation,
                                                          const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                          const GGS_location & in_mEndOfParseDoInstruction,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mParseRewindBranchList (),
mProperty_mEndOfParseDoInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mParseRewindBranchList = in_mParseRewindBranchList ;
  mProperty_mEndOfParseDoInstruction = in_mEndOfParseDoInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_parseRewindInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

void cPtr_parseRewindInstruction::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@parseRewindInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParseRewindBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfParseDoInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseRewindInstruction (mProperty_mInstructionLocation, mProperty_mParseRewindBranchList, mProperty_mEndOfParseDoInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseRewindInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mParseRewindBranchList.printNonNullClassInstanceProperties ("mParseRewindBranchList") ;
    mProperty_mEndOfParseDoInstruction.printNonNullClassInstanceProperties ("mEndOfParseDoInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @parseRewindInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_parseRewindInstruction ("parseRewindInstruction",
                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_parseRewindInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstruction result ;
  const GGS_parseRewindInstruction * p = (const GGS_parseRewindInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST::objectCompare (const GGS_ifInstructionAST & inOperand) const {
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

GGS_ifInstructionAST::GGS_ifInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_CommaSeparatedExpressionList & in_mExpressions,
                              const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                              const GGS_location & in_mEndOf_5F_then_5F_branch,
                              const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->ifInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_mEndOf_5F_then_5F_branch, in_m_5F_else_5F_instructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GGS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_CommaSeparatedExpressionList & in_mExpressions,
                                               const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                               const GGS_location & in_mEndOf_5F_then_5F_branch,
                                               const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                               const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_mEndOf_5F_then_5F_branch = in_mEndOf_5F_then_5F_branch ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST::GGS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_ifInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_CommaSeparatedExpressionList () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_ifInstructionAST::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_then_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_then_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_ifInstructionAST::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_mEndOf_5F_then_5F_branch (),
mProperty_m_5F_else_5F_instructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_CommaSeparatedExpressionList & in_mExpressions,
                                              const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                              const GGS_location & in_mEndOf_5F_then_5F_branch,
                                              const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_mEndOf_5F_then_5F_branch (),
mProperty_m_5F_else_5F_instructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_mEndOf_5F_then_5F_branch = in_mEndOf_5F_then_5F_branch ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_then_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_mEndOf_5F_then_5F_branch, mProperty_m_5F_else_5F_instructionList, mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_mEndOf_5F_then_5F_branch.printNonNullClassInstanceProperties ("mEndOf_then_branch") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
    mProperty_mEndOf_5F_if_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_if_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST result ;
  const GGS_ifInstructionAST * p = (const GGS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionForGeneration::objectCompare (const GGS_ifInstructionForGeneration & inOperand) const {
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

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ifTestListForGeneration & in_mExpressions,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                      const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList, inCompiler) ;
  const GGS_ifInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::
ifInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_ifTestListForGeneration & in_mExpressions,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                 const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration::GGS_ifInstructionForGeneration (const cPtr_ifInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_ifInstructionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ifTestListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_ifInstructionForGeneration::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_ifTestListForGeneration & in_mExpressions,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                  const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

void cPtr_ifInstructionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_m_5F_else_5F_instructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ("ifInstructionForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionForGeneration GGS_ifInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifInstructionForGeneration result ;
  const GGS_ifInstructionForGeneration * p = (const GGS_ifInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionAST::objectCompare (const GGS_assignmentInstructionAST & inOperand) const {
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

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetVariableName,
                      const GGS_lstring & in_mOptionalProperty,
                      const GGS_semanticExpressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_assignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->assignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetVariableName, in_mOptionalProperty, in_mSourceExpression, inCompiler) ;
  const GGS_assignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::
assignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetVariableName,
                                               const GGS_lstring & in_mOptionalProperty,
                                               const GGS_semanticExpressionAST & in_mSourceExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_assignmentInstructionAST::readProperty_mTargetVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_assignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mTargetVariableName (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_lstring & in_mTargetVariableName,
                                                              const GGS_lstring & in_mOptionalProperty,
                                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetVariableName (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetVariableName, mProperty_mOptionalProperty, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVariableName.printNonNullClassInstanceProperties ("mTargetVariableName") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_assignmentInstructionAST result ;
  const GGS_assignmentInstructionAST * p = (const GGS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfPropertyAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPropertyAssignmentInstructionAST::objectCompare (const GGS_selfPropertyAssignmentInstructionAST & inOperand) const {
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

GGS_selfPropertyAssignmentInstructionAST::GGS_selfPropertyAssignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST GGS_selfPropertyAssignmentInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetSelfPropertyName,
                      const GGS_lstring & in_mOptionalProperty,
                      const GGS_semanticExpressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selfPropertyAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPropertyAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetSelfPropertyName, in_mOptionalProperty, in_mSourceExpression, inCompiler) ;
  const GGS_selfPropertyAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::
selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                           const GGS_lstring & in_mTargetSelfPropertyName,
                                                           const GGS_lstring & in_mOptionalProperty,
                                                           const GGS_semanticExpressionAST & in_mSourceExpression,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetSelfPropertyName = in_mTargetSelfPropertyName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST::GGS_selfPropertyAssignmentInstructionAST (const cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPropertyAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selfPropertyAssignmentInstructionAST::readProperty_mTargetSelfPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mTargetSelfPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selfPropertyAssignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfPropertyAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPropertyAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPropertyAssignmentInstructionAST::cPtr_selfPropertyAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mTargetSelfPropertyName (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfPropertyAssignmentInstructionAST::cPtr_selfPropertyAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_lstring & in_mTargetSelfPropertyName,
                                                                                      const GGS_lstring & in_mOptionalProperty,
                                                                                      const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetSelfPropertyName (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetSelfPropertyName = in_mTargetSelfPropertyName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfPropertyAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

void cPtr_selfPropertyAssignmentInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@selfPropertyAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPropertyAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPropertyAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetSelfPropertyName, mProperty_mOptionalProperty, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPropertyAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetSelfPropertyName.printNonNullClassInstanceProperties ("mTargetSelfPropertyName") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfPropertyAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ("selfPropertyAssignmentInstructionAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfPropertyAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPropertyAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPropertyAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST GGS_selfPropertyAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfPropertyAssignmentInstructionAST result ;
  const GGS_selfPropertyAssignmentInstructionAST * p = (const GGS_selfPropertyAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPropertyAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPropertyAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST::objectCompare (const GGS_switchInstructionAST & inOperand) const {
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

GGS_switchInstructionAST::GGS_switchInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionAST & in_mSwitchExpression,
                          const GGS_location & in_mEndOfSwitchExpression,
                          const GGS_switchBranchesAST & in_mBranches,
                          const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GGS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_semanticExpressionAST & in_mSwitchExpression,
                                               const GGS_location & in_mEndOfSwitchExpression,
                                               const GGS_switchBranchesAST & in_mBranches,
                                               const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST::GGS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOfSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOfSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchInstructionAST::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchBranchesAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mSwitchExpression,
                                                      const GGS_location & in_mEndOfSwitchExpression,
                                                      const GGS_switchBranchesAST & in_mBranches,
                                                      const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOfSwitchExpression, mProperty_mBranches, mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mEndOfSwitchExpression.printNonNullClassInstanceProperties ("mEndOfSwitchExpression") ;
    mProperty_mBranches.printNonNullClassInstanceProperties ("mBranches") ;
    mProperty_mEndOf_5F_switch_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_switch_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @switchInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  const GGS_switchInstructionAST * p = (const GGS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

