#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas4", 454)) ;
  GGS_lstring var_lexiqueComponentName_17872 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 457)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_17963 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_18027 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_18090 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_18146 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_18205 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_18277 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_18352 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_18413 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_18460 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_17963, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_18027, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_18090, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_18146, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_18205, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_18352, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_18413, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_18413, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_18277, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_18460, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 490)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_17872, GGS_bool (false), var_templateDelimitorList_17963, var_templateReplacementList_18027, var_lexicalAttributeList_18090, var_lexicalStyleList_18146, var_terminalDeclarationList_18205, var_lexicalMessageDeclarationList_18277, var_lexicalListDeclarationList_18352, var_lexicalRuleList_18413, var_indexingListAST_18460, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 491)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas4", 454)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 457)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas4", 510)) ;
  GGS_lstring var_indexName_19851 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 512)) ;
  GGS_lstring var_indexComment_19934 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 513)) ;
  ioArgument_ioIndexingListAST.plusPlusAssignOperation (GGS_indexingListAST_2E_element::init_21__21_ (var_indexName_19851, var_indexComment_19934, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas4", 510)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 512)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 513)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 521)) ;
  GGS_lstring var_messageName_20274 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 523)) ;
  GGS_lstring var_messageValue_20325 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 524)) ;
  ioArgument_ioLexicalMessageDeclarationList.plusPlusAssignOperation (GGS_lexicalMessageDeclarationListAST_2E_element::init_21__21_ (var_messageName_20274, var_messageValue_20325, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 525)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 523)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 532)) ;
  GGS_lstring var_listName_20653 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 533)) ;
  ioArgument_ioLexicalImplicitRuleList.plusPlusAssignOperation (GGS_lexicalRuleListAST_2E_element::init_21_ (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_20653, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 534)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 532)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 540)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_20990 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_20990, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 542)) ;
  GGS_lexicalInstructionListAST var_instructionList_21056 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_21056, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 548)) ;
  ioArgument_ioLexicalExplicitRuleList.plusPlusAssignOperation (GGS_lexicalRuleListAST_2E_element::init_21_ (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_20990, var_instructionList_21056, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 549)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 540)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas4", 555)) ;
  GGS_lexicalInstructionAST var_instruction_21524 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_21524, inCompiler) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (var_instruction_21524, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 557)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas4", 555)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas4", 563)) ;
  GGS_lexicalExpressionAST var_whileExpression_21838 ;
  nt_lexical_5F_expression_ (var_whileExpression_21838, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 565)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_21898 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_21898, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.plusPlusAssignOperation (GGS_lexicalWhileBranchListAST_2E_element::init_21__21_ (var_whileExpression_21838, var_whileInstructionList_21898, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 571)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas4", 563)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 565)) ;
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
  GGS_lchar var_character_22332 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 577)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_22332, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 577)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_22664 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas4", 584)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_22664, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas4", 584)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_22988 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 591)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 592)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_22988, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 592)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_23363 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_23363, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 603)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_23517 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 607)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_23685 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_23685, inCompiler) ;
        var_functionActualArgumentList_23517.plusPlusAssignOperation (GGS_lexicalFunctionCallActualArgumentListAST_2E_element::init_21_ (var_arg_23685, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 609)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 611)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_23363, var_functionActualArgumentList_23517, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 603)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 607)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 611)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 628)) ;
      GGS_lexicalExpressionAST var_rightExpression_24342 ;
      nt_lexical_5F_factor_ (var_rightExpression_24342, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_24342, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 628)) ;
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
  GGS_lstring var_string_24639 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 637)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_24639, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 637)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 644)) ;
  GGS_lstring var_string_24901 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas4", 646)) ;
  GGS_lstring var_errorMessage_24944 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 647)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_24901, var_errorMessage_24944, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas4", 646)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 647)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_25226 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_25226, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 658)) ;
    GGS_lchar var_upperBound_25354 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 659)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_25226, var_upperBound_25354, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 658)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 659)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_25659 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 667)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_25659, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 667)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 674)) ;
  GGS_lstring var_name_25979 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 675)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_26022 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_26092 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 679)) ;
      GGS_lstring var_sentAttribute_26127 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 680)) ;
      var_sentAttributeList_26022.plusPlusAssignOperation (GGS_sentLexicalAttributeListAST_2E_element::init_21__21_ (var_selector_26092, var_sentAttribute_26127, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 681)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 683)) ;
      GGS_lstring var_selector_26227 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 684)) ;
      GGS_lstring var_sentAttribute_26271 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 685)) ;
      var_sentAttributeList_26022.plusPlusAssignOperation (GGS_sentLexicalAttributeListAST_2E_element::init_21__21_ (var_selector_26227, var_sentAttribute_26271, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 686)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_26366 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 690)) ;
    var_theStyle_26366 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 691)) ;
  } break ;
  case 2: {
    var_theStyle_26366 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 693)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 695)) ;
  GGS_lstring var_errorMessage_26572 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 697)) ;
  GGS_lexicalListEntryListAST var_entryList_26602 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_26602, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 704)) ;
  ioArgument_ioLexicalListDeclarationList.plusPlusAssignOperation (GGS_lexicalListDeclarationListAST_2E_element::init_21__21__21__21__21_ (var_name_25979, var_theStyle_26366, var_errorMessage_26572, var_sentAttributeList_26022, var_entryList_26602, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 705)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 674)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 675)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 679)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 683)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 690)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 691)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 697)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 704)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_entrySpelling_27049 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 711)) ;
  GGS_bool var_isTemplateEndMark_27072 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_27106 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 716)) ;
      var_isTemplateEndMark_27072 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 719)) ;
      var_nonAtomicSelection_27106 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_27305 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 724)) ;
    var_terminalSpelling_27305 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 725)) ;
  } break ;
  case 2: {
    var_terminalSpelling_27305 = var_entrySpelling_27049 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.plusPlusAssignOperation (GGS_lexicalListEntryListAST_2E_element::init_21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (var_entrySpelling_27049, var_terminalSpelling_27305, var_nonAtomicSelection_27106, var_isTemplateEndMark_27072, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 729)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 716)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 719)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 724)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 725)) ;
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
  GGS_lstring var_typeName_27841 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas4", 739)) ;
  GGS_lstring var_name_27883 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 740)) ;
  ioArgument_ioLexicalAttributeList.plusPlusAssignOperation (GGS_lexicalAttributeListAST_2E_element::init_21__21_ (var_typeName_27841, var_name_27883, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 741)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas4", 739)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 740)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_name_28170 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 747)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_28215 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_28313 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 751)) ;
      GGS_lstring var_sentAttribute_28348 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 752)) ;
      var_sentAttributeList_28215.plusPlusAssignOperation (GGS_sentLexicalAttributeListAST_2E_element::init_21__21_ (var_selector_28313, var_sentAttribute_28348, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 753)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 755)) ;
      GGS_lstring var_selector_28448 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 756)) ;
      GGS_lstring var_sentAttribute_28492 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 757)) ;
      var_sentAttributeList_28215.plusPlusAssignOperation (GGS_sentLexicalAttributeListAST_2E_element::init_21__21_ (var_selector_28448, var_sentAttribute_28492, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 758)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_28587 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas4", 760)) ;
  GGS_bool var_nonAtomicSelection_28645 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_28680 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 765)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_28587.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 767)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas4", 767)) ;
        }
      }
      var_theStyle_28587 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 771)) ;
      var_nonAtomicSelection_28645 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 774)) ;
      var_templateEndMark_28680 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 777)) ;
  GGS_lstring var_errorMessage_29071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 778)) ;
  ioArgument_ioTerminalDeclarationList.plusPlusAssignOperation (GGS_terminalDeclarationListAST_2E_element::init_21__21__21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (var_name_28170, var_sentAttributeList_28215, var_errorMessage_29071, var_theStyle_28587, var_nonAtomicSelection_28645, var_templateEndMark_28680, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 779)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 747)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 751)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 755)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 757)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 765)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 771)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 774)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 777)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 778)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 791)) ;
  GGS_lstring var_styleIdentifier_29512 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 792)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_29512.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas4", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_29512.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas4", 794)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_29512.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas4", 796)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_29512.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas4", 797)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 799)) ;
  GGS_lstring var_comment_29952 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 800)) ;
  ioArgument_ioLexicalStyleList.plusPlusAssignOperation (GGS_lexicalStyleListAST_2E_element::init_21__21_ (var_styleIdentifier_29512, var_comment_29952, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 801)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 792)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 799)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i22_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_3328 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_3421 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 78)) ;
    GGS_lstring var_searchListName_3481 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 79)) ;
    var_lexicalSendSearchList_3328.plusPlusAssignOperation (GGS_lexicalSendSearchListAST_2E_element::init_21__21_ (var_attributeName_3421, var_searchListName_3481, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 80)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_3655 ;
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_3727 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 87)) ;
    var_lexicalSendDefaultAction_3655 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_3727, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 90)) ;
    GGS_lstring var_defaultErrorMessageName_3891 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 91)) ;
    var_lexicalSendDefaultAction_3655 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_3891, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_3328, var_lexicalSendDefaultAction_3655, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 91)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_actionName_2758 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 56)) ;
  GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ var_actualArgumentList_2821 = GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 58)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 61)) ;
      GGS_location var_passingModeLocation_2895 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 62)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_3028 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_3028, inCompiler) ;
      var_actualArgumentList_2821.plusPlusAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_2895, var_arg_3028, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 64)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 66)) ;
      GGS_location var_passingModeLocation_3151 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 67)) ;
      GGS_lstring var_attributeName_3222 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 68)) ;
      var_actualArgumentList_2821.plusPlusAssignOperation (GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_3151, var_attributeName_3222, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS__5B_lstring_5D_ var_errorMessageList_3370 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 74)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_3474 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 76)) ;
      var_errorMessageList_3370.plusPlusAssignOperation (var_errorMessageName_3474  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 77)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 79)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 82)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_2758, var_actualArgumentList_2821, var_errorMessageList_3370, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 58)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 61)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 74)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 76)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 79)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 52)) ;
  GGS_lstring var_tagName_2464 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 53)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_2464, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 75)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_3247 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 78)) ;
    GGS_lexicalExpressionAST var_selectExpression_3355 ;
    nt_lexical_5F_expression_ (var_selectExpression_3355, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 80)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_3420 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_3420, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_3247.plusPlusAssignOperation (GGS_lexicalSelectBranchListAST_2E_element::init_21__21_ (var_selectExpression_3355, var_selectInstructionList_3420, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 86)) ;
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 89)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_3682 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_3682, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 95)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_3247, var_defaultInstructionList_3682, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 78)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 89)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_2471 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 51)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_2471, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas4", 50)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas4", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas4", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 55)) ;
  GGS_lstring var_tagName_2581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 57)) ;
  GGS_lstring var_terminalName_2626 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 58)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_2581, var_terminalName_2626, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 69)) ;
  GGS_location var_location_3001 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 70)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_3062 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_3062, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_3212 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_3212, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 81)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_3062, var_lexicalWhileBranchList_3212, var_location_3001, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 52)) ;
  GGS_lstring var_warningMessageName_2506 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 53)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_2506, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 52)) ;
  GGS_lstring var_terminalName_2480 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 53)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_2480, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 52)) ;
  GGS_lstring var_errorMessageName_2492 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 53)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalInstructionListAST_2E_element::init_21_ (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_2492, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 134)) ;
  GGS_lstring var_lexiqueComponentName_5135 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 137)) ;
  GGS_lstring var_lexiqueSuperComponentName_5197 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 140)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_5293 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_5357 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_5293, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_5357, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 149)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_5135, var_lexiqueSuperComponentName_5197, var_templateDelimitorList_5293, var_templateReplacementList_5357, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 150)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 162)) ;
  GGS_lstring var_startString_6008 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 163)) ;
  GGS_bool var_nonAtomicSelection_6029 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_6064 = GGS_bool (false) ;
  GGS_bool var_preserved_6096 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 169)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_6029.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 171)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 171)) ;
        }
      }
      var_nonAtomicSelection_6029 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 175)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_6064.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 177)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 177)) ;
        }
      }
      var_templateEndMark_6064 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 181)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_6096.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 183)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 183)) ;
        }
      }
      var_preserved_6096 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 187)) ;
  GGS_lstring var_endString_6665 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 188)) ;
  ioArgument_ioTemplateDelimitorList.plusPlusAssignOperation (GGS_templateDelimitorListAST_2E_element::init_21__21_nonAtomicSelection_21__21__21_ (var_startString_6008, var_nonAtomicSelection_6029, var_templateEndMark_6064, var_preserved_6096, var_endString_6665, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 189)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 169)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 175)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 187)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 200)) ;
  GGS_lstring var_matchString_7085 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 201)) ;
  GGS_lstring var_replacementString_7115 ;
  GGS_lstring var_replacementFunction_7150 ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 205)) ;
    var_replacementString_7115 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 207)) ;
    var_replacementFunction_7150 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 210)) ;
    var_replacementString_7115 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 211)) ;
    var_replacementFunction_7150 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 212)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.plusPlusAssignOperation (GGS_templateReplacementListAST_2E_element::init_21__21__21_ (var_matchString_7085, var_replacementString_7115, var_replacementFunction_7150, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 214)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 201)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 207)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 210)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 211)) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas4", 28)) ;
  GGS_lstring var_optionComponentName_1570 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 30)) ;
  GGS__5B_commandLineOptionAST_5D_ temp_0 = GGS__5B_commandLineOptionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 31)) ;
  GGS__5B_commandLineOptionAST_5D_ var_options_1631 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_ (var_options_1631, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 36)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_1570, var_options_1631, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_i1_ (GGS__5B_commandLineOptionAST_5D_ & ioArgument_ioCommandLineOptionList,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_2084 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas4", 47)) ;
  GGS_lstring var_mOptionInternalName_2133 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 49)) ;
  GGS_lchar var_mOptionInvocationLetter_2188 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 51)) ;
  GGS_lstring var_mOptionInvocationString_2251 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 53)) ;
  GGS_lstring var_mOptionComment_2315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 54)) ;
  GGS_lstring var_defaultValue_2339 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 55)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_2419 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2419 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 58)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas4", 60)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2339 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 62)) ;
      var_optionDefaultValueKind_2419 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 63)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_2713 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas4", 65)) ;
      var_defaultValue_2339 = GGS_lstring::init_21__21_ (var_v_2713.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas4", 66)), var_v_2713.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_2419 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 67)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.plusPlusAssignOperation (GGS_commandLineOptionAST::init_21__21__21__21__21__21__21_ (var_mOptionTypeName_2084, var_mOptionInternalName_2133, var_mOptionInvocationLetter_2188, var_mOptionInvocationString_2251, var_mOptionComment_2315, var_defaultValue_2339, var_optionDefaultValueKind_2419, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 54)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas4", 60)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas4", 65)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas4", 120)) ;
  GGS_lstring var_mGUIName_4560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 122)) ;
  GGS__5B_lstring_5D_ var_importedOptionList_4597 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_guiSimpleAttributeAST_5D_ var_simpleGlobalAttributes_4655 = GGS__5B_guiSimpleAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_withLexiqueAST_5D_ var_withLexiqueList_4710 = GGS__5B_withLexiqueAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_projectIndexingDescriptorAST_5D_ var_projectExtensionList_4772 = GGS__5B_projectIndexingDescriptorAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas4", 129)) ;
      GGS_lstring var_fileExtension_4859 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 130)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas4", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas4", 132)) ;
      GGS_lstring var_indexingPathSuffix_4925 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 133)) ;
      var_projectExtensionList_4772.plusPlusAssignOperation (GGS_projectIndexingDescriptorAST::init_21__21_ (var_fileExtension_4859, var_indexingPathSuffix_4925, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 134)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4655, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4597, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4710, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 143)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.plusPlusAssignOperation (GGS_galgasGUIComponentAST::init_21__21__21__21__21_ (var_mGUIName_4560, var_importedOptionList_4597, var_simpleGlobalAttributes_4655, var_withLexiqueList_4710, var_projectExtensionList_4772, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 144)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas4", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas4", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 130)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas4", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas4", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 133)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS__5B_withLexiqueAST_5D_ & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 155)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas4", 156)) ;
  GGS_lstring var_lexiqueReference_5645 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 157)) ;
  GGS__5B_guiLabelAST_5D_ var_labels_5686 = GGS__5B_guiLabelAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_guiSimpleAttributeAST_5D_ var_simpleAttributes_5732 = GGS__5B_guiSimpleAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_guiCompoundAttributeAST_5D_ var_compoundAttributes_5790 = GGS__5B_guiCompoundAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas4", 164)) ;
      GGS_uint var_displayStyle_5874 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5874 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 169)) ;
        var_displayStyle_5874 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS__5B_terminalLabelAST_5D_ var_terminalList_6011 = GGS__5B_terminalLabelAST_5D_::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_6082 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 174)) ;
        GGS_uint var_displayFlags_6110 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6110 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 179)) ;
          var_displayFlags_6110 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 182)) ;
          GGS_lbigint var_leadingStrip_6304 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 183)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6304.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 184)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6304.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 185)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 187)) ;
          GGS_lbigint var_endingStrip_6483 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 188)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6483.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 189)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6483.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 190)) ;
            }
          }
          var_displayFlags_6110 = var_leadingStrip_6304.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 192)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 192)).operator_or (var_endingStrip_6483.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas4", 192)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 192)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 193)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_6011.plusPlusAssignOperation (GGS_terminalLabelAST::init_21__21_ (var_terminal_6082, var_displayFlags_6110, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 195)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 197)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5686.plusPlusAssignOperation (GGS_guiLabelAST::init_21__21__21_ (var_displayStyle_5874, var_terminalList_6011, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 199)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 199)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_6896 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 201)) ;
      GGS_lstring var_name_6933 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 202)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 203)) ;
      GGS_lstring var_value_6959 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 204)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_7044 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 206)) ;
        var_value_6959 = GGS_lstring::init_21__21_ (var_value_6959.readProperty_string ().add_operation (var_v_7044.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 207)), var_v_7044.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5790.plusPlusAssignOperation (GGS_guiCompoundAttributeAST::init_21__21__21_ (var_key_6896, var_name_6933, var_value_6959, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 210)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_7225 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 212)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 213)) ;
      GGS_lstring var_value_7273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 214)) ;
      var_simpleAttributes_5732.plusPlusAssignOperation (GGS_guiSimpleAttributeAST::init_21__21_ (var_name_7225, var_value_7273, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 215)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 217)) ;
  ioArgument_ioWithLexiqueList.plusPlusAssignOperation (GGS_withLexiqueAST::init_21__21__21__21_ (var_lexiqueReference_5645, var_labels_5686, var_simpleAttributes_5732, var_compoundAttributes_5790, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 218)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 155)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas4", 156)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 157)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 161)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas4", 164)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 169)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 174)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 179)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 182)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 183)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 187)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 188)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 193)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 197)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 201)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 202)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 203)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 206)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 212)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 213)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 214)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 217)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS__5B_lstring_5D_ & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas4", 225)) ;
  GGS_lstring var_optionReference_7669 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 226)) ;
  ioArgument_ioImportedOptionList.plusPlusAssignOperation (var_optionReference_7669  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 227)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas4", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 226)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS__5B_guiSimpleAttributeAST_5D_ & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mKey_7951 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 234)) ;
  GGS_lstring var_mValue_7973 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 235)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_8046 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 237)) ;
    var_mValue_7973 = GGS_lstring::init_21__21_ (var_mValue_7973.readProperty_string ().add_operation (var_value_8046.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 238)), var_value_8046.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.plusPlusAssignOperation (GGS_guiSimpleAttributeAST::init_21__21_ (var_mKey_7951, var_mValue_7973, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 241)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 234)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 237)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 243)) ;
  GGS_lstring var_syntaxComponentName_10690 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 244)) ;
  GGS_lstring var_importedLexiqueReference_10753 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_10753 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 250)) ;
    var_importedLexiqueReference_10753 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 251)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 252)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_10957 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10957 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 259)) ;
    var_hasTranslateFeature_10957 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 262)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11134 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_11205 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_11134, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_11205, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 273)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.plusPlusAssignOperation (GGS_galgas_33_SyntaxComponentListAST_2E_element::init_21__21__21__21__21_ (var_syntaxComponentName_10690, var_importedLexiqueReference_10753, var_nonterminalDeclarationList_11134, var_ruleList_11205, var_hasTranslateFeature_10957, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 243)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 244)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 250)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 251)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 252)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 259)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 262)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 273)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 288)) ;
  GGS_lstring var_syntaxComponentName_12003 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 289)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 290)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_12069 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_12140 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_12069, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_12140, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 301)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_12003.readProperty_string (), var_syntaxComponentName_12003, var_nonterminalDeclarationList_12069, var_ruleList_12140, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 302)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 288)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 289)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 290)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 301)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 316)) ;
  GGS_lstring var_mNonterminalName_13029 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 317)) ;
  GGS_nonTerminalLabelListAST var_labels_13106 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_13195 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_13195, inCompiler) ;
  var_labels_13106.plusPlusAssignOperation (GGS_nonTerminalLabelListAST_2E_element::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 320)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_13195, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 320)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 320)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 323)) ;
      GGS_lstring var_labelName_13360 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 324)) ;
      GGS_formalParameterListAST var_formalParameters_13449 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_13449, inCompiler) ;
      var_labels_13106.plusPlusAssignOperation (GGS_nonTerminalLabelListAST_2E_element::init_21__21__21_ (var_labelName_13360, var_formalParameters_13449, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 326)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 326)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.plusPlusAssignOperation (GGS_nonterminalDeclarationListAST_2E_element::init_21__21_ (var_mNonterminalName_13029, var_labels_13106, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 328)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 316)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 317)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 323)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 324)) ;
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
  GGS_formalParameterListAST var_mFormalParameters_14076 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_14076, inCompiler) ;
  GGS_location var_endOfArguments_14103 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 338)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 339)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_14220 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_14220, inCompiler) ;
  ioArgument_ioLabelList.plusPlusAssignOperation (GGS_syntaxRuleLabelListAST_2E_element::init_21__21__21__21__21_ (constinArgument_inLabelName, var_mFormalParameters_14076, var_endOfArguments_14103, var_mSyntaxInstructionList_14220, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 346)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 341)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 347)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 339)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 347)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 354)) ;
  GGS_lstring var_mNonterminalName_14690 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 355)) ;
  GGS_lstring var_labelName_14742 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 356)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_14792 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_14742, var_mLabelList_14792, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 361)) ;
      var_labelName_14742 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 362)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.plusPlusAssignOperation (GGS_syntaxRuleListAST_2E_element::init_21__21_ (var_mNonterminalName_14690, var_mLabelList_14792, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 364)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 354)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 355)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 361)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 362)) ;
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
        GGS_semanticInstructionAST var_instruction_15626 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15626, inCompiler) ;
        outArgument_outSyntaxInstructionList.plusPlusAssignOperation (GGS_syntaxInstructionList_2E_element::init_21_ (var_instruction_15626, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 381)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_15759 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15759, inCompiler) ;
        outArgument_outSyntaxInstructionList.plusPlusAssignOperation (GGS_syntaxInstructionList_2E_element::init_21_ (var_instruction_15759, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 384)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 388)) ;
        } break ;
        case 2: {
          GGS_string var_separator_15904 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 390)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_15904.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 391)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 391)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 392)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 392)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 388)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 47)) ;
  GGS_location var_instructionLocation_2289 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 48)) ;
  GGS_semanticExpressionAST var_sentExpression_2390 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sentExpression_2390, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_2289, var_sentExpression_2390, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 47)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mNonterminalName_2900 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 56)) ;
  GGS_actualParameterListAST var_mActualParameterList_3036 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_mActualParameterList_3036, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_3179 ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_3179 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 63)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_3179, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21_ (var_mNonterminalName_2900.readProperty_location (), var_mNonterminalName_2900, var_mActualParameterList_3036, var_grammarInstructionSyntaxDirectedTranslationResult_3179, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 56)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 63)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_1511 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 26)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_1612 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_1612, inCompiler) ;
  GGS__5B__32_lstring_5D_ var_indexNameList_1680 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1680, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946 ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_1511.readProperty_location (), var_terminalName_1511, var_actualInputParameterList_1612, var_indexNameList_1680, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_ (GGS__5B__32_lstring_5D_ & outArgument_outIndexNameList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__5B__32_lstring_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_3142 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 59)) ;
      GGS_lstring var_postfixName_3207 ;
      switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
        var_postfixName_3207 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas4", 62)) ;
      } break ;
      case 2: {
        var_postfixName_3207 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 64)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.plusPlusAssignOperation (GGS__32_lstring::init_21__21_ (var_indexName_3142, var_postfixName_3207, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 66)) ;
      if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 68)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 59)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 64)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 68)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas4", 69)) ;
  GGS_location var_mSelectInstructionLocation_3226 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 70)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_3278 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_3407 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3407, inCompiler) ;
  var_mSelectBranchList_3278.plusPlusAssignOperation (GGS_listOfSyntaxInstructionList_2E_element::init_21__21_ (var_il_3407, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 73)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas4", 75)) ;
    GGS_syntaxInstructionList var_instructionList_3560 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3560, inCompiler) ;
    var_mSelectBranchList_3278.plusPlusAssignOperation (GGS_listOfSyntaxInstructionList_2E_element::init_21__21_ (var_instructionList_3560, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 77)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 77)) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas4", 80)) ;
  GGS_location var_endOf_5F_select_5F_instruction_3676 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 81)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_3226, var_mSelectBranchList_3278, var_endOf_5F_select_5F_instruction_3676, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas4", 69)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas4", 75)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas4", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 73)) ;
  GGS_location var_mRepeatInstructionLocation_3452 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 74)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_3572 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_3572, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_3606 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 76)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_3659 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 79)) ;
    GGS_syntaxInstructionList var_mInstructionList_3815 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_3815, inCompiler) ;
    var_mRepeatBranchList_3659.plusPlusAssignOperation (GGS_listOfSyntaxInstructionList_2E_element::init_21__21_ (var_mInstructionList_3815, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 81)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 81)) ;
    if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 84)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_3934 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 85)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_3452, var_mRepeatedInstructionList_3572, var_endOf_5F_repeated_5F_instructions_3606, var_mRepeatBranchList_3659, var_endOf_5F_repeat_5F_instruction_3934, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 73)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 79)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 84)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbool var_hasIndexing_1943 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1943 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 38)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_1943 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 40)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 43)) ;
  GGS_lstring var_mGrammarName_2145 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 44)) ;
  GGS_lstring var_mGrammarClass_2227 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 45)) ;
  GGS_bool var_hasTranslateFeature_2282 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2282 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 51)) ;
    var_hasTranslateFeature_2282 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 54)) ;
  GGS__5B_lstring_5D_ var_syntaxComponents_2457 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 58)) ;
    GGS_lstring var_syntaxComponent_2540 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 59)) ;
    var_syntaxComponents_2457.plusPlusAssignOperation (var_syntaxComponent_2540  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 60)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_startSymbol_2673 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 64)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_2719 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 66)), inCompiler COMMA_HERE), var_mLabelList_2719, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 69)) ;
      GGS_lstring var_labelName_2926 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 70)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_2926, var_mLabelList_2719, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS__5B_lstring_5D_ var_unusedNonterminalList_3069 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 77)) ;
      GGS_lstring var_nonterminalSymbolName_3182 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 78)) ;
      var_unusedNonterminalList_3069.plusPlusAssignOperation (var_nonterminalSymbolName_3182  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 79)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 82)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_1943, var_mGrammarName_2145, var_mGrammarClass_2227, var_syntaxComponents_2457, var_startSymbol_2673, var_mLabelList_2719, var_unusedNonterminalList_3069, var_hasTranslateFeature_2282, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 43)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 45)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 58)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 59)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 64)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 69)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 70)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 77)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 78)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_stringset var_argumentNameSet_3907 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_formalParameterList_3961 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 103)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_argumentName_4083 ;
      nt_label_5F_formal_5F_parameter_ (ioArgument_ioDeclarations, var_argumentName_4083, var_formalParameterList_3961, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_3907.getter_contains (var_argumentName_4083.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 108)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_4083.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_4083.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 109)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 109)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 109)) ;
        }
      }
      var_argumentNameSet_3907.plusPlusAssignOperation (var_argumentName_4083.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 111)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 116)) ;
  ioArgument_ioLabelList.plusPlusAssignOperation (GGS_nonTerminalLabelListAST_2E_element::init_21__21__21_ (constinArgument_inLabelName, var_formalParameterList_3961, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 117)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 103)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_4810 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 126)) ;
  GGS_lstring var_typeName_4885 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4885, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 128)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_4810, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 131)), var_typeName_4885, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 126)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 128)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 143)) ;
  GGS_lstring var_selector_5430 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 144)) ;
  GGS_lstring var_typeName_5504 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5504, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 146)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_5430, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 149)), var_typeName_5504, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 147)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 143)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_6061 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 161)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 162)) ;
  GGS_lstring var_typeName_6136 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6136, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 164)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_6061, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 167)), var_typeName_6136, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 161)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 162)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 164)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 179)) ;
  GGS_lstring var_selector_6685 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 180)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 181)) ;
  GGS_lstring var_typeName_6769 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6769, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 183)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_6685, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 186)), var_typeName_6769, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 184)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 181)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 183)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_7327 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 198)) ;
  GGS_lstring var_typeName_7392 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_7392, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 200)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_7327, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 203)), var_typeName_7392, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 201)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 198)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 200)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 215)) ;
  GGS_lstring var_selector_7937 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 216)) ;
  GGS_lstring var_typeName_8011 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_8011, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 218)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_7937, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 221)), var_typeName_8011, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 215)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 218)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_8564 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 233)) ;
  GGS_lstring var_typeName_8629 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_8629, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 235)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_8564, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 238)), var_typeName_8629, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 233)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 235)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 250)) ;
  GGS_lstring var_selector_9173 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 251)) ;
  GGS_lstring var_typeName_9247 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_9247, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 253)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (var_selector_9173, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 254)), var_typeName_9247, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 254)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 250)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 253)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 38)) ;
  GGS__5B_semanticInstructionAST_5D_ var_prologueInstructionList_2105 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_2105, inCompiler) ;
  GGS_location var_endOfPrologue_2138 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 41)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.plusPlusAssignOperation (GGS_prologueEpilogueList_2E_element::init_21__21_ (var_prologueInstructionList_2105, var_endOfPrologue_2138, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 38)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 53)) ;
  GGS__5B_semanticInstructionAST_5D_ var_prologueInstructionList_2677 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_2677, inCompiler) ;
  GGS_location var_endOfPrologue_2710 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 56)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.plusPlusAssignOperation (GGS_prologueEpilogueList_2E_element::init_21__21_ (var_prologueInstructionList_2677, var_endOfPrologue_2710, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 53)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 68)) ;
  GGS_lstring var_mSourceFileExtension_3203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 70)) ;
  GGS_lstring var_mSourceFileHelp_3275 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 71)) ;
  GGS_lstring var_referenceGrammar_3335 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3335 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas4", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 77)) ;
    var_referenceGrammar_3335 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 78)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_3512 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 81)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_3512.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3512.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 83)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_3721 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 87)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_3721.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3721.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 89)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_lstring var_sourceFileVariableName_3894 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 92)) ;
  GGS_bool var_isUnused_3926 = var_sourceFileVariableName_3894.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 95)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mInstructionList_4074 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_4074, inCompiler) ;
  GGS_location var_endOfInstructionList_4100 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 98)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.plusPlusAssignOperation (GGS_programRuleList_2E_element::init_21__21__21__21__21__21__21_ (var_mSourceFileExtension_3203, var_mSourceFileHelp_3275, var_sourceFileVariableName_3894, var_isUnused_3926, var_referenceGrammar_3335, var_mInstructionList_4074, var_endOfInstructionList_4100, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 99)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 71)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 81)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 95)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 98)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext::GGS_lexiqueAnalysisContext (void) :
