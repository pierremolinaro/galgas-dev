#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 453)) ;
  GALGAS_lstring var_lexiqueComponentName_16679 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 455)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
  GALGAS_templateDelimitorListAST var_templateDelimitorList_16768 = GALGAS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_16831 = GALGAS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList_16893 = GALGAS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList_16948 = GALGAS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList_17006 = GALGAS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_17077 = GALGAS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList_17151 = GALGAS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList_17211 = GALGAS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_indexingListAST var_indexingListAST_17257 = GALGAS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_16768, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_16831, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_16893, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_16948, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_17006, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_17151, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_17211, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_17211, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_17077, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_17257, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 489)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GALGAS_bool (false), var_lexiqueComponentName_16679, GALGAS_bool (false), var_templateDelimitorList_16768, var_templateReplacementList_16831, var_lexicalAttributeList_16893, var_lexicalStyleList_16948, var_terminalDeclarationList_17006, var_lexicalMessageDeclarationList_17077, var_lexicalListDeclarationList_17151, var_lexicalRuleList_17211, var_indexingListAST_17257, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 453)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 455)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 489)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas", 453)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 455)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 456)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 489)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 509)) ;
  GALGAS_lstring var_indexName_18619 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  GALGAS_lstring var_indexComment_18698 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  ioArgument_ioIndexingListAST.addAssign_operation (var_indexName_18619, var_indexComment_18698  COMMA_SOURCE_FILE ("lexique-component.galgas", 513)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 509)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas", 509)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 510)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 512)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 520)) ;
  GALGAS_lstring var_messageName_19028 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  GALGAS_lstring var_messageValue_19077 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName_19028, var_messageValue_19077  COMMA_SOURCE_FILE ("lexique-component.galgas", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 520)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 520)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 523)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 530)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  GALGAS_lstring var_listName_19395 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::init_21_ (var_listName_19395, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 530)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 530)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 532)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 539)) ;
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression_19723 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_19723, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 541)) ;
  GALGAS_lexicalInstructionListAST var_instructionList_19788 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_19788, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 547)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_19723, var_instructionList_19788, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 539)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 541)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 547)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas", 539)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 541)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 547)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 554)) ;
  GALGAS_lexicalInstructionAST var_instruction_20245 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_20245, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction_20245  COMMA_SOURCE_FILE ("lexique-component.galgas", 556)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 554)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas", 554)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 562)) ;
  GALGAS_lexicalExpressionAST var_whileExpression_20549 ;
  nt_lexical_5F_expression_ (var_whileExpression_20549, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 564)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList_20608 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_20608, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression_20549, var_whileInstructionList_20608  COMMA_SOURCE_FILE ("lexique-component.galgas", 570)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 562)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 564)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas", 562)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 564)) ;
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

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_21030 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 576)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::init_21_ (var_character_21030, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 576)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 576)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lbigint var_unsignedValue_21356 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 583)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_21356, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 583)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas", 583)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation_21675 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 590)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 591)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_21675, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 591)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 591)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf_22045 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 598)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GALGAS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_22045, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 602)) ;
    GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_22199 = GALGAS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 606)) ;
        GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_22365 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_22365, inCompiler) ;
        var_functionActualArgumentList_22199.addAssign_operation (var_arg_22365  COMMA_SOURCE_FILE ("lexique-component.galgas", 608)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 610)) ;
    outArgument_outEffectiveArgument = GALGAS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_22045, var_functionActualArgumentList_22199, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 598)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 602)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 606)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 610)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 598)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas", 602)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 606)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas", 610)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
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

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 627)) ;
      GALGAS_lexicalExpressionAST var_rightExpression_23004 ;
      nt_lexical_5F_factor_ (var_rightExpression_23004, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_23004, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 627)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 627)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_string_23295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 636)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::init_21_ (var_string_23295, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 636)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 636)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 643)) ;
  GALGAS_lstring var_string_23551 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  GALGAS_lstring var_errorMessage_23592 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::init_21__21_ (var_string_23551, var_errorMessage_23592, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 643)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 643)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 646)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_23868 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 653)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::init_21_ (var_character_23868, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 657)) ;
    GALGAS_lchar var_upperBound_23995 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_23868, var_upperBound_23995, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 653)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 657)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 653)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 657)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas", 658)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet_24294 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 666)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_24294, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 666)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 666)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 673)) ;
  GALGAS_lstring var_name_24608 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_24650 = GALGAS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_24718 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 678)) ;
      GALGAS_lstring var_sentAttribute_24751 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
      var_sentAttributeList_24650.addAssign_operation (var_selector_24718, var_sentAttribute_24751  COMMA_SOURCE_FILE ("lexique-component.galgas", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 682)) ;
      GALGAS_lstring var_selector_24847 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 683)) ;
      GALGAS_lstring var_sentAttribute_24892 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 684)) ;
      var_sentAttributeList_24650.addAssign_operation (var_selector_24847, var_sentAttribute_24892  COMMA_SOURCE_FILE ("lexique-component.galgas", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle_24983 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 689)) ;
    var_theStyle_24983 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
  } break ;
  case 2: {
    var_theStyle_24983 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 692)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 694)) ;
  GALGAS_lstring var_errorMessage_25186 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  GALGAS_lexicalListEntryListAST var_entryList_25215 = GALGAS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_25215, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 701)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 703)) ;
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name_24608, var_theStyle_24983, var_errorMessage_25186, var_sentAttributeList_24650, var_entryList_25215  COMMA_SOURCE_FILE ("lexique-component.galgas", 704)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 673)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 678)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 682)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 684)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 689)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 694)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 701)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 703)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas", 673)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 674)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 678)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 679)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 682)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 684)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 689)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 690)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 694)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas", 696)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas", 701)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas", 703)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_entrySpelling_25651 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 710)) ;
  GALGAS_bool var_isTemplateEndMark_25673 = GALGAS_bool (false) ;
  GALGAS_bool var_nonAtomicSelection_25707 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 715)) ;
      var_isTemplateEndMark_25673 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 718)) ;
      var_nonAtomicSelection_25707 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_terminalSpelling_25906 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 723)) ;
    var_terminalSpelling_25906 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
  } break ;
  case 2: {
    var_terminalSpelling_25906 = var_entrySpelling_25651 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling_25651, var_terminalSpelling_25906, var_nonAtomicSelection_25707, var_isTemplateEndMark_25673  COMMA_SOURCE_FILE ("lexique-component.galgas", 728)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 710)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 715)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 718)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 723)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 710)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 715)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 718)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 723)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 724)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GALGAS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_typeName_26428 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 738)) ;
  GALGAS_lstring var_name_26468 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName_26428, var_name_26468  COMMA_SOURCE_FILE ("lexique-component.galgas", 740)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 738)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas", 738)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 739)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_name_26745 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 746)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_26787 = GALGAS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_26884 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 750)) ;
      GALGAS_lstring var_sentAttribute_26917 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
      var_sentAttributeList_26787.addAssign_operation (var_selector_26884, var_sentAttribute_26917  COMMA_SOURCE_FILE ("lexique-component.galgas", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 754)) ;
      GALGAS_lstring var_selector_27013 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 755)) ;
      GALGAS_lstring var_sentAttribute_27058 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
      var_sentAttributeList_26787.addAssign_operation (var_selector_27013, var_sentAttribute_27058  COMMA_SOURCE_FILE ("lexique-component.galgas", 757)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle_27149 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas", 759)) ;
  GALGAS_bool var_nonAtomicSelection_27207 = GALGAS_bool (false) ;
  GALGAS_bool var_templateEndMark_27242 = GALGAS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 764)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_theStyle_27149.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 766)), GALGAS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 766)) ;
        }
      }
      var_theStyle_27149 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 768)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 770)) ;
      var_nonAtomicSelection_27207 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 773)) ;
      var_templateEndMark_27242 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 776)) ;
  GALGAS_lstring var_errorMessage_27628 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name_26745, var_sentAttributeList_26787, var_errorMessage_27628, var_theStyle_27149, var_nonAtomicSelection_27207, var_templateEndMark_27242  COMMA_SOURCE_FILE ("lexique-component.galgas", 778)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 746)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 750)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 754)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 764)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 768)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 770)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 773)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 776)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas", 746)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas", 750)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 751)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas", 754)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 756)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 764)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 768)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas", 770)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas", 773)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas", 776)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 777)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 790)) ;
  GALGAS_lstring var_styleIdentifier_28056 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_styleIdentifier_28056.readProperty_string ().getter_containsCharacter (GALGAS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("lexique-component.galgas", 792)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28056.readProperty_location (), GALGAS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas", 793)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_styleIdentifier_28056.readProperty_string ().getter_containsCharacterInRange (GALGAS_char (TO_UNICODE (48)), GALGAS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("lexique-component.galgas", 795)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28056.readProperty_location (), GALGAS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas", 796)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 798)) ;
  GALGAS_lstring var_comment_28492 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_styleIdentifier_28056, var_comment_28492  COMMA_SOURCE_FILE ("lexique-component.galgas", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 790)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 798)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas", 790)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas", 798)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas", 799)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  GALGAS_lstring var_lexiqueComponentName_4888 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  GALGAS_lstring var_lexiqueSuperComponentName_4948 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 139)) ;
  GALGAS_templateDelimitorListAST var_templateDelimitorList_5042 = GALGAS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_5105 = GALGAS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_5042, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_5105, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 148)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GALGAS_bool (false), var_lexiqueComponentName_4888, var_lexiqueSuperComponentName_4948, var_templateDelimitorList_5042, var_templateReplacementList_5105, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 148)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 148)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_ (GALGAS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 161)) ;
  GALGAS_lstring var_startString_5765 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  GALGAS_bool var_nonAtomicSelection_5785 = GALGAS_bool (false) ;
  GALGAS_bool var_templateEndMark_5820 = GALGAS_bool (false) ;
  GALGAS_bool var_preserved_5852 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 168)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_nonAtomicSelection_5785.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 170)), GALGAS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 170)) ;
        }
      }
      var_nonAtomicSelection_5785 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 174)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_templateEndMark_5820.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 176)), GALGAS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 176)) ;
        }
      }
      var_templateEndMark_5820 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 180)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_preserved_5852.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 182)), GALGAS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 182)) ;
        }
      }
      var_preserved_5852 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 186)) ;
  GALGAS_lstring var_endString_6414 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString_5765, var_nonAtomicSelection_5785, var_templateEndMark_5820, var_preserved_5852, var_endString_6414  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 161)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 168)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 174)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 186)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas", 161)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 162)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas", 168)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas", 174)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas", 180)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 186)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 187)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 199)) ;
  GALGAS_lstring var_matchString_6822 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  GALGAS_lstring var_replacementString_6851 ;
  GALGAS_lstring var_replacementFunction_6886 ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 204)) ;
    var_replacementString_6851 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    var_replacementFunction_6886 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 209)) ;
    var_replacementString_6851 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
    var_replacementFunction_6886 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 211)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString_6822, var_replacementString_6851, var_replacementFunction_6886  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 213)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 199)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 204)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 209)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas", 199)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 200)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 204)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas", 207)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 209)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList_3201 = GALGAS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_3292 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 76)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    GALGAS_lstring var_searchListName_3350 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    var_lexicalSendSearchList_3201.addAssign_operation (var_attributeName_3292, var_searchListName_3350  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 80)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 82)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_3520 ;
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal_3591 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 86)) ;
    var_lexicalSendDefaultAction_3520 = GALGAS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_3591, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 89)) ;
    GALGAS_lstring var_defaultErrorMessageName_3754 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
    var_lexicalSendDefaultAction_3520 = GALGAS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_3754, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_3201, var_lexicalSendDefaultAction_3520, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 76)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 80)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 82)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 86)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 89)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 76)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 80)) ;
    if (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 82)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 86)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 89)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 51)) ;
  GALGAS_lstring var_terminalName_2402 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::init_21_ (var_terminalName_2402, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 51)) ;
  GALGAS_lstring var_errorMessageName_2414 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_2414, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 49)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 68)) ;
  GALGAS_location var_location_2890 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 69)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList_2951 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2951, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList_3098 = GALGAS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_3098, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 80)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2951, var_lexicalWhileBranchList_3098, var_location_2890, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_parse (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 54)) ;
  GALGAS_lstring var_tagName_2497 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  GALGAS_lstring var_terminalName_2540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_2497, var_terminalName_2540, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_actionName_4387 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 106)) ;
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_4447 = GALGAS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 108)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 111)) ;
      GALGAS_location var_passingModeLocation_4520 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 112)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_4652 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_4652, inCompiler) ;
      var_actualArgumentList_4447.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_4520, var_arg_4652, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 114)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 116)) ;
      GALGAS_location var_passingModeLocation_4775 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 117)) ;
      GALGAS_lstring var_attributeName_4845 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 118)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg_4869 = GALGAS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_4775, var_attributeName_4845, inCompiler COMMA_HERE) ;
      var_actualArgumentList_4447.addAssign_operation (var_arg_4869  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 120)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList_5015 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 125)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_errorMessageName_5117 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 127)) ;
      var_errorMessageList_5015.addAssign_operation (var_errorMessageName_5117  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 128)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 130)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 133)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_4387, var_actualArgumentList_4447, var_errorMessageList_5015, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 108)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 111)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 116)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 118)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 125)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 127)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 130)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 133)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 108)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 111)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 116)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 118)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 125)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 127)) ;
      if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 130)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 74)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList_3114 = GALGAS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 77)) ;
    GALGAS_lexicalExpressionAST var_selectExpression_3220 ;
    nt_lexical_5F_expression_ (var_selectExpression_3220, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 79)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList_3284 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_3284, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_3114.addAssign_operation (var_selectExpression_3220, var_selectInstructionList_3284  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 85)) ;
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 88)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList_3540 = GALGAS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_3540, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 94)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_3114, var_defaultInstructionList_3540, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 77)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 79)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
        nt_lexical_5F_instruction_parse (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 88)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 94)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 77)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 79)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 88)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal_2399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 50)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_2399, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 51)) ;
  GALGAS_lstring var_tagName_2386 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::init_21_ (var_tagName_2386, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 51)) ;
  GALGAS_lstring var_warningMessageName_2428 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_2428, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 52)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  GALGAS_lstring var_optionComponentName_4565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 120)) ;
  GALGAS_commandLineOptionListAST var_options_4627 = GALGAS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_4627, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GALGAS_bool (false), var_optionComponentName_4565, var_options_4627, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 127)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 120)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 120)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GALGAS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_mOptionTypeName_5085 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 137)) ;
  GALGAS_lstring var_mOptionInternalName_5132 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 139)) ;
  GALGAS_lchar var_mOptionInvocationLetter_5185 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 141)) ;
  GALGAS_lstring var_mOptionInvocationString_5246 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 143)) ;
  GALGAS_lstring var_mOptionComment_5308 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 144)) ;
  GALGAS_lstring var_defaultValue_5331 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)), inCompiler COMMA_HERE) ;
  GALGAS_optionDefaultValueEnumAST var_optionDefaultValueKind_5412 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_5412 = GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 148)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 150)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_5331 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 152)) ;
      var_optionDefaultValueKind_5412 = GALGAS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 153)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_v_5705 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 155)) ;
      var_defaultValue_5331 = GALGAS_lstring::init_21__21_ (var_v_5705.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas", 156)), var_v_5705.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_5412 = GALGAS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 157)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssign_operation (var_mOptionTypeName_5085, var_mOptionInternalName_5132, var_mOptionInvocationLetter_5185, var_mOptionInvocationString_5246, var_mOptionComment_5308, var_defaultValue_5331, var_optionDefaultValueKind_5412  COMMA_SOURCE_FILE ("optionCompilation.galgas", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 139)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 144)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 150)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 152)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 155)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 139)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 142)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 143)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 144)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas", 150)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas", 152)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas", 155)) ;
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

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 256)) ;
  GALGAS_lstring var_mGUIName_8653 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  GALGAS_lstringlist var_importedOptionList_8691 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_guiSimpleAttributeListAST var_simpleGlobalAttributes_8750 = GALGAS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_withLexiqueListAST var_withLexiqueList_8806 = GALGAS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_projectIndexingDescriptorList var_projectExtensionList_8866 = GALGAS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 265)) ;
      GALGAS_lstring var_fileExtension_8951 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      GALGAS_lstring var_indexingPathSuffix_9015 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
      var_projectExtensionList_8866.addAssign_operation (var_fileExtension_8951, var_indexingPathSuffix_9015  COMMA_SOURCE_FILE ("guiCompilation.galgas", 270)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_8750, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_8691, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_8806, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 279)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssign_operation (var_mGUIName_8653, var_importedOptionList_8691, var_simpleGlobalAttributes_8750, var_withLexiqueList_8806, var_projectExtensionList_8866  COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 256)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 265)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 279)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas", 256)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas", 265)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 279)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GALGAS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  GALGAS_lstring var_lexiqueReference_9716 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  GALGAS_guiLabelListAST var_labels_9758 = GALGAS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_guiSimpleAttributeListAST var_simpleAttributes_9805 = GALGAS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_guiCompoundAttributeListAST var_compoundAttributes_9864 = GALGAS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 297)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 300)) ;
      GALGAS_uint var_displayStyle_9947 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_9947 = GALGAS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
        var_displayStyle_9947 = GALGAS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_terminalLabelListAST var_terminalList_10086 = GALGAS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_terminal_10155 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)) ;
        GALGAS_uint var_displayFlags_10182 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_10182 = GALGAS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 315)) ;
          var_displayFlags_10182 = GALGAS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 318)) ;
          GALGAS_lbigint var_leadingStrip_10373 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_10373.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 320)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_10373.readProperty_location (), GALGAS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
          GALGAS_lbigint var_endingStrip_10548 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_10548.readProperty_bigint ().objectCompare (GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 325)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_10548.readProperty_location (), GALGAS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 326)) ;
            }
          }
          var_displayFlags_10182 = var_leadingStrip_10373.readProperty_bigint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)).operator_or (var_endingStrip_10548.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 328)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_10086.addAssign_operation (var_terminal_10155, var_displayFlags_10182  COMMA_SOURCE_FILE ("guiCompilation.galgas", 331)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_9758.addAssign_operation (var_displayStyle_9947, var_terminalList_10086, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 335))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 335)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_key_10951 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
      GALGAS_lstring var_name_10986 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      GALGAS_lstring var_value_11011 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GALGAS_lstring var_v_11096 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
        var_value_11011 = GALGAS_lstring::init_21__21_ (var_value_11011.readProperty_string ().add_operation (var_v_11096.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 343)), var_v_11096.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_9864.addAssign_operation (var_key_10951, var_name_10986, var_value_11011  COMMA_SOURCE_FILE ("guiCompilation.galgas", 346)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_name_11273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 348)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      GALGAS_lstring var_value_11319 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      var_simpleAttributes_9805.addAssign_operation (var_name_11273, var_value_11319  COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
  ioArgument_ioWithLexiqueList.addAssign_operation (var_lexiqueReference_9716, var_labels_9758, var_simpleAttributes_9805, var_compoundAttributes_9864  COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 297)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 300)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 315)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 318)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 348)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 291)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 297)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas", 300)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 315)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 318)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 323)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 329)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 333)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 339)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 348)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 353)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GALGAS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  GALGAS_lstring var_optionReference_11705 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  ioArgument_ioImportedOptionList.addAssign_operation (var_optionReference_11705  COMMA_SOURCE_FILE ("guiCompilation.galgas", 363)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas", 360)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GALGAS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lstring var_mKey_11982 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  GALGAS_lstring var_mValue_12003 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_value_12076 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 373)) ;
    var_mValue_12003 = GALGAS_lstring::init_21__21_ (var_mValue_12003.readProperty_string ().add_operation (var_value_12076.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 374)), var_value_12076.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssign_operation (var_mKey_11982, var_mValue_12003  COMMA_SOURCE_FILE ("guiCompilation.galgas", 377)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 373)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 370)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas", 373)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 242)) ;
  GALGAS_lstring var_syntaxComponentName_10068 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 243)) ;
  GALGAS_lstring var_importedLexiqueReference_10129 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_10129 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 247)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
    var_importedLexiqueReference_10129 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 250)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasTranslateFeature_10332 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10332 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 258)) ;
    var_hasTranslateFeature_10332 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 261)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_10508 = GALGAS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxRuleListAST var_ruleList_10579 = GALGAS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_10508, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_10579, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 272)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssign_operation (var_syntaxComponentName_10068, var_importedLexiqueReference_10129, var_nonterminalDeclarationList_10508, var_ruleList_10579, var_hasTranslateFeature_10332  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 273)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 242)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 243)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 250)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 258)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 261)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 272)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 242)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 243)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 249)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 250)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 251)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 258)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 261)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 272)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 286)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 287)) ;
  GALGAS_lstring var_syntaxComponentName_11357 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 288)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 289)) ;
  GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11421 = GALGAS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxRuleListAST var_ruleList_11492 = GALGAS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_11421, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_11492, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 300)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxExtensions.addAssign_operation (var_syntaxComponentName_11357.readProperty_string (), var_syntaxComponentName_11357, var_nonterminalDeclarationList_11421, var_ruleList_11492  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 301)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 286)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 288)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 289)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 300)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 286)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 288)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 289)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 300)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GALGAS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 314)) ;
  GALGAS_lstring var_mNonterminalName_12349 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 315)) ;
  GALGAS_nonTerminalLabelListAST var_labels_12423 = GALGAS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListAST var_firstBranchFormalParameters_12509 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_12509, inCompiler) ;
  var_labels_12423.addAssign_operation (GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 318)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_12509, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 318))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 318)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 321)) ;
      GALGAS_lstring var_labelName_12675 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 322)) ;
      GALGAS_formalParameterListAST var_formalParameters_12761 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_12761, inCompiler) ;
      var_labels_12423.addAssign_operation (var_labelName_12675, var_formalParameters_12761, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 324))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 324)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssign_operation (var_mNonterminalName_12349, var_labels_12423  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 326)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 314)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 315)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 321)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 322)) ;
      nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 314)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 315)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 321)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 322)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                GALGAS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_formalParameterListAST var_mFormalParameters_13370 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_13370, inCompiler) ;
  GALGAS_location var_endOfArguments_13396 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 336)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 337)) ;
  GALGAS_syntaxInstructionList var_mSyntaxInstructionList_13511 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_13511, inCompiler) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_mFormalParameters_13370, var_endOfArguments_13396, var_mSyntaxInstructionList_13511, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 344))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 339)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 345)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 337)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 345)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 337)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 345)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GALGAS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 352)) ;
  GALGAS_lstring var_mNonterminalName_13969 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 353)) ;
  GALGAS_lstring var_labelName_14018 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 354)), inCompiler COMMA_HERE) ;
  GALGAS_syntaxRuleLabelListAST var_mLabelList_14069 = GALGAS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_14018, var_mLabelList_14069, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 359)) ;
      var_labelName_14018 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 360)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssign_operation (var_mNonterminalName_13969, var_mLabelList_14069  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 362)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 352)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 353)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 359)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 360)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 352)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 353)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 359)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 360)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GALGAS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GALGAS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GALGAS_semanticInstructionAST var_instruction_14882 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_14882, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_14882  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 379)) ;
      } break ;
      case 2: {
        GALGAS_syntaxInstructionAST var_instruction_15009 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15009, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssign_operation (var_instruction_15009  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 382)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 386)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_15150 = GALGAS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 388)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_15150.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 389)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 389)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 390)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 390)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 386)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas", 386)) ;
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mLabelName_3049 ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_mLabelName_3049 = GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 69)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 71)) ;
    var_mLabelName_3049 = GALGAS_lstring::init_21__21_ (GALGAS_string ("parse"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 72)), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 74)) ;
    var_mLabelName_3049 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 75)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mNonterminalName_3319 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 77)) ;
  GALGAS_actualParameterListAST var_mActualParameterList_3452 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_mActualParameterList_3452, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_3593 ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_3593 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 84)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_3593, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_nonterminalCallInstruction::init_21__21__21__21__21_ (var_mNonterminalName_3319.readProperty_location (), var_mNonterminalName_3319, var_mLabelName_3049, var_mActualParameterList_3452, var_grammarInstructionSyntaxDirectedTranslationResult_3593, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  GALGAS_location var_mRepeatInstructionLocation_3333 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 74)) ;
  GALGAS_syntaxInstructionList var_mRepeatedInstructionList_3451 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_3451, inCompiler) ;
  GALGAS_location var_endOf_5F_repeated_5F_instructions_3484 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 76)) ;
  GALGAS_listOfSyntaxInstructionList var_mRepeatBranchList_3537 = GALGAS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    GALGAS_syntaxInstructionList var_mInstructionList_3691 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_3691, inCompiler) ;
    var_mRepeatBranchList_3537.addAssign_operation (var_mInstructionList_3691, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 81))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 81)) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
  GALGAS_location var_endOf_5F_repeat_5F_instruction_3806 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 85)) ;
  outArgument_outInstruction = GALGAS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_3333, var_mRepeatedInstructionList_3451, var_endOf_5F_repeated_5F_instructions_3484, var_mRepeatBranchList_3537, var_endOf_5F_repeat_5F_instruction_3806, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas", 73)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
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
    if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  GALGAS_location var_mSelectInstructionLocation_3106 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 70)) ;
  GALGAS_listOfSyntaxInstructionList var_mSelectBranchList_3158 = GALGAS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxInstructionList var_il_3285 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3285, inCompiler) ;
  var_mSelectBranchList_3158.addAssign_operation (var_il_3285, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 73))  COMMA_SOURCE_FILE ("instruction-select.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    GALGAS_syntaxInstructionList var_instructionList_3432 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3432, inCompiler) ;
    var_mSelectBranchList_3158.addAssign_operation (var_instructionList_3432, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 77))  COMMA_SOURCE_FILE ("instruction-select.galgas", 77)) ;
    if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
  GALGAS_location var_endOf_5F_select_5F_instruction_3544 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 81)) ;
  outArgument_outInstruction = GALGAS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_3106, var_mSelectBranchList_3158, var_endOf_5F_select_5F_instruction_3544, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas", 69)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas", 75)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
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
    if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_terminalName_3934 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 84)) ;
  GALGAS_actualInputParameterListAST var_actualInputParameterList_4030 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_4030, inCompiler) ;
  GALGAS__32_lstringlist var_indexNameList_4096 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_4096, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4230 ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4360 ;
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4230 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4360 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 94)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4230, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4360, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_3934.readProperty_location (), var_terminalName_3934, var_actualInputParameterList_4030, var_indexNameList_4096, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4230, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4360, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 84)) ;
  nt_actual_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_parse (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GALGAS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GALGAS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_indexName_5547 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
      GALGAS_lstring var_postfixName_5609 ;
      switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
        var_postfixName_5609 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas", 120)) ;
      } break ;
      case 2: {
        var_postfixName_5609 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssign_operation (var_indexName_5547, var_postfixName_5609  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 124)) ;
      if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
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
  switch (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_17 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas", 122)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 76)) ;
  GALGAS_location var_instructionLocation_3393 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 77)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 78)) ;
  GALGAS_semanticExpressionAST var_variantExpression_3503 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_3503, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_3529 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 81)) ;
  GALGAS_semanticExpressionAST var_whileExpression_3643 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whileExpression_3643, inCompiler) ;
  GALGAS_location var_endOfWhileExpression_3667 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 84)) ;
  GALGAS_syntaxInstructionList var_instructionList_3789 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3789, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 86)) ;
  GALGAS_location var_endOfInstructionList_3823 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 87)) ;
  outArgument_outInstruction = GALGAS_parseLoopInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_3393, var_variantExpression_3503, var_endOfVariantExpression_3529, var_whileExpression_3643, var_endOfWhileExpression_3667, var_instructionList_3789, var_endOfInstructionList_3823, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 70)) ;
  GALGAS_location var_instructionLocation_3105 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  GALGAS_listOfSyntaxInstructionList var_mParseDoBranchList_3159 = GALGAS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GALGAS_syntaxInstructionList var_il_3287 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3287, inCompiler) ;
  var_mParseDoBranchList_3159.addAssign_operation (var_il_3287, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 75))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 77)) ;
    GALGAS_syntaxInstructionList var_instructionList_3439 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3439, inCompiler) ;
    var_mParseDoBranchList_3159.addAssign_operation (var_instructionList_3439, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 79))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 79)) ;
    if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 82)) ;
  GALGAS_location var_endOfInstruction_3552 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 83)) ;
  outArgument_outInstruction = GALGAS_parseRewindInstruction::init_21__21__21_ (var_instructionLocation_3105, var_mParseDoBranchList_3159, var_endOfInstruction_3552, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 77)) ;
    nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 82)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 72)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 77)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_18 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, outArgument_outElseInstructionList, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 110)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_syntaxInstructionList & outArgument_outElseInstructionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outElseInstructionList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  GALGAS_location var_instructionLocation_5155 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 119)) ;
  GALGAS_semanticExpressionAST var_whenExpression_5231 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whenExpression_5231, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_5254 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_5351 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_whenInstructionList_5351, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_5379 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 124)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_5493 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_5493, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_5521 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 127)) ;
  outArgument_outElseInstructionList = GALGAS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  outArgument_outElseInstructionList.addAssign_operation (GALGAS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_5155, var_whenExpression_5231, var_endOfWhenExpression_5254, var_whenInstructionList_5351, var_endOfWhenInstructions_5379, var_elseInstructionList_5493, var_endOfElseInstructions_5521, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  nt_syntax_5F_instruction_5F_list_parse (inCompiler) ;
  nt_branchOfParseWhithInstruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_branchOfParseWhithInstruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 118)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 122)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  GALGAS_location var_instructionLocation_6101 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 145)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  GALGAS_semanticExpressionAST var_whenExpression_6211 ;
  nt_expression_ (ioArgument_ioDeclarations, var_whenExpression_6211, inCompiler) ;
  GALGAS_location var_endOfWhenExpression_6234 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  GALGAS_syntaxInstructionList var_whenInstructionList_6354 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_whenInstructionList_6354, inCompiler) ;
  GALGAS_location var_endOfWhenInstructions_6382 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 151)) ;
  GALGAS_syntaxInstructionList var_elseInstructionList_6519 ;
  nt_branchOfParseWhithInstruction_ (ioArgument_ioDeclarations, var_elseInstructionList_6519, inCompiler) ;
  GALGAS_location var_endOfElseInstructions_6547 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 154)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
  outArgument_outInstruction = GALGAS_parseWhenInstruction::init_21__21__21__21__21__21__21_ (var_instructionLocation_6101, var_whenExpression_6211, var_endOfWhenExpression_6234, var_whenInstructionList_6354, var_endOfWhenInstructions_6382, var_elseInstructionList_6519, var_endOfElseInstructions_6547, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_parse (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_parse COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 144)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 146)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 149)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  nt_branchOfParseWhithInstruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 155)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GALGAS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  GALGAS_location var_instructionLocation_2215 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 48)) ;
  GALGAS_semanticExpressionAST var_sentExpression_2314 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sentExpression_2314, inCompiler) ;
  outArgument_outInstruction = GALGAS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_2215, var_sentExpression_2314, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 47)) ;
  nt_expression_indexing (inCompiler) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_lbool var_hasIndexing_8230 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_8230 = GALGAS_lbool::init_21__21_ (GALGAS_bool (false), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 234)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_8230 = GALGAS_lbool::init_21__21_ (GALGAS_bool (true), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 236)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 237)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 239)) ;
  GALGAS_lstring var_mGrammarName_8433 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)) ;
  GALGAS_lstring var_mGrammarClass_8511 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  GALGAS_bool var_hasTranslateFeature_8564 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_8564 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 247)) ;
    var_hasTranslateFeature_8564 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 250)) ;
  GALGAS_lstringlist var_syntaxComponents_8740 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
    GALGAS_lstring var_syntaxComponent_8821 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 255)) ;
    var_syntaxComponents_8740.addAssign_operation (var_syntaxComponent_8821  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 256)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_startSymbol_8952 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 260)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_8995 = GALGAS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GALGAS_lstring::init_21__21_ (GALGAS_string::makeEmptyString (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 262)), inCompiler COMMA_HERE), var_mLabelList_8995, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 265)) ;
      GALGAS_lstring var_labelName_9199 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_9199, var_mLabelList_8995, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_9337 = GALGAS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 273)) ;
      GALGAS_lstring var_nonterminalSymbolName_9451 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 274)) ;
      var_mUnusedNonterminalList_9337.addAssign_operation (var_nonterminalSymbolName_9451  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 275)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GALGAS_bool (false), var_hasIndexing_8230, var_mGrammarName_8433, var_mGrammarClass_8511, var_syntaxComponents_8740, var_startSymbol_8952, var_mLabelList_8995, var_mUnusedNonterminalList_9337, var_hasTranslateFeature_8564, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 279)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 237)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 239)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 247)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 250)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 255)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 260)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 265)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 273)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 274)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 237)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 239)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 240)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 241)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 247)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 250)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 254)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 255)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 260)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 265)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 273)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 274)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GALGAS_stringset var_argumentNameSet_10186 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListAST var_formalParameterList_10239 = GALGAS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 298)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_argumentName_10358 ;
      nt_label_5F_formal_5F_parameter_ (ioArgument_ioDeclarations, var_argumentName_10358, var_formalParameterList_10239, inCompiler) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_argumentNameSet_10186.getter_hasKey (var_argumentName_10358.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 303)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_10358.readProperty_location (), GALGAS_string ("there is already an argument named '").add_operation (var_argumentName_10358.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 304)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 304)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 304)) ;
        }
      }
      var_argumentNameSet_10186.addAssign_operation (var_argumentName_10358.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 306)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 311)) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_formalParameterList_10239, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 312)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 298)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 311)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 298)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 308)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 311)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_11069 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 320)) ;
  GALGAS_lstring var_mTypeName_11131 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11131, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 326)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_11069, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 329)), var_mTypeName_11131, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 327)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 320)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 326)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 320)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 324)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 326)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 340)) ;
  GALGAS_lstring var_selector_11726 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 341)) ;
  GALGAS_lstring var_mTypeName_11800 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11800, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 347)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_11726, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 350)), var_mTypeName_11800, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 348)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 340)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 347)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 340)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 345)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 347)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_12401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 362)) ;
  GALGAS_lstring var_mTypeName_12473 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_12473, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 368)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_12401, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 371)), var_mTypeName_12473, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 369)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 362)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 368)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 362)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 366)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 368)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 382)) ;
  GALGAS_lstring var_selector_13076 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 383)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 384)) ;
  GALGAS_lstring var_mTypeName_13160 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13160, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 390)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_13076, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 393)), var_mTypeName_13160, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 391)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 382)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 384)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 390)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 382)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 384)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 388)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 390)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_13770 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 404)) ;
  GALGAS_lstring var_mTypeName_13832 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13832, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 408)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 410)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_13770, GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 413)), var_mTypeName_13832, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 411)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 404)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 408)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 410)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 404)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 408)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 410)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 424)) ;
  GALGAS_lstring var_selector_14431 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 425)) ;
  GALGAS_lstring var_mTypeName_14505 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_14505, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 431)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_14431, GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 434)), var_mTypeName_14505, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 432)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 424)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 431)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 424)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 429)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 431)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_15109 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 445)) ;
  GALGAS_lstring var_mTypeName_15171 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15171, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 447)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_15109, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 450)), var_mTypeName_15171, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 448)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 445)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 447)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 445)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 447)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 461)) ;
  GALGAS_lstring var_selector_15727 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 462)) ;
  GALGAS_lstring var_mTypeName_15801 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15801, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 464)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_15727, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 467)), var_mTypeName_15801, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 465)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_parse (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 461)) ;
  nt_type_5F_definition_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 464)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 461)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 464)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 135)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_5290 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5290, inCompiler) ;
  GALGAS_location var_endOfPrologue_5322 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 138)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssign_operation (var_prologueInstructionList_5290, var_endOfPrologue_5322  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 139)) ;
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

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 150)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_5850 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5850, inCompiler) ;
  GALGAS_location var_endOfPrologue_5882 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 153)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssign_operation (var_prologueInstructionList_5850, var_endOfPrologue_5882  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 154)) ;
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

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 165)) ;
  GALGAS_lstring var_mSourceFileExtension_6363 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 167)) ;
  GALGAS_lstring var_mSourceFileHelp_6433 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  GALGAS_lstring var_referenceGrammar_6491 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6491 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 172)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
    var_referenceGrammar_6491 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_6666 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 178)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_selector_6666.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_6666.readProperty_location (), GALGAS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_6872 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 184)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, var_typeName_6872.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_6872.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 186)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_7024 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7024 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 193)) ;
    var_isUnused_7024 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_7150 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_7271 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_7271, inCompiler) ;
  GALGAS_location var_endOfInstructionList_7296 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 201)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_6363, var_mSourceFileHelp_6433, var_mSourceFileVariableName_7150, var_isUnused_7024, var_referenceGrammar_6491, var_mInstructionList_7271, var_endOfInstructionList_7296  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 202)) ;
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