mProperty_mLexiqueName (),
mProperty_mLexicalRoutineMessageMap (),
mProperty_mLexicalFunctionMap (),
mProperty_mLexicalMessageMap (),
mProperty_mTerminalMap (),
mProperty_mTerminalList (),
mProperty_mLexicalAttributeMap (),
mProperty_mLexicalTokenListMap (),
mProperty_mUnicodeStringToGenerate (),
mProperty_mTemplateDelimitorList (),
mProperty_mStyleMap (),
mProperty_mUnicodeTestFunctions () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext::GGS_lexiqueAnalysisContext (const GGS_lexiqueAnalysisContext & inSource) :
mProperty_mLexiqueName (inSource.mProperty_mLexiqueName),
mProperty_mLexicalRoutineMessageMap (inSource.mProperty_mLexicalRoutineMessageMap),
mProperty_mLexicalFunctionMap (inSource.mProperty_mLexicalFunctionMap),
mProperty_mLexicalMessageMap (inSource.mProperty_mLexicalMessageMap),
mProperty_mTerminalMap (inSource.mProperty_mTerminalMap),
mProperty_mTerminalList (inSource.mProperty_mTerminalList),
mProperty_mLexicalAttributeMap (inSource.mProperty_mLexicalAttributeMap),
mProperty_mLexicalTokenListMap (inSource.mProperty_mLexicalTokenListMap),
mProperty_mUnicodeStringToGenerate (inSource.mProperty_mUnicodeStringToGenerate),
mProperty_mTemplateDelimitorList (inSource.mProperty_mTemplateDelimitorList),
mProperty_mStyleMap (inSource.mProperty_mStyleMap),
mProperty_mUnicodeTestFunctions (inSource.mProperty_mUnicodeTestFunctions) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext & GGS_lexiqueAnalysisContext::operator = (const GGS_lexiqueAnalysisContext & inSource) {
  mProperty_mLexiqueName = inSource.mProperty_mLexiqueName ;
  mProperty_mLexicalRoutineMessageMap = inSource.mProperty_mLexicalRoutineMessageMap ;
  mProperty_mLexicalFunctionMap = inSource.mProperty_mLexicalFunctionMap ;
  mProperty_mLexicalMessageMap = inSource.mProperty_mLexicalMessageMap ;
  mProperty_mTerminalMap = inSource.mProperty_mTerminalMap ;
  mProperty_mTerminalList = inSource.mProperty_mTerminalList ;
  mProperty_mLexicalAttributeMap = inSource.mProperty_mLexicalAttributeMap ;
  mProperty_mLexicalTokenListMap = inSource.mProperty_mLexicalTokenListMap ;
  mProperty_mUnicodeStringToGenerate = inSource.mProperty_mUnicodeStringToGenerate ;
  mProperty_mTemplateDelimitorList = inSource.mProperty_mTemplateDelimitorList ;
  mProperty_mStyleMap = inSource.mProperty_mStyleMap ;
  mProperty_mUnicodeTestFunctions = inSource.mProperty_mUnicodeTestFunctions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexiqueAnalysisContext GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mLexiqueName,
                                                                                                             const GGS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                                                                                             const GGS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                                                                                             const GGS_lexicalMessageMap & in_mLexicalMessageMap,
                                                                                                             const GGS_terminalMap & in_mTerminalMap,
                                                                                                             const GGS_terminalList & in_mTerminalList,
                                                                                                             const GGS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                                                                                             const GGS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                                                                                             const GGS_stringset & in_mUnicodeStringToGenerate,
                                                                                                             const GGS_templateDelimitorList & in_mTemplateDelimitorList,
                                                                                                             const GGS_styleMap & in_mStyleMap,
                                                                                                             const GGS_stringset & in_mUnicodeTestFunctions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexiqueAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueName = in_mLexiqueName ;
  result.mProperty_mLexicalRoutineMessageMap = in_mLexicalRoutineMessageMap ;
  result.mProperty_mLexicalFunctionMap = in_mLexicalFunctionMap ;
  result.mProperty_mLexicalMessageMap = in_mLexicalMessageMap ;
  result.mProperty_mTerminalMap = in_mTerminalMap ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLexicalAttributeMap = in_mLexicalAttributeMap ;
  result.mProperty_mLexicalTokenListMap = in_mLexicalTokenListMap ;
  result.mProperty_mUnicodeStringToGenerate = in_mUnicodeStringToGenerate ;
  result.mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  result.mProperty_mStyleMap = in_mStyleMap ;
  result.mProperty_mUnicodeTestFunctions = in_mUnicodeTestFunctions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext::GGS_lexiqueAnalysisContext (const GGS_string & inOperand0,
                                                        const GGS_lexicalRoutineMap & inOperand1,
                                                        const GGS_lexicalFunctionMap & inOperand2,
                                                        const GGS_lexicalMessageMap & inOperand3,
                                                        const GGS_terminalMap & inOperand4,
                                                        const GGS_terminalList & inOperand5,
                                                        const GGS_lexicalAttributeMap & inOperand6,
                                                        const GGS_lexicalExplicitTokenListMapMap & inOperand7,
                                                        const GGS_stringset & inOperand8,
                                                        const GGS_templateDelimitorList & inOperand9,
                                                        const GGS_styleMap & inOperand10,
                                                        const GGS_stringset & inOperand11) :
mProperty_mLexiqueName (inOperand0),
mProperty_mLexicalRoutineMessageMap (inOperand1),
mProperty_mLexicalFunctionMap (inOperand2),
mProperty_mLexicalMessageMap (inOperand3),
mProperty_mTerminalMap (inOperand4),
mProperty_mTerminalList (inOperand5),
mProperty_mLexicalAttributeMap (inOperand6),
mProperty_mLexicalTokenListMap (inOperand7),
mProperty_mUnicodeStringToGenerate (inOperand8),
mProperty_mTemplateDelimitorList (inOperand9),
mProperty_mStyleMap (inOperand10),
mProperty_mUnicodeTestFunctions (inOperand11) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mStyleMap.isValid () && mProperty_mUnicodeTestFunctions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueAnalysisContext::drop (void) {
  mProperty_mLexiqueName.drop () ;
  mProperty_mLexicalRoutineMessageMap.drop () ;
  mProperty_mLexicalFunctionMap.drop () ;
  mProperty_mLexicalMessageMap.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLexicalAttributeMap.drop () ;
  mProperty_mLexicalTokenListMap.drop () ;
  mProperty_mUnicodeStringToGenerate.drop () ;
  mProperty_mTemplateDelimitorList.drop () ;
  mProperty_mStyleMap.drop () ;
  mProperty_mUnicodeTestFunctions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueAnalysisContext::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexiqueAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalRoutineMessageMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalMessageMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalAttributeMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalTokenListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnicodeStringToGenerate.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyleMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnicodeTestFunctions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueAnalysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (void) :
mProperty_mSequenceNumber (),
mProperty_mMainGroupReference (),
mProperty_mMainGroupChildrenRefs (),
mProperty_mProjectObjectReference (),
mProperty_mGroupList (),
mProperty_mToolTargetList (),
mProperty_mAppTargetList (),
mProperty_mCFileList (),
mProperty_mCppFileList (),
mProperty_m_5F_Swift_5F_FileList (),
mProperty_m_5F_M_5F_FileList (),
mProperty_m_5F_MM_5F_FileList (),
mProperty_mFrameworkFileList (),
mProperty_mHeaderFileList (),
mProperty_mBuildFileList (),
mProperty_mDefaultConfigurationRef (),
mProperty_mDefaultConfigurationSettingList (),
mProperty_mProjectBuildConfigurationRef (),
mProperty_mInfoPlistFileList (),
mProperty_mXIB_5F_fileList (),
mProperty_mTIFF_5F_fileList (),
mProperty_mICNS_5F_fileList (),
mProperty_mApplicationBundleName (),
mProperty_mProjectName () {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_XcodeProjectDescriptor & inSource) :
mProperty_mSequenceNumber (inSource.mProperty_mSequenceNumber),
mProperty_mMainGroupReference (inSource.mProperty_mMainGroupReference),
mProperty_mMainGroupChildrenRefs (inSource.mProperty_mMainGroupChildrenRefs),
mProperty_mProjectObjectReference (inSource.mProperty_mProjectObjectReference),
mProperty_mGroupList (inSource.mProperty_mGroupList),
mProperty_mToolTargetList (inSource.mProperty_mToolTargetList),
mProperty_mAppTargetList (inSource.mProperty_mAppTargetList),
mProperty_mCFileList (inSource.mProperty_mCFileList),
mProperty_mCppFileList (inSource.mProperty_mCppFileList),
mProperty_m_5F_Swift_5F_FileList (inSource.mProperty_m_5F_Swift_5F_FileList),
mProperty_m_5F_M_5F_FileList (inSource.mProperty_m_5F_M_5F_FileList),
mProperty_m_5F_MM_5F_FileList (inSource.mProperty_m_5F_MM_5F_FileList),
mProperty_mFrameworkFileList (inSource.mProperty_mFrameworkFileList),
mProperty_mHeaderFileList (inSource.mProperty_mHeaderFileList),
mProperty_mBuildFileList (inSource.mProperty_mBuildFileList),
mProperty_mDefaultConfigurationRef (inSource.mProperty_mDefaultConfigurationRef),
mProperty_mDefaultConfigurationSettingList (inSource.mProperty_mDefaultConfigurationSettingList),
mProperty_mProjectBuildConfigurationRef (inSource.mProperty_mProjectBuildConfigurationRef),
mProperty_mInfoPlistFileList (inSource.mProperty_mInfoPlistFileList),
mProperty_mXIB_5F_fileList (inSource.mProperty_mXIB_5F_fileList),
mProperty_mTIFF_5F_fileList (inSource.mProperty_mTIFF_5F_fileList),
mProperty_mICNS_5F_fileList (inSource.mProperty_mICNS_5F_fileList),
mProperty_mApplicationBundleName (inSource.mProperty_mApplicationBundleName),
mProperty_mProjectName (inSource.mProperty_mProjectName) {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor & GGS_XcodeProjectDescriptor::operator = (const GGS_XcodeProjectDescriptor & inSource) {
  mProperty_mSequenceNumber = inSource.mProperty_mSequenceNumber ;
  mProperty_mMainGroupReference = inSource.mProperty_mMainGroupReference ;
  mProperty_mMainGroupChildrenRefs = inSource.mProperty_mMainGroupChildrenRefs ;
  mProperty_mProjectObjectReference = inSource.mProperty_mProjectObjectReference ;
  mProperty_mGroupList = inSource.mProperty_mGroupList ;
  mProperty_mToolTargetList = inSource.mProperty_mToolTargetList ;
  mProperty_mAppTargetList = inSource.mProperty_mAppTargetList ;
  mProperty_mCFileList = inSource.mProperty_mCFileList ;
  mProperty_mCppFileList = inSource.mProperty_mCppFileList ;
  mProperty_m_5F_Swift_5F_FileList = inSource.mProperty_m_5F_Swift_5F_FileList ;
  mProperty_m_5F_M_5F_FileList = inSource.mProperty_m_5F_M_5F_FileList ;
  mProperty_m_5F_MM_5F_FileList = inSource.mProperty_m_5F_MM_5F_FileList ;
  mProperty_mFrameworkFileList = inSource.mProperty_mFrameworkFileList ;
  mProperty_mHeaderFileList = inSource.mProperty_mHeaderFileList ;
  mProperty_mBuildFileList = inSource.mProperty_mBuildFileList ;
  mProperty_mDefaultConfigurationRef = inSource.mProperty_mDefaultConfigurationRef ;
  mProperty_mDefaultConfigurationSettingList = inSource.mProperty_mDefaultConfigurationSettingList ;
  mProperty_mProjectBuildConfigurationRef = inSource.mProperty_mProjectBuildConfigurationRef ;
  mProperty_mInfoPlistFileList = inSource.mProperty_mInfoPlistFileList ;
  mProperty_mXIB_5F_fileList = inSource.mProperty_mXIB_5F_fileList ;
  mProperty_mTIFF_5F_fileList = inSource.mProperty_mTIFF_5F_fileList ;
  mProperty_mICNS_5F_fileList = inSource.mProperty_mICNS_5F_fileList ;
  mProperty_mApplicationBundleName = inSource.mProperty_mApplicationBundleName ;
  mProperty_mProjectName = inSource.mProperty_mProjectName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mSequenceNumber = GGS_uint (uint32_t (0U)) ;
  mProperty_mMainGroupReference = GGS_string::makeEmptyString () ;
  mProperty_mMainGroupChildrenRefs = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectObjectReference = GGS_string::makeEmptyString () ;
  mProperty_mGroupList = GGS__5B_XCodeGroup_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mToolTargetList = GGS__5B_XCodeToolTarget_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mAppTargetList = GGS__5B_XCodeAppTarget_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mCFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mCppFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_Swift_5F_FileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_M_5F_FileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_MM_5F_FileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mFrameworkFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mHeaderFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mBuildFileList = GGS__5B_BuildFile_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mDefaultConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mDefaultConfigurationSettingList = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectBuildConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mInfoPlistFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mXIB_5F_fileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mTIFF_5F_fileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mICNS_5F_fileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mApplicationBundleName = GGS_string::makeEmptyString () ;
  mProperty_mProjectName = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_uint & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS__5B_string_5D_ & inOperand2,
                                                        const GGS_string & inOperand3,
                                                        const GGS__5B_XCodeGroup_5D_ & inOperand4,
                                                        const GGS__5B_XCodeToolTarget_5D_ & inOperand5,
                                                        const GGS__5B_XCodeAppTarget_5D_ & inOperand6,
                                                        const GGS__5B__32_string_5D_ & inOperand7,
                                                        const GGS__5B__32_string_5D_ & inOperand8,
                                                        const GGS__5B__32_string_5D_ & inOperand9,
                                                        const GGS__5B__32_string_5D_ & inOperand10,
                                                        const GGS__5B__32_string_5D_ & inOperand11,
                                                        const GGS__5B__32_string_5D_ & inOperand12,
                                                        const GGS__5B__32_string_5D_ & inOperand13,
                                                        const GGS__5B_BuildFile_5D_ & inOperand14,
                                                        const GGS_string & inOperand15,
                                                        const GGS__5B_string_5D_ & inOperand16,
                                                        const GGS_string & inOperand17,
                                                        const GGS__5B__32_string_5D_ & inOperand18,
                                                        const GGS__5B__32_string_5D_ & inOperand19,
                                                        const GGS__5B__32_string_5D_ & inOperand20,
                                                        const GGS__5B__32_string_5D_ & inOperand21,
                                                        const GGS_string & inOperand22,
                                                        const GGS_string & inOperand23) :
mProperty_mSequenceNumber (inOperand0),
mProperty_mMainGroupReference (inOperand1),
mProperty_mMainGroupChildrenRefs (inOperand2),
mProperty_mProjectObjectReference (inOperand3),
mProperty_mGroupList (inOperand4),
mProperty_mToolTargetList (inOperand5),
mProperty_mAppTargetList (inOperand6),
mProperty_mCFileList (inOperand7),
mProperty_mCppFileList (inOperand8),
mProperty_m_5F_Swift_5F_FileList (inOperand9),
mProperty_m_5F_M_5F_FileList (inOperand10),
mProperty_m_5F_MM_5F_FileList (inOperand11),
mProperty_mFrameworkFileList (inOperand12),
mProperty_mHeaderFileList (inOperand13),
mProperty_mBuildFileList (inOperand14),
mProperty_mDefaultConfigurationRef (inOperand15),
mProperty_mDefaultConfigurationSettingList (inOperand16),
mProperty_mProjectBuildConfigurationRef (inOperand17),
mProperty_mInfoPlistFileList (inOperand18),
mProperty_mXIB_5F_fileList (inOperand19),
mProperty_mTIFF_5F_fileList (inOperand20),
mProperty_mICNS_5F_fileList (inOperand21),
mProperty_mApplicationBundleName (inOperand22),
mProperty_mProjectName (inOperand23) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCFileList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_Swift_5F_FileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () && mProperty_mApplicationBundleName.isValid () && mProperty_mProjectName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::drop (void) {
  mProperty_mSequenceNumber.drop () ;
  mProperty_mMainGroupReference.drop () ;
  mProperty_mMainGroupChildrenRefs.drop () ;
  mProperty_mProjectObjectReference.drop () ;
  mProperty_mGroupList.drop () ;
  mProperty_mToolTargetList.drop () ;
  mProperty_mAppTargetList.drop () ;
  mProperty_mCFileList.drop () ;
  mProperty_mCppFileList.drop () ;
  mProperty_m_5F_Swift_5F_FileList.drop () ;
  mProperty_m_5F_M_5F_FileList.drop () ;
  mProperty_m_5F_MM_5F_FileList.drop () ;
  mProperty_mFrameworkFileList.drop () ;
  mProperty_mHeaderFileList.drop () ;
  mProperty_mBuildFileList.drop () ;
  mProperty_mDefaultConfigurationRef.drop () ;
  mProperty_mDefaultConfigurationSettingList.drop () ;
  mProperty_mProjectBuildConfigurationRef.drop () ;
  mProperty_mInfoPlistFileList.drop () ;
  mProperty_mXIB_5F_fileList.drop () ;
  mProperty_mTIFF_5F_fileList.drop () ;
  mProperty_mICNS_5F_fileList.drop () ;
  mProperty_mApplicationBundleName.drop () ;
  mProperty_mProjectName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XcodeProjectDescriptor:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_Swift_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mApplicationBundleName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XcodeProjectDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 41)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 42)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 50)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 51)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 59)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 60)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 68)) ;
  }
  ioObject.mProperty_mFrameworkFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 69)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 77)) ;
  }
  ioObject.mProperty_m_5F_Swift_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 78)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 86)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 87)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GGS_XcodeProjectDescriptor & ioObject,
                                const GGS_string constinArgument_inFileName,
                                GGS_string & outArgument_outFileRef,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 95)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 96)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 104)) ;
  }
  ioObject.mProperty_mCppFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 105)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addCFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 113)) ;
  }
  ioObject.mProperty_mCFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 114)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inFileName,
                                    GGS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 122)) ;
  }
  ioObject.mProperty_mHeaderFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 123)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileReference,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outBuildRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 132)) ;
  }
  ioObject.mProperty_mBuildFileList.plusPlusAssignOperation (GGS_BuildFile::init_21__21__21_ (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 133)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS__5B_string_5D_ constinArgument_inSourceList,
                                    const GGS__5B_string_5D_ constinArgument_inToolFrameworksFileRefList,
                                    const GGS__5B_string_5D_ constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 146)) ;
  }
  GGS_string var_buildPhaseRef_5934 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5934, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 147)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 148)) ;
  }
  GGS_string var_buildConfigurationListRef_6031 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_6031, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 149)) ;
  }
  GGS_string var_buildConfigurationRef_6094 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_6094, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 150)) ;
  }
  GGS_string var_frameworkBuildRef_6153 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_6153, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 151)) ;
  }
  ioObject.mProperty_mToolTargetList.plusPlusAssignOperation (GGS_XCodeToolTarget::init_21__21__21__21__21__21__21__21__21__21__21_ (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5934, var_buildConfigurationListRef_6031, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_6094, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_6153, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 152)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS__5B_string_5D_ constinArgument_inSourceList,
                                   const GGS__5B_string_5D_ constinArgument_inFrameworksFileRefList,
                                   const GGS__5B_string_5D_ constinArgument_inResourceFileBuildRefs,
                                   const GGS__5B_string_5D_ constinArgument_inBuildConfigurationSettingList,
                                   const GGS__5B_string_5D_ constinArgument_inDependentTargetRefList,
                                   const GGS__5B__32_string_5D_ constinArgument_inProductCopyList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 178)) ;
  }
  GGS_string var_buildPhaseRef_7208 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_7208, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 179)) ;
  }
  GGS_string var_targetRef_7259 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_7259, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 180)) ;
  }
  GGS_string var_buildConfigurationListRef_7306 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_7306, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 181)) ;
  }
  GGS_string var_buildConfigurationRef_7369 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_7369, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 182)) ;
  }
  GGS_string var_frameworkBuildRef_7428 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_7428, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 183)) ;
  }
  GGS_string var_resourceBuildRef_7483 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_7483, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 184)) ;
  }
  GGS__5B__32_string_5D_ var_dependentTargets_7518 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_7556 (constinArgument_inDependentTargetRefList) ;
  while (enumerator_7556.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_7622 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_7622, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 187)) ;
    }
    var_dependentTargets_7518.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_dependencyBuildRef_7622, enumerator_7556.current (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 188)) ;
    enumerator_7556.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_resourceFileBuildRefs_7718 = constinArgument_inResourceFileBuildRefs ;
  UpEnumerator__5B__32_string_5D_ enumerator_7781 (constinArgument_inProductCopyList) ;
  while (enumerator_7781.hasCurrentObject ()) {
    GGS_string var_buildRef_7900 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_7781.current (HERE).readProperty_mValue_30_ (), enumerator_7781.current (HERE).readProperty_mValue_31_ (), var_buildRef_7900, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 192)) ;
    }
    var_resourceFileBuildRefs_7718.plusPlusAssignOperation (var_buildRef_7900  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 193)) ;
    enumerator_7781.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.plusPlusAssignOperation (GGS_XCodeAppTarget::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_targetRef_7259, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_7208, var_buildConfigurationListRef_7306, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_7369, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_7428, var_dependentTargets_7518, var_resourceBuildRef_7483, var_resourceFileBuildRefs_7718, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS__5B_string_5D_ constinArgument_inChildrenRefs,
                               GGS_string & outArgument_outGroupRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 221)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 224)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 227)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 229)) ;
  }
  ioObject.mProperty_mGroupList.plusPlusAssignOperation (GGS_XCodeGroup::init_21__21__21__21_ (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 230)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GGS_XcodeProjectDescriptor & ioObject,
                                        const GGS_string constinArgument_inGroupName,
                                        const GGS_string constinArgument_inGroupPath,
                                        const GGS_stringset constinArgument_inFileNames,
                                        GGS__5B_string_5D_ & ioArgument_ioCFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioCppFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioSwiftFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioResourceFileBuildRefs,
                                        GGS_string & outArgument_outGroupRef,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 246)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 249)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 252)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 254)) ;
  }
  GGS__5B_string_5D_ var_childrenRefs_10090 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringset enumerator_10116 (constinArgument_inFileNames) ;
  while (enumerator_10116.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 258)).objectCompare (GGS_string ("c"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_string var_cFileRef_10236 ;
        {
        extensionSetter_addCFile (ioObject, enumerator_10116.current_key (HERE), var_cFileRef_10236, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 259)) ;
        }
        var_childrenRefs_10090.plusPlusAssignOperation (var_cFileRef_10236  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 260)) ;
        GGS_string var_buildRef_10362 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cFileRef_10236, enumerator_10116.current_key (HERE), var_buildRef_10362, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 261)) ;
        }
        ioArgument_ioCFileBuildRefs.plusPlusAssignOperation (var_buildRef_10362  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 262)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 263)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_string var_cppFileRef_10512 ;
          {
          extensionSetter_addCppFile (ioObject, enumerator_10116.current_key (HERE), var_cppFileRef_10512, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 264)) ;
          }
          var_childrenRefs_10090.plusPlusAssignOperation (var_cppFileRef_10512  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 265)) ;
          GGS_string var_buildRef_10644 ;
          {
          extensionSetter_addBuildFile (ioObject, var_cppFileRef_10512, enumerator_10116.current_key (HERE), var_buildRef_10644, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 266)) ;
          }
          ioArgument_ioCppFileBuildRefs.plusPlusAssignOperation (var_buildRef_10644  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 267)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 268)).objectCompare (GGS_string ("h"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string var_headerFileRef_10797 ;
            {
            extensionSetter_addHeaderFile (ioObject, enumerator_10116.current_key (HERE), var_headerFileRef_10797, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 269)) ;
            }
            var_childrenRefs_10090.plusPlusAssignOperation (var_headerFileRef_10797  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 270)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 271)).objectCompare (GGS_string ("framework"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_string var_framework_5F_FileRef_10965 ;
              {
              extensionSetter_addFrameworkFile (ioObject, enumerator_10116.current_key (HERE), var_framework_5F_FileRef_10965, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 272)) ;
              }
              GGS_string var_buildRef_11077 ;
              {
              extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10965, enumerator_10116.current_key (HERE), var_buildRef_11077, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 273)) ;
              }
              var_childrenRefs_10090.plusPlusAssignOperation (var_framework_5F_FileRef_10965  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 274)) ;
              ioArgument_ioFrameWorkFileBuildRefs.plusPlusAssignOperation (var_buildRef_11077  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 275)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 276)).objectCompare (GGS_string ("plist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GGS_string var_resource_5F_FileRef_11284 ;
                {
                extensionSetter_addInfoPlistFile (ioObject, enumerator_10116.current_key (HERE), var_resource_5F_FileRef_11284, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 277)) ;
                }
                var_childrenRefs_10090.plusPlusAssignOperation (var_resource_5F_FileRef_11284  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 278)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 279)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GGS_string var_resource_5F_FileRef_11446 ;
                  {
                  extensionSetter_addXIBFile (ioObject, enumerator_10116.current_key (HERE), var_resource_5F_FileRef_11446, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 280)) ;
                  }
                  var_childrenRefs_10090.plusPlusAssignOperation (var_resource_5F_FileRef_11446  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 281)) ;
                  GGS_string var_buildRef_11596 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11446, enumerator_10116.current_key (HERE), var_buildRef_11596, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 282)) ;
                  }
                  ioArgument_ioResourceFileBuildRefs.plusPlusAssignOperation (var_buildRef_11596  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 283)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 284)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_string var_resource_5F_FileRef_11756 ;
                    {
                    extensionSetter_addTIFF_5F_file (ioObject, enumerator_10116.current_key (HERE), var_resource_5F_FileRef_11756, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 285)) ;
                    }
                    var_childrenRefs_10090.plusPlusAssignOperation (var_resource_5F_FileRef_11756  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 286)) ;
                    GGS_string var_buildRef_11906 ;
                    {
                    extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11756, enumerator_10116.current_key (HERE), var_buildRef_11906, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 287)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.plusPlusAssignOperation (var_buildRef_11906  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 288)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 289)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      GGS_string var_resource_5F_FileRef_12066 ;
                      {
                      extensionSetter_addICNS_5F_file (ioObject, enumerator_10116.current_key (HERE), var_resource_5F_FileRef_12066, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 290)) ;
                      }
                      var_childrenRefs_10090.plusPlusAssignOperation (var_resource_5F_FileRef_12066  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 291)) ;
                      GGS_string var_buildRef_12216 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_12066, enumerator_10116.current_key (HERE), var_buildRef_12216, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 292)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.plusPlusAssignOperation (var_buildRef_12216  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 293)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GalgasBool test_14 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_14) {
                      test_14 = GGS_bool (ComparisonKind::equal, enumerator_10116.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 294)).objectCompare (GGS_string ("swift"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_14) {
                        GGS_string var_swiftFileRef_12377 ;
                        {
                        extensionSetter_addSwiftFile (ioObject, enumerator_10116.current_key (HERE), var_swiftFileRef_12377, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 295)) ;
                        }
                        GGS_string var_buildRef_12479 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_swiftFileRef_12377, enumerator_10116.current_key (HERE), var_buildRef_12479, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 296)) ;
                        }
                        var_childrenRefs_10090.plusPlusAssignOperation (var_swiftFileRef_12377  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 297)) ;
                        ioArgument_ioSwiftFileBuildRefs.plusPlusAssignOperation (var_buildRef_12479  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 298)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_14) {
                      GenericArray <FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 300)), GGS_string ("unhandled extension for file '").add_operation (enumerator_10116.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 300)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 300)), fixItArray15  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 300)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_10116.gotoNextObject () ;
  }
  ioObject.mProperty_mGroupList.plusPlusAssignOperation (GGS_XCodeGroup::init_21__21__21__21_ (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_10090, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 303)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GGS_XcodeProjectDescriptor & ioObject,
                                            const GGS_string constinArgument_inGroupRef,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mMainGroupChildrenRefs.plusPlusAssignOperation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 310)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GGS_XcodeProjectDescriptor & ioObject,
                                                        const GGS__5B_string_5D_ constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssignOperation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 317)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (GGS_XcodeProjectDescriptor & ioObject,
                                      GGS_string & outArgument_outRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mProjectObjectReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_XcodeProjectDescriptor temp_2 = ioObject ;
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 377)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 377)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 377)) ;
      ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 378)) ;
    }
  }
  const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 380)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 380)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 380)) ;
  ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 381)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const GGS_XcodeProjectDescriptor inObject,
                                     const GGS_string constinArgument_inPath,
                                     const GGS_string constinArgument_inCacheFilePath,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_XcodeProjectDescriptor temp_0 = inObject ;
  const GGS_XcodeProjectDescriptor temp_1 = inObject ;
  const GGS_XcodeProjectDescriptor temp_2 = inObject ;
  const GGS_XcodeProjectDescriptor temp_3 = inObject ;
  const GGS_XcodeProjectDescriptor temp_4 = inObject ;
  const GGS_XcodeProjectDescriptor temp_5 = inObject ;
  const GGS_XcodeProjectDescriptor temp_6 = inObject ;
  const GGS_XcodeProjectDescriptor temp_7 = inObject ;
  const GGS_XcodeProjectDescriptor temp_8 = inObject ;
  const GGS_XcodeProjectDescriptor temp_9 = inObject ;
  const GGS_XcodeProjectDescriptor temp_10 = inObject ;
  const GGS_XcodeProjectDescriptor temp_11 = inObject ;
  const GGS_XcodeProjectDescriptor temp_12 = inObject ;
  const GGS_XcodeProjectDescriptor temp_13 = inObject ;
  const GGS_XcodeProjectDescriptor temp_14 = inObject ;
  const GGS_XcodeProjectDescriptor temp_15 = inObject ;
  const GGS_XcodeProjectDescriptor temp_16 = inObject ;
  const GGS_XcodeProjectDescriptor temp_17 = inObject ;
  const GGS_XcodeProjectDescriptor temp_18 = inObject ;
  const GGS_XcodeProjectDescriptor temp_19 = inObject ;
  const GGS_XcodeProjectDescriptor temp_20 = inObject ;
  const GGS_XcodeProjectDescriptor temp_21 = inObject ;
  const GGS_XcodeProjectDescriptor temp_22 = inObject ;
  GGS_string var_contents_18211 = GGS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCFileList (), temp_7.readProperty_mCppFileList (), temp_8.readProperty_m_5F_Swift_5F_FileList (), temp_9.readProperty_m_5F_M_5F_FileList (), temp_10.readProperty_m_5F_MM_5F_FileList (), temp_11.readProperty_mFrameworkFileList (), temp_12.readProperty_mHeaderFileList (), temp_13.readProperty_mInfoPlistFileList (), temp_14.readProperty_mTIFF_5F_fileList (), temp_15.readProperty_mICNS_5F_fileList (), temp_16.readProperty_mXIB_5F_fileList (), temp_17.readProperty_mBuildFileList (), temp_18.readProperty_mDefaultConfigurationRef (), temp_19.readProperty_mDefaultConfigurationSettingList (), temp_20.readProperty_mProjectBuildConfigurationRef (), temp_21.readProperty_mApplicationBundleName (), temp_22.readProperty_mProjectName () COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 453))) ;
  GGS_string var_projectCoreFile_18934 = constinArgument_inPath.add_operation (GGS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 478)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    GGS_bool test_24 = var_projectCoreFile_18934.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 479)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 479)) ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      test_24 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 479)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 479)) ;
    }
    GGS_bool test_25 = test_24 ;
    if (GalgasBool::boolTrue != test_25.boolEnum ()) {
      test_25 = GGS_bool (ComparisonKind::notEqual, GGS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 479)).objectCompare (var_contents_18211)) ;
    }
    test_23 = test_25.boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      GGS_bool joker_19192 ; // Joker input parameter
      var_contents_18211.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_19192, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 480)) ;
      var_contents_18211.method_makeDirectoryAndWriteToFile (var_projectCoreFile_18934, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 481)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @terminalCheckInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST::objectCompare (const GGS_terminalCheckInstructionAST & inOperand) const {
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

GGS_terminalCheckInstructionAST::GGS_terminalCheckInstructionAST (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_lstring & in_mTerminalName,
                              const GGS_actualInputParameterListAST & in_mActualInputParameterList,
                              const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_terminalCheckInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_terminalCheckInstructionAST (inCompiler COMMA_THERE)) ;
  object->terminalCheckInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mTerminalName, in_mActualInputParameterList, in_mIndexingKeyList, in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, in_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler) ;
  const GGS_terminalCheckInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::
terminalCheckInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mTerminalName,
                                                          const GGS_actualInputParameterListAST & in_mActualInputParameterList,
                                                          const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mActualInputParameterList = in_mActualInputParameterList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST::GGS_terminalCheckInstructionAST (const cPtr_terminalCheckInstructionAST * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalCheckInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterListAST GGS_terminalCheckInstructionAST::readProperty_mActualInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualInputParameterListAST () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mActualInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B__32_lstring_5D_ GGS_terminalCheckInstructionAST::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B__32_lstring_5D_ () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mIndexingKeyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionAST::readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionAST::readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalCheckInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionAST::cPtr_terminalCheckInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mActualInputParameterList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionAST::cPtr_terminalCheckInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_lstring & in_mTerminalName,
                                                                    const GGS_actualInputParameterListAST & in_mActualInputParameterList,
                                                                    const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mActualInputParameterList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mActualInputParameterList = in_mActualInputParameterList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalCheckInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST ;
}

void cPtr_terminalCheckInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalCheckInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalCheckInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalCheckInstructionAST (mProperty_mInstructionLocation, mProperty_mTerminalName, mProperty_mActualInputParameterList, mProperty_mIndexingKeyList, mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mProperty_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalCheckInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
    mProperty_mActualInputParameterList.printNonNullClassInstanceProperties ("mActualInputParameterList") ;
    mProperty_mIndexingKeyList.printNonNullClassInstanceProperties ("mIndexingKeyList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationToken") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST ("terminalCheckInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_terminalInstructionForGrammarAnalysis_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_terminalInstructionForGrammarAnalysis_2E_weak::GGS_terminalInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak & GGS_terminalInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_terminalInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak::GGS_terminalInstructionForGrammarAnalysis_2E_weak (const GGS_terminalInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak GGS_terminalInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_terminalInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis_2E_weak::bang_terminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalInstructionForGrammarAnalysis) ;
      result = GGS_terminalInstructionForGrammarAnalysis ((cPtr_terminalInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ("terminalInstructionForGrammarAnalysis.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ;
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

AbstractPtrClass * cPtr_selectInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @selectInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration::objectCompare (const GGS_selectInstructionForGeneration & inOperand) const {
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

GGS_selectInstructionForGeneration::GGS_selectInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_string & in_mSyntaxComponentName,
                      const GGS_uint & in_mChoiceIndex,
                      const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->selectInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_selectInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::
selectInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_string & in_mSyntaxComponentName,
                                                     const GGS_uint & in_mChoiceIndex,
                                                     const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration::GGS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_selectInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_selectInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_uint & in_mChoiceIndex,
                                                                          const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

void cPtr_selectInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selectInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_mListOfSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mChoiceIndex.printNonNullClassInstanceProperties ("mChoiceIndex") ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
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

AbstractPtrClass * cPtr_repeatInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
// @binarysetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST::objectCompare (const GGS_binarysetPredefinedTypeAST & inOperand) const {
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

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binarysetPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_binarysetPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->binarysetPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_binarysetPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::
binarysetPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                     const GGS_string & in_mPredefinedTypeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @binarysetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@binarysetPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_binarysetPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binarysetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST_2E_weak::objectCompare (const GGS_binarysetPredefinedTypeAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak & GGS_binarysetPredefinedTypeAST_2E_weak::operator = (const GGS_binarysetPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (const GGS_binarysetPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak GGS_binarysetPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_binarysetPredefinedTypeAST * p = (cPtr_binarysetPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_binarysetPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::bang_binarysetPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binarysetPredefinedTypeAST) ;
      result = GGS_binarysetPredefinedTypeAST ((cPtr_binarysetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ("binarysetPredefinedTypeAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@selfMutability propertiesAreMutable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_propertiesAreMutable (const GGS_selfMutability & inObject,
                                               Compiler * /* inCompiler */
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
// @optionComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionComponentForGeneration::objectCompare (const GGS_optionComponentForGeneration & inOperand) const {
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

GGS_optionComponentForGeneration::GGS_optionComponentForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration::
init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                        const GGS_bool & in_generateHeader,
                                                                                        const GGS_string & in_implementationCppFileName,
                                                                                        const GGS_bool & in_mIsPredefined,
                                                                                        const GGS_string & in_mOptionComponentName,
                                                                                        const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                        const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                        const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_optionComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->optionComponentForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_infoMessage, in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, inCompiler) ;
  const GGS_optionComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::
optionComponentForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                                     const GGS_bool & in_generateHeader,
                                                                                                                     const GGS_string & in_implementationCppFileName,
                                                                                                                     const GGS_bool & in_mIsPredefined,
                                                                                                                     const GGS_string & in_mOptionComponentName,
                                                                                                                     const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                                                     const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                                                     const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                                                     Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration::GGS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentForGeneration::readProperty_mIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionComponentForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mBoolOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mBoolOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mUIntOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mUIntOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mStringOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mBoolOptionSortedList (),
mProperty_mUIntOptionSortedList (),
mProperty_mStringOptionSortedList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GGS_string & in_infoMessage,
                                                                      const GGS_bool & in_generateHeader,
                                                                      const GGS_string & in_implementationCppFileName,
                                                                      const GGS_bool & in_mIsPredefined,
                                                                      const GGS_string & in_mOptionComponentName,
                                                                      const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_infoMessage, in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mBoolOptionSortedList (),
mProperty_mUIntOptionSortedList (),
mProperty_mStringOptionSortedList () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

void cPtr_optionComponentForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@optionComponentForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBoolOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUIntOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionComponentForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_infoMessage, mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionSortedList, mProperty_mUIntOptionSortedList, mProperty_mStringOptionSortedList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsPredefined.printNonNullClassInstanceProperties ("mIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mBoolOptionSortedList.printNonNullClassInstanceProperties ("mBoolOptionSortedList") ;
    mProperty_mUIntOptionSortedList.printNonNullClassInstanceProperties ("mUIntOptionSortedList") ;
    mProperty_mStringOptionSortedList.printNonNullClassInstanceProperties ("mStringOptionSortedList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionComponentForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ("optionComponentForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionComponentForGeneration_2E_weak::objectCompare (const GGS_optionComponentForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_optionComponentForGeneration_2E_weak::GGS_optionComponentForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak & GGS_optionComponentForGeneration_2E_weak::operator = (const GGS_optionComponentForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak::GGS_optionComponentForGeneration_2E_weak (const GGS_optionComponentForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak GGS_optionComponentForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionComponentForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionComponentForGeneration result ;
  if (isValid ()) {
    const cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionComponentForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration_2E_weak::bang_optionComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentForGeneration) ;
      result = GGS_optionComponentForGeneration ((cPtr_optionComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2E_weak ("optionComponentForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (cPtr_semanticInstructionAST * inObject,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_enterInstructionInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (void) :
mProperty_mInternalRoutineMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_routineMap & inSource) :
mProperty_mInternalRoutineMap (inSource.mProperty_mInternalRoutineMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap & GGS_routineMap::operator = (const GGS_routineMap & inSource) {
  mProperty_mInternalRoutineMap = inSource.mProperty_mInternalRoutineMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineMap GGS_routineMap::init (Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mInternalRoutineMap = GGS_internalRoutineMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_internalRoutineMap & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInternalRoutineMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (void) :
mProperty_mCurrentManager (),
mProperty_mOverridenManagers () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_localVarManager & inSource) :
mProperty_mCurrentManager (inSource.mProperty_mCurrentManager),
mProperty_mOverridenManagers (inSource.mProperty_mOverridenManagers) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager & GGS_localVarManager::operator = (const GGS_localVarManager & inSource) {
  mProperty_mCurrentManager = inSource.mProperty_mCurrentManager ;
  mProperty_mOverridenManagers = inSource.mProperty_mOverridenManagers ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mCurrentManager = GGS_currentVarManager::init (inCompiler COMMA_HERE) ;
  mProperty_mOverridenManagers = GGS_openedOverrideList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_currentVarManager & inOperand0,
                                          const GGS_openedOverrideList & inOperand1) :
mProperty_mCurrentManager (inOperand0),
mProperty_mOverridenManagers (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarManager::isValid (void) const {
  return mProperty_mCurrentManager.isValid () && mProperty_mOverridenManagers.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::drop (void) {
  mProperty_mCurrentManager.drop () ;
  mProperty_mOverridenManagers.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarManager:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCurrentManager.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOverridenManagers.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarManager generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (GGS_localVarManager & ioObject,
                                                     const GGS_lstring constinArgument_inVarName,
                                                     const GGS_bool constinArgument_inWarnsIfNotMutated,
                                                     const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GGS_string constinArgument_inCppName,
                                                     const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_localVariableAttributes temp_0 ;
  const GalgasBool test_1 = constinArgument_inWarnsIfNotMutated.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVariableAttributes::init (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 53)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 53)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 53)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, temp_0, GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 54)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 48)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GGS_localVarManager & ioObject,
                                              const GGS_lstring constinArgument_inVarName,
                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                              const GGS_string constinArgument_inCppName,
                                              const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 71)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 71)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 71)), GGS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas4", 72)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 66)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (GGS_localVarManager & ioObject,
                                                     const GGS_lstring constinArgument_inVarName,
                                                     const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GGS_string constinArgument_inCppName,
                                                     const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 87)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 87)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 87)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 82)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (GGS_localVarManager & ioObject,
                                                  const GGS_lstring constinArgument_inVarName,
                                                  const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GGS_string constinArgument_inCppName,
                                                  const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 103)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 103)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 103)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                const GGS_lstring constinArgument_inVarName,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_string constinArgument_inCppName,
                                                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 121)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 121)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 121)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 122)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (GGS_localVarManager & ioObject,
                                                const GGS_lstring constinArgument_inVarName,
                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                const GGS_string constinArgument_inCppName,
                                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 137)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 137)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 137)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 132)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                        const GGS_lstring constinArgument_inVarName,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                        const GGS_string constinArgument_inCppName,
                                                                        const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 153)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 153)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 148)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (GGS_localVarManager & ioObject,
                                                        const GGS_lstring constinArgument_inVarName,
                                                        const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                        const GGS_string constinArgument_inCppName,
                                                        const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 169)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 169)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 169)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 170)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 164)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (GGS_localVarManager & ioObject,
                                                 const GGS_lstring constinArgument_inVarName,
                                                 const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                 const GGS_string constinArgument_inCppName,
                                                 const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 187)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 188)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 182)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                      const GGS_lstring constinArgument_inVarName,
                                                                      const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GGS_string constinArgument_inCppName,
                                                                      const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 205)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 205)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 205)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 206)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 200)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (GGS_localVarManager & ioObject,
                                                      const GGS_lstring constinArgument_inVarName,
                                                      const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                      const GGS_string constinArgument_inCppName,
                                                      const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 221)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 221)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 221)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 221)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 216)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (GGS_localVarManager & ioObject,
                                               const GGS_lstring constinArgument_inVarName,
                                               const GGS_unifiedTypeMapEntry constinArgument_inType,
                                               const GGS_string constinArgument_inCppName,
                                               const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 241)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (GGS_localVarManager & ioObject,
                                            const GGS_lstring constinArgument_inVarName,
                                            const GGS_unifiedTypeMapEntry constinArgument_inType,
                                            const GGS_string constinArgument_inCppName,
                                            const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 257)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 257)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 257)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 258)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 252)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializerSelfProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializerSelfProperty (GGS_localVarManager & ioObject,
                                                    const GGS_string constinArgument_inPropertyName,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                    const GGS_string constinArgument_inCppName,
                                                    const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                    const GGS_bool constinArgument_inInitialized,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_varName_12691 = GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 273)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  GGS_localVarValuation temp_0 ;
  const GalgasBool test_1 = constinArgument_inInitialized.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 281)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 281)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, var_varName_12691, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 280)), temp_0, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 274)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GGS_localVarManager & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas4", 290)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 290)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GGS_localVarManager & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_repeatOverride (SOURCE_FILE ("variable-manager.galgas4", 296)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 296)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GGS_localVarManager & ioObject,
                                    const GGS_location /* constinArgument__5F_inEndOfBranchLocation */,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas4", 302)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_13964 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_13964, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 303)) ;
      }
      switch (var_savedManager_13964.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_14130__savedManager_0 ;
          GGS_currentVarManager extractedValue_14164_referenceManager_1 ;
          var_savedManager_13964.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_14130__savedManager_0, extractedValue_14164_referenceManager_1) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14164_referenceManager_1 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GGS_localVarManager & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 316)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GGS_localVarManager & ioObject,
                                  const GGS_location constinArgument_inEndOfBranchLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 322)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas4", 324)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_14803 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_14803, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 325)) ;
      }
      switch (var_savedManager_14803.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        {
          GGS_currentVarManager extractedValue_14896_savedManager_0 ;
          var_savedManager_14803.getAssociatedValuesFor_selectOverrideFirstBranch (extractedValue_14896_savedManager_0) ;
          const GGS_localVarManager temp_2 = ioObject ;
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14896_savedManager_0, temp_2.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas4", 328)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 328)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14896_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_15146_savedManager_0 ;
          GGS_currentVarManager extractedValue_15179_referenceManager_1 ;
          var_savedManager_14803.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_15146_savedManager_0, extractedValue_15179_referenceManager_1) ;
          const GGS_localVarManager temp_3 = ioObject ;
          GGS_currentVarManager var_newReferenceManager_15209 = temp_3.readProperty_mCurrentManager () ;
          {
          extensionSetter_combineManagerWith (var_newReferenceManager_15209, extractedValue_15179_referenceManager_1, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 332)) ;
          }
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_15146_savedManager_0, var_newReferenceManager_15209  COMMA_SOURCE_FILE ("variable-manager.galgas4", 333)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 333)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_15146_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        {
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (var_savedManager_14803, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 336)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GGS_localVarManager inObject,
                                                        const GGS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkSelfObjectIsFullyInitialized (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 416)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GGS_localVarManager & ioObject,
                                    const GGS_lstring constinArgument_inVarName,
                                    GGS_unifiedTypeMapEntry & outArgument_outType,
                                    GGS_string & outArgument_outCppName,
                                    GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 442)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 499)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GGS_localVarManager & ioObject,
                                           const GGS_lstring constinArgument_inVarName,
                                           GGS_unifiedTypeMapEntry & outArgument_outType,
                                           GGS_string & outArgument_outCppName,
                                           GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 529)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          GGS_unifiedTypeMapEntry & outArgument_outType,
                                          GGS_string & outArgument_outCppName,
                                          GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 626)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GGS_localVarManager & ioObject,
                                               const GGS_lstring constinArgument_inVarName,
                                               GGS_unifiedTypeMapEntry & outArgument_outType,
                                               GGS_string & outArgument_outCppName,
                                               GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 710)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GGS_localVarManager inObject,
                                           const GGS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 859)) ;
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap unsolvedEntryList'
//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ extensionGetter_unsolvedEntryList (const GGS_unifiedTypeMap & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lstring_5D_ result_result ; // Returned variable
  result_result = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_unifiedTypeMap temp_0 = inObject ;
  UpEnumerator_unifiedTypeMap enumerator_1858 (temp_0) ;
  while (enumerator_1858.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_1858.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas4", 37)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.plusPlusAssignOperation (enumerator_1858.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas4", 38)) ;
      }
    }
    enumerator_1858.gotoNextObject () ;
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
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GGS_typeDefinition & in_mDefinition,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
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