cMapElement_headerCompositionMap::cMapElement_headerCompositionMap (const GALGAS_headerCompositionMap_2D_element & inValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mInclusion (inValue.mProperty_mInclusion),
mProperty_mHeaderString (inValue.mProperty_mHeaderString) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_headerCompositionMap::cMapElement_headerCompositionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_stringset & in_mInclusion,
                                                                    const GALGAS_string & in_mHeaderString
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInclusion (in_mInclusion),
mProperty_mHeaderString (in_mHeaderString) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_headerCompositionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_headerCompositionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_headerCompositionMap (mProperty_lkey, mProperty_mInclusion, mProperty_mHeaderString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_headerCompositionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInclusion" ":") ;
  mProperty_mInclusion.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHeaderString" ":") ;
  mProperty_mHeaderString.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_headerCompositionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_headerCompositionMap * operand = (cMapElement_headerCompositionMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInclusion.objectCompare (operand->mProperty_mInclusion) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHeaderString.objectCompare (operand->mProperty_mHeaderString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap::GALGAS_headerCompositionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap::GALGAS_headerCompositionMap (const GALGAS_headerCompositionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap & GALGAS_headerCompositionMap::operator = (const GALGAS_headerCompositionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::class_func_mapWithMapToOverride (const GALGAS_headerCompositionMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_headerCompositionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::enterElement (const GALGAS_headerCompositionMap_2D_element & inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerCompositionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@headerCompositionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_stringset & inArgument0,
                                                       const GALGAS_string & inArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerCompositionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@headerCompositionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::add_operation (const GALGAS_headerCompositionMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_headerCompositionMap result = *this ;
  cEnumerator_headerCompositionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInclusion (HERE), enumerator.current_mHeaderString (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_stringset inArgument0,
                                                    GALGAS_string inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerCompositionMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_headerCompositionMap_searchKey = "there is no '%K' key" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_stringset & outArgument0,
                                                    GALGAS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_headerCompositionMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    outArgument0 = p->mProperty_mInclusion ;
    outArgument1 = p->mProperty_mHeaderString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_headerCompositionMap::getter_mInclusionForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) attributes ;
  GALGAS_stringset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    result = p->mProperty_mInclusion ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerCompositionMap::getter_mHeaderStringForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    result = p->mProperty_mHeaderString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_setMInclusionForKey (GALGAS_stringset inAttributeValue,
                                                              GALGAS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerCompositionMap * p = (cMapElement_headerCompositionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    p->mProperty_mInclusion = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_setMHeaderStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerCompositionMap * p = (cMapElement_headerCompositionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    p->mProperty_mHeaderString = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_headerCompositionMap * GALGAS_headerCompositionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * result = (cMapElement_headerCompositionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_headerCompositionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_headerCompositionMap::cEnumerator_headerCompositionMap (const GALGAS_headerCompositionMap & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element cEnumerator_headerCompositionMap::current (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return GALGAS_headerCompositionMap_2D_element (p->mProperty_lkey, p->mProperty_mInclusion, p->mProperty_mHeaderString) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_headerCompositionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_headerCompositionMap::current_mInclusion (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return p->mProperty_mInclusion ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_headerCompositionMap::current_mHeaderString (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return p->mProperty_mHeaderString ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_headerCompositionMap::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_stringset & outArgument0,
                                                      GALGAS_string & outArgument1) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    outArgument0 = p->mProperty_mInclusion ;
    outArgument1 = p->mProperty_mHeaderString ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @headerCompositionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerCompositionMap ("headerCompositionMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerCompositionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerCompositionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerCompositionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  const GALGAS_headerCompositionMap * p = (const GALGAS_headerCompositionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_headerCompositionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_headerRepartitionMap::cMapElement_headerRepartitionMap (const GALGAS_headerRepartitionMap_2D_element & inValue
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mHeaderFileName (inValue.mProperty_mHeaderFileName) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_headerRepartitionMap::cMapElement_headerRepartitionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_string & in_mHeaderFileName
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mHeaderFileName (in_mHeaderFileName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_headerRepartitionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_headerRepartitionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_headerRepartitionMap (mProperty_lkey, mProperty_mHeaderFileName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_headerRepartitionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHeaderFileName" ":") ;
  mProperty_mHeaderFileName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_headerRepartitionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_headerRepartitionMap * operand = (cMapElement_headerRepartitionMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHeaderFileName.objectCompare (operand->mProperty_mHeaderFileName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap::GALGAS_headerRepartitionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap::GALGAS_headerRepartitionMap (const GALGAS_headerRepartitionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap & GALGAS_headerRepartitionMap::operator = (const GALGAS_headerRepartitionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::class_func_mapWithMapToOverride (const GALGAS_headerRepartitionMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_headerRepartitionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::enterElement (const GALGAS_headerRepartitionMap_2D_element & inValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerRepartitionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@headerRepartitionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_string & inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerRepartitionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@headerRepartitionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::add_operation (const GALGAS_headerRepartitionMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_headerRepartitionMap result = *this ;
  cEnumerator_headerRepartitionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mHeaderFileName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_string inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * p = nullptr ;
  macroMyNew (p, cMapElement_headerRepartitionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_headerRepartitionMap_searchKey = "there is no '%K' key" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_string & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) performSearch (inKey,
                                                                                                         inCompiler,
                                                                                                         kSearchErrorMessage_headerRepartitionMap_searchKey
                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    outArgument0 = p->mProperty_mHeaderFileName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerRepartitionMap::getter_mHeaderFileNameForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    result = p->mProperty_mHeaderFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::setter_setMHeaderFileNameForKey (GALGAS_string inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerRepartitionMap * p = (cMapElement_headerRepartitionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    p->mProperty_mHeaderFileName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_headerRepartitionMap * GALGAS_headerRepartitionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * result = (cMapElement_headerRepartitionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_headerRepartitionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_headerRepartitionMap::cEnumerator_headerRepartitionMap (const GALGAS_headerRepartitionMap & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element cEnumerator_headerRepartitionMap::current (LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
  return GALGAS_headerRepartitionMap_2D_element (p->mProperty_lkey, p->mProperty_mHeaderFileName) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_headerRepartitionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_headerRepartitionMap::current_mHeaderFileName (LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
  return p->mProperty_mHeaderFileName ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_headerRepartitionMap::optional_searchKey (const GALGAS_string & inKey,
                                                      GALGAS_string & outArgument0) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    outArgument0 = p->mProperty_mHeaderFileName ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @headerRepartitionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerRepartitionMap ("headerRepartitionMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerRepartitionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerRepartitionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerRepartitionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  const GALGAS_headerRepartitionMap * p = (const GALGAS_headerRepartitionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_headerRepartitionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_projectQualifiedFeatureMap::cMapElement_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap_2D_element & inValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mFeatureValue (inValue.mProperty_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_projectQualifiedFeatureMap::cMapElement_projectQualifiedFeatureMap (const GALGAS_lstring & inKey,
                                                                                const GALGAS_lstring & in_mFeatureValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFeatureValue (in_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_projectQualifiedFeatureMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_projectQualifiedFeatureMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_projectQualifiedFeatureMap (mProperty_lkey, mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_projectQualifiedFeatureMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFeatureValue" ":") ;
  mProperty_mFeatureValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_projectQualifiedFeatureMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_projectQualifiedFeatureMap * operand = (cMapElement_projectQualifiedFeatureMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFeatureValue.objectCompare (operand->mProperty_mFeatureValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap::GALGAS_projectQualifiedFeatureMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap::GALGAS_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap & GALGAS_projectQualifiedFeatureMap::operator = (const GALGAS_projectQualifiedFeatureMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::class_func_mapWithMapToOverride (const GALGAS_projectQualifiedFeatureMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_projectQualifiedFeatureMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::enterElement (const GALGAS_projectQualifiedFeatureMap_2D_element & inValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * p = nullptr ;
  macroMyNew (p, cMapElement_projectQualifiedFeatureMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@projectQualifiedFeatureMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_lstring & inArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * p = nullptr ;
  macroMyNew (p, cMapElement_projectQualifiedFeatureMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@projectQualifiedFeatureMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::add_operation (const GALGAS_projectQualifiedFeatureMap & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_projectQualifiedFeatureMap result = *this ;
  cEnumerator_projectQualifiedFeatureMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFeatureValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::setter_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * p = nullptr ;
  macroMyNew (p, cMapElement_projectQualifiedFeatureMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_projectQualifiedFeatureMap_searchKey = "the '%K' attribute is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::method_searchKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_projectQualifiedFeatureMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    outArgument0 = p->mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_projectQualifiedFeatureMap::getter_mFeatureValueForKey (const GALGAS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    result = p->mProperty_mFeatureValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::setter_setMFeatureValueForKey (GALGAS_lstring inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_projectQualifiedFeatureMap * p = (cMapElement_projectQualifiedFeatureMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    p->mProperty_mFeatureValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_projectQualifiedFeatureMap * GALGAS_projectQualifiedFeatureMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * result = (cMapElement_projectQualifiedFeatureMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_projectQualifiedFeatureMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_projectQualifiedFeatureMap::cEnumerator_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element cEnumerator_projectQualifiedFeatureMap::current (LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
  return GALGAS_projectQualifiedFeatureMap_2D_element (p->mProperty_lkey, p->mProperty_mFeatureValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectQualifiedFeatureMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectQualifiedFeatureMap::current_mFeatureValue (LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
  return p->mProperty_mFeatureValue ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_projectQualifiedFeatureMap::optional_searchKey (const GALGAS_string & inKey,
                                                            GALGAS_lstring & outArgument0) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    outArgument0 = p->mProperty_mFeatureValue ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @projectQualifiedFeatureMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ("projectQualifiedFeatureMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_projectQualifiedFeatureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_projectQualifiedFeatureMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectQualifiedFeatureMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  const GALGAS_projectQualifiedFeatureMap * p = (const GALGAS_projectQualifiedFeatureMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_projectQualifiedFeatureMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeGroupList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public: GALGAS_XCodeGroupList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                             const GALGAS_string & in_mGroupName,
                                             const GALGAS_string & in_mGroupPath,
                                             const GALGAS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                                                      const GALGAS_string & in_mGroupName,
                                                                      const GALGAS_string & in_mGroupPath,
                                                                      const GALGAS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeGroupList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupReference" ":") ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupName" ":") ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupPath" ":") ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mChildrenRefs" ":") ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_XCodeGroupList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeGroupList * operand = (cCollectionElement_XCodeGroupList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeGroupList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::enterElement (const GALGAS_XCodeGroupList_2D_element & inValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                       const GALGAS_string & inOperand1,
                                                                       const GALGAS_string & inOperand2,
                                                                       const GALGAS_stringlist & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_string & in_mGroupReference,
                                                       const GALGAS_string & in_mGroupName,
                                                       const GALGAS_string & in_mGroupPath,
                                                       const GALGAS_stringlist & in_mChildrenRefs
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference,
                                                    in_mGroupName,
                                                    in_mGroupPath,
                                                    in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1,
                                                 const GALGAS_string & inOperand2,
                                                 const GALGAS_stringlist & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_append (const GALGAS_string inOperand0,
                                           const GALGAS_string inOperand1,
                                           const GALGAS_string inOperand2,
                                           const GALGAS_stringlist inOperand3,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_string inOperand2,
                                                  const GALGAS_stringlist inOperand3,
                                                  const GALGAS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  const GALGAS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
        outOperand0 = p->mObject.mProperty_mGroupReference ;
        outOperand1 = p->mObject.mProperty_mGroupName ;
        outOperand2 = p->mObject.mProperty_mGroupPath ;
        outOperand3 = p->mObject.mProperty_mChildrenRefs ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popFirst (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_stringlist & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popLast (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            GALGAS_stringlist & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_stringlist & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         GALGAS_stringlist & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupNameAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupPathAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupPathAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GALGAS_stringlist inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}




//--------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  const GALGAS_XCodeGroupList * p = (const GALGAS_XCodeGroupList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeToolTargetList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public: GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                  const GALGAS_string & in_mTargetName,
                                                  const GALGAS_string & in_mProductFileReference,
                                                  const GALGAS_string & in_mProductFileName,
                                                  const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const GALGAS_string & in_mBuildPhaseRef,
                                                  const GALGAS_string & in_mBuildConfigurationListRef,
                                                  const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GALGAS_string & in_mBuildConfigurationRef,
                                                  const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                                                const GALGAS_string & in_mTargetName,
                                                                                const GALGAS_string & in_mProductFileReference,
                                                                                const GALGAS_string & in_mProductFileName,
                                                                                const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                const GALGAS_string & in_mBuildPhaseRef,
                                                                                const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                const GALGAS_string & in_mBuildConfigurationRef,
                                                                                const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeToolTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_XCodeToolTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeToolTargetList * operand = (cCollectionElement_XCodeToolTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeToolTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::enterElement (const GALGAS_XCodeToolTargetList_2D_element & inValue,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                 const GALGAS_string & inOperand1,
                                                                                 const GALGAS_string & inOperand2,
                                                                                 const GALGAS_string & inOperand3,
                                                                                 const GALGAS_stringlist & inOperand4,
                                                                                 const GALGAS_string & inOperand5,
                                                                                 const GALGAS_string & inOperand6,
                                                                                 const GALGAS_stringlist & inOperand7,
                                                                                 const GALGAS_string & inOperand8,
                                                                                 const GALGAS_stringlist & inOperand9,
                                                                                 const GALGAS_string & inOperand10
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mTargetRef,
                                                            const GALGAS_string & in_mTargetName,
                                                            const GALGAS_string & in_mProductFileReference,
                                                            const GALGAS_string & in_mProductFileName,
                                                            const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                            const GALGAS_string & in_mBuildPhaseRef,
                                                            const GALGAS_string & in_mBuildConfigurationListRef,
                                                            const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                            const GALGAS_string & in_mBuildConfigurationRef,
                                                            const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                            const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (in_mTargetRef,
                                                         in_mTargetName,
                                                         in_mProductFileReference,
                                                         in_mProductFileName,
                                                         in_mBuildPhaseRefList,
                                                         in_mBuildPhaseRef,
                                                         in_mBuildConfigurationListRef,
                                                         in_mBuildConfigurationSettingList,
                                                         in_mBuildConfigurationRef,
                                                         in_mFrameworksFileRefList,
                                                         in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_string & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_string & inOperand3,
                                                      const GALGAS_stringlist & inOperand4,
                                                      const GALGAS_string & inOperand5,
                                                      const GALGAS_string & inOperand6,
                                                      const GALGAS_stringlist & inOperand7,
                                                      const GALGAS_string & inOperand8,
                                                      const GALGAS_stringlist & inOperand9,
                                                      const GALGAS_string & inOperand10
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_append (const GALGAS_string inOperand0,
                                                const GALGAS_string inOperand1,
                                                const GALGAS_string inOperand2,
                                                const GALGAS_string inOperand3,
                                                const GALGAS_stringlist inOperand4,
                                                const GALGAS_string inOperand5,
                                                const GALGAS_string inOperand6,
                                                const GALGAS_stringlist inOperand7,
                                                const GALGAS_string inOperand8,
                                                const GALGAS_stringlist inOperand9,
                                                const GALGAS_string inOperand10,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_string inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_string inOperand3,
                                                       const GALGAS_stringlist inOperand4,
                                                       const GALGAS_string inOperand5,
                                                       const GALGAS_string inOperand6,
                                                       const GALGAS_stringlist inOperand7,
                                                       const GALGAS_string inOperand8,
                                                       const GALGAS_stringlist inOperand9,
                                                       const GALGAS_string inOperand10,
                                                       const GALGAS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_stringlist & outOperand4,
                                                       GALGAS_string & outOperand5,
                                                       GALGAS_string & outOperand6,
                                                       GALGAS_stringlist & outOperand7,
                                                       GALGAS_string & outOperand8,
                                                       GALGAS_stringlist & outOperand9,
                                                       GALGAS_string & outOperand10,
                                                       const GALGAS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        outOperand9.drop () ;
        outOperand10.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
        outOperand0 = p->mObject.mProperty_mTargetRef ;
        outOperand1 = p->mObject.mProperty_mTargetName ;
        outOperand2 = p->mObject.mProperty_mProductFileReference ;
        outOperand3 = p->mObject.mProperty_mProductFileName ;
        outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
        outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
        outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
        outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
        outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
        outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
        outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_string & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_string & outOperand5,
                                                  GALGAS_string & outOperand6,
                                                  GALGAS_stringlist & outOperand7,
                                                  GALGAS_string & outOperand8,
                                                  GALGAS_stringlist & outOperand9,
                                                  GALGAS_string & outOperand10,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_string & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_string & outOperand5,
                                               GALGAS_string & outOperand6,
                                               GALGAS_stringlist & outOperand7,
                                               GALGAS_string & outOperand8,
                                               GALGAS_stringlist & outOperand9,
                                               GALGAS_string & outOperand10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element cEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}




//--------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  const GALGAS_XCodeToolTargetList * p = (const GALGAS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeAppTargetList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
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
                                                 const GALGAS_stringlist & in_mResourceFileBuildRefs
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
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
                                                                              const GALGAS_stringlist & in_mResourceFileBuildRefs
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeAppTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDependentTargets" ":") ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceBuildRef" ":") ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceFileBuildRefs" ":") ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::enterElement (const GALGAS_XCodeAppTargetList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                               const GALGAS_string & inOperand1,
                                                                               const GALGAS_string & inOperand2,
                                                                               const GALGAS_string & inOperand3,
                                                                               const GALGAS_stringlist & inOperand4,
                                                                               const GALGAS_string & inOperand5,
                                                                               const GALGAS_string & inOperand6,
                                                                               const GALGAS_stringlist & inOperand7,
                                                                               const GALGAS_string & inOperand8,
                                                                               const GALGAS_stringlist & inOperand9,
                                                                               const GALGAS_string & inOperand10,
                                                                               const GALGAS__32_stringlist & inOperand11,
                                                                               const GALGAS_string & inOperand12,
                                                                               const GALGAS_stringlist & inOperand13
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_string & in_mTargetRef,
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
                                                           const GALGAS_stringlist & in_mResourceFileBuildRefs
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (in_mTargetRef,
                                                        in_mTargetName,
                                                        in_mProductFileReference,
                                                        in_mProductFileName,
                                                        in_mBuildPhaseRefList,
                                                        in_mBuildPhaseRef,
                                                        in_mBuildConfigurationListRef,
                                                        in_mBuildConfigurationSettingList,
                                                        in_mBuildConfigurationRef,
                                                        in_mFrameworksFileRefList,
                                                        in_mFrameworkBuildPhaseRef,
                                                        in_mDependentTargets,
                                                        in_mResourceBuildRef,
                                                        in_mResourceFileBuildRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_string & inOperand2,
                                                     const GALGAS_string & inOperand3,
                                                     const GALGAS_stringlist & inOperand4,
                                                     const GALGAS_string & inOperand5,
                                                     const GALGAS_string & inOperand6,
                                                     const GALGAS_stringlist & inOperand7,
                                                     const GALGAS_string & inOperand8,
                                                     const GALGAS_stringlist & inOperand9,
                                                     const GALGAS_string & inOperand10,
                                                     const GALGAS__32_stringlist & inOperand11,
                                                     const GALGAS_string & inOperand12,
                                                     const GALGAS_stringlist & inOperand13
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_append (const GALGAS_string inOperand0,
                                               const GALGAS_string inOperand1,
                                               const GALGAS_string inOperand2,
                                               const GALGAS_string inOperand3,
                                               const GALGAS_stringlist inOperand4,
                                               const GALGAS_string inOperand5,
                                               const GALGAS_string inOperand6,
                                               const GALGAS_stringlist inOperand7,
                                               const GALGAS_string inOperand8,
                                               const GALGAS_stringlist inOperand9,
                                               const GALGAS_string inOperand10,
                                               const GALGAS__32_stringlist inOperand11,
                                               const GALGAS_string inOperand12,
                                               const GALGAS_stringlist inOperand13,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                      const GALGAS_string inOperand1,
                                                      const GALGAS_string inOperand2,
                                                      const GALGAS_string inOperand3,
                                                      const GALGAS_stringlist inOperand4,
                                                      const GALGAS_string inOperand5,
                                                      const GALGAS_string inOperand6,
                                                      const GALGAS_stringlist inOperand7,
                                                      const GALGAS_string inOperand8,
                                                      const GALGAS_stringlist inOperand9,
                                                      const GALGAS_string inOperand10,
                                                      const GALGAS__32_stringlist inOperand11,
                                                      const GALGAS_string inOperand12,
                                                      const GALGAS_stringlist inOperand13,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      GALGAS_stringlist & outOperand4,
                                                      GALGAS_string & outOperand5,
                                                      GALGAS_string & outOperand6,
                                                      GALGAS_stringlist & outOperand7,
                                                      GALGAS_string & outOperand8,
                                                      GALGAS_stringlist & outOperand9,
                                                      GALGAS_string & outOperand10,
                                                      GALGAS__32_stringlist & outOperand11,
                                                      GALGAS_string & outOperand12,
                                                      GALGAS_stringlist & outOperand13,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        outOperand9.drop () ;
        outOperand10.drop () ;
        outOperand11.drop () ;
        outOperand12.drop () ;
        outOperand13.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
        outOperand0 = p->mObject.mProperty_mTargetRef ;
        outOperand1 = p->mObject.mProperty_mTargetName ;
        outOperand2 = p->mObject.mProperty_mProductFileReference ;
        outOperand3 = p->mObject.mProperty_mProductFileName ;
        outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
        outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
        outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
        outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
        outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
        outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
        outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
        outOperand11 = p->mObject.mProperty_mDependentTargets ;
        outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
        outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      outOperand11.drop () ;
      outOperand12.drop () ;
      outOperand13.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 GALGAS__32_stringlist & outOperand11,
                                                 GALGAS_string & outOperand12,
                                                 GALGAS_stringlist & outOperand13,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_string & outOperand3,
                                                GALGAS_stringlist & outOperand4,
                                                GALGAS_string & outOperand5,
                                                GALGAS_string & outOperand6,
                                                GALGAS_stringlist & outOperand7,
                                                GALGAS_string & outOperand8,
                                                GALGAS_stringlist & outOperand9,
                                                GALGAS_string & outOperand10,
                                                GALGAS__32_stringlist & outOperand11,
                                                GALGAS_string & outOperand12,
                                                GALGAS_stringlist & outOperand13,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_first (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              GALGAS__32_stringlist & outOperand11,
                                              GALGAS_string & outOperand12,
                                              GALGAS_stringlist & outOperand13,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_last (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_string & outOperand3,
                                             GALGAS_stringlist & outOperand4,
                                             GALGAS_string & outOperand5,
                                             GALGAS_string & outOperand6,
                                             GALGAS_stringlist & outOperand7,
                                             GALGAS_string & outOperand8,
                                             GALGAS_stringlist & outOperand9,
                                             GALGAS_string & outOperand10,
                                             GALGAS__32_stringlist & outOperand11,
                                             GALGAS_string & outOperand12,
                                             GALGAS_stringlist & outOperand13,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GALGAS__32_stringlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}




//--------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  const GALGAS_XCodeAppTargetList * p = (const GALGAS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@BuildFileList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_BuildFileList : public cCollectionElement {
  public: GALGAS_BuildFileList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                            const GALGAS_string & in_mFileName,
                                            const GALGAS_string & in_mBuildReference
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_BuildFileList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_BuildFileList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileReference" ":") ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileName" ":") ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildReference" ":") ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::enterElement (const GALGAS_BuildFileList_2D_element & inValue,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                     const GALGAS_string & inOperand1,
                                                                     const GALGAS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mFileReference,
                                                      const GALGAS_string & in_mFileName,
                                                      const GALGAS_string & in_mBuildReference
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_string & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_append (const GALGAS_string inOperand0,
                                          const GALGAS_string inOperand1,
                                          const GALGAS_string inOperand2,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_string inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
        outOperand0 = p->mObject.mProperty_mFileReference ;
        outOperand1 = p->mObject.mProperty_mFileName ;
        outOperand2 = p->mObject.mProperty_mBuildReference ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_string & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_string & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::add_operation (const GALGAS_BuildFileList & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileReferenceAtIndex (GALGAS_string inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileNameAtIndex (GALGAS_string inOperand,
                                                       GALGAS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMBuildReferenceAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mBuildReference ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//--------------------------------------------------------------------------------------------------
//
//     @BuildFileList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  const GALGAS_BuildFileList * p = (const GALGAS_BuildFileList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element::~ GALGAS_templateInstructionListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::init_21_ (const GALGAS_templateInstructionAST & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (const GALGAS_templateInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::class_func_new (const GALGAS_templateInstructionAST & in_mInstruction,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionListAST_2D_element::objectCompare (const GALGAS_templateInstructionListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionListAST_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ("templateInstructionListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  const GALGAS_templateInstructionListAST_2D_element * p = (const GALGAS_templateInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element::~ GALGAS_templateInstructionIfBranchListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::init_21__21_ (const GALGAS_templateExpressionAST & in_mExpression,
                                                                                                                         const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                            const GALGAS_templateInstructionListAST & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::class_func_new (const GALGAS_templateExpressionAST & in_mExpression,
                                                                                                                           const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionIfBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionIfBranchListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionIfBranchListAST_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionIfBranchListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionIfBranchListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ("templateInstructionIfBranchListAST-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  const GALGAS_templateInstructionIfBranchListAST_2D_element * p = (const GALGAS_templateInstructionIfBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionIfBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) :
mProperty_mConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructionList (),
mProperty_mEndOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element::~ GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::init_21__21__21__21_ (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                         const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                                                                         const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                                                                                         const GALGAS_location & in_mEndOfBranch,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                    const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                                    const GALGAS_templateInstructionListAST & inOperand2,
                                                                                                                    const GALGAS_location & inOperand3) :
mProperty_mConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::class_func_new (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                   const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                                                                   const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                                                                                   const GALGAS_location & in_mEndOfBranch,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionSwitchBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantList.objectCompare (inOperand.mProperty_mConstantList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociatedValuesExtraction.objectCompare (inOperand.mProperty_mAssociatedValuesExtraction) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfBranch.objectCompare (inOperand.mProperty_mEndOfBranch) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionSwitchBranchListAST_2D_element::isValid (void) const {
  return mProperty_mConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::drop (void) {
  mProperty_mConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionSwitchBranchListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionSwitchBranchListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ("templateInstructionSwitchBranchListAST-element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  const GALGAS_templateInstructionSwitchBranchListAST_2D_element * p = (const GALGAS_templateInstructionSwitchBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) :
mProperty_mConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::~ GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::init_21__21__21__21_ (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                                             const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                                             const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                                             const GALGAS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                                                                             Compiler * inCompiler
                                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                                        const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                                                        const GALGAS_uint & inOperand2,
                                                                                                                                        const GALGAS_templateInstructionListForGeneration & inOperand3) :
mProperty_mConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::class_func_new (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                                       const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                                       const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                                       const GALGAS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantList = in_mConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantList.objectCompare (inOperand.mProperty_mConstantList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExtractedAssociatedValuesForGeneration.objectCompare (inOperand.mProperty_mExtractedAssociatedValuesForGeneration) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOfBranchLocationIndex.objectCompare (inOperand.mProperty_mEndOfBranchLocationIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::isValid (void) const {
  return mProperty_mConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::drop (void) {
  mProperty_mConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::description (String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionSwitchBranchListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionSwitchBranchListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ("templateInstructionSwitchBranchListForGeneration-element",
                                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element * p = (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element::~ GALGAS_lexicalInstructionListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::init_21_ (const GALGAS_lexicalInstructionAST & in_mInstruction,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::class_func_new (const GALGAS_lexicalInstructionAST & in_mInstruction,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalInstructionListAST_2D_element::objectCompare (const GALGAS_lexicalInstructionListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalInstructionListAST_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalInstructionListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalInstructionListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ("lexicalInstructionListAST-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  const GALGAS_lexicalInstructionListAST_2D_element * p = (const GALGAS_lexicalInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (void) :
mProperty_mLexicalRule () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element::~ GALGAS_lexicalRuleListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::init_21_ (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRule = in_mLexicalRule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & inOperand0) :
mProperty_mLexicalRule (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::class_func_new (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRule = in_mLexicalRule ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRuleListAST_2D_element::objectCompare (const GALGAS_lexicalRuleListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexicalRule.objectCompare (inOperand.mProperty_mLexicalRule) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRuleListAST_2D_element::isValid (void) const {
  return mProperty_mLexicalRule.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST_2D_element::drop (void) {
  mProperty_mLexicalRule.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRuleListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRule.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRuleListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ("lexicalRuleListAST-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRuleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  const GALGAS_lexicalRuleListAST_2D_element * p = (const GALGAS_lexicalRuleListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRuleListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (void) :
mProperty_mWhileExpression (),
mProperty_mWhileInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element::~ GALGAS_lexicalWhileBranchListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::init_21__21_ (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                       const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                          const GALGAS_lexicalInstructionListAST & inOperand1) :
mProperty_mWhileExpression (inOperand0),
mProperty_mWhileInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::class_func_new (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                         const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalWhileBranchListAST_2D_element::objectCompare (const GALGAS_lexicalWhileBranchListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mWhileExpression.objectCompare (inOperand.mProperty_mWhileExpression) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mWhileInstructionList.objectCompare (inOperand.mProperty_mWhileInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalWhileBranchListAST_2D_element::isValid (void) const {
  return mProperty_mWhileExpression.isValid () && mProperty_mWhileInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST_2D_element::drop (void) {
  mProperty_mWhileExpression.drop () ;
  mProperty_mWhileInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalWhileBranchListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalWhileBranchListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ("lexicalWhileBranchListAST-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  const GALGAS_lexicalWhileBranchListAST_2D_element * p = (const GALGAS_lexicalWhileBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalWhileBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (void) :
mProperty_mSelectExpression (),
mProperty_mSelectInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element::~ GALGAS_lexicalSelectBranchListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::init_21__21_ (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                         const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                            const GALGAS_lexicalInstructionListAST & inOperand1) :
mProperty_mSelectExpression (inOperand0),
mProperty_mSelectInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::class_func_new (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                           const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSelectBranchListAST_2D_element::objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSelectExpression.objectCompare (inOperand.mProperty_mSelectExpression) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSelectInstructionList.objectCompare (inOperand.mProperty_mSelectInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalSelectBranchListAST_2D_element::isValid (void) const {
  return mProperty_mSelectExpression.isValid () && mProperty_mSelectInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST_2D_element::drop (void) {
  mProperty_mSelectExpression.drop () ;
  mProperty_mSelectInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSelectBranchListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalSelectBranchListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ("lexicalSelectBranchListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  const GALGAS_lexicalSelectBranchListAST_2D_element * p = (const GALGAS_lexicalSelectBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSelectBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) :
mProperty_mLexicalActualInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::init_21_ (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalActualInputArgument = in_mLexicalActualInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0) :
mProperty_mLexicalActualInputArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::class_func_new (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalActualInputArgument = in_mLexicalActualInputArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexicalActualInputArgument.objectCompare (inOperand.mProperty_mLexicalActualInputArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mLexicalActualInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::drop (void) {
  mProperty_mLexicalActualInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionCallActualArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalActualInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionCallActualArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ("lexicalFunctionCallActualArgumentListAST-element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element * p = (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (void) :
mProperty_mLength (),
mProperty_mName (),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element::~ GALGAS_tokenSortedlist_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::init_21__21__21_ (const GALGAS_uint & in_mLength,
                                                                                       const GALGAS_string & in_mName,
                                                                                       const GALGAS_string & in_mTerminalName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLength = in_mLength ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2) :
mProperty_mLength (inOperand0),
mProperty_mName (inOperand1),
mProperty_mTerminalName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::class_func_new (const GALGAS_uint & in_mLength,
                                                                                     const GALGAS_string & in_mName,
                                                                                     const GALGAS_string & in_mTerminalName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLength = in_mLength ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_tokenSortedlist_2D_element::objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLength.objectCompare (inOperand.mProperty_mLength) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTerminalName.objectCompare (inOperand.mProperty_mTerminalName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tokenSortedlist_2D_element::isValid (void) const {
  return mProperty_mLength.isValid () && mProperty_mName.isValid () && mProperty_mTerminalName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist_2D_element::drop (void) {
  mProperty_mLength.drop () ;
  mProperty_mName.drop () ;
  mProperty_mTerminalName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tokenSortedlist-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLength.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @tokenSortedlist-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ("tokenSortedlist-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tokenSortedlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tokenSortedlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  const GALGAS_tokenSortedlist_2D_element * p = (const GALGAS_tokenSortedlist_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_tokenSortedlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) :
mProperty_mLexicalFormalArgumentMode (),
mProperty_mLexicalFormalArgumentType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element::~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::init_21__21__21_ (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                         const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                         const GALGAS_string & in_mArgumentNameForComment,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                        const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                        const GALGAS_string & inOperand2) :
mProperty_mLexicalFormalArgumentMode (inOperand0),
mProperty_mLexicalFormalArgumentType (inOperand1),
mProperty_mArgumentNameForComment (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::class_func_new (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                       const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                       const GALGAS_string & in_mArgumentNameForComment,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRoutineFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexicalFormalArgumentMode.objectCompare (inOperand.mProperty_mLexicalFormalArgumentMode) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexicalFormalArgumentType.objectCompare (inOperand.mProperty_mLexicalFormalArgumentType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mArgumentNameForComment.objectCompare (inOperand.mProperty_mArgumentNameForComment) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRoutineFormalArgumentList_2D_element::isValid (void) const {
  return mProperty_mLexicalFormalArgumentMode.isValid () && mProperty_mLexicalFormalArgumentType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::drop (void) {
  mProperty_mLexicalFormalArgumentMode.drop () ;
  mProperty_mLexicalFormalArgumentType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineFormalArgumentList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineFormalArgumentList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ("lexicalRoutineFormalArgumentList-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  const GALGAS_lexicalRoutineFormalArgumentList_2D_element * p = (const GALGAS_lexicalRoutineFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) :
mProperty_mLexicalType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element::~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::init_21__21_ (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                       const GALGAS_string & in_mArgumentNameForComment,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                          const GALGAS_string & inOperand1) :
mProperty_mLexicalType (inOperand0),
mProperty_mArgumentNameForComment (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::class_func_new (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                         const GALGAS_string & in_mArgumentNameForComment,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalFunctionFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexicalType.objectCompare (inOperand.mProperty_mLexicalType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mArgumentNameForComment.objectCompare (inOperand.mProperty_mArgumentNameForComment) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalFunctionFormalArgumentList_2D_element::isValid (void) const {
  return mProperty_mLexicalType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::drop (void) {
  mProperty_mLexicalType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionFormalArgumentList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionFormalArgumentList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ("lexicalFunctionFormalArgumentList-element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  const GALGAS_lexicalFunctionFormalArgumentList_2D_element * p = (const GALGAS_lexicalFunctionFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFunctionFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) :
mProperty_mLexicalRoutineActualArgument () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::~ GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::init_21_ (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRoutineActualArgument = in_mLexicalRoutineActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0) :
mProperty_mLexicalRoutineActualArgument (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::class_func_new (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalRoutineActualArgument = in_mLexicalRoutineActualArgument ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexicalRoutineActualArgument.objectCompare (inOperand.mProperty_mLexicalRoutineActualArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mLexicalRoutineActualArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::drop (void) {
  mProperty_mLexicalRoutineActualArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineCallActualArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineCallActualArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ("lexicalRoutineCallActualArgumentListAST-element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element * p = (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList_2D_element::GALGAS_commandLineOptionSortedList_2D_element (void) :
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList_2D_element::~ GALGAS_commandLineOptionSortedList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_commandLineOptionSortedList_2D_element GALGAS_commandLineOptionSortedList_2D_element::init_21__21__21__21__21_ (const GALGAS_string & in_mOptionIdentifier,
                                                                                                                       const GALGAS_char & in_mOptionChar,
                                                                                                                       const GALGAS_string & in_mOptionString,
                                                                                                                       const GALGAS_string & in_mComment,
                                                                                                                       const GALGAS_string & in_mDefaultValue,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionSortedList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionSortedList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList_2D_element::GALGAS_commandLineOptionSortedList_2D_element (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_char & inOperand1,
                                                                                              const GALGAS_string & inOperand2,
                                                                                              const GALGAS_string & inOperand3,
                                                                                              const GALGAS_string & inOperand4) :
mProperty_mOptionIdentifier (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList_2D_element GALGAS_commandLineOptionSortedList_2D_element::class_func_new (const GALGAS_string & in_mOptionIdentifier,
                                                                                                             const GALGAS_char & in_mOptionChar,
                                                                                                             const GALGAS_string & in_mOptionString,
                                                                                                             const GALGAS_string & in_mComment,
                                                                                                             const GALGAS_string & in_mDefaultValue,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionSortedList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_commandLineOptionSortedList_2D_element::objectCompare (const GALGAS_commandLineOptionSortedList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionIdentifier.objectCompare (inOperand.mProperty_mOptionIdentifier) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionChar.objectCompare (inOperand.mProperty_mOptionChar) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionString.objectCompare (inOperand.mProperty_mOptionString) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mComment.objectCompare (inOperand.mProperty_mComment) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDefaultValue.objectCompare (inOperand.mProperty_mDefaultValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_commandLineOptionSortedList_2D_element::isValid (void) const {
  return mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionSortedList_2D_element::drop (void) {
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionSortedList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionSortedList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @commandLineOptionSortedList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionSortedList_2D_element ("commandLineOptionSortedList-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_commandLineOptionSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionSortedList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_commandLineOptionSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionSortedList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList_2D_element GALGAS_commandLineOptionSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionSortedList_2D_element result ;
  const GALGAS_commandLineOptionSortedList_2D_element * p = (const GALGAS_commandLineOptionSortedList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_commandLineOptionSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (void) :
mProperty_mLeadingCharacterStrippedCount (),
mProperty_mTerminalList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element::~ GALGAS_guiLabelListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::init_21__21__21_ (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                                                       const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                                                       const GALGAS_location & in_mLocation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeadingCharacterStrippedCount = in_mLeadingCharacterStrippedCount ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_terminalLabelListAST & inOperand1,
                                                                      const GALGAS_location & inOperand2) :
mProperty_mLeadingCharacterStrippedCount (inOperand0),
mProperty_mTerminalList (inOperand1),
mProperty_mLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::class_func_new (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                                                     const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                                                     const GALGAS_location & in_mLocation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeadingCharacterStrippedCount = in_mLeadingCharacterStrippedCount ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guiLabelListAST_2D_element::objectCompare (const GALGAS_guiLabelListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLeadingCharacterStrippedCount.objectCompare (inOperand.mProperty_mLeadingCharacterStrippedCount) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTerminalList.objectCompare (inOperand.mProperty_mTerminalList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLocation.objectCompare (inOperand.mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guiLabelListAST_2D_element::isValid (void) const {
  return mProperty_mLeadingCharacterStrippedCount.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST_2D_element::drop (void) {
  mProperty_mLeadingCharacterStrippedCount.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiLabelListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guiLabelListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ("guiLabelListAST-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  const GALGAS_guiLabelListAST_2D_element * p = (const GALGAS_guiLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guiLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element::GALGAS_guiCommandLineOptionList_2D_element (void) :
mProperty_mOptionComponent (),
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element::~ GALGAS_guiCommandLineOptionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::init_21__21__21__21__21_ (const GALGAS_string & in_mOptionComponent,
                                                                                                                 const GALGAS_string & in_mOptionIdentifier,
                                                                                                                 const GALGAS_char & in_mOptionChar,
                                                                                                                 const GALGAS_string & in_mOptionString,
                                                                                                                 const GALGAS_string & in_mComment,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionComponent = in_mOptionComponent ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element::GALGAS_guiCommandLineOptionList_2D_element (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_char & inOperand2,
                                                                                        const GALGAS_string & inOperand3,
                                                                                        const GALGAS_string & inOperand4) :
mProperty_mOptionComponent (inOperand0),
mProperty_mOptionIdentifier (inOperand1),
mProperty_mOptionChar (inOperand2),
mProperty_mOptionString (inOperand3),
mProperty_mComment (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::class_func_new (const GALGAS_string & in_mOptionComponent,
                                                                                                       const GALGAS_string & in_mOptionIdentifier,
                                                                                                       const GALGAS_char & in_mOptionChar,
                                                                                                       const GALGAS_string & in_mOptionString,
                                                                                                       const GALGAS_string & in_mComment,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionComponent = in_mOptionComponent ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_guiCommandLineOptionList_2D_element::objectCompare (const GALGAS_guiCommandLineOptionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionComponent.objectCompare (inOperand.mProperty_mOptionComponent) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionIdentifier.objectCompare (inOperand.mProperty_mOptionIdentifier) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionChar.objectCompare (inOperand.mProperty_mOptionChar) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionString.objectCompare (inOperand.mProperty_mOptionString) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mComment.objectCompare (inOperand.mProperty_mComment) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guiCommandLineOptionList_2D_element::isValid (void) const {
  return mProperty_mOptionComponent.isValid () && mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList_2D_element::drop (void) {
  mProperty_mOptionComponent.drop () ;
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiCommandLineOptionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionComponent.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guiCommandLineOptionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ("guiCommandLineOptionList-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiCommandLineOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  const GALGAS_guiCommandLineOptionList_2D_element * p = (const GALGAS_guiCommandLineOptionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guiCommandLineOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (void) :
mProperty_mKey (),
mProperty_mContents () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element::~ GALGAS_textMacroList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::init_21__21_ (const GALGAS_string & in_mKey,
                                                                               const GALGAS_string & in_mContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mContents = in_mContents ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mContents (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::class_func_new (const GALGAS_string & in_mKey,
                                                                                 const GALGAS_string & in_mContents,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mContents = in_mContents ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_textMacroList_2D_element::objectCompare (const GALGAS_textMacroList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mKey.objectCompare (inOperand.mProperty_mKey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mContents.objectCompare (inOperand.mProperty_mContents) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_textMacroList_2D_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mContents.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList_2D_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mContents.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_textMacroList_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @textMacroList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mContents.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @textMacroList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_textMacroList_2D_element ("textMacroList-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_textMacroList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_textMacroList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  const GALGAS_textMacroList_2D_element * p = (const GALGAS_textMacroList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_textMacroList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element::GALGAS_importedLexiqueList_2D_element (void) :
mProperty_mLexiqueClassName (),
mProperty_mIndex (),
mProperty_mBlockComment (),
mProperty_mTitle (),
mProperty_mTextMacroList (),
mProperty_mLabels (),
mProperty_mLexicalStyleList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element::~ GALGAS_importedLexiqueList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mLexiqueClassName,
                                                                                                               const GALGAS_uint & in_mIndex,
                                                                                                               const GALGAS_string & in_mBlockComment,
                                                                                                               const GALGAS_string & in_mTitle,
                                                                                                               const GALGAS_textMacroList & in_mTextMacroList,
                                                                                                               const GALGAS_guiLabelListAST & in_mLabels,
                                                                                                               const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueClassName = in_mLexiqueClassName ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBlockComment = in_mBlockComment ;
  result.mProperty_mTitle = in_mTitle ;
  result.mProperty_mTextMacroList = in_mTextMacroList ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mLexicalStyleList = in_mLexicalStyleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element::GALGAS_importedLexiqueList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_uint & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_textMacroList & inOperand4,
                                                                              const GALGAS_guiLabelListAST & inOperand5,
                                                                              const GALGAS_lexicalStyleListAST & inOperand6) :
mProperty_mLexiqueClassName (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBlockComment (inOperand2),
mProperty_mTitle (inOperand3),
mProperty_mTextMacroList (inOperand4),
mProperty_mLabels (inOperand5),
mProperty_mLexicalStyleList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::class_func_new (const GALGAS_string & in_mLexiqueClassName,
                                                                                             const GALGAS_uint & in_mIndex,
                                                                                             const GALGAS_string & in_mBlockComment,
                                                                                             const GALGAS_string & in_mTitle,
                                                                                             const GALGAS_textMacroList & in_mTextMacroList,
                                                                                             const GALGAS_guiLabelListAST & in_mLabels,
                                                                                             const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueClassName = in_mLexiqueClassName ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBlockComment = in_mBlockComment ;
  result.mProperty_mTitle = in_mTitle ;
  result.mProperty_mTextMacroList = in_mTextMacroList ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mLexicalStyleList = in_mLexicalStyleList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_importedLexiqueList_2D_element::objectCompare (const GALGAS_importedLexiqueList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexiqueClassName.objectCompare (inOperand.mProperty_mLexiqueClassName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBlockComment.objectCompare (inOperand.mProperty_mBlockComment) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTitle.objectCompare (inOperand.mProperty_mTitle) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTextMacroList.objectCompare (inOperand.mProperty_mTextMacroList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLabels.objectCompare (inOperand.mProperty_mLabels) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLexicalStyleList.objectCompare (inOperand.mProperty_mLexicalStyleList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_importedLexiqueList_2D_element::isValid (void) const {
  return mProperty_mLexiqueClassName.isValid () && mProperty_mIndex.isValid () && mProperty_mBlockComment.isValid () && mProperty_mTitle.isValid () && mProperty_mTextMacroList.isValid () && mProperty_mLabels.isValid () && mProperty_mLexicalStyleList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList_2D_element::drop (void) {
  mProperty_mLexiqueClassName.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBlockComment.drop () ;
  mProperty_mTitle.drop () ;
  mProperty_mTextMacroList.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mLexicalStyleList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @importedLexiqueList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueClassName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTitle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTextMacroList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @importedLexiqueList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ("importedLexiqueList-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_importedLexiqueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_importedLexiqueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  const GALGAS_importedLexiqueList_2D_element * p = (const GALGAS_importedLexiqueList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_importedLexiqueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (void) :
mProperty_mConstantName (),
mProperty_mAssociatedValueTypeList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element::~ GALGAS_enumConstantListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::init_21__21_ (const GALGAS_string & in_mConstantName,
                                                                                                               const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mAssociatedValueTypeList = in_mAssociatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_unifiedTypeMapEntryList & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mAssociatedValueTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::class_func_new (const GALGAS_string & in_mConstantName,
                                                                                                                 const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mAssociatedValueTypeList = in_mAssociatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumConstantListForGeneration_2D_element::objectCompare (const GALGAS_enumConstantListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociatedValueTypeList.objectCompare (inOperand.mProperty_mAssociatedValueTypeList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_enumConstantListForGeneration_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mAssociatedValueTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mAssociatedValueTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumConstantListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ("enumConstantListForGeneration-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  const GALGAS_enumConstantListForGeneration_2D_element * p = (const GALGAS_enumConstantListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumConstantListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element::GALGAS_externTypeConstructorList_2D_element (void) :
mProperty_mParameterList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element::~ GALGAS_externTypeConstructorList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::init_21_ (const GALGAS_typeNameFormalParameterNameList & in_mParameterList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element::GALGAS_externTypeConstructorList_2D_element (const GALGAS_typeNameFormalParameterNameList & inOperand0) :
mProperty_mParameterList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::class_func_new (const GALGAS_typeNameFormalParameterNameList & in_mParameterList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externTypeConstructorList_2D_element::objectCompare (const GALGAS_externTypeConstructorList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externTypeConstructorList_2D_element::isValid (void) const {
  return mProperty_mParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList_2D_element::drop (void) {
  mProperty_mParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externTypeConstructorList_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externTypeConstructorList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externTypeConstructorList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ("externTypeConstructorList-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeConstructorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeConstructorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeConstructorList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList_2D_element GALGAS_externTypeConstructorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externTypeConstructorList_2D_element result ;
  const GALGAS_externTypeConstructorList_2D_element * p = (const GALGAS_externTypeConstructorList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeConstructorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeConstructorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) :
mProperty_mInsertOrReplaceDeclarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element::~ GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::init_21_ (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertOrReplaceDeclarationLocation = in_mInsertOrReplaceDeclarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (const GALGAS_location & inOperand0) :
mProperty_mInsertOrReplaceDeclarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::class_func_new (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInsertOrReplaceDeclarationLocation = in_mInsertOrReplaceDeclarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_insertOrReplaceDeclarationListAST_2D_element::objectCompare (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInsertOrReplaceDeclarationLocation.objectCompare (inOperand.mProperty_mInsertOrReplaceDeclarationLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_insertOrReplaceDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mInsertOrReplaceDeclarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::drop (void) {
  mProperty_mInsertOrReplaceDeclarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @insertOrReplaceDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @insertOrReplaceDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ("insertOrReplaceDeclarationListAST-element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  const GALGAS_insertOrReplaceDeclarationListAST_2D_element * p = (const GALGAS_insertOrReplaceDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_insertOrReplaceDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (void) :
mProperty_mAttributeTypeIndex (),
mProperty_mAttributeName (),
mProperty_mAscendingOrder () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::~ GALGAS_sortDescriptorListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                                       const GALGAS_string & in_mAttributeName,
                                                                                                                       const GALGAS_bool & in_mAscendingOrder,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeTypeIndex = in_mAttributeTypeIndex ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAscendingOrder = in_mAscendingOrder ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2) :
mProperty_mAttributeTypeIndex (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mAscendingOrder (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                                     const GALGAS_string & in_mAttributeName,
                                                                                                                     const GALGAS_bool & in_mAscendingOrder,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeTypeIndex = in_mAttributeTypeIndex ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAscendingOrder = in_mAscendingOrder ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sortDescriptorListForGeneration_2D_element::objectCompare (const GALGAS_sortDescriptorListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAttributeTypeIndex.objectCompare (inOperand.mProperty_mAttributeTypeIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAscendingOrder.objectCompare (inOperand.mProperty_mAscendingOrder) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sortDescriptorListForGeneration_2D_element::isValid (void) const {
  return mProperty_mAttributeTypeIndex.isValid () && mProperty_mAttributeName.isValid () && mProperty_mAscendingOrder.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration_2D_element::drop (void) {
  mProperty_mAttributeTypeIndex.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mAscendingOrder.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration_2D_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortDescriptorListForGeneration-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAscendingOrder.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sortDescriptorListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ("sortDescriptorListForGeneration-element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortDescriptorListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortDescriptorListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortDescriptorListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  const GALGAS_sortDescriptorListForGeneration_2D_element * p = (const GALGAS_sortDescriptorListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortDescriptorListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList_2D_element::GALGAS_initializerSignatureList_2D_element (void) :
mProperty_initializer () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList_2D_element::~ GALGAS_initializerSignatureList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_initializerSignatureList_2D_element GALGAS_initializerSignatureList_2D_element::init_21_ (const GALGAS_formalInputParameterListAST & in_initializer,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initializerSignatureList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initializer = in_initializer ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList_2D_element::GALGAS_initializerSignatureList_2D_element (const GALGAS_formalInputParameterListAST & inOperand0) :
mProperty_initializer (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList_2D_element GALGAS_initializerSignatureList_2D_element::class_func_new (const GALGAS_formalInputParameterListAST & in_initializer,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initializerSignatureList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_initializer = in_initializer ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_initializerSignatureList_2D_element::objectCompare (const GALGAS_initializerSignatureList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_initializer.objectCompare (inOperand.mProperty_initializer) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_initializerSignatureList_2D_element::isValid (void) const {
  return mProperty_initializer.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList_2D_element::drop (void) {
  mProperty_initializer.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_initializerSignatureList_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @initializerSignatureList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_initializer.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @initializerSignatureList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerSignatureList_2D_element ("initializerSignatureList-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_initializerSignatureList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerSignatureList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_initializerSignatureList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initializerSignatureList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList_2D_element GALGAS_initializerSignatureList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_initializerSignatureList_2D_element result ;
  const GALGAS_initializerSignatureList_2D_element * p = (const GALGAS_initializerSignatureList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_initializerSignatureList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerSignatureList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::GALGAS_localVarMapListForLLVM_2D_element (void) :
mProperty_mMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::~ GALGAS_localVarMapListForLLVM_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::init_21_ (const GALGAS_scopeLocalVarMap & in_mMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::GALGAS_localVarMapListForLLVM_2D_element (const GALGAS_scopeLocalVarMap & inOperand0) :
mProperty_mMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::class_func_new (const GALGAS_scopeLocalVarMap & in_mMap,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMap = in_mMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVarMapListForLLVM_2D_element::objectCompare (const GALGAS_localVarMapListForLLVM_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMap.objectCompare (inOperand.mProperty_mMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarMapListForLLVM_2D_element::isValid (void) const {
  return mProperty_mMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::drop (void) {
  mProperty_mMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarMapListForLLVM-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVarMapListForLLVM-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ("localVarMapListForLLVM-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarMapListForLLVM_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarMapListForLLVM_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarMapListForLLVM_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM_2D_element result ;
  const GALGAS_localVarMapListForLLVM_2D_element * p = (const GALGAS_localVarMapListForLLVM_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVarMapListForLLVM_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarMapListForLLVM-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::GALGAS_openedOverrideList_2D_element (void) :
mProperty_mOverrideKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::~ GALGAS_openedOverrideList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::init_21_ (const GALGAS_overrideKind & in_mOverrideKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_openedOverrideList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::GALGAS_openedOverrideList_2D_element (const GALGAS_overrideKind & inOperand0) :
mProperty_mOverrideKind (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::class_func_new (const GALGAS_overrideKind & in_mOverrideKind,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_openedOverrideList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOverrideKind = in_mOverrideKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_openedOverrideList_2D_element::objectCompare (const GALGAS_openedOverrideList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOverrideKind.objectCompare (inOperand.mProperty_mOverrideKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_openedOverrideList_2D_element::isValid (void) const {
  return mProperty_mOverrideKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::drop (void) {
  mProperty_mOverrideKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @openedOverrideList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOverrideKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @openedOverrideList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList_2D_element ("openedOverrideList-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedOverrideList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedOverrideList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedOverrideList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_openedOverrideList_2D_element result ;
  const GALGAS_openedOverrideList_2D_element * p = (const GALGAS_openedOverrideList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_openedOverrideList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedOverrideList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::~ GALGAS_actualParameterListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::init_21_ (const GALGAS_actualParameterAST & in_mActualParameter,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (const GALGAS_actualParameterAST & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::class_func_new (const GALGAS_actualParameterAST & in_mActualParameter,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_actualParameterListAST_2D_element::objectCompare (const GALGAS_actualParameterListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mActualParameter.objectCompare (inOperand.mProperty_mActualParameter) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actualParameterListAST_2D_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualParameterListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ("actualParameterListAST-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  const GALGAS_actualParameterListAST_2D_element * p = (const GALGAS_actualParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::~ GALGAS_semanticInstructionListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::init_21_ (const GALGAS_semanticInstructionAST & in_mInstruction,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (const GALGAS_semanticInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::class_func_new (const GALGAS_semanticInstructionAST & in_mInstruction,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticInstructionListAST_2D_element::objectCompare (const GALGAS_semanticInstructionListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticInstructionListAST_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ("semanticInstructionListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  const GALGAS_semanticInstructionListAST_2D_element * p = (const GALGAS_semanticInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (void) :
mProperty_mSemanticDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::~ GALGAS_semanticDeclarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::init_21_ (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticDeclaration = in_mSemanticDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (const GALGAS_semanticDeclarationAST & inOperand0) :
mProperty_mSemanticDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::class_func_new (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticDeclaration = in_mSemanticDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticDeclarationListAST_2D_element::objectCompare (const GALGAS_semanticDeclarationListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSemanticDeclaration.objectCompare (inOperand.mProperty_mSemanticDeclaration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mSemanticDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::drop (void) {
  mProperty_mSemanticDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ("semanticDeclarationListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  const GALGAS_semanticDeclarationListAST_2D_element * p = (const GALGAS_semanticDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::~ GALGAS_syntaxInstructionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::init_21_ (const GALGAS_syntaxInstructionAST & in_mInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::class_func_new (const GALGAS_syntaxInstructionAST & in_mInstruction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syntaxInstructionList_2D_element::objectCompare (const GALGAS_syntaxInstructionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_syntaxInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ("syntaxInstructionList-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  const GALGAS_syntaxInstructionList_2D_element * p = (const GALGAS_syntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (void) :
mProperty_mSyntaxInstructionList (),
mProperty_mEndOf_5F_instructions () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::~ GALGAS_listOfSyntaxInstructionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::init_21__21_ (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                           const GALGAS_location & in_mEndOf_5F_instructions,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_5F_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                              const GALGAS_location & inOperand1) :
mProperty_mSyntaxInstructionList (inOperand0),
mProperty_mEndOf_5F_instructions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::class_func_new (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                             const GALGAS_location & in_mEndOf_instructions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_listOfSyntaxInstructionList_2D_element::objectCompare (const GALGAS_listOfSyntaxInstructionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSyntaxInstructionList.objectCompare (inOperand.mProperty_mSyntaxInstructionList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEndOf_5F_instructions.objectCompare (inOperand.mProperty_mEndOf_5F_instructions) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_listOfSyntaxInstructionList_2D_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOf_5F_instructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOf_5F_instructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @listOfSyntaxInstructionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @listOfSyntaxInstructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ("listOfSyntaxInstructionList-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  const GALGAS_listOfSyntaxInstructionList_2D_element * p = (const GALGAS_listOfSyntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listOfSyntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element::~ GALGAS_syntaxExtensions_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::init_21__21_ (const GALGAS_string & in_key,
                                                                                     const GALGAS_galgas_33_SyntaxExtensionListAST & in_mList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensions_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (const GALGAS_string & inOperand0,
                                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::class_func_new (const GALGAS_string & in_key,
                                                                                       const GALGAS_galgas_33_SyntaxExtensionListAST & in_mList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syntaxExtensions_2D_element::objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_syntaxExtensions_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensions_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensions_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxExtensions-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxExtensions-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ("syntaxExtensions-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxExtensions_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxExtensions_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensions_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  const GALGAS_syntaxExtensions_2D_element * p = (const GALGAS_syntaxExtensions_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxExtensions_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensions-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