AbstractPtrClass * cPtr_unifiedTypeMapElementClass::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unifiedTypeMapElementClass::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
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
//
//Extension func '@unifiedTypeMapElementClass definition'
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
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas4", 152)), GGS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas4", 152)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeDefinition::Enumeration::enum_solved:
    {
      GGS_unifiedTypeDefinition extractedValue_5967_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_5967_definition_0) ;
      result_result = extractedValue_5967_definition_0 ;
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
//Extension proc '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_routineMap & ioObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_formalParameterSignature constinArgument_inRoutineSignature,
                                const GGS_bool constinArgument_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineArgumentMap var_routineArgumentMap_2940 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_contains (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2940, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 73)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_routineArgumentMap_2940 = GGS_routineArgumentMap::init (inCompiler COMMA_HERE) ;
  }
  GGS_string var_routineArguments_3155 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 77)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_routineArgumentMap_2940.getter_contains (var_routineArguments_3155 COMMA_SOURCE_FILE ("routineMap.galgas4", 78)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 79)).add_operation (var_routineArguments_3155, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 79)).add_operation (GGS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 79)), fixItArray4  COMMA_SOURCE_FILE ("routineMap.galgas4", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    {
    var_routineArgumentMap_2940.setter_insertKey (GGS_lstring::init_21__21_ (var_routineArguments_3155, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 81)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2940 COMMA_SOURCE_FILE ("routineMap.galgas4", 86)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const GGS_routineMap inObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_actualParameterListAST constinArgument_inActualParameterList,
                                GGS_formalParameterSignature & outArgument_outRoutineSignature,
                                GGS_bool & outArgument_outIsFilePrivate,
                                GGS_lstring & outArgument_outRoutineMangledName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outIsFilePrivate.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = inObject ;
    const GGS_internalRoutineMap_2E_element var_routine_4101 = temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outIsFilePrivate = GGS_bool (false) ;
      outArgument_outRoutineSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4247 (var_routine_4101.readProperty_mArgumentMap ()) ;
      while (enumerator_4247.hasCurrentObject ()) {
        outArgument_outIsFilePrivate = enumerator_4247.current (HERE).readProperty_mIsFilePrivate () ;
        outArgument_outRoutineSignature = enumerator_4247.current (HERE).readProperty_mRoutineSignature () ;
        enumerator_4247.gotoNextObject () ;
      }
      GGS__5B_acceptableParameter_5D_ var_acceptableParameterList_4408 = GGS__5B_acceptableParameter_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4465 (var_routine_4101.readProperty_mArgumentMap ()) ;
      while (enumerator_4465.hasCurrentObject ()) {
        GGS_bool var_accept_4493 = GGS_bool (ComparisonKind::equal, constinArgument_inActualParameterList.getter_count (SOURCE_FILE ("routineMap.galgas4", 106)).objectCompare (enumerator_4465.current (HERE).readProperty_mRoutineSignature ().getter_count (SOURCE_FILE ("routineMap.galgas4", 106)))) ;
        UpEnumerator_formalParameterSignature enumerator_4600 (enumerator_4465.current (HERE).readProperty_mRoutineSignature ()) ;
        UpEnumerator_actualParameterListAST enumerator_4620 (constinArgument_inActualParameterList) ;
        bool bool_2 = var_accept_4493.isValidAndTrue () ;
        if (enumerator_4600.hasCurrentObject () && enumerator_4620.hasCurrentObject () && bool_2) {
          while (enumerator_4600.hasCurrentObject () && enumerator_4620.hasCurrentObject () && bool_2) {
            var_accept_4493 = callExtensionGetter_isCompatibleWith ((const cPtr_actualParameterAST *) enumerator_4620.current_mActualParameter (HERE).ptr (), enumerator_4600.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4600.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 108)) ;
            enumerator_4600.gotoNextObject () ;
            enumerator_4620.gotoNextObject () ;
            if (enumerator_4600.hasCurrentObject () && enumerator_4620.hasCurrentObject ()) {
              bool_2 = var_accept_4493.isValidAndTrue () ;
            }
          }
        }
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_accept_4493.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_acceptableParameterList_4408.plusPlusAssignOperation (GGS_acceptableParameter::init_21__21_ (enumerator_4465.current (HERE).readProperty_mRoutineSignature (), enumerator_4465.current (HERE).readProperty_mIsFilePrivate (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("routineMap.galgas4", 114)) ;
          }
        }
        enumerator_4465.gotoNextObject () ;
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4408.getter_count (SOURCE_FILE ("routineMap.galgas4", 117)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_acceptableParameter var_r_5134 = var_acceptableParameterList_4408.getter_first (inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 119)) ;
          outArgument_outRoutineSignature = var_r_5134.readProperty_mRoutineSignature () ;
          outArgument_outIsFilePrivate = var_r_5134.readProperty_mIsFilePrivate () ;
          outArgument_outRoutineMangledName = function_routineMangledName (constinArgument_inRoutineName, outArgument_outRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 122)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4408.getter_count (SOURCE_FILE ("routineMap.galgas4", 123)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("cannot find any procedure with compatible formal argument list"), fixItArray6  COMMA_SOURCE_FILE ("routineMap.galgas4", 124)) ;
            outArgument_outRoutineSignature.drop () ; // Release error dropped variable
            outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
            outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          GGS_string var_s_5605 = GGS_string ("ambiguity, several procedures with compatible formal argument list:") ;
          UpEnumerator__5B_acceptableParameter_5D_ enumerator_5702 (var_acceptableParameterList_4408) ;
          while (enumerator_5702.hasCurrentObject ()) {
            var_s_5605.plusAssignOperation(GGS_string ("\n  - ").add_operation (function_routineArgumentFromFormalParameters (enumerator_5702.current (HERE).readProperty_mRoutineSignature (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 130)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 130)) ;
            enumerator_5702.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_s_5605, fixItArray7  COMMA_SOURCE_FILE ("routineMap.galgas4", 132)) ;
          outArgument_outRoutineSignature.drop () ; // Release error dropped variable
          outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
          outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 138)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 138)), fixItArray8  COMMA_SOURCE_FILE ("routineMap.galgas4", 137)) ;
    outArgument_outRoutineSignature.drop () ; // Release error dropped variable
    outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
    outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineMap locationForKey'
//--------------------------------------------------------------------------------------------------

GGS_location extensionGetter_locationForKey (const GGS_routineMap & inObject,
                                             const GGS_string & constinArgument_inKey,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_location result_result ; // Returned variable
  const GGS_routineMap temp_0 = inObject ;
  result_result = temp_0.readProperty_mInternalRoutineMap ().getter_locationForKey (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 146)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension proc '@syntaxExtensions insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_syntaxExtensions & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_lstring constinArgument_inSyntaxComponentName,
                                const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syntaxExtensions temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_contains (constinArgument_inKey COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 40)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_galgas_33_SyntaxExtensionListAST var_aList_2106 ;
      const GGS_syntaxExtensions temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_2106, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 41)) ;
      {
      var_aList_2106.setter_append (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 42)) ;
      }
      ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_syntaxExtensionsDictionary_2E_element::init_21__21_ (constinArgument_inKey, var_aList_2106, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 43)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_galgas_33_SyntaxExtensionListAST temp_3 = GGS_galgas_33_SyntaxExtensionListAST::init (inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 45)) ;
    temp_3.plusPlusAssignOperation (GGS_galgas_33_SyntaxExtensionListAST_2E_element::init_21__21__21_ (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 45)) ;
    ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_syntaxExtensionsDictionary_2E_element::init_21__21_ (constinArgument_inKey, temp_3, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 45)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (GGS_galgasDeclarationAST & ioObject,
                                          GGS_lstring & outArgument_outOptionalTypeName,
                                          const GGS_lstring constinArgument_inTypeName,
                                          const GGS_bool constinArgument_inPredefined,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionalTypeName.drop () ; // Release 'out' argument
  outArgument_outOptionalTypeName = function_makeOptionalTypeLName (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 419)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_galgasDeclarationAST temp_1 = ioObject ;
    test_0 = temp_1.readProperty_implicitTypeDeclarationSet ().getter_contains (outArgument_outOptionalTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 420)).operator_not (SOURCE_FILE ("semanticsTypesForAST.galgas4", 420)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioObject.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outOptionalTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 421)) ;
      ioObject.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_optionalTypeDeclarationAST::init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (constinArgument_inPredefined, outArgument_outOptionalTypeName, constinArgument_inTypeName, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 422)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceFileName
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_34_ (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceString,
                                                              const String & inStringForError
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_34_ (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__A_ = {
  utf32 (10),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__25_ = {
  utf32 ('%'),
} ;

//--- Unicode string for '$\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_ = {
  utf32 ('\\'),
} ;

//--- Unicode string for '$\\%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__25_ = {
  utf32 ('\\'),
  utf32 ('%'),
} ;

//--- Unicode string for '$\\\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__5C_ = {
  utf32 ('\\'),
  utf32 ('\\'),
} ;

//--- Unicode string for '$\\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_n = {
  utf32 ('\\'),
  utf32 ('n'),
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateDefinitionArray [1] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__25_, 1, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateReplacementArray [3] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__25_, 2, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C_n, 2, kUnicodeString_galgasTemplateScanner__A_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, kUnicodeString_galgasTemplateScanner__5C_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark
//--------------------------------------------------------------------------------------------------

static const bool galgasTemplateScanner_kEndOfScriptInTemplateArray [191] = {
  false /* identifier */,
  false /* double.xxx */,
  false /* literalInt */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* comment */,
  false /* commentMark */,
  false /* @type */,
  false /* ?selector: */,
  false /* ? */,
  false /* ?!selector: */,
  false /* ?! */,
  false /* !selector: */,
  false /* ! */,
  false /* !?selector: */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* abstract */,
  false /* after */,
  false /* as */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* case */,
  false /* class */,
  false /* default */,
  false /* dict */,
  false /* do */,
  false /* drop */,
  false /* else */,
  false /* elsif */,
  false /* end */,
  false /* enum */,
  false /* error */,
  false /* extension */,
  false /* extern */,
  false /* false */,
  false /* fileprivate */,
  false /* filewrapper */,
  false /* final */,
  false /* for */,
  false /* fixit */,
  false /* func */,
  false /* grammar */,
  false /* graph */,
  false /* guard */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* init */,
  false /* is */,
  false /* json */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* mod */,
  false /* mutating */,
  false /* nil */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* package */,
  false /* parse */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* repeat */,
  false /* rewind */,
  false /* rule */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* sortedlist */,
  false /* spoil */,
  false /* super */,
  false /* struct */,
  false /* style */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* typealias */,
  false /* var */,
  false /* warning */,
  false /* weak */,
  false /* while */,
  false /* with */,
  false /* #applicationBundleBase */,
  false /* #clonable */,
  false /* #codeblocks-linux32 */,
  false /* #codeblocks-linux64 */,
  false /* #codeblocks-windows */,
  false /* #comparable */,
  false /* #equatable */,
  false /* #errorMessage */,
  false /* #from */,
  false /* #generatedInSeparateFile */,
  false /* #initArgLabel */,
  false /* #insertAfter */,
  false /* #insertBefore */,
  false /* #insertOrReplaceSetter */,
  false /* #insertSetter */,
  false /* #libpmAtPath */,
  false /* #macCodeSign */,
  false /* #makefile-macosx */,
  false /* #makefile-unix */,
  false /* #makefile-x86linux32-on-macosx */,
  false /* #makefile-x86linux64-on-macosx */,
  false /* #makefile-arm64-linux-on-macosx */,
  false /* #makefile-win32-on-macosx */,
  false /* #MacSwiftApp */,
  false /* #nonAtomicSelection */,
  false /* #once */,
  false /* #preserved */,
  false /* #quietOutputByDefault */,
  false /* #replaceBy */,
  false /* #remove */,
  false /* #removeSetter */,
  false /* #replaceSetter */,
  false /* #searchMethod */,
  false /* #searchSubscript */,
  false /* #searchString */,
  false /* #templateEndMark */,
  false /* #templateReplacement */,
  false /* #translate */,
  false /* #unused */,
  false /* #usefull */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* ++= */,
  false /* . */,
  false /* @( */,
  false /* ... */,
  false /* ..< */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* &= */,
  false /* |= */,
  false /* ^= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */
} ;

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N
//--------------------------------------------------------------------------------------------------

bool Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
        && (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
        && (mCurrentChar.u32 () != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                               true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar.u32 () != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {
            token.mTemplateStringBeforeToken.appendString (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString) ;
          }else{
            String s ;
            while (notTestForInputUTF32String (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendChar (previousChar ()) ;
            }
            galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\0')) {
      internalParseLexicalToken (token) ;
    }
    if ((token.mTokenCode > 0) && galgasTemplateScanner_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N
//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ Lexique_galgasTemplateScanner::symbols (LOCATION_ARGS) {
  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;
  result.plusPlusAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("double.xxx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("literalInt") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("'char'") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("$terminal$") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("@type") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\?selector:") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\?!selector:") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\?!") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!selector:") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!\?selector:") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!\?") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("<non_terminal>") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("abstract") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("after") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("as") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("before") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("between") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("block") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("boolset") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("class") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("default") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("dict") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("do") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("drop") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("elsif") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("end") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("enum") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("error") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("extension") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("extern") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("fileprivate") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("filewrapper") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("final") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("for") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("fixit") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("func") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("grammar") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("graph") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("guard") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("gui") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("in") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("indexing") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("init") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("is") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("json") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("label") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("let") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("lexique") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("list") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("log") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("loop") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("map") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("mod") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("mutating") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("nil") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("not") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("on") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("operator") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("or") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("override") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("package") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("parse") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("public") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("protected") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("private") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("proc") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("project") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("repeat") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("rewind") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("rule") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("select") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("self") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("send") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("sortedlist") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("spoil") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("super") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("struct") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("style") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("syntax") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("tag") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("template") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("then") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("true") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("typealias") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("var") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("warning") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("weak") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("with") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#applicationBundleBase") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#clonable") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#codeblocks-linux32") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#codeblocks-linux64") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#codeblocks-windows") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#comparable") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#equatable") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#errorMessage") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#from") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#generatedInSeparateFile") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#initArgLabel") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#insertAfter") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#insertBefore") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#insertOrReplaceSetter") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#insertSetter") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#libpmAtPath") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#macCodeSign") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-unix") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-arm64-linux-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#makefile-win32-on-macosx") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#MacSwiftApp") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#nonAtomicSelection") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#once") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#preserved") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#quietOutputByDefault") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#replaceBy") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#remove") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#removeSetter") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#replaceSetter") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#searchMethod") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#searchSubscript") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#searchString") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#templateEndMark") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#templateReplacement") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#translate") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#unused") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("#usefull") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&+") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&-") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&*") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&/") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (":>") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&&") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("++=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("@(") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("...") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("..<") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("+=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("-=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("*=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("/=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("|=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("^=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (">=") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("===") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!==") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("\?^") COMMA_HERE) ;
  result.plusPlusAssignOperation (GGS_string ("!^") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasTemplateScanner (GenericUniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasTemplateScanner (const String & /* inIdentifier */,
                                                            bool & /* ioFound */,
                                                            GenericUniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_galgasTemplateScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasTemplateScanner, getKeywordsForIdentifier_galgasTemplateScanner) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@templateInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (cPtr_templateInstructionForGeneration * inObject,
                                                 GGS_string & io_ioGeneratedCode,
                                                 GGS_stringset & io_ioInclusionSet,
                                                 GGS_uint & io__5F_ioTemporaryVariableIndex,
                                                 GGS_stringset & io__5F_ioUnusedVariableCppNameSet,
                                                 GGS_bool & io__5F_ioUseColumnMarker,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionForGeneration) ;
    inObject->method_templateCodeGeneration (io_ioGeneratedCode, io_ioInclusionSet, io__5F_ioTemporaryVariableIndex, io__5F_ioUnusedVariableCppNameSet, io__5F_ioUseColumnMarker, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST::objectCompare (const GGS_templateInstructionForeachAST & inOperand) const {
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

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                          const GGS_templateExpressionAST & in_mExpression,
                                          const GGS__5B_lstring_5D_ & in_mEnumeration,
                                          const GGS_location & in_mEndOfProperties,
                                          const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                          const GGS_templateInstructionListAST & in_mDoInstructionList,
                                          const GGS_lstring & in_mIndexIdentifier,
                                          const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                          const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachAST_init_21__21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeration, in_mEndOfProperties, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexIdentifier, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::
templateInstructionForeachAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS__5B_lstring_5D_ & in_mEnumeration,
                                                                        const GGS_location & in_mEndOfProperties,
                                                                        const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GGS_lstring & in_mIndexIdentifier,
                                                                        const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeration = in_mEnumeration ;
  mProperty_mEndOfProperties = in_mEndOfProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachAST::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInstructionForeachAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_templateInstructionForeachAST::readProperty_mEnumeration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEnumeration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateInstructionForeachAST::readProperty_mEndOfProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEndOfProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateInstructionForeachAST::readProperty_mIndexIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIndexIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeration (),
mProperty_mEndOfProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GGS_bool & in_mIsAscending,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS__5B_lstring_5D_ & in_mEnumeration,
                                                                        const GGS_location & in_mEndOfProperties,
                                                                        const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GGS_lstring & in_mIndexIdentifier,
                                                                        const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeration (),
mProperty_mEndOfProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeration = in_mEnumeration ;
  mProperty_mEndOfProperties = in_mEndOfProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachAST:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfProperties.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionForeachAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeration, mProperty_mEndOfProperties, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexIdentifier, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeration.printNonNullClassInstanceProperties ("mEnumeration") ;
    mProperty_mEndOfProperties.printNonNullClassInstanceProperties ("mEndOfProperties") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexIdentifier.printNonNullClassInstanceProperties ("mIndexIdentifier") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                                                  & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST_2E_weak::objectCompare (const GGS_templateInstructionForeachAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionForeachAST_2E_weak::GGS_templateInstructionForeachAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak & GGS_templateInstructionForeachAST_2E_weak::operator = (const GGS_templateInstructionForeachAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak::GGS_templateInstructionForeachAST_2E_weak (const GGS_templateInstructionForeachAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak GGS_templateInstructionForeachAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForeachAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForeachAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForeachAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST_2E_weak::bang_templateInstructionForeachAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForeachAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachAST) ;
      result = GGS_templateInstructionForeachAST ((cPtr_templateInstructionForeachAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ("templateInstructionForeachAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachForGeneration::objectCompare (const GGS_templateInstructionForeachForGeneration & inOperand) const {
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

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                      const GGS_semanticExpressionForGeneration & in_mExpression,
                                      const GGS_string & in_mEnumeratorCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                      const GGS_string & in_mIndexCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeratorCppName, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexCppName, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::
templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                              const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                              const GGS_string & in_mEnumeratorCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                              const GGS_string & in_mIndexCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachForGeneration::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mEnumeratorCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mIndexCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIndexCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (const GGS_bool & in_mIsAscending,
                                                                                            const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                            const GGS_string & in_mEnumeratorCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                            const GGS_string & in_mIndexCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

void cPtr_templateInstructionForeachForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachForGeneration:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionForeachForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratorCppName, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexCppName, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeratorCppName.printNonNullClassInstanceProperties ("mEnumeratorCppName") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexCppName.printNonNullClassInstanceProperties ("mIndexCppName") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachForGeneration_2E_weak::objectCompare (const GGS_templateInstructionForeachForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_templateInstructionForeachForGeneration_2E_weak::GGS_templateInstructionForeachForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak & GGS_templateInstructionForeachForGeneration_2E_weak::operator = (const GGS_templateInstructionForeachForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak::GGS_templateInstructionForeachForGeneration_2E_weak (const GGS_templateInstructionForeachForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak GGS_templateInstructionForeachForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForeachForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForeachForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration_2E_weak::bang_templateInstructionForeachForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForeachForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachForGeneration) ;
      result = GGS_templateInstructionForeachForGeneration ((cPtr_templateInstructionForeachForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ("templateInstructionForeachForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionExpressionForGeneration::objectCompare (const GGS_templateInstructionExpressionForGeneration & inOperand) const {
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

GGS_templateInstructionExpressionForGeneration::GGS_templateInstructionExpressionForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration::
init_21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionExpressionForGeneration_init_21_ (in_mExpression, inCompiler) ;
  const GGS_templateInstructionExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::
templateInstructionExpressionForGeneration_init_21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration::GGS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionExpressionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @templateBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionForGeneration::objectCompare (const GGS_templateBlockInstructionForGeneration & inOperand) const {
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

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::
init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                  const GGS_location & in_mLocation,
                  const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateBlockInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateBlockInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateBlockInstructionForGeneration_init_21__21__21_ (in_mExpression, in_mLocation, in_mBlockInstructionList, inCompiler) ;
  const GGS_templateBlockInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::
templateBlockInstructionForGeneration_init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateBlockInstructionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mBlockInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mBlockInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

void cPtr_templateBlockInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@templateBlockInstructionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateBlockInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateBlockInstructionForGeneration (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateBlockInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mBlockInstructionList.printNonNullClassInstanceProperties ("mBlockInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateBlockInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ("templateBlockInstructionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchForGeneration::GGS_templateInstructionIfBranchForGeneration (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchForGeneration::GGS_templateInstructionIfBranchForGeneration (const GGS_templateInstructionIfBranchForGeneration & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchForGeneration & GGS_templateInstructionIfBranchForGeneration::operator = (const GGS_templateInstructionIfBranchForGeneration & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionIfBranchForGeneration GGS_templateInstructionIfBranchForGeneration::init_21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                         const GGS_templateInstructionListForGeneration & in_mInstructionList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchForGeneration::GGS_templateInstructionIfBranchForGeneration (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                                            const GGS_templateInstructionListForGeneration & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionIfBranchForGeneration::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchForGeneration::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionIfBranchForGeneration:") ;
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
//     @templateInstructionIfBranchForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchForGeneration ("templateInstructionIfBranchForGeneration",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfBranchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchForGeneration ;
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

AbstractPtrClass * cPtr_templateGetterCallInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

ComparisonResult GGS_templateGetterCallInExpressionAST_2E_weak::objectCompare (const GGS_templateGetterCallInExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
// @templateInstructionSwitchForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionSwitchForGeneration::objectCompare (const GGS_templateInstructionSwitchForGeneration & inOperand) const {
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

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                  const GGS_semanticExpressionForGeneration & in_switchExpression,
                  const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionSwitchForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionSwitchForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionSwitchForGeneration_init_21__21__21_ (in_enumType, in_switchExpression, in_templateInstructionSwitchBranchList, inCompiler) ;
  const GGS_templateInstructionSwitchForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::
templateInstructionSwitchForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                                                         const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                         const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                         Compiler * /* inCompiler */) {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_templateInstructionSwitchForGeneration::readProperty_enumType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_enumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_switchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_switchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_templateInstructionSwitchBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionSwitchBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_templateInstructionSwitchBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GGS_unifiedTypeMapEntry & in_enumType,
                                                                                          const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                                                          const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionSwitchForGeneration:") ;
  mProperty_enumType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_switchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_templateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionSwitchForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mProperty_enumType, mProperty_switchExpression, mProperty_templateInstructionSwitchBranchList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionSwitchForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_enumType.printNonNullClassInstanceProperties ("enumType") ;
    mProperty_switchExpression.printNonNullClassInstanceProperties ("switchExpression") ;
    mProperty_templateInstructionSwitchBranchList.printNonNullClassInstanceProperties ("templateInstructionSwitchBranchList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}



//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_template_i0_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                             Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_1797 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 40)) ;
      GGS_templateExpressionAST var_leftOperand_1870 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_1929 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_1929, inCompiler) ;
      outArgument_outExpression = GGS_templateOrOperationAST::init_21__21__21_ (var_operatorLocation_1797, var_leftOperand_1870, var_rightOperand_1929, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_2098 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 47)) ;
      GGS_templateExpressionAST var_leftOperand_2171 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_2230 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_2230, inCompiler) ;
      outArgument_outExpression = GGS_templateXorOperationAST::init_21__21__21_ (var_operatorLocation_2098, var_leftOperand_2171, var_rightOperand_2230, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_template_i0_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 40)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 47)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                              Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      GGS_location var_operatorLocation_2770 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 67)) ;
      GGS_templateExpressionAST var_leftOperand_2843 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_2901 ;
      nt_relation_5F_factor_5F_tpl_ (var_rightOperand_2901, inCompiler) ;
      outArgument_outExpression = GGS_templateAndOperationAST::init_21__21__21_ (var_operatorLocation_2770, var_leftOperand_2843, var_rightOperand_2901, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 67)) ;
      nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                                Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_operatorLocation_3448 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 86)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 87)) ;
    GGS_templateExpressionAST var_leftExpression_3522 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_3584 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3584, inCompiler) ;
    outArgument_outExpression = GGS_templateEqualTestAST::init_21__21__21_ (var_operatorLocation_3448, var_leftExpression_3522, var_rightExpression_3584, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_operatorLocation_3764 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 93)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 94)) ;
    GGS_templateExpressionAST var_leftExpression_3838 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_3900 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3900, inCompiler) ;
    outArgument_outExpression = GGS_templateNonEqualTestAST::init_21__21__21_ (var_operatorLocation_3764, var_leftExpression_3838, var_rightExpression_3900, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_location var_operatorLocation_4083 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 100)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 101)) ;
    GGS_templateExpressionAST var_leftExpression_4157 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4219 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4219, inCompiler) ;
    outArgument_outExpression = GGS_templateInfOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4083, var_leftExpression_4157, var_rightExpression_4219, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_location var_operatorLocation_4404 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 107)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 108)) ;
    GGS_templateExpressionAST var_leftExpression_4478 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4540 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4540, inCompiler) ;
    outArgument_outExpression = GGS_templateSupOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4404, var_leftExpression_4478, var_rightExpression_4540, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    GGS_location var_operatorLocation_4725 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 115)) ;
    GGS_templateExpressionAST var_leftExpression_4798 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4860 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4860, inCompiler) ;
    outArgument_outExpression = GGS_templateStrictSupTestAST::init_21__21__21_ (var_operatorLocation_4725, var_leftExpression_4798, var_rightExpression_4860, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    GGS_location var_operatorLocation_5044 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 121)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 122)) ;
    GGS_templateExpressionAST var_leftExpression_5117 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_5179 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_5179, inCompiler) ;
    outArgument_outExpression = GGS_templateStrictInfTestAST::init_21__21__21_ (var_operatorLocation_5044, var_leftExpression_5117, var_rightExpression_5179, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 87)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 94)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 101)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 108)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 115)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 122)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5735 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 141)) ;
      GGS_templateExpressionAST var_leftExpression_5809 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_5871 ;
      nt_term_5F_tpl_ (var_rightExpression_5871, inCompiler) ;
      outArgument_outExpression = GGS_templateLeftShiftOperationAST::init_21__21__21_ (var_operatorLocation_5735, var_leftExpression_5809, var_rightExpression_5871, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_6050 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 147)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 148)) ;
      GGS_templateExpressionAST var_leftExpression_6124 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6186 ;
      nt_term_5F_tpl_ (var_rightExpression_6186, inCompiler) ;
      outArgument_outExpression = GGS_templateRightShiftOperationAST::init_21__21__21_ (var_operatorLocation_6050, var_leftExpression_6124, var_rightExpression_6186, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_6366 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 154)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 155)) ;
      GGS_templateExpressionAST var_leftExpression_6439 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6501 ;
      nt_term_5F_tpl_ (var_rightExpression_6501, inCompiler) ;
      outArgument_outExpression = GGS_templateAddOperationAST::init_21__21__21_ (var_operatorLocation_6366, var_leftExpression_6439, var_rightExpression_6501, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6674 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 161)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 162)) ;
      GGS_templateExpressionAST var_leftExpression_6747 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6809 ;
      nt_term_5F_tpl_ (var_rightExpression_6809, inCompiler) ;
      outArgument_outExpression = GGS_templateSubOperationAST::init_21__21__21_ (var_operatorLocation_6674, var_leftExpression_6747, var_rightExpression_6809, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 141)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 148)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 155)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 162)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_7315 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 181)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 182)) ;
      GGS_templateExpressionAST var_leftExpression_7388 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_7450 ;
      nt_factor_5F_tpl_ (var_rightExpression_7450, inCompiler) ;
      outArgument_outExpression = GGS_templateMultiplyOperationAST::init_21__21__21_ (var_operatorLocation_7315, var_leftExpression_7388, var_rightExpression_7450, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_7630 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 188)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 189)) ;
      GGS_templateExpressionAST var_leftExpression_7703 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_7765 ;
      nt_factor_5F_tpl_ (var_rightExpression_7765, inCompiler) ;
      outArgument_outExpression = GGS_templateDivideOperationAST::init_21__21__21_ (var_operatorLocation_7630, var_leftExpression_7703, var_rightExpression_7765, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_7943 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 195)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas4", 196)) ;
      GGS_templateExpressionAST var_leftExpression_8018 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_8080 ;
      nt_factor_5F_tpl_ (var_rightExpression_8080, inCompiler) ;
      outArgument_outExpression = GGS_templateModuloOperationAST::init_21__21__21_ (var_operatorLocation_7943, var_leftExpression_8018, var_rightExpression_8080, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 182)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 189)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas4", 196)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 214)) ;
      GGS_lstring var_structFieldName_8646 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 215)) ;
      outArgument_outExpression = GGS_structFieldAccessTemplateExpressionAST::init_21__21__21_ (var_structFieldName_8646.readProperty_location (), outArgument_outExpression, var_structFieldName_8646, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 215)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_9135 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 231)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 232)) ;
  GGS_templateExpressionAST var_expression_9204 ;
  nt_factor_5F_tpl_ (var_expression_9204, inCompiler) ;
  outArgument_outExpression = GGS_templateUnaryMinusOperationAST::init_21__21_ (var_operatorLocation_9135, var_expression_9204, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 232)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_9650 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas4", 246)) ;
  GGS_templateExpressionAST var_ifCondition_9721 ;
  nt_factor_5F_tpl_ (var_ifCondition_9721, inCompiler) ;
  outArgument_outExpression = GGS_templateNotOperatorAST::init_21__21_ (var_operatorLocation_9650, var_ifCondition_9721, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas4", 246)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_10162 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 260)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 261)) ;
  GGS_templateExpressionAST var_ifCondition_10231 ;
  nt_factor_5F_tpl_ (var_ifCondition_10231, inCompiler) ;
  outArgument_outExpression = GGS_templateLogicalNegateAST::init_21__21_ (var_operatorLocation_10162, var_ifCondition_10231, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 261)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_10684 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 274)) ;
  outArgument_outExpression = GGS_templateVarInExpressionAST::init_21_ (var_identifier_10684, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 285)) ;
  nt_expression_5F_template_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 287)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 285)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 287)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas4", 297)) ;
  outArgument_outExpression = GGS_templateTrueBoolAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 298)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas4", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas4", 308)) ;
  outArgument_outExpression = GGS_templateFalseBoolAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 309)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas4", 308)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_12207 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas4", 319)) ;
  outArgument_outExpression = GGS_templateLiteralUIntExpressionAST::init_21_ (var_literalInt_12207, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas4", 319)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_12613 ;
  var_literalDouble_12613 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas4", 331)) ;
  outArgument_outExpression = GGS_templateLiteralDoubleExpressionAST::init_21_ (var_literalDouble_12613, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas4", 331)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_13083 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 342)) ;
  outArgument_outExpression = GGS_templateLiteralCharExpressionAST::init_21_ (var_literalChar_13083, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 342)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS__5B_string_5D_ var_literalStringList_13503 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_13566 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 355)) ;
    var_literalStringList_13503.plusPlusAssignOperation (var_literalString_13566.readProperty_string ()  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 356)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_templateLiteralStringExpressionAST::init_21__21_ (var_literalStringList_13503, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 359)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 355)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 375)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas4", 378)) ;
    GGS_templateExpressionAST var_receiverExpression_14528 ;
    nt_expression_5F_template_ (var_receiverExpression_14528, inCompiler) ;
    GGS_lstring var_templateName_14627 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 381)) ;
    GGS_templateExpressionListAST var_expressionList_14676 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_14676, inCompiler) ;
    outArgument_outExpression = GGS_templateExtensionTemplateCallAST::init_21__21__21_ (var_receiverExpression_14528, var_templateName_14627, var_expressionList_14676, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 389)) ;
  } break ;
  case 2: {
    GGS_lstring var_typeName_14942 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 391)) ;
    GGS_lstring var_constructorName_14984 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 392)) ;
    GGS_templateExpressionListAST var_expressionList_15067 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15067, inCompiler) ;
    outArgument_outExpression = GGS_templateClassFunctionAST::init_21__21__21_ (var_typeName_14942, var_constructorName_14984, var_expressionList_15067, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 399)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas4", 401)) ;
    GGS_lstring var_filewrapperName_15307 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 403)) ;
    GGS_lstring var_templateName_15364 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 404)) ;
    GGS_templateExpressionListAST var_expressionList_15413 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15413, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 407)) ;
    outArgument_outExpression = GGS_templateFileWrapperTemplateCallAST::init_21__21__21_ (var_filewrapperName_15307, var_templateName_15364, var_expressionList_15413, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_location var_startLocation_15649 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 410)) ;
    GGS_templateExpressionAST var_receiverExpression_15711 ;
    nt_expression_5F_template_ (var_receiverExpression_15711, inCompiler) ;
    GGS_lstring var_getterName_15810 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 413)) ;
    GGS_templateExpressionListAST var_expressionList_15857 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15857, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 416)) ;
    GGS_location var_endLocation_15939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 417)) ;
    outArgument_outExpression = GGS_templateGetterCallInExpressionAST::init_21__21__21__21_ (var_receiverExpression_15711, var_getterName_15810, var_expressionList_15857, var_startLocation_15649.getter_union (var_endLocation_15939, inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas4", 422)), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas4", 425)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 427)) ;
      GGS_lstring var_optionName_16210 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 428)) ;
      GGS_lstring var_getterName_16256 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 429)) ;
      outArgument_outExpression = GGS_templateOptionAccessAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 430)), inCompiler COMMA_HERE), var_optionName_16210, var_getterName_16256, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_optionComponentName_16434 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 433)) ;
      GGS_lstring var_optionName_16499 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 434)) ;
      GGS_lstring var_getterName_16545 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 435)) ;
      outArgument_outExpression = GGS_templateOptionAccessAST::init_21__21__21_ (var_optionComponentName_16434, var_optionName_16499, var_getterName_16545, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 438)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 375)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas4", 378)) ;
    nt_expression_5F_template_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 381)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 389)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 391)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 392)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 399)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas4", 401)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 403)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 404)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 407)) ;
  } break ;
  case 4: {
    nt_expression_5F_template_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 413)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 416)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas4", 425)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 428)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 429)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 433)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 434)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 435)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 438)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_17067 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 450)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 451)) ;
  GGS_templateExpressionListAST var_expressionList_17151 ;
  nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_17151, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 453)) ;
  outArgument_outExpression = GGS_templateFunctionCallAST::init_21__21_ (var_functionName_17067, var_expressionList_17151, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 450)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 451)) ;
  nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 453)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfReceiverExpression_17463 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 461)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas4", 462)) ;
  GGS_lstring var_typeName_17536 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 463)) ;
  outArgument_outExpression = GGS_templateTestDynamicClassAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_17463, var_typeName_17536, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas4", 462)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 463)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GGS_templateExpressionListAST & outArgument_outExpressionList,
                                                                                           Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_templateExpressionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_9 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_18074 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 481)) ;
      GGS_templateExpressionAST var_expression_18139 ;
      nt_expression_5F_template_ (var_expression_18139, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_templateExpressionListAST_2E_element::init_21__21__21_ (var_selector_18074, var_expression_18139, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 483)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 483)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 485)) ;
      GGS_lstring var_selector_18241 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas4", 486)) ;
      GGS_templateExpressionAST var_expression_18315 ;
      nt_expression_5F_template_ (var_expression_18315, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_templateExpressionListAST_2E_element::init_21__21__21_ (var_selector_18241, var_expression_18315, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 488)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 488)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 481)) ;
      nt_expression_5F_template_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 485)) ;
      nt_expression_5F_template_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 499)) ;
  GGS_templateExpressionAST var_expression_18790 ;
  nt_expression_5F_template_ (var_expression_18790, inCompiler) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionExpressionAST::init_21__21_ (var_expression_18790, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 501)), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 501)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 499)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 507)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionGetColumnLocationAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 508)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 507)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 514)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionGotoColumnLocationAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 515)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas4", 521)) ;
  GGS_templateExpressionAST var_expression_19724 ;
  nt_expression_5F_template_ (var_expression_19724, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 523)) ;
  GGS_templateInstructionListAST var_blockInstructionList_19771 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (var_blockInstructionList_19771, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 527)) ;
    }
    if (select_templateSyntax_10 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_blockInstructionList_19771, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 532)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateBlockInstructionAST::init_21__21__21_ (var_expression_19724, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 535)), var_blockInstructionList_19771, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas4", 521)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 523)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_10 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 532)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas4", 542)) ;
  GGS_templateInstructionIfBranchListAST var_templateInstructionIfBranchList_20297 = GGS_templateInstructionIfBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_templateExpressionAST var_expression_20411 ;
    nt_expression_5F_template_ (var_expression_20411, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas4", 546)) ;
    GGS_templateInstructionListAST var_instructionList_20470 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      {
      routine_enterTemplateString_26_ (var_instructionList_20470, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 549)) ;
      }
      if (select_templateSyntax_12 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_instructionList_20470, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_templateInstructionIfBranchList_20297.plusPlusAssignOperation (GGS_templateInstructionIfBranchListAST_2E_element::init_21__21_ (var_expression_20411, var_instructionList_20470, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 553)) ;
    if (select_templateSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas4", 555)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_templateInstructionListAST var_elseInstructionList_20758 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas4", 561)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_elseInstructionList_20758, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 563)) ;
      }
      if (select_templateSyntax_14 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_elseInstructionList_20758, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 569)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionIfAST::init_21__21_ (var_templateInstructionIfBranchList_20297, var_elseInstructionList_20758, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 570)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas4", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_5F_template_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas4", 546)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_templateSyntax_12 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_templateSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas4", 555)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas4", 561)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_14 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 569)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GGS_templateInstructionListAST & outArgument_outResultingInstructionList,
                                                                                             Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outResultingInstructionList.drop () ; // Release 'out' argument
  outArgument_outResultingInstructionList = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 580)) ;
    }
    if (select_templateSyntax_15 (inCompiler) == 2) {
      nt_template_5F_instruction_ (outArgument_outResultingInstructionList, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_15 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GGS__5B_lstring_5D_ & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GGS_lbigint var_count_2269 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 45)) ;
  GGS_uint var_n_2292 = var_count_2269.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 46)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_2292.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_2269.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 48)) ;
    }
  }
  if (var_n_2292.isValid ()) {
    uint32_t variant_2393 = var_n_2292.uintValue () ;
    bool loop_2393 = true ;
    while (loop_2393) {
      loop_2393 = GGS_bool (ComparisonKind::greaterThan, var_n_2292.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_2393) {
        loop_2393 = GGS_bool (ComparisonKind::greaterThan, var_n_2292.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_2393 && (0 == variant_2393)) {
        loop_2393 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("template-for-instruction.galgas4", 50)) ;
      }
      if (loop_2393) {
        variant_2393 -= 1 ;
        ioArgument_ioElementList.plusPlusAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas4", 51))  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 51)) ;
        var_n_2292.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 52)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GGS__5B_lstring_5D_ & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 59)) ;
  ioArgument_ioElementList.plusPlusAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas4", 60))  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GGS__5B_lstring_5D_ & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GGS_lstring var_constantName_2881 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 66)) ;
  ioArgument_ioElementList.plusPlusAssignOperation (var_constantName_2881  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GGS__5B_lstring_5D_ & outArgument_outEnumeration,
                                                                                                  GGS_location & outArgument_outEndOfProperties,
                                                                                                  GGS_templateExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outEnumeration.drop () ; // Release 'out' argument
  outArgument_outEndOfProperties.drop () ; // Release 'out' argument
  outArgument_outExpression.drop () ; // Release 'out' argument
  outArgument_outEnumeration = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 76)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (outArgument_outEnumeration, inCompiler) ;
    if (select_templateSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outEndOfProperties = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 83)) ;
  nt_expression_5F_template_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 87)) ;
    GGS_location var_startLocation_3529 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 88)) ;
    GGS_lstring var_prefixString_3594 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 89)) ;
    GenericArray <FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string::makeEmptyString ()) ;
    inCompiler->emitSemanticError (var_prefixString_3594.readProperty_location ().getter_union (var_startLocation_3529, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 90)), GGS_string ("useless prefix"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 90)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 76)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_templateSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 83)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 87)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 89)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 98)) ;
  GGS_bool var_ascending_3942 ;
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
    var_ascending_3942 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 103)) ;
    var_ascending_3942 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 106)) ;
    var_ascending_3942 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS__5B_lstring_5D_ var_enumeration_4121 ;
  GGS_location var_endOfProperties_4139 ;
  GGS_templateExpressionAST var_expression_4161 ;
  nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeration_4121, var_endOfProperties_4139, var_expression_4161, inCompiler) ;
  GGS_templateInstructionListAST var_beforeInstructionList_4230 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 114)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      {
      routine_enterTemplateString_26_ (var_beforeInstructionList_4230, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 116)) ;
      }
      if (select_templateSyntax_20 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_4230, inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 122)) ;
  GGS_lstring var_indexIdentifier_4488 ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
    var_indexIdentifier_4488 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 125)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 127)) ;
    var_indexIdentifier_4488 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 128)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 129)) ;
  } break ;
  default:
    break ;
  }
  GGS_templateInstructionListAST var_doInstructionList_4679 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    {
    routine_enterTemplateString_26_ (var_doInstructionList_4679, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 133)) ;
    }
    if (select_templateSyntax_22 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_doInstructionList_4679, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_templateInstructionListAST var_betweenInstructionList_4889 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 141)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_betweenInstructionList_4889, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 143)) ;
      }
      if (select_templateSyntax_24 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_betweenInstructionList_4889, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_templateInstructionListAST var_afterInstructionList_5164 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 152)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      {
      routine_enterTemplateString_26_ (var_afterInstructionList_5164, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 154)) ;
      }
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_4230, inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 160)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionForeachAST::init_21__21__21__21__21__21__21__21__21_ (var_ascending_3942, var_expression_4161, var_enumeration_4121, var_endOfProperties_4139, var_beforeInstructionList_4230, var_doInstructionList_4679, var_indexIdentifier_4488, var_betweenInstructionList_4889, var_afterInstructionList_5164, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 98)) ;
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 103)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 106)) ;
  } break ;
  default:
    break ;
  }
  nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 114)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_templateSyntax_20 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 122)) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 127)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 128)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 129)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_templateSyntax_22 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 141)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_24 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 152)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 46)) ;
  GGS_templateExpressionAST var_switchExpression_2427 ;
  nt_expression_5F_template_ (var_switchExpression_2427, inCompiler) ;
  GGS_location var_endOfSwitchExpression_2463 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 49)) ;
  GGS_templateInstructionSwitchBranchListAST var_templateInstructionSwitchBranchList_2572 = GGS_templateInstructionSwitchBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 54)) ;
      GGS__5B_lstring_5D_ var_constantNameList_2694 ;
      GGS__5B_switchExtractedValuesAST_5D_ var_associatedValuesExtraction_2753 ;
      nt_switch_5F_case_ (var_constantNameList_2694, var_associatedValuesExtraction_2753, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 59)) ;
      GGS_templateInstructionListAST var_instructionList_2836 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        {
        routine_enterTemplateString_26_ (var_instructionList_2836, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 62)) ;
        }
        if (select_templateSyntax_28 (inCompiler) == 2) {
          nt_template_5F_instruction_ (var_instructionList_2836, inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_templateInstructionSwitchBranchList_2572.plusPlusAssignOperation (GGS_templateInstructionSwitchBranchListAST_2E_element::init_21__21__21__21_ (var_constantNameList_2694, var_associatedValuesExtraction_2753, var_instructionList_2836, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 66)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 68)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionSwitchAST::init_21__21__21_ (var_switchExpression_2427, var_endOfSwitchExpression_2463, var_templateInstructionSwitchBranchList_2572, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 46)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 54)) ;
      nt_switch_5F_case_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 59)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_templateSyntax_28 (inCompiler) == 2) {
          nt_template_5F_instruction_indexing (inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i33_ (GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                      GGS__5B_switchExtractedValuesAST_5D_ & outArgument_outAssociatedValuesExtraction,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_3628 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 83)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_3628, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 84)) ;
    }
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS__5B_switchExtractedValuesAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_3845 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 94)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 95)) ;
        UpEnumerator_range enumerator_3889 (GGS_range (GGS_uint (uint32_t (0U)), var_n_3845.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 96)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 96)))) ;
        while (enumerator_3889.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 97)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 97)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 97)) ;
          enumerator_3889.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 100)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 101)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 101)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 101)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_4118 ;
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          var_typeName_4118 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 105)) ;
        } break ;
        case 2: {
          var_typeName_4118 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 107)) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_4272 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 109)) ;
        GGS_bool var_constantMarkedAsUnused_4300 = var_constantName_4272.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 110)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (var_typeName_4118, var_constantName_4272, var_constantMarkedAsUnused_4300, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 111)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_31 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 115)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i33_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 83)) ;
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 94)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 95)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 100)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 105)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 109)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_31 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 115)) ;
  } break ;
  default:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineImplementationForGeneration_2E_weak::objectCompare (const GGS_routineImplementationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (void) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak & GGS_routineImplementationForGeneration_2E_weak::operator = (const GGS_routineImplementationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (const GGS_routineImplementationForGeneration & inSource) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak GGS_routineImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_routineImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_routineImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_routineImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::bang_routineImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_routineImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routineImplementationForGeneration) ;
      result = GGS_routineImplementationForGeneration ((cPtr_routineImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routineImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ("routineImplementationForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration::objectCompare (const GGS_classFuncExpressionForGeneration & inOperand) const {
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

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                  const GGS_location & in_mLocation,
                                  const GGS_unifiedTypeMapEntry & in_classFuncType,
                                  const GGS_string & in_classFuncName,
                                  const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                  const GGS_bool & in_mHasCompilerArgument,
                                  const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_classFuncType, in_classFuncName, in_mEffectiveParameterList, in_mHasCompilerArgument, in_requiredTypes, inCompiler) ;
  const GGS_classFuncExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::
classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                   const GGS_location & in_mLocation,
                                                                   const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                   const GGS_string & in_classFuncName,
                                                                   const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                   const GGS_bool & in_mHasCompilerArgument,
                                                                   const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (const cPtr_classFuncExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_classFuncExpressionForGeneration::readProperty_classFuncType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_classFuncExpressionForGeneration::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_classFuncExpressionForGeneration::readProperty_mEffectiveParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFuncExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS_classFuncExpressionForGeneration::readProperty_requiredTypes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_unifiedTypeMapEntry_5D_ () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_requiredTypes ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                              const GGS_location & in_mLocation,
                                                                              const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                              const GGS_string & in_classFuncName,
                                                                              const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                              const GGS_bool & in_mHasCompilerArgument,
                                                                              const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classFuncExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

void cPtr_classFuncExpressionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiredTypes.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_classFuncType, mProperty_classFuncName, mProperty_mEffectiveParameterList, mProperty_mHasCompilerArgument, mProperty_requiredTypes, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_classFuncType.printNonNullClassInstanceProperties ("classFuncType") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_mEffectiveParameterList.printNonNullClassInstanceProperties ("mEffectiveParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_requiredTypes.printNonNullClassInstanceProperties ("requiredTypes") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ("classFuncExpressionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration_2E_weak::objectCompare (const GGS_classFuncExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak & GGS_classFuncExpressionForGeneration_2E_weak::operator = (const GGS_classFuncExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (const GGS_classFuncExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak GGS_classFuncExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_classFuncExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_classFuncExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration_2E_weak::bang_classFuncExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classFuncExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classFuncExpressionForGeneration) ;
      result = GGS_classFuncExpressionForGeneration ((cPtr_classFuncExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ("classFuncExpressionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @expressionCollectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionCollectionForGeneration::objectCompare (const GGS_expressionCollectionForGeneration & inOperand) const {
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

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_collectionValueElementListForGeneration & in_expressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_expressionCollectionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_expressionCollectionForGeneration (inCompiler COMMA_THERE)) ;
  object->expressionCollectionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_expressionList, inCompiler) ;
  const GGS_expressionCollectionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::
expressionCollectionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_collectionValueElementListForGeneration & in_expressionList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (const cPtr_expressionCollectionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_expressionCollectionForGeneration::readProperty_expressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_collectionValueElementListForGeneration () ;
  }else{
    cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    return p->mProperty_expressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_collectionValueElementListForGeneration & in_expressionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expressionList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_expressionCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

void cPtr_expressionCollectionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@expressionCollectionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_expressionCollectionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_expressionCollectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionCollectionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expressionList.printNonNullClassInstanceProperties ("expressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @expressionCollectionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration ("expressionCollectionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionForGeneration::objectCompare (const GGS_varInExpressionForGeneration & inOperand) const {
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

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mCppVarName,
                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->varInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mCppVarName, in_mNameForCheckingFormalParameterUsing, inCompiler) ;
  const GGS_varInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::
varInExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_string & in_mCppVarName,
                                                   const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mCppVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mCppVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_string & in_mCppVarName,
                                                                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

void cPtr_varInExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_varInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCppVarName, mProperty_mNameForCheckingFormalParameterUsing, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCppVarName.printNonNullClassInstanceProperties ("mCppVarName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @varInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @optionValueExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionValueExpressionForGeneration::objectCompare (const GGS_optionValueExpressionForGeneration & inOperand) const {
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

GGS_optionValueExpressionForGeneration::GGS_optionValueExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionValueExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionValueExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionValueExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionValueExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::
optionValueExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_bool & in_mOptionComponentIsPredefined,
                                                             const GGS_string & in_mOptionComponentName,
                                                             const GGS_string & in_mOptionEntryName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration::GGS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionValueExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionValueExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionValueExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionValueExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionValueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                  const GGS_string & in_mOptionComponentName,
                                                                                  const GGS_string & in_mOptionEntryName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionValueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

void cPtr_optionValueExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@optionValueExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionValueExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionValueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionValueExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionValueExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ("optionValueExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionValueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @optionCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCharExpressionForGeneration::objectCompare (const GGS_optionCharExpressionForGeneration & inOperand) const {
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

GGS_optionCharExpressionForGeneration::GGS_optionCharExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCharExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::
optionCharExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_bool & in_mOptionComponentIsPredefined,
                                                            const GGS_string & in_mOptionComponentName,
                                                            const GGS_string & in_mOptionEntryName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration::GGS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionCharExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCharExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCharExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                const GGS_string & in_mOptionComponentName,
                                                                                const GGS_string & in_mOptionEntryName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

void cPtr_optionCharExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@optionCharExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionCharExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionCharExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ("optionCharExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @optionStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionStringExpressionForGeneration::objectCompare (const GGS_optionStringExpressionForGeneration & inOperand) const {
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

GGS_optionStringExpressionForGeneration::GGS_optionStringExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionStringExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::
optionStringExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                              const GGS_location & in_mLocation,
                                                              const GGS_bool & in_mOptionComponentIsPredefined,
                                                              const GGS_string & in_mOptionComponentName,
                                                              const GGS_string & in_mOptionEntryName,
                                                              Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration::GGS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionStringExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionStringExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionStringExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GGS_location & in_mLocation,
                                                                                    const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                    const GGS_string & in_mOptionComponentName,
                                                                                    const GGS_string & in_mOptionEntryName,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

void cPtr_optionStringExpressionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@optionStringExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionStringExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionStringExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionStringExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ("optionStringExpressionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @optionCommentExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCommentExpressionForGeneration::objectCompare (const GGS_optionCommentExpressionForGeneration & inOperand) const {
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

GGS_optionCommentExpressionForGeneration::GGS_optionCommentExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCommentExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCommentExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCommentExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionCommentExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::
optionCommentExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                               const GGS_location & in_mLocation,
                                                               const GGS_bool & in_mOptionComponentIsPredefined,
                                                               const GGS_string & in_mOptionComponentName,
                                                               const GGS_string & in_mOptionEntryName,
                                                               Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration::GGS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCommentExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionCommentExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCommentExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCommentExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCommentExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                      const GGS_string & in_mOptionComponentName,
                                                                                      const GGS_string & in_mOptionEntryName,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionCommentExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

void cPtr_optionCommentExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@optionCommentExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionCommentExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCommentExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionCommentExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionCommentExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ("optionCommentExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCommentExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @literalCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionForGeneration::objectCompare (const GGS_literalCharExpressionForGeneration & inOperand) const {
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

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_char & in_mCharacter,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mCharacter, inCompiler) ;
  const GGS_literalCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::
literalCharExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_char & in_mCharacter,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_char GGS_literalCharExpressionForGeneration::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_char () ;
  }else{
    cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_char & in_mCharacter,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

void cPtr_literalCharExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalCharExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalCharExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ("literalCharExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @literalUIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUIntExpressionForGeneration::objectCompare (const GGS_literalUIntExpressionForGeneration & inOperand) const {
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

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_uint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::
literalUIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_uint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_literalUIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_uint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

void cPtr_literalUIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalUIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ("literalUIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @literalUInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_uint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::
literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_uint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_literalUInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_uint_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalUInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalUInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ("literalUInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @literalSIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSIntExpressionForGeneration::objectCompare (const GGS_literalSIntExpressionForGeneration & inOperand) const {
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

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_sint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::
literalSIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_sint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sint GGS_literalSIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sint () ;
  }else{
    cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_sint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

void cPtr_literalSIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalSIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ("literalSIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @literalSInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_sint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::
literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_sint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (const cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_literalSInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sint_36__34_ () ;
  }else{
    cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_sint_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalSInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalSInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ("literalSInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionForGeneration::objectCompare (const GGS_literalBigIntExpressionForGeneration & inOperand) const {
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

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_bigint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalBigIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::
literalBigIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_bigint & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (const cPtr_literalBigIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_literalBigIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_bigint & in_mValue,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBigIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

void cPtr_literalBigIntExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalBigIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ("literalBigIntExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

