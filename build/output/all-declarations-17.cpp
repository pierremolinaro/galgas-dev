#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 454)) ;
  GGS_lstring var_lexiqueComponentName_16780 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 457)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_16870 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_16934 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_16997 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_17053 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_17112 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_17184 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_17259 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_17320 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_17367 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_16870, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_16934, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_16997, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_17053, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_17112, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_17259, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_17320, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_17320, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_17184, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_17367, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 490)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_16780, GGS_bool (false), var_templateDelimitorList_16870, var_templateReplacementList_16934, var_lexicalAttributeList_16997, var_lexicalStyleList_17053, var_terminalDeclarationList_17112, var_lexicalMessageDeclarationList_17184, var_lexicalListDeclarationList_17259, var_lexicalRuleList_17320, var_indexingListAST_17367, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 491)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 454)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 457)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 510)) ;
  GGS_lstring var_indexName_18734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 512)) ;
  GGS_lstring var_indexComment_18813 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 513)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_18734, var_indexComment_18813  COMMA_SOURCE_FILE ("lexique-component.galgas3", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 510)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 512)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 513)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 521)) ;
  GGS_lstring var_messageName_19145 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 523)) ;
  GGS_lstring var_messageValue_19194 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 524)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_19145, var_messageValue_19194  COMMA_SOURCE_FILE ("lexique-component.galgas3", 525)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 523)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 532)) ;
  GGS_lstring var_listName_19514 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 533)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_19514, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 534)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 532)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 540)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_19844 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_19844, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 542)) ;
  GGS_lexicalInstructionListAST var_instructionList_19909 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_19909, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 548)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_19844, var_instructionList_19909, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 549)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 540)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 555)) ;
  GGS_lexicalInstructionAST var_instruction_20369 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_20369, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_20369  COMMA_SOURCE_FILE ("lexique-component.galgas3", 557)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 555)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 563)) ;
  GGS_lexicalExpressionAST var_whileExpression_20675 ;
  nt_lexical_5F_expression_ (var_whileExpression_20675, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 565)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_20734 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_20734, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_20675, var_whileInstructionList_20734  COMMA_SOURCE_FILE ("lexique-component.galgas3", 571)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 563)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 565)) ;
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
  GGS_lchar var_character_21159 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 577)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_21159, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 577)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_21487 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 584)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_21487, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 584)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_21808 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 591)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 592)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_21808, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 592)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_22180 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_22180, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 603)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_22334 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 607)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_22501 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_22501, inCompiler) ;
        var_functionActualArgumentList_22334.addAssignOperation (var_arg_22501  COMMA_SOURCE_FILE ("lexique-component.galgas3", 609)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 611)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_22180, var_functionActualArgumentList_22334, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 603)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 607)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 611)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 628)) ;
      GGS_lexicalExpressionAST var_rightExpression_23144 ;
      nt_lexical_5F_factor_ (var_rightExpression_23144, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_23144, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 628)) ;
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
  GGS_lstring var_string_23437 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 637)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_23437, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 637)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 644)) ;
  GGS_lstring var_string_23695 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 646)) ;
  GGS_lstring var_errorMessage_23736 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 647)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_23695, var_errorMessage_23736, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 646)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 647)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_24014 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_24014, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 658)) ;
    GGS_lchar var_upperBound_24141 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 659)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_24014, var_upperBound_24141, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 658)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 659)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_24442 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 667)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_24442, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 667)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 674)) ;
  GGS_lstring var_name_24758 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 675)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_24800 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_24869 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 679)) ;
      GGS_lstring var_sentAttribute_24902 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 680)) ;
      var_sentAttributeList_24800.addAssignOperation (var_selector_24869, var_sentAttribute_24902  COMMA_SOURCE_FILE ("lexique-component.galgas3", 681)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 683)) ;
      GGS_lstring var_selector_24998 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas3", 684)) ;
      GGS_lstring var_sentAttribute_25041 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 685)) ;
      var_sentAttributeList_24800.addAssignOperation (var_selector_24998, var_sentAttribute_25041  COMMA_SOURCE_FILE ("lexique-component.galgas3", 686)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_25132 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 690)) ;
    var_theStyle_25132 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 691)) ;
  } break ;
  case 2: {
    var_theStyle_25132 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 693)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 695)) ;
  GGS_lstring var_errorMessage_25336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 697)) ;
  GGS_lexicalListEntryListAST var_entryList_25365 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_25365, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 704)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_24758, var_theStyle_25132, var_errorMessage_25336, var_sentAttributeList_24800, var_entryList_25365  COMMA_SOURCE_FILE ("lexique-component.galgas3", 705)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 674)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 675)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 679)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 683)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 690)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 691)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 697)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 704)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_entrySpelling_25803 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 711)) ;
  GGS_bool var_isTemplateEndMark_25825 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_25859 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 716)) ;
      var_isTemplateEndMark_25825 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 719)) ;
      var_nonAtomicSelection_25859 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_26058 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 724)) ;
    var_terminalSpelling_26058 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 725)) ;
  } break ;
  case 2: {
    var_terminalSpelling_26058 = var_entrySpelling_25803 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_25803, var_terminalSpelling_26058, var_nonAtomicSelection_25859, var_isTemplateEndMark_25825  COMMA_SOURCE_FILE ("lexique-component.galgas3", 729)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 716)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 719)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 724)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 725)) ;
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
  GGS_lstring var_typeName_26582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 739)) ;
  GGS_lstring var_name_26622 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 740)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_26582, var_name_26622  COMMA_SOURCE_FILE ("lexique-component.galgas3", 741)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 739)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 740)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_name_26901 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 747)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_26943 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_27040 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 751)) ;
      GGS_lstring var_sentAttribute_27073 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 752)) ;
      var_sentAttributeList_26943.addAssignOperation (var_selector_27040, var_sentAttribute_27073  COMMA_SOURCE_FILE ("lexique-component.galgas3", 753)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 755)) ;
      GGS_lstring var_selector_27169 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas3", 756)) ;
      GGS_lstring var_sentAttribute_27212 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 757)) ;
      var_sentAttributeList_26943.addAssignOperation (var_selector_27169, var_sentAttribute_27212  COMMA_SOURCE_FILE ("lexique-component.galgas3", 758)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_27303 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas3", 760)) ;
  GGS_bool var_nonAtomicSelection_27361 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_27396 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 765)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_27303.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 767)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 767)) ;
        }
      }
      var_theStyle_27303 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 771)) ;
      var_nonAtomicSelection_27361 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 774)) ;
      var_templateEndMark_27396 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 777)) ;
  GGS_lstring var_errorMessage_27784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 778)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_26901, var_sentAttributeList_26943, var_errorMessage_27784, var_theStyle_27303, var_nonAtomicSelection_27361, var_templateEndMark_27396  COMMA_SOURCE_FILE ("lexique-component.galgas3", 779)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 747)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 751)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 755)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 757)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 765)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 771)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 774)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 777)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 778)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 791)) ;
  GGS_lstring var_styleIdentifier_28214 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 792)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_28214.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28214.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas3", 794)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_28214.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 796)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28214.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 797)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 799)) ;
  GGS_lstring var_comment_28654 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 800)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_28214, var_comment_28654  COMMA_SOURCE_FILE ("lexique-component.galgas3", 801)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 792)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 799)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i22_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_3247 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_3339 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 78)) ;
    GGS_lstring var_searchListName_3397 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 79)) ;
    var_lexicalSendSearchList_3247.addAssignOperation (var_attributeName_3339, var_searchListName_3397  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 80)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_3567 ;
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_3638 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 87)) ;
    var_lexicalSendDefaultAction_3567 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_3638, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 90)) ;
    GGS_lstring var_defaultErrorMessageName_3801 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 91)) ;
    var_lexicalSendDefaultAction_3567 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_3801, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_3247, var_lexicalSendDefaultAction_3567, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 91)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_actionName_4445 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 107)) ;
  GGS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_4505 = GGS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 112)) ;
      GGS_location var_passingModeLocation_4579 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 113)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_4711 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_4711, inCompiler) ;
      var_actualArgumentList_4505.addAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_4579, var_arg_4711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 115)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 117)) ;
      GGS_location var_passingModeLocation_4834 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 118)) ;
      GGS_lstring var_attributeName_4904 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 119)) ;
      GGS_lexicalAttributeInputOutputArgumentAST var_arg_4928 = GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_4834, var_attributeName_4904, inCompiler COMMA_HERE) ;
      var_actualArgumentList_4505.addAssignOperation (var_arg_4928  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstringlist var_errorMessageList_5074 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_5177 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 128)) ;
      var_errorMessageList_5074.addAssignOperation (var_errorMessageName_5177  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 129)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 134)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_4445, var_actualArgumentList_4505, var_errorMessageList_5074, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 112)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 117)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 119)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 128)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 52)) ;
  GGS_lstring var_tagName_2431 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_2431, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 75)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_3162 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 78)) ;
    GGS_lexicalExpressionAST var_selectExpression_3269 ;
    nt_lexical_5F_expression_ (var_selectExpression_3269, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 80)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_3333 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_3333, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_3162.addAssignOperation (var_selectExpression_3269, var_selectInstructionList_3333  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 86)) ;
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 89)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_3590 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_3590, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 95)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_3162, var_defaultInstructionList_3590, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 78)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 80)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 89)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_2444 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 51)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_2444, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 50)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 55)) ;
  GGS_lstring var_tagName_2542 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 57)) ;
  GGS_lstring var_terminalName_2585 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 58)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_2542, var_terminalName_2585, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 69)) ;
  GGS_location var_location_2937 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 70)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_2998 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2998, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_3146 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_3146, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 81)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2998, var_lexicalWhileBranchList_3146, var_location_2937, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 69)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 52)) ;
  GGS_lstring var_terminalName_2447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_2447, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 52)) ;
  GGS_lstring var_warningMessageName_2473 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_2473, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 52)) ;
  GGS_lstring var_errorMessageName_2459 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_2459, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 134)) ;
  GGS_lstring var_lexiqueComponentName_4923 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 137)) ;
  GGS_lstring var_lexiqueSuperComponentName_4983 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 140)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_5078 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_5142 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_5078, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_5142, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 149)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_4923, var_lexiqueSuperComponentName_4983, var_templateDelimitorList_5078, var_templateReplacementList_5142, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 150)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 140)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 162)) ;
  GGS_lstring var_startString_5806 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 163)) ;
  GGS_bool var_nonAtomicSelection_5826 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_5861 = GGS_bool (false) ;
  GGS_bool var_preserved_5893 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 169)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_5826.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 171)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 171)) ;
        }
      }
      var_nonAtomicSelection_5826 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 175)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_5861.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 177)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 177)) ;
        }
      }
      var_templateEndMark_5861 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 181)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_5893.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 183)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 183)) ;
        }
      }
      var_preserved_5893 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 187)) ;
  GGS_lstring var_endString_6461 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 188)) ;
  ioArgument_ioTemplateDelimitorList.addAssignOperation (var_startString_5806, var_nonAtomicSelection_5826, var_templateEndMark_5861, var_preserved_5893, var_endString_6461  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 189)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 169)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 175)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 187)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 200)) ;
  GGS_lstring var_matchString_6871 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 201)) ;
  GGS_lstring var_replacementString_6900 ;
  GGS_lstring var_replacementFunction_6935 ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 205)) ;
    var_replacementString_6900 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 207)) ;
    var_replacementFunction_6935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 210)) ;
    var_replacementString_6900 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 211)) ;
    var_replacementFunction_6935 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 212)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssignOperation (var_matchString_6871, var_replacementString_6900, var_replacementFunction_6935  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 214)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 201)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 207)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 210)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 211)) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 93)) ;
  GGS_lstring var_optionComponentName_3485 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 95)) ;
  GGS_commandLineOptionListAST var_options_3547 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_3547, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 101)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_3485, var_options_3547, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_4008 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 112)) ;
  GGS_lstring var_mOptionInternalName_4055 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 114)) ;
  GGS_lchar var_mOptionInvocationLetter_4108 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 116)) ;
  GGS_lstring var_mOptionInvocationString_4169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 118)) ;
  GGS_lstring var_mOptionComment_4231 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 119)) ;
  GGS_lstring var_defaultValue_4254 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 120)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_4335 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_4254 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 127)) ;
      var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 128)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_4628 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 130)) ;
      var_defaultValue_4254 = GGS_lstring::init_21__21_ (var_v_4628.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas3", 131)), var_v_4628.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_4335 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 132)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_4008, var_mOptionInternalName_4055, var_mOptionInvocationLetter_4108, var_mOptionInvocationString_4169, var_mOptionComment_4231, var_defaultValue_4254, var_optionDefaultValueKind_4335  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 119)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 127)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 130)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 257)) ;
  GGS_lstring var_mGUIName_8738 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 259)) ;
  GGS_lstringlist var_importedOptionList_8776 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_8836 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_8893 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_8954 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 266)) ;
      GGS_lstring var_fileExtension_9040 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 269)) ;
      GGS_lstring var_indexingPathSuffix_9104 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 270)) ;
      var_projectExtensionList_8954.addAssignOperation (var_fileExtension_9040, var_indexingPathSuffix_9104  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 271)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_8836, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_8776, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_8893, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 280)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_8738, var_importedOptionList_8776, var_simpleGlobalAttributes_8836, var_withLexiqueList_8893, var_projectExtensionList_8954  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 281)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 270)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 293)) ;
  GGS_lstring var_lexiqueReference_9808 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 294)) ;
  GGS_guiLabelListAST var_labels_9850 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_9898 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_9958 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 301)) ;
      GGS_uint var_displayStyle_10042 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_10042 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 306)) ;
        var_displayStyle_10042 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_10181 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_10251 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 311)) ;
        GGS_uint var_displayFlags_10278 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_10278 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 316)) ;
          var_displayFlags_10278 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 319)) ;
          GGS_lbigint var_leadingStrip_10471 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 320)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_10471.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 321)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_10471.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 322)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 324)) ;
          GGS_lbigint var_endingStrip_10648 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 325)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_10648.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 326)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_10648.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 327)) ;
            }
          }
          var_displayFlags_10278 = var_leadingStrip_10471.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)).operator_or (var_endingStrip_10648.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 330)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_10181.addAssignOperation (var_terminal_10251, var_displayFlags_10278  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 332)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_9850.addAssignOperation (var_displayStyle_10042, var_terminalList_10181, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 336))  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 336)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_11053 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 338)) ;
      GGS_lstring var_name_11088 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 340)) ;
      GGS_lstring var_value_11113 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 341)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_11198 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 343)) ;
        var_value_11113 = GGS_lstring::init_21__21_ (var_value_11113.readProperty_string ().add_operation (var_v_11198.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 344)), var_v_11198.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_9958.addAssignOperation (var_key_11053, var_name_11088, var_value_11113  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 347)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_11375 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 350)) ;
      GGS_lstring var_value_11421 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 351)) ;
      var_simpleAttributes_9898.addAssignOperation (var_name_11375, var_value_11421  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 352)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 354)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_9808, var_labels_9850, var_simpleAttributes_9898, var_compoundAttributes_9958  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 355)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 301)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 306)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 311)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 316)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 320)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 325)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 330)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 340)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 343)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 350)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 362)) ;
  GGS_lstring var_optionReference_11809 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 363)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_11809  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 364)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 363)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mKey_12088 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 371)) ;
  GGS_lstring var_mValue_12109 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 372)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_12182 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 374)) ;
    var_mValue_12109 = GGS_lstring::init_21__21_ (var_mValue_12109.readProperty_string ().add_operation (var_value_12182.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 375)), var_value_12182.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_12088, var_mValue_12109  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 378)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 374)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 243)) ;
  GGS_lstring var_syntaxComponentName_10149 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 244)) ;
  GGS_lstring var_importedLexiqueReference_10211 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_10211 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 250)) ;
    var_importedLexiqueReference_10211 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 251)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 252)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_10413 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10413 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 259)) ;
    var_hasTranslateFeature_10413 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 262)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_10590 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_10661 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_10590, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_10661, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 273)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_10149, var_importedLexiqueReference_10211, var_nonterminalDeclarationList_10590, var_ruleList_10661, var_hasTranslateFeature_10413  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 243)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 244)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 250)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 251)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 252)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 259)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 262)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 273)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 288)) ;
  GGS_lstring var_syntaxComponentName_11445 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 289)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 290)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11510 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_11581 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_11510, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_11581, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 301)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_11445.readProperty_string (), var_syntaxComponentName_11445, var_nonterminalDeclarationList_11510, var_ruleList_11581, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 302)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 288)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 289)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 290)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 301)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 321)) ;
  GGS_lstring var_mNonterminalName_12621 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 322)) ;
  GGS_nonTerminalLabelListAST var_labels_12695 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_12782 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_12782, inCompiler) ;
  var_labels_12695.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 325)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_12782, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 325))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 325)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 328)) ;
      GGS_lstring var_labelName_12943 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 329)) ;
      GGS_formalParameterListAST var_formalParameters_13029 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_13029, inCompiler) ;
      var_labels_12695.addAssignOperation (var_labelName_12943, var_formalParameters_13029, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 331))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 331)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_12621, var_labels_12695  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 333)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 321)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 322)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 328)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 329)) ;
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
  GGS_formalParameterListAST var_mFormalParameters_13643 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_13643, inCompiler) ;
  GGS_location var_endOfArguments_13669 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 343)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 344)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_13784 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_13784, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameters_13643, var_endOfArguments_13669, var_mSyntaxInstructionList_13784, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 351))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 346)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 344)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 359)) ;
  GGS_lstring var_mNonterminalName_14244 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 360)) ;
  GGS_lstring var_labelName_14293 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 361)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_14344 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_14293, var_mLabelList_14344, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 366)) ;
      var_labelName_14293 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 367)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_14244, var_mLabelList_14344  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 369)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 359)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 360)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 366)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 367)) ;
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
        GGS_semanticInstructionAST var_instruction_15163 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15163, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15163  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 386)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_15290 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15290, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15290  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 389)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 393)) ;
        } break ;
        case 2: {
          GGS_string var_separator_15431 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 395)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_15431.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 396)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 396)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 397)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 397)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 393)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 47)) ;
  GGS_location var_instructionLocation_2250 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 48)) ;
  GGS_semanticExpressionAST var_sentExpression_2349 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sentExpression_2349, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_2250, var_sentExpression_2349, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 47)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mNonterminalName_2825 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 56)) ;
  GGS_actualParameterListAST var_mActualParameterList_2958 ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (ioArgument_ioDeclarations, var_mActualParameterList_2958, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_3100 ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_3100 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 63)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_3100, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21_ (var_mNonterminalName_2825.readProperty_location (), var_mNonterminalName_2825, var_mActualParameterList_2958, var_grammarInstructionSyntaxDirectedTranslationResult_3100, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 56)) ;
  nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 63)) ;
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
  GGS_lstring var_terminalName_3973 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 84)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_4069 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_4069, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_4135 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_4135, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4270 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4400 ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4270 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4400 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 94)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4270, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4400, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_3973.readProperty_location (), var_terminalName_3973, var_actualInputParameterList_4069, var_indexNameList_4135, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4270, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4400, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 84)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 94)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_5592 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 117)) ;
      GGS_lstring var_postfixName_5654 ;
      switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
        var_postfixName_5654 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas3", 120)) ;
      } break ;
      case 2: {
        var_postfixName_5654 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 122)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_5592, var_postfixName_5654  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 124)) ;
      if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 126)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 128)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 115)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 117)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 122)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 126)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 128)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 69)) ;
  GGS_location var_mSelectInstructionLocation_3144 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 70)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_3196 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_3323 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3323, inCompiler) ;
  var_mSelectBranchList_3196.addAssignOperation (var_il_3323, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 73))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 75)) ;
    GGS_syntaxInstructionList var_instructionList_3470 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3470, inCompiler) ;
    var_mSelectBranchList_3196.addAssignOperation (var_instructionList_3470, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 77))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 77)) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 80)) ;
  GGS_location var_endOf_5F_select_5F_instruction_3582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 81)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_3144, var_mSelectBranchList_3196, var_endOf_5F_select_5F_instruction_3582, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 69)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 75)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 73)) ;
  GGS_location var_mRepeatInstructionLocation_3371 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 74)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_3489 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_3489, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_3522 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 76)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_3575 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 79)) ;
    GGS_syntaxInstructionList var_mInstructionList_3729 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_3729, inCompiler) ;
    var_mRepeatBranchList_3575.addAssignOperation (var_mInstructionList_3729, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 81))  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 81)) ;
    if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 84)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_3844 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 85)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_3371, var_mRepeatedInstructionList_3489, var_endOf_5F_repeated_5F_instructions_3522, var_mRepeatBranchList_3575, var_endOf_5F_repeat_5F_instruction_3844, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 73)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 79)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 84)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbool var_hasIndexing_8300 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_8300 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 238)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_8300 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 240)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 243)) ;
  GGS_lstring var_mGrammarName_8503 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 244)) ;
  GGS_lstring var_mGrammarClass_8581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 245)) ;
  GGS_bool var_hasTranslateFeature_8635 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_8635 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 251)) ;
    var_hasTranslateFeature_8635 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 254)) ;
  GGS_lstringlist var_syntaxComponents_8812 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 258)) ;
    GGS_lstring var_syntaxComponent_8894 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 259)) ;
    var_syntaxComponents_8812.addAssignOperation (var_syntaxComponent_8894  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 260)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_startSymbol_9026 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 264)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_9069 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 266)), inCompiler COMMA_HERE), var_mLabelList_9069, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 269)) ;
      GGS_lstring var_labelName_9273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_9273, var_mLabelList_9069, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_9412 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 277)) ;
      GGS_lstring var_nonterminalSymbolName_9526 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 278)) ;
      var_mUnusedNonterminalList_9412.addAssignOperation (var_nonterminalSymbolName_9526  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 279)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 282)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_8300, var_mGrammarName_8503, var_mGrammarClass_8581, var_syntaxComponents_8812, var_startSymbol_9026, var_mLabelList_9069, var_mUnusedNonterminalList_9412, var_hasTranslateFeature_8635, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 283)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 241)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 243)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 245)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 251)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 254)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 258)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 259)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 264)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 270)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 277)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 278)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 282)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_stringset var_argumentNameSet_10265 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_formalParameterList_10319 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 302)) ;
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
        test_1 = var_argumentNameSet_10265.getter_hasKey (var_argumentName_10439.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 307)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_10439.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_10439.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 308)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 308)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 308)) ;
        }
      }
      var_argumentNameSet_10265.plusPlusAssignOperation (var_argumentName_10439.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 310)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 315)) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameterList_10319, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 316))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 316)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 302)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 312)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 315)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_11154 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 325)) ;
  GGS_lstring var_mTypeName_11226 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11226, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 329)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 331)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11154, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 334)), var_mTypeName_11226, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 332)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 324)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 325)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 329)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 331)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 345)) ;
  GGS_lstring var_selector_11797 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 346)) ;
  GGS_lstring var_mTypeName_11869 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11869, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 350)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 352)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11797, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 355)), var_mTypeName_11869, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 353)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 345)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 350)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_12450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 367)) ;
  GGS_lstring var_mTypeName_12522 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_12522, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 371)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 373)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_12450, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 376)), var_mTypeName_12522, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 374)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 366)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 367)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 371)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 373)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 387)) ;
  GGS_lstring var_selector_13097 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 388)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 389)) ;
  GGS_lstring var_mTypeName_13179 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13179, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 393)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 395)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13097, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 398)), var_mTypeName_13179, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 396)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 387)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 389)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 393)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 395)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_13791 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 409)) ;
  GGS_lstring var_mTypeName_13853 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13853, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 413)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 415)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13791, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 418)), var_mTypeName_13853, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 416)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 409)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 413)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 415)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 429)) ;
  GGS_lstring var_selector_14454 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 430)) ;
  GGS_lstring var_mTypeName_14526 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_14526, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 434)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 436)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_14454, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 439)), var_mTypeName_14526, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 437)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 429)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 434)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 436)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_15132 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 450)) ;
  GGS_lstring var_mTypeName_15194 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15194, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 452)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15132, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 455)), var_mTypeName_15194, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 453)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 450)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 452)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 466)) ;
  GGS_lstring var_selector_15752 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 467)) ;
  GGS_lstring var_mTypeName_15824 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15824, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 469)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15752, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 472)), var_mTypeName_15824, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 470)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 466)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 469)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 134)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5365 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5365, inCompiler) ;
  GGS_location var_endOfPrologue_5397 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 137)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_5365, var_endOfPrologue_5397  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 134)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 137)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 149)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5932 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5932, inCompiler) ;
  GGS_location var_endOfPrologue_5964 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 152)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_5932, var_endOfPrologue_5964  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 149)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 163)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 164)) ;
  GGS_lstring var_mSourceFileExtension_6452 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 166)) ;
  GGS_lstring var_mSourceFileHelp_6522 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 167)) ;
  GGS_lstring var_referenceGrammar_6581 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6581 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas3", 171)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 173)) ;
    var_referenceGrammar_6581 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 174)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_6755 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 177)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_6755.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_6755.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 179)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_6959 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 183)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_6959.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_6959.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 185)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_7113 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7113 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 192)) ;
    var_isUnused_7113 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_7239 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 195)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 197)) ;
  GGS_semanticInstructionListAST var_mInstructionList_7361 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_7361, inCompiler) ;
  GGS_location var_endOfInstructionList_7386 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 199)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 200)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_6452, var_mSourceFileHelp_6522, var_mSourceFileVariableName_7239, var_isUnused_7113, var_referenceGrammar_6581, var_mInstructionList_7361, var_endOfInstructionList_7386  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 201)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 163)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 167)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 173)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 174)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 177)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 183)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 192)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 195)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 197)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 200)) ;
}

//--------------------------------------------------------------------------------------------------
// @externProcedureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externProcedureDeclarationAST::objectCompare (const GGS_externProcedureDeclarationAST & inOperand) const {
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

GGS_externProcedureDeclarationAST::GGS_externProcedureDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GGS_bool & in_isPredefined,
                                                                   const GGS_bool & in_isFilePrivate,
                                                                   const GGS_lstring & in_mRoutineName,
                                                                   const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                   const GGS_bool & in_usefullProcedure,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_externProcedureDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler) ;
  const GGS_externProcedureDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::
externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GGS_bool & in_isPredefined,
                                                                                                 const GGS_bool & in_isFilePrivate,
                                                                                                 const GGS_lstring & in_mRoutineName,
                                                                                                 const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                                 const GGS_bool & in_usefullProcedure,
                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST::GGS_externProcedureDeclarationAST (const cPtr_externProcedureDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externProcedureDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureDeclarationAST::readProperty_isFilePrivate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_isFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externProcedureDeclarationAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_externProcedureDeclarationAST::readProperty_mFormalArgumentListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mFormalArgumentListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externProcedureDeclarationAST::readProperty_usefullProcedure (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_usefullProcedure ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externProcedureDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_bool & in_isFilePrivate,
                                                                        const GGS_lstring & in_mRoutineName,
                                                                        const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                        const GGS_bool & in_usefullProcedure,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externProcedureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

void cPtr_externProcedureDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@externProcedureDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_externProcedureDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externProcedureDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_isFilePrivate.printNonNullClassInstanceProperties ("isFilePrivate") ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mFormalArgumentListAST.printNonNullClassInstanceProperties ("mFormalArgumentListAST") ;
    mProperty_usefullProcedure.printNonNullClassInstanceProperties ("usefullProcedure") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externProcedureDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST ("externProcedureDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externProcedureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureDeclarationAST GGS_externProcedureDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_externProcedureDeclarationAST result ;
  const GGS_externProcedureDeclarationAST * p = (const GGS_externProcedureDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routinePrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routinePrototypeDeclarationForGeneration::objectCompare (const GGS_routinePrototypeDeclarationForGeneration & inOperand) const {
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

GGS_routinePrototypeDeclarationForGeneration::GGS_routinePrototypeDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GGS_bool & in_generateHeader,
                                                                               const GGS_string & in_implementationCppFileName,
                                                                               const GGS_string & in_routineMangledName,
                                                                               const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cPtr_routinePrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->routinePrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, inCompiler) ;
  const GGS_routinePrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::
routinePrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GGS_bool & in_generateHeader,
                                                                                                                        const GGS_string & in_implementationCppFileName,
                                                                                                                        const GGS_string & in_routineMangledName,
                                                                                                                        const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                        Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration::GGS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routinePrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_routinePrototypeDeclarationForGeneration::readProperty_routineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_routineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_routinePrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routinePrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                              const GGS_string & in_implementationCppFileName,
                                                                                              const GGS_string & in_routineMangledName,
                                                                                              const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_routinePrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

void cPtr_routinePrototypeDeclarationForGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@routinePrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_routinePrototypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routinePrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_routineMangledName.printNonNullClassInstanceProperties ("routineMangledName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @routinePrototypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ("routinePrototypeDeclarationForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routinePrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routinePrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routinePrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration result ;
  const GGS_routinePrototypeDeclarationForGeneration * p = (const GGS_routinePrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routinePrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routinePrototypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_routinePrototypeDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_routinePrototypeDeclarationForGeneration_2E_weak::GGS_routinePrototypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak & GGS_routinePrototypeDeclarationForGeneration_2E_weak::operator = (const GGS_routinePrototypeDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak::GGS_routinePrototypeDeclarationForGeneration_2E_weak (const GGS_routinePrototypeDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak GGS_routinePrototypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_routinePrototypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_routinePrototypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration_2E_weak::bang_routinePrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_routinePrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routinePrototypeDeclarationForGeneration) ;
      result = GGS_routinePrototypeDeclarationForGeneration ((cPtr_routinePrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routinePrototypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak ("routinePrototypeDeclarationForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routinePrototypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routinePrototypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routinePrototypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak GGS_routinePrototypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration_2E_weak result ;
  const GGS_routinePrototypeDeclarationForGeneration_2E_weak * p = (const GGS_routinePrototypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routinePrototypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext GGS_lexiqueAnalysisContext::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexiqueAnalysisContext result ;
  const GGS_lexiqueAnalysisContext * p = (const GGS_lexiqueAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  mProperty_mMainGroupChildrenRefs = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectObjectReference = GGS_string::makeEmptyString () ;
  mProperty_mGroupList = GGS_XCodeGroupList::init (inCompiler COMMA_HERE) ;
  mProperty_mToolTargetList = GGS_XCodeToolTargetList::init (inCompiler COMMA_HERE) ;
  mProperty_mAppTargetList = GGS_XCodeAppTargetList::init (inCompiler COMMA_HERE) ;
  mProperty_mCFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mCppFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_Swift_5F_FileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_M_5F_FileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_MM_5F_FileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mFrameworkFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mHeaderFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mBuildFileList = GGS_BuildFileList::init (inCompiler COMMA_HERE) ;
  mProperty_mDefaultConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mDefaultConfigurationSettingList = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectBuildConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mInfoPlistFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mXIB_5F_fileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mTIFF_5F_fileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mICNS_5F_fileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mApplicationBundleName = GGS_string::makeEmptyString () ;
  mProperty_mProjectName = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_uint & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS_stringlist & inOperand2,
                                                        const GGS_string & inOperand3,
                                                        const GGS_XCodeGroupList & inOperand4,
                                                        const GGS_XCodeToolTargetList & inOperand5,
                                                        const GGS_XCodeAppTargetList & inOperand6,
                                                        const GGS__32_stringlist & inOperand7,
                                                        const GGS__32_stringlist & inOperand8,
                                                        const GGS__32_stringlist & inOperand9,
                                                        const GGS__32_stringlist & inOperand10,
                                                        const GGS__32_stringlist & inOperand11,
                                                        const GGS__32_stringlist & inOperand12,
                                                        const GGS__32_stringlist & inOperand13,
                                                        const GGS_BuildFileList & inOperand14,
                                                        const GGS_string & inOperand15,
                                                        const GGS_stringlist & inOperand16,
                                                        const GGS_string & inOperand17,
                                                        const GGS__32_stringlist & inOperand18,
                                                        const GGS__32_stringlist & inOperand19,
                                                        const GGS__32_stringlist & inOperand20,
                                                        const GGS__32_stringlist & inOperand21,
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

AC_GALGAS_root * GGS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  const GGS_XcodeProjectDescriptor * p = (const GGS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 41)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 42)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 50)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 51)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 59)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 60)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 68)) ;
  }
  ioObject.mProperty_mFrameworkFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 69)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 77)) ;
  }
  ioObject.mProperty_m_5F_Swift_5F_FileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 78)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 86)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 87)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GGS_XcodeProjectDescriptor & ioObject,
                                const GGS_string constinArgument_inFileName,
                                GGS_string & outArgument_outFileRef,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 95)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 96)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 104)) ;
  }
  ioObject.mProperty_mCppFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 105)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 113)) ;
  }
  ioObject.mProperty_mCFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 114)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inFileName,
                                    GGS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 122)) ;
  }
  ioObject.mProperty_mHeaderFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 123)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addBuildFile'
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 132)) ;
  }
  ioObject.mProperty_mBuildFileList.addAssignOperation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 133)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS_stringlist constinArgument_inSourceList,
                                    const GGS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 146)) ;
  }
  GGS_string var_buildPhaseRef_5737 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5737, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 147)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 148)) ;
  }
  GGS_string var_buildConfigurationListRef_5832 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5832, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 149)) ;
  }
  GGS_string var_buildConfigurationRef_5894 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5894, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 150)) ;
  }
  GGS_string var_frameworkBuildRef_5952 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5952, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 151)) ;
  }
  ioObject.mProperty_mToolTargetList.addAssignOperation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5737, var_buildConfigurationListRef_5832, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5894, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_5952  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 152)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS_stringlist constinArgument_inSourceList,
                                   const GGS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GGS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GGS_stringlist constinArgument_inDependentTargetRefList,
                                   const GGS__32_stringlist constinArgument_inProductCopyList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 178)) ;
  }
  GGS_string var_buildPhaseRef_6995 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_6995, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 179)) ;
  }
  GGS_string var_targetRef_7045 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_7045, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 180)) ;
  }
  GGS_string var_buildConfigurationListRef_7091 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_7091, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 181)) ;
  }
  GGS_string var_buildConfigurationRef_7153 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_7153, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 182)) ;
  }
  GGS_string var_frameworkBuildRef_7211 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_7211, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 183)) ;
  }
  GGS_string var_resourceBuildRef_7265 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_7265, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 184)) ;
  }
  GGS__32_stringlist var_dependentTargets_7302 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_7332 (constinArgument_inDependentTargetRefList) ;
  while (enumerator_7332.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_7405 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_7405, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 187)) ;
    }
    var_dependentTargets_7302.addAssignOperation (var_dependencyBuildRef_7405, enumerator_7332.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 188)) ;
    enumerator_7332.gotoNextObject () ;
  }
  GGS_stringlist var_resourceFileBuildRefs_7498 = constinArgument_inResourceFileBuildRefs ;
  UpEnumerator__32_stringlist enumerator_7557 (constinArgument_inProductCopyList) ;
  while (enumerator_7557.hasCurrentObject ()) {
    GGS_string var_buildRef_7662 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_7557.current_mValue_30_ (HERE), enumerator_7557.current_mValue_31_ (HERE), var_buildRef_7662, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 192)) ;
    }
    var_resourceFileBuildRefs_7498.addAssignOperation (var_buildRef_7662  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 193)) ;
    enumerator_7557.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.addAssignOperation (var_targetRef_7045, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_6995, var_buildConfigurationListRef_7091, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_7153, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_7211, var_dependentTargets_7302, var_resourceBuildRef_7265, var_resourceFileBuildRefs_7498  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS_stringlist constinArgument_inChildrenRefs,
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
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 221)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 224)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 227)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 229)) ;
  }
  ioObject.mProperty_mGroupList.addAssignOperation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 230)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GGS_XcodeProjectDescriptor & ioObject,
                                        const GGS_string constinArgument_inGroupName,
                                        const GGS_string constinArgument_inGroupPath,
                                        const GGS_stringset constinArgument_inFileNames,
                                        GGS_stringlist & ioArgument_ioCFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioResourceFileBuildRefs,
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
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 248)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 251)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 254)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 256)) ;
  }
  GGS_stringlist var_childrenRefs_9912 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringset enumerator_9938 (constinArgument_inFileNames) ;
  while (enumerator_9938.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 260)).objectCompare (GGS_string ("c"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_string var_cFileRef_10050 ;
        {
        extensionSetter_addCFile (ioObject, enumerator_9938.current_key (HERE), var_cFileRef_10050, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 261)) ;
        }
        var_childrenRefs_9912.addAssignOperation (var_cFileRef_10050  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 262)) ;
        GGS_string var_buildRef_10171 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cFileRef_10050, enumerator_9938.current_key (HERE), var_buildRef_10171, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 263)) ;
        }
        ioArgument_ioCFileBuildRefs.addAssignOperation (var_buildRef_10171  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 264)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 265)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_string var_cppFileRef_10315 ;
          {
          extensionSetter_addCppFile (ioObject, enumerator_9938.current_key (HERE), var_cppFileRef_10315, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 266)) ;
          }
          var_childrenRefs_9912.addAssignOperation (var_cppFileRef_10315  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 267)) ;
          GGS_string var_buildRef_10442 ;
          {
          extensionSetter_addBuildFile (ioObject, var_cppFileRef_10315, enumerator_9938.current_key (HERE), var_buildRef_10442, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 268)) ;
          }
          ioArgument_ioCppFileBuildRefs.addAssignOperation (var_buildRef_10442  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 269)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 270)).objectCompare (GGS_string ("h"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string var_headerFileRef_10589 ;
            {
            extensionSetter_addHeaderFile (ioObject, enumerator_9938.current_key (HERE), var_headerFileRef_10589, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 271)) ;
            }
            var_childrenRefs_9912.addAssignOperation (var_headerFileRef_10589  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 272)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 273)).objectCompare (GGS_string ("framework"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_string var_framework_5F_FileRef_10751 ;
              {
              extensionSetter_addFrameworkFile (ioObject, enumerator_9938.current_key (HERE), var_framework_5F_FileRef_10751, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 274)) ;
              }
              GGS_string var_buildRef_10858 ;
              {
              extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10751, enumerator_9938.current_key (HERE), var_buildRef_10858, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 275)) ;
              }
              var_childrenRefs_9912.addAssignOperation (var_framework_5F_FileRef_10751  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 276)) ;
              ioArgument_ioFrameWorkFileBuildRefs.addAssignOperation (var_buildRef_10858  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 277)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 278)).objectCompare (GGS_string ("plist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GGS_string var_resource_5F_FileRef_11059 ;
                {
                extensionSetter_addInfoPlistFile (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11059, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 279)) ;
                }
                var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11059  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 280)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 281)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GGS_string var_resource_5F_FileRef_11215 ;
                  {
                  extensionSetter_addXIBFile (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11215, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 282)) ;
                  }
                  var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11215  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 283)) ;
                  GGS_string var_buildRef_11360 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11215, enumerator_9938.current_key (HERE), var_buildRef_11360, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 284)) ;
                  }
                  ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11360  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 285)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 286)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_string var_resource_5F_FileRef_11514 ;
                    {
                    extensionSetter_addTIFF_5F_file (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11514, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 287)) ;
                    }
                    var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11514  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 288)) ;
                    GGS_string var_buildRef_11659 ;
                    {
                    extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11514, enumerator_9938.current_key (HERE), var_buildRef_11659, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 289)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11659  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 290)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 291)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      GGS_string var_resource_5F_FileRef_11813 ;
                      {
                      extensionSetter_addICNS_5F_file (ioObject, enumerator_9938.current_key (HERE), var_resource_5F_FileRef_11813, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 292)) ;
                      }
                      var_childrenRefs_9912.addAssignOperation (var_resource_5F_FileRef_11813  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 293)) ;
                      GGS_string var_buildRef_11958 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11813, enumerator_9938.current_key (HERE), var_buildRef_11958, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 294)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11958  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 295)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GalgasBool test_14 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_14) {
                      test_14 = GGS_bool (ComparisonKind::equal, enumerator_9938.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 296)).objectCompare (GGS_string ("swift"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_14) {
                        GGS_string var_swiftFileRef_12113 ;
                        {
                        extensionSetter_addSwiftFile (ioObject, enumerator_9938.current_key (HERE), var_swiftFileRef_12113, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 297)) ;
                        }
                        GGS_string var_buildRef_12210 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_swiftFileRef_12113, enumerator_9938.current_key (HERE), var_buildRef_12210, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 298)) ;
                        }
                        var_childrenRefs_9912.addAssignOperation (var_swiftFileRef_12113  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 299)) ;
                        ioArgument_ioSwiftFileBuildRefs.addAssignOperation (var_buildRef_12210  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 300)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_14) {
                      GenericArray <FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 302)), GGS_string ("unhandled extension for file '").add_operation (enumerator_9938.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 302)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 302)), fixItArray15  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 302)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_9938.gotoNextObject () ;
  }
  ioObject.mProperty_mGroupList.addAssignOperation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_9912  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 305)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GGS_XcodeProjectDescriptor & ioObject,
                                            const GGS_string constinArgument_inGroupRef,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mMainGroupChildrenRefs.addAssignOperation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 312)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GGS_XcodeProjectDescriptor & ioObject,
                                                        const GGS_stringlist constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssignOperation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 319)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor getReferenceKey'
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
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 379)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 379)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 379)) ;
      ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 380)) ;
    }
  }
  const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 382)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 382)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 382)) ;
  ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 383)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
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
  GGS_string var_contents_17961 = GGS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCFileList (), temp_7.readProperty_mCppFileList (), temp_8.readProperty_m_5F_Swift_5F_FileList (), temp_9.readProperty_m_5F_M_5F_FileList (), temp_10.readProperty_m_5F_MM_5F_FileList (), temp_11.readProperty_mFrameworkFileList (), temp_12.readProperty_mHeaderFileList (), temp_13.readProperty_mInfoPlistFileList (), temp_14.readProperty_mTIFF_5F_fileList (), temp_15.readProperty_mICNS_5F_fileList (), temp_16.readProperty_mXIB_5F_fileList (), temp_17.readProperty_mBuildFileList (), temp_18.readProperty_mDefaultConfigurationRef (), temp_19.readProperty_mDefaultConfigurationSettingList (), temp_20.readProperty_mProjectBuildConfigurationRef (), temp_21.readProperty_mApplicationBundleName (), temp_22.readProperty_mProjectName () COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 454))) ;
  GGS_string var_projectCoreFile_18683 = constinArgument_inPath.add_operation (GGS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 479)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    GGS_bool test_24 = var_projectCoreFile_18683.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 480)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 480)) ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      test_24 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 480)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 480)) ;
    }
    GGS_bool test_25 = test_24 ;
    if (GalgasBool::boolTrue != test_25.boolEnum ()) {
      test_25 = GGS_bool (ComparisonKind::notEqual, GGS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 480)).objectCompare (var_contents_17961)) ;
    }
    test_23 = test_25.boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      GGS_bool joker_18942 ; // Joker input parameter
      var_contents_17961.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18942, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 481)) ;
      var_contents_17961.method_makeDirectoryAndWriteToFile (var_projectCoreFile_18683, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 482)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @outputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterAST::objectCompare (const GGS_outputActualParameterAST & inOperand) const {
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

GGS_outputActualParameterAST::GGS_outputActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                  const GGS_location & in_mEndOfExpressionLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterAST (inCompiler COMMA_THERE)) ;
  object->outputActualParameterAST_init_21__21__21_ (in_mActualSelector, in_mOutputActualParameterExpression, in_mEndOfExpressionLocation, inCompiler) ;
  const GGS_outputActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::
outputActualParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                           const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                           const GGS_location & in_mEndOfExpressionLocation,
                                           Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
  mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST::GGS_outputActualParameterAST (const cPtr_outputActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_outputActualParameterAST::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outputActualParameterAST::readProperty_mEndOfExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_outputActualParameterAST * p = (cPtr_outputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterAST) ;
    return p->mProperty_mEndOfExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputActualParameterExpression (),
mProperty_mEndOfExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterAST::cPtr_outputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                              const GGS_semanticExpressionAST & in_mOutputActualParameterExpression,
                                                              const GGS_location & in_mEndOfExpressionLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputActualParameterExpression (),
mProperty_mEndOfExpressionLocation () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
  mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

void cPtr_outputActualParameterAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_outputActualParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputActualParameterExpression, mProperty_mEndOfExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
    mProperty_mEndOfExpressionLocation.printNonNullClassInstanceProperties ("mEndOfExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterAST ("outputActualParameterAST",
                                                                             & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterAST GGS_outputActualParameterAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterAST result ;
  const GGS_outputActualParameterAST * p = (const GGS_outputActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterAST::objectCompare (const GGS_outputInputActualParameterAST & inOperand) const {
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

GGS_outputInputActualParameterAST::GGS_outputInputActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_lstring & in_mOutputInputActualParameterName,
                  const GGS_lstringlist & in_mStructAttributeList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_outputInputActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputActualParameterAST (inCompiler COMMA_THERE)) ;
  object->outputInputActualParameterAST_init_21__21__21_ (in_mActualSelector, in_mOutputInputActualParameterName, in_mStructAttributeList, inCompiler) ;
  const GGS_outputInputActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::
outputInputActualParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                const GGS_lstring & in_mOutputInputActualParameterName,
                                                const GGS_lstringlist & in_mStructAttributeList,
                                                Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputInputActualParameterName = in_mOutputInputActualParameterName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST::GGS_outputInputActualParameterAST (const cPtr_outputInputActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputActualParameterAST::readProperty_mOutputInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mOutputInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_outputInputActualParameterAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterAST * p = (cPtr_outputInputActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputInputActualParameterName (),
mProperty_mStructAttributeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterAST::cPtr_outputInputActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                                        const GGS_lstring & in_mOutputInputActualParameterName,
                                                                        const GGS_lstringlist & in_mStructAttributeList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mOutputInputActualParameterName (),
mProperty_mStructAttributeList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mOutputInputActualParameterName = in_mOutputInputActualParameterName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputInputActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

void cPtr_outputInputActualParameterAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_outputInputActualParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputActualParameterAST (mProperty_mActualSelector, mProperty_mOutputInputActualParameterName, mProperty_mStructAttributeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mOutputInputActualParameterName.printNonNullClassInstanceProperties ("mOutputInputActualParameterName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputActualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST ("outputInputActualParameterAST",
                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterAST GGS_outputInputActualParameterAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterAST result ;
  const GGS_outputInputActualParameterAST * p = (const GGS_outputInputActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputJokerParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputJokerParameterAST::objectCompare (const GGS_outputInputJokerParameterAST & inOperand) const {
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

GGS_outputInputJokerParameterAST::GGS_outputInputJokerParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST::
init_21__21_ (const GGS_lstring & in_mActualSelector,
              const GGS_semanticExpressionAST & in_expression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_outputInputJokerParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputJokerParameterAST (inCompiler COMMA_THERE)) ;
  object->outputInputJokerParameterAST_init_21__21_ (in_mActualSelector, in_expression, inCompiler) ;
  const GGS_outputInputJokerParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::
outputInputJokerParameterAST_init_21__21_ (const GGS_lstring & in_mActualSelector,
                                           const GGS_semanticExpressionAST & in_expression,
                                           Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_expression = in_expression ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST::GGS_outputInputJokerParameterAST (const cPtr_outputInputJokerParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputJokerParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputJokerParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_outputInputJokerParameterAST::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputJokerParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (const GGS_lstring & in_mActualSelector,
                                                                      const GGS_semanticExpressionAST & in_expression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_expression () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_expression = in_expression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputInputJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

void cPtr_outputInputJokerParameterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputJokerParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_outputInputJokerParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputJokerParameterAST (mProperty_mActualSelector, mProperty_expression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputJokerParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputJokerParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST ("outputInputJokerParameterAST",
                                                                                 & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputJokerParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputJokerParameterAST GGS_outputInputJokerParameterAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_outputInputJokerParameterAST result ;
  const GGS_outputInputJokerParameterAST * p = (const GGS_outputInputJokerParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputSelfParameterAST::objectCompare (const GGS_outputInputSelfParameterAST & inOperand) const {
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

GGS_outputInputSelfParameterAST::GGS_outputInputSelfParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST::
init_21_ (const GGS_lstring & in_mActualSelector,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_outputInputSelfParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputSelfParameterAST (inCompiler COMMA_THERE)) ;
  object->outputInputSelfParameterAST_init_21_ (in_mActualSelector, inCompiler) ;
  const GGS_outputInputSelfParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::
outputInputSelfParameterAST_init_21_ (const GGS_lstring & in_mActualSelector,
                                      Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST::GGS_outputInputSelfParameterAST (const cPtr_outputInputSelfParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputSelfParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outputInputSelfParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_outputInputSelfParameterAST * p = (cPtr_outputInputSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputSelfParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputSelfParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputSelfParameterAST::cPtr_outputInputSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputSelfParameterAST::cPtr_outputInputSelfParameterAST (const GGS_lstring & in_mActualSelector,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector () {
  mProperty_mActualSelector = in_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputInputSelfParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;
}

void cPtr_outputInputSelfParameterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputSelfParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_outputInputSelfParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputSelfParameterAST (mProperty_mActualSelector, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputSelfParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputSelfParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST ("outputInputSelfParameterAST",
                                                                                & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputSelfParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputSelfParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputSelfParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputSelfParameterAST GGS_outputInputSelfParameterAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_outputInputSelfParameterAST result ;
  const GGS_outputInputSelfParameterAST * p = (const GGS_outputInputSelfParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputSelfParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSelfParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualExistingVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualExistingVariableParameterAST::objectCompare (const GGS_inputActualExistingVariableParameterAST & inOperand) const {
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

GGS_inputActualExistingVariableParameterAST::GGS_inputActualExistingVariableParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_lstring & in_mInputActualParameterName,
                  const GGS_lstringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualExistingVariableParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualExistingVariableParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualExistingVariableParameterAST_init_21__21__21_ (in_mActualSelector, in_mInputActualParameterName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualExistingVariableParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::
inputActualExistingVariableParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                          const GGS_lstring & in_mInputActualParameterName,
                                                          const GGS_lstringlist & in_mPoisonedVarNameList,
                                                          Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST::GGS_inputActualExistingVariableParameterAST (const cPtr_inputActualExistingVariableParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualExistingVariableParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualExistingVariableParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualExistingVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualExistingVariableParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualExistingVariableParameterAST * p = (cPtr_inputActualExistingVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualExistingVariableParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualExistingVariableParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualExistingVariableParameterAST::cPtr_inputActualExistingVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                            const GGS_lstring & in_mInputActualParameterName,
                                                                                            const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputActualExistingVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

void cPtr_inputActualExistingVariableParameterAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualExistingVariableParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputActualExistingVariableParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualExistingVariableParameterAST (mProperty_mActualSelector, mProperty_mInputActualParameterName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualExistingVariableParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualExistingVariableParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ("inputActualExistingVariableParameterAST",
                                                                                            & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualExistingVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualExistingVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualExistingVariableParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualExistingVariableParameterAST GGS_inputActualExistingVariableParameterAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_inputActualExistingVariableParameterAST result ;
  const GGS_inputActualExistingVariableParameterAST * p = (const GGS_inputActualExistingVariableParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualExistingVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualSelfPropertyParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfPropertyParameterAST::objectCompare (const GGS_inputActualSelfPropertyParameterAST & inOperand) const {
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

GGS_inputActualSelfPropertyParameterAST::GGS_inputActualSelfPropertyParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_lstring & in_mInputActualSelfPropertyName,
                  const GGS_lstringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualSelfPropertyParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualSelfPropertyParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualSelfPropertyParameterAST_init_21__21__21_ (in_mActualSelector, in_mInputActualSelfPropertyName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualSelfPropertyParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::
inputActualSelfPropertyParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                      const GGS_lstring & in_mInputActualSelfPropertyName,
                                                      const GGS_lstringlist & in_mPoisonedVarNameList,
                                                      Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualSelfPropertyName = in_mInputActualSelfPropertyName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST::GGS_inputActualSelfPropertyParameterAST (const cPtr_inputActualSelfPropertyParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualSelfPropertyParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualSelfPropertyParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualSelfPropertyParameterAST::readProperty_mInputActualSelfPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mInputActualSelfPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualSelfPropertyParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualSelfPropertyParameterAST * p = (cPtr_inputActualSelfPropertyParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfPropertyParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualSelfPropertyParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfPropertyParameterAST::cPtr_inputActualSelfPropertyParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualSelfPropertyName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfPropertyParameterAST::cPtr_inputActualSelfPropertyParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                    const GGS_lstring & in_mInputActualSelfPropertyName,
                                                                                    const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputActualSelfPropertyName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputActualSelfPropertyName = in_mInputActualSelfPropertyName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputActualSelfPropertyParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

void cPtr_inputActualSelfPropertyParameterAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualSelfPropertyParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputActualSelfPropertyParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualSelfPropertyParameterAST (mProperty_mActualSelector, mProperty_mInputActualSelfPropertyName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualSelfPropertyParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputActualSelfPropertyName.printNonNullClassInstanceProperties ("mInputActualSelfPropertyName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualSelfPropertyParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ("inputActualSelfPropertyParameterAST",
                                                                                        & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualSelfPropertyParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfPropertyParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfPropertyParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfPropertyParameterAST GGS_inputActualSelfPropertyParameterAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfPropertyParameterAST result ;
  const GGS_inputActualSelfPropertyParameterAST * p = (const GGS_inputActualSelfPropertyParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfPropertyParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualSelfParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualSelfParameterAST::objectCompare (const GGS_inputActualSelfParameterAST & inOperand) const {
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

GGS_inputActualSelfParameterAST::GGS_inputActualSelfParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST::
init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                  const GGS_location & in_mSelfLocation,
                  const GGS_lstringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualSelfParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualSelfParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualSelfParameterAST_init_21__21__21_ (in_mActualSelector, in_mSelfLocation, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualSelfParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::
inputActualSelfParameterAST_init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                              const GGS_location & in_mSelfLocation,
                                              const GGS_lstringlist & in_mPoisonedVarNameList,
                                              Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mSelfLocation = in_mSelfLocation ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST::GGS_inputActualSelfParameterAST (const cPtr_inputActualSelfParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualSelfParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualSelfParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_inputActualSelfParameterAST::readProperty_mSelfLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mSelfLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualSelfParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualSelfParameterAST * p = (cPtr_inputActualSelfParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualSelfParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualSelfParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfParameterAST::cPtr_inputActualSelfParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mSelfLocation (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualSelfParameterAST::cPtr_inputActualSelfParameterAST (const GGS_lstring & in_mActualSelector,
                                                                    const GGS_location & in_mSelfLocation,
                                                                    const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mSelfLocation (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mSelfLocation = in_mSelfLocation ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputActualSelfParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;
}

void cPtr_inputActualSelfParameterAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualSelfParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputActualSelfParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualSelfParameterAST (mProperty_mActualSelector, mProperty_mSelfLocation, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualSelfParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mSelfLocation.printNonNullClassInstanceProperties ("mSelfLocation") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualSelfParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST ("inputActualSelfParameterAST",
                                                                                & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualSelfParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualSelfParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualSelfParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualSelfParameterAST GGS_inputActualSelfParameterAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_inputActualSelfParameterAST result ;
  const GGS_inputActualSelfParameterAST * p = (const GGS_inputActualSelfParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualSelfParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualNewVariableParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewVariableParameterAST::objectCompare (const GGS_inputActualNewVariableParameterAST & inOperand) const {
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

GGS_inputActualNewVariableParameterAST::GGS_inputActualNewVariableParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST::
init_21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                      const GGS_lstring & in_mInputOptionalActualTypeName,
                      const GGS_lstring & in_mInputActualParameterName,
                      const GGS_lstringlist & in_mPoisonedVarNameList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_inputActualNewVariableParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualNewVariableParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualNewVariableParameterAST_init_21__21__21__21_ (in_mActualSelector, in_mInputOptionalActualTypeName, in_mInputActualParameterName, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualNewVariableParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::
inputActualNewVariableParameterAST_init_21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                         const GGS_lstring & in_mInputOptionalActualTypeName,
                                                         const GGS_lstring & in_mInputActualParameterName,
                                                         const GGS_lstringlist & in_mPoisonedVarNameList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST::GGS_inputActualNewVariableParameterAST (const cPtr_inputActualNewVariableParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewVariableParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewVariableParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewVariableParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewVariableParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualNewVariableParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualNewVariableParameterAST * p = (cPtr_inputActualNewVariableParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewVariableParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewVariableParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewVariableParameterAST::cPtr_inputActualNewVariableParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                  const GGS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GGS_lstring & in_mInputActualParameterName,
                                                                                  const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputActualNewVariableParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

void cPtr_inputActualNewVariableParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualNewVariableParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputActualNewVariableParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualNewVariableParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualNewVariableParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputOptionalActualTypeName.printNonNullClassInstanceProperties ("mInputOptionalActualTypeName") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualNewVariableParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ("inputActualNewVariableParameterAST",
                                                                                       & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualNewVariableParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewVariableParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewVariableParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewVariableParameterAST GGS_inputActualNewVariableParameterAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewVariableParameterAST result ;
  const GGS_inputActualNewVariableParameterAST * p = (const GGS_inputActualNewVariableParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewVariableParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualNewConstantParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputActualNewConstantParameterAST::objectCompare (const GGS_inputActualNewConstantParameterAST & inOperand) const {
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

GGS_inputActualNewConstantParameterAST::GGS_inputActualNewConstantParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                          const GGS_lstring & in_mInputOptionalActualTypeName,
                          const GGS_lstring & in_mInputActualParameterName,
                          const GGS_bool & in_mMarkedAsUnused,
                          const GGS_lstringlist & in_mPoisonedVarNameList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_inputActualNewConstantParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputActualNewConstantParameterAST (inCompiler COMMA_THERE)) ;
  object->inputActualNewConstantParameterAST_init_21__21__21__21__21_ (in_mActualSelector, in_mInputOptionalActualTypeName, in_mInputActualParameterName, in_mMarkedAsUnused, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputActualNewConstantParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::
inputActualNewConstantParameterAST_init_21__21__21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                             const GGS_lstring & in_mInputOptionalActualTypeName,
                                                             const GGS_lstring & in_mInputActualParameterName,
                                                             const GGS_bool & in_mMarkedAsUnused,
                                                             const GGS_lstringlist & in_mPoisonedVarNameList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST::GGS_inputActualNewConstantParameterAST (const cPtr_inputActualNewConstantParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualNewConstantParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewConstantParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewConstantParameterAST::readProperty_mInputOptionalActualTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputOptionalActualTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputActualNewConstantParameterAST::readProperty_mInputActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mInputActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_inputActualNewConstantParameterAST::readProperty_mMarkedAsUnused (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mMarkedAsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputActualNewConstantParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputActualNewConstantParameterAST * p = (cPtr_inputActualNewConstantParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualNewConstantParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualNewConstantParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mMarkedAsUnused (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputActualNewConstantParameterAST::cPtr_inputActualNewConstantParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                  const GGS_lstring & in_mInputOptionalActualTypeName,
                                                                                  const GGS_lstring & in_mInputActualParameterName,
                                                                                  const GGS_bool & in_mMarkedAsUnused,
                                                                                  const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mInputOptionalActualTypeName (),
mProperty_mInputActualParameterName (),
mProperty_mMarkedAsUnused (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mInputOptionalActualTypeName = in_mInputOptionalActualTypeName ;
  mProperty_mInputActualParameterName = in_mInputActualParameterName ;
  mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputActualNewConstantParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

void cPtr_inputActualNewConstantParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualNewConstantParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputOptionalActualTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputActualNewConstantParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualNewConstantParameterAST (mProperty_mActualSelector, mProperty_mInputOptionalActualTypeName, mProperty_mInputActualParameterName, mProperty_mMarkedAsUnused, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualNewConstantParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mInputOptionalActualTypeName.printNonNullClassInstanceProperties ("mInputOptionalActualTypeName") ;
    mProperty_mInputActualParameterName.printNonNullClassInstanceProperties ("mInputActualParameterName") ;
    mProperty_mMarkedAsUnused.printNonNullClassInstanceProperties ("mMarkedAsUnused") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputActualNewConstantParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ("inputActualNewConstantParameterAST",
                                                                                       & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputActualNewConstantParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputActualNewConstantParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputActualNewConstantParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputActualNewConstantParameterAST GGS_inputActualNewConstantParameterAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputActualNewConstantParameterAST result ;
  const GGS_inputActualNewConstantParameterAST * p = (const GGS_inputActualNewConstantParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputActualNewConstantParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputSingleJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputSingleJokerActualParameterAST::objectCompare (const GGS_inputSingleJokerActualParameterAST & inOperand) const {
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

GGS_inputSingleJokerActualParameterAST::GGS_inputSingleJokerActualParameterAST (void) :
GGS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST::
init_21__21_ (const GGS_lstring & in_mActualSelector,
              const GGS_lstringlist & in_mPoisonedVarNameList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputSingleJokerActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputSingleJokerActualParameterAST (inCompiler COMMA_THERE)) ;
  object->inputSingleJokerActualParameterAST_init_21__21_ (in_mActualSelector, in_mPoisonedVarNameList, inCompiler) ;
  const GGS_inputSingleJokerActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::
inputSingleJokerActualParameterAST_init_21__21_ (const GGS_lstring & in_mActualSelector,
                                                 const GGS_lstringlist & in_mPoisonedVarNameList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST::GGS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GGS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputSingleJokerActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_inputSingleJokerActualParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputSingleJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GGS_lstring & in_mActualSelector,
                                                                                  const GGS_lstringlist & in_mPoisonedVarNameList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputSingleJokerActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputSingleJokerActualParameterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mProperty_mActualSelector, mProperty_mPoisonedVarNameList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputSingleJokerActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputSingleJokerActualParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                                                       & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputSingleJokerActualParameterAST GGS_inputSingleJokerActualParameterAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_inputSingleJokerActualParameterAST result ;
  const GGS_inputSingleJokerActualParameterAST * p = (const GGS_inputSingleJokerActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputSingleJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonterminalCallInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalCallInstruction::objectCompare (const GGS_nonterminalCallInstruction & inOperand) const {
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

GGS_nonterminalCallInstruction::GGS_nonterminalCallInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mNonterminalName,
                      const GGS_actualParameterListAST & in_mActualParameterList,
                      const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_nonterminalCallInstruction * object = nullptr ;
  macroMyNew (object, cPtr_nonterminalCallInstruction (inCompiler COMMA_THERE)) ;
  object->nonterminalCallInstruction_init_21__21__21__21_ (in_mInstructionLocation, in_mNonterminalName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GGS_nonterminalCallInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::
nonterminalCallInstruction_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mNonterminalName,
                                                 const GGS_actualParameterListAST & in_mActualParameterList,
                                                 const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction::GGS_nonterminalCallInstruction (const cPtr_nonterminalCallInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalCallInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_nonterminalCallInstruction::readProperty_mNonterminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mNonterminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_nonterminalCallInstruction::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_nonterminalCallInstruction::readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_nonterminalCallInstruction * p = (cPtr_nonterminalCallInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalCallInstruction) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalCallInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalCallInstruction::cPtr_nonterminalCallInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonterminalCallInstruction::cPtr_nonterminalCallInstruction (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_lstring & in_mNonterminalName,
                                                                  const GGS_actualParameterListAST & in_mActualParameterList,
                                                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nonterminalCallInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

void cPtr_nonterminalCallInstruction::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@nonterminalCallInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nonterminalCallInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalCallInstruction (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonterminalCallInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalName.printNonNullClassInstanceProperties ("mNonterminalName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nonterminalCallInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction ("nonterminalCallInstruction",
                                                                               & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalCallInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalCallInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalCallInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonterminalCallInstruction result ;
  const GGS_nonterminalCallInstruction * p = (const GGS_nonterminalCallInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalCallInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
                              const GGS__32_lstringlist & in_mIndexingKeyList,
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
                                                          const GGS__32_lstringlist & in_mIndexingKeyList,
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

GGS__32_lstringlist GGS_terminalCheckInstructionAST::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_lstringlist () ;
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
                                                                    const GGS__32_lstringlist & in_mIndexingKeyList,
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

AC_GALGAS_root * GGS_terminalCheckInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST result ;
  const GGS_terminalCheckInstructionAST * p = (const GGS_terminalCheckInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @terminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalInstructionForGrammarAnalysis::objectCompare (const GGS_terminalInstructionForGrammarAnalysis & inOperand) const {
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

GGS_terminalInstructionForGrammarAnalysis::GGS_terminalInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_lstring & in_mTerminalSymbolName,
                  const GGS_uint & in_mTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_terminalInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_terminalInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->terminalInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mTerminalSymbolName, in_mTerminalSymbolIndex, inCompiler) ;
  const GGS_terminalInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
terminalInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                        const GGS_lstring & in_mTerminalSymbolName,
                                                        const GGS_uint & in_mTerminalSymbolIndex,
                                                        Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mTerminalSymbolName = in_mTerminalSymbolName ;
  mProperty_mTerminalSymbolIndex = in_mTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis::GGS_terminalInstructionForGrammarAnalysis (const cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mTerminalSymbolName (),
mProperty_mTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                        const GGS_lstring & in_mTerminalSymbolName,
                                                                                        const GGS_uint & in_mTerminalSymbolIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mTerminalSymbolName (),
mProperty_mTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mTerminalSymbolName = in_mTerminalSymbolName ;
  mProperty_mTerminalSymbolIndex = in_mTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

void cPtr_terminalInstructionForGrammarAnalysis::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mTerminalSymbolName, mProperty_mTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalSymbolName.printNonNullClassInstanceProperties ("mTerminalSymbolName") ;
    mProperty_mTerminalSymbolIndex.printNonNullClassInstanceProperties ("mTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ("terminalInstructionForGrammarAnalysis",
                                                                                          & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalInstructionForGrammarAnalysis result ;
  const GGS_terminalInstructionForGrammarAnalysis * p = (const GGS_terminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_terminalInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak GGS_terminalInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_terminalInstructionForGrammarAnalysis_2E_weak * p = (const GGS_terminalInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @terminalCheckInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration::objectCompare (const GGS_terminalCheckInstructionForGeneration & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration::GGS_terminalCheckInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_lstring & in_mTerminalName,
                                  const GGS_string & in_mLexiqueIdentifier,
                                  const GGS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                  const GGS__32_lstringlist & in_mIndexingKeyList,
                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_terminalCheckInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_terminalCheckInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTerminalName, in_mLexiqueIdentifier, in_mTerminalCheckAssignementList, in_mIndexingKeyList, in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, in_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler) ;
  const GGS_terminalCheckInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::
terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mTerminalName,
                                                                        const GGS_string & in_mLexiqueIdentifier,
                                                                        const GGS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                                        const GGS__32_lstringlist & in_mIndexingKeyList,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mLexiqueIdentifier = in_mLexiqueIdentifier ;
  mProperty_mTerminalCheckAssignementList = in_mTerminalCheckAssignementList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration::GGS_terminalCheckInstructionForGeneration (const cPtr_terminalCheckInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalCheckInstructionForGeneration::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckInstructionForGeneration::readProperty_mLexiqueIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mLexiqueIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignementList GGS_terminalCheckInstructionForGeneration::readProperty_mTerminalCheckAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_terminalCheckAssignementList () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalCheckAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS_terminalCheckInstructionForGeneration::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_lstringlist () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mIndexingKeyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalCheckInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mLexiqueIdentifier (),
mProperty_mTerminalCheckAssignementList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_lstring & in_mTerminalName,
                                                                                        const GGS_string & in_mLexiqueIdentifier,
                                                                                        const GGS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                                                        const GGS__32_lstringlist & in_mIndexingKeyList,
                                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mLexiqueIdentifier (),
mProperty_mTerminalCheckAssignementList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mLexiqueIdentifier = in_mLexiqueIdentifier ;
  mProperty_mTerminalCheckAssignementList = in_mTerminalCheckAssignementList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalCheckInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

void cPtr_terminalCheckInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalCheckInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalCheckAssignementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalCheckInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalCheckInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTerminalName, mProperty_mLexiqueIdentifier, mProperty_mTerminalCheckAssignementList, mProperty_mIndexingKeyList, mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mProperty_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalCheckInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
    mProperty_mLexiqueIdentifier.printNonNullClassInstanceProperties ("mLexiqueIdentifier") ;
    mProperty_mTerminalCheckAssignementList.printNonNullClassInstanceProperties ("mTerminalCheckAssignementList") ;
    mProperty_mIndexingKeyList.printNonNullClassInstanceProperties ("mIndexingKeyList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationToken") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ("terminalCheckInstructionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration result ;
  const GGS_terminalCheckInstructionForGeneration * p = (const GGS_terminalCheckInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

AC_GALGAS_root * GGS_selectInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration result ;
  const GGS_selectInstructionForGeneration * p = (const GGS_selectInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @optionComponentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionComponentDeclarationAST::objectCompare (const GGS_optionComponentDeclarationAST & inOperand) const {
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

GGS_optionComponentDeclarationAST::GGS_optionComponentDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionComponentDeclarationAST GGS_optionComponentDeclarationAST::
init_21_isPredefined_21__21_ (const GGS_bool & in_isPredefined,
                              const GGS_lstring & in_mOptionComponentName,
                              const GGS_commandLineOptionListAST & in_mOptions,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_optionComponentDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionComponentDeclarationAST_init_21_isPredefined_21__21_ (in_isPredefined, in_mOptionComponentName, in_mOptions, inCompiler) ;
  const GGS_optionComponentDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::
optionComponentDeclarationAST_init_21_isPredefined_21__21_ (const GGS_bool & in_isPredefined,
                                                            const GGS_lstring & in_mOptionComponentName,
                                                            const GGS_commandLineOptionListAST & in_mOptions,
                                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptions = in_mOptions ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST::GGS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionComponentDeclarationAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionListAST GGS_optionComponentDeclarationAST::readProperty_mOptions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionListAST () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_lstring & in_mOptionComponentName,
                                                                        const GGS_commandLineOptionListAST & in_mOptions,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptions () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptions = in_mOptions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionComponentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

void cPtr_optionComponentDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@optionComponentDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionComponentDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mProperty_isPredefined, mProperty_mOptionComponentName, mProperty_mOptions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionComponentDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptions.printNonNullClassInstanceProperties ("mOptions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionComponentDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST GGS_optionComponentDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_optionComponentDeclarationAST result ;
  const GGS_optionComponentDeclarationAST * p = (const GGS_optionComponentDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                             const GGS_string & in_implementationCppFileName,
                                                                             const GGS_bool & in_mIsPredefined,
                                                                             const GGS_string & in_mOptionComponentName,
                                                                             const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                             const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                             const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                             const GGS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_optionComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, in_mStringListSortedList, inCompiler) ;
  const GGS_optionComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::
optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_bool & in_mIsPredefined,
                                                                                                          const GGS_string & in_mOptionComponentName,
                                                                                                          const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                                          const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                                          const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                                          const GGS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
  mProperty_mStringListSortedList = in_mStringListSortedList ;
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

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mStringListSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringListSortedList ;
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
mProperty_mStringOptionSortedList (),
mProperty_mStringListSortedList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GGS_bool & in_generateHeader,
                                                                      const GGS_string & in_implementationCppFileName,
                                                                      const GGS_bool & in_mIsPredefined,
                                                                      const GGS_string & in_mOptionComponentName,
                                                                      const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mBoolOptionSortedList (),
mProperty_mUIntOptionSortedList (),
mProperty_mStringOptionSortedList (),
mProperty_mStringListSortedList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
  mProperty_mStringListSortedList = in_mStringListSortedList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

void cPtr_optionComponentForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@optionComponentForGeneration:") ;
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
  ioString.appendCString (", ") ;
  mProperty_mStringListSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionComponentForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionSortedList, mProperty_mUIntOptionSortedList, mProperty_mStringOptionSortedList, mProperty_mStringListSortedList, inCompiler COMMA_THERE)) ;
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
    mProperty_mStringListSortedList.printNonNullClassInstanceProperties ("mStringListSortedList") ;
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

AC_GALGAS_root * GGS_optionComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionComponentForGeneration result ;
  const GGS_optionComponentForGeneration * p = (const GGS_optionComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_optionComponentForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak GGS_optionComponentForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionComponentForGeneration_2E_weak result ;
  const GGS_optionComponentForGeneration_2E_weak * p = (const GGS_optionComponentForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalImplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalImplicitRuleAST::objectCompare (const GGS_lexicalImplicitRuleAST & inOperand) const {
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

GGS_lexicalImplicitRuleAST::GGS_lexicalImplicitRuleAST (void) :
GGS_abstractLexicalRuleAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST::
init_21_ (const GGS_lstring & in_mListName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalImplicitRuleAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalImplicitRuleAST (inCompiler COMMA_THERE)) ;
  object->lexicalImplicitRuleAST_init_21_ (in_mListName, inCompiler) ;
  const GGS_lexicalImplicitRuleAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::
lexicalImplicitRuleAST_init_21_ (const GGS_lstring & in_mListName,
                                 Compiler * /* inCompiler */) {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST::GGS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GGS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalImplicitRuleAST::readProperty_mListName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    return p->mProperty_mListName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalImplicitRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mListName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GGS_lstring & in_mListName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mListName () {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalImplicitRuleAST:") ;
  mProperty_mListName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalImplicitRuleAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mProperty_mListName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalImplicitRuleAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties () ;
    mProperty_mListName.printNonNullClassInstanceProperties ("mListName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalImplicitRuleAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                                                           & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalImplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalImplicitRuleAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalImplicitRuleAST result ;
  const GGS_lexicalImplicitRuleAST * p = (const GGS_lexicalImplicitRuleAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalImplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterSetMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterSetMatchAST::objectCompare (const GGS_lexicalCharacterSetMatchAST & inOperand) const {
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

GGS_lexicalCharacterSetMatchAST::GGS_lexicalCharacterSetMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST::
init_21_ (const GGS_lstring & in_mCharacterSetName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterSetMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterSetMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterSetMatchAST_init_21_ (in_mCharacterSetName, inCompiler) ;
  const GGS_lexicalCharacterSetMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::
lexicalCharacterSetMatchAST_init_21_ (const GGS_lstring & in_mCharacterSetName,
                                      Compiler * /* inCompiler */) {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST::GGS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalCharacterSetMatchAST::readProperty_mCharacterSetName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    return p->mProperty_mCharacterSetName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterSetMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacterSetName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GGS_lstring & in_mCharacterSetName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacterSetName () {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterSetMatchAST:") ;
  mProperty_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalCharacterSetMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mProperty_mCharacterSetName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterSetMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacterSetName.printNonNullClassInstanceProperties ("mCharacterSetName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterSetMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalCharacterSetMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalCharacterSetMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalCharacterSetMatchAST result ;
  const GGS_lexicalCharacterSetMatchAST * p = (const GGS_lexicalCharacterSetMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalCharacterSetMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringMatchAST::objectCompare (const GGS_lexicalStringMatchAST & inOperand) const {
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

GGS_lexicalStringMatchAST::GGS_lexicalStringMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST::
init_21_ (const GGS_lstring & in_mString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringMatchAST_init_21_ (in_mString, inCompiler) ;
  const GGS_lexicalStringMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::
lexicalStringMatchAST_init_21_ (const GGS_lstring & in_mString,
                                Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST::GGS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GGS_lstring & in_mString,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString () {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalStringMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mProperty_mString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStringMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                                                          & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStringMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStringMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalStringMatchAST result ;
  const GGS_lexicalStringMatchAST * p = (const GGS_lexicalStringMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStringMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringNotMatchAST::objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const {
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

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::
init_21__21_ (const GGS_lstring & in_mString,
              const GGS_lstring & in_mErrorMessage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringNotMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringNotMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringNotMatchAST_init_21__21_ (in_mString, in_mErrorMessage, inCompiler) ;
  const GGS_lexicalStringNotMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::
lexicalStringNotMatchAST_init_21__21_ (const GGS_lstring & in_mString,
                                       const GGS_lstring & in_mErrorMessage,
                                       Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mErrorMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GGS_lstring & in_mString,
                                                              const GGS_lstring & in_mErrorMessage,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringNotMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalStringNotMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringNotMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
    mProperty_mErrorMessage.printNonNullClassInstanceProperties ("mErrorMessage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStringNotMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalStringNotMatchAST result ;
  const GGS_lexicalStringNotMatchAST * p = (const GGS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStringNotMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSendTerminalByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendTerminalByDefaultAST::objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const {
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

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSendTerminalByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSendTerminalByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalSendTerminalByDefaultAST_init_21_ (in_mDefaultSentTerminal, inCompiler) ;
  const GGS_lexicalSendTerminalByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::
lexicalSendTerminalByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalSendTerminalByDefaultAST::readProperty_mDefaultSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    return p->mProperty_mDefaultSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GGS_lstring & in_mDefaultSentTerminal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSendTerminalByDefaultAST:") ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalSendTerminalByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendTerminalByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultSentTerminal.printNonNullClassInstanceProperties ("mDefaultSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSendTerminalByDefaultAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendTerminalByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendTerminalByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSendTerminalByDefaultAST result ;
  const GGS_lexicalSendTerminalByDefaultAST * p = (const GGS_lexicalSendTerminalByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendTerminalByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalErrorByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorByDefaultAST::objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const {
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

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorByDefaultAST_init_21_ (in_mDefaultErrorMessageName, inCompiler) ;
  const GGS_lexicalErrorByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::
lexicalErrorByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
                                   Compiler * /* inCompiler */) {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalErrorByDefaultAST::readProperty_mDefaultErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    return p->mProperty_mDefaultErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GGS_lstring & in_mDefaultErrorMessageName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorByDefaultAST:") ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalErrorByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultErrorMessageName.printNonNullClassInstanceProperties ("mDefaultErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorByDefaultAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorByDefaultAST result ;
  const GGS_lexicalErrorByDefaultAST * p = (const GGS_lexicalErrorByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputArgumentAST::objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const {
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

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::
init_21_ (const GGS_lstring & in_mAttributeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputArgumentAST_init_21_ (in_mAttributeName, inCompiler) ;
  const GGS_lexicalAttributeInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::
lexicalAttributeInputArgumentAST_init_21_ (const GGS_lstring & in_mAttributeName,
                                           Compiler * /* inCompiler */) {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeInputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GGS_lstring & in_mAttributeName,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputArgumentAST:") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalAttributeInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputArgumentAST result ;
  const GGS_lexicalAttributeInputArgumentAST * p = (const GGS_lexicalAttributeInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalFunctionInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFunctionInputArgumentAST::objectCompare (const GGS_lexicalFunctionInputArgumentAST & inOperand) const {
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

GGS_lexicalFunctionInputArgumentAST::GGS_lexicalFunctionInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST GGS_lexicalFunctionInputArgumentAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalFunctionInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalFunctionInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalFunctionInputArgumentAST_init_21__21_ (in_mFunctionName, in_mFunctionActualArgumentList, inCompiler) ;
  const GGS_lexicalFunctionInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::
lexicalFunctionInputArgumentAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                              const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
                                              Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionActualArgumentList = in_mFunctionActualArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST::GGS_lexicalFunctionInputArgumentAST (const cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalFunctionInputArgumentAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionInputArgumentAST::readProperty_mFunctionActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalFunctionCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFunctionActualArgumentList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (const GGS_lstring & in_mFunctionName,
                                                                            const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFunctionActualArgumentList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionActualArgumentList = in_mFunctionActualArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalFunctionInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

void cPtr_lexicalFunctionInputArgumentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalFunctionInputArgumentAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalFunctionInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalFunctionInputArgumentAST (mProperty_mFunctionName, mProperty_mFunctionActualArgumentList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalFunctionInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFunctionActualArgumentList.printNonNullClassInstanceProperties ("mFunctionActualArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ("lexicalFunctionInputArgumentAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST GGS_lexicalFunctionInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionInputArgumentAST result ;
  const GGS_lexicalFunctionInputArgumentAST * p = (const GGS_lexicalFunctionInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (cPtr_semanticInstructionAST * inObject,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
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

AC_GALGAS_root * GGS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  const GGS_routineMap * p = (const GGS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@semanticTypePrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                      GGS_semanticDeclarationAST inArgument_0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  CollectionElement attributes ;
  GGS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' type is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_topologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                              GGS_lstringlist & outSortedKeyList,
                                                              GGS_semanticDeclarationListAST & outUnsortedList,
                                                              GGS_lstringlist & outUnsortedKeyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                                        GGS_lstringlist & outSortedKeyList,
                                                                        GGS_semanticDeclarationListAST & outUnsortedList,
                                                                        GGS_lstringlist & outUnsortedKeyList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_circularities (GGS_semanticDeclarationListAST & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                           const GGS_stringset & inKeysToExclude,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST GGS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inNodesToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_semanticTypePrecedenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticTypePrecedenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  const GGS_semanticTypePrecedenceGraph * p = (const GGS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_localVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarManager (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_localVarManager result ;
  const GGS_localVarManager * p = (const GGS_localVarManager *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalVariable'
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
    temp_0 = GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 53)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 53)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 53)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, temp_0, GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 48)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertUsedLocalConstant'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas3", 71)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 71)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 71)), GGS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas3", 72)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 66)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializedLocalConstant'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas3", 87)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 87)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 87)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 88)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 82)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalConstant'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas3", 103)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 103)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 103)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas3", 104)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 121)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 121)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas3", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 121)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 122)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 137)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas3", 137)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 137)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 138)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 132)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas3", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 153)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas3", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 153)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 154)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 148)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertConstantInputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas3", 169)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 169)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas3", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 169)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 164)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertOutputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 187)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas3", 188)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 182)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 205)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas3", 205)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 205)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 206)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 200)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInputOutputFormalArgument'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 221)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 221)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 221)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas3", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 221)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 223)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 216)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertNonMutableProperty'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas3", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 241)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertMutableProperty'
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
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 257)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 257)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 257)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 258)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 252)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertInitializerSelfProperty'
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
  GGS_lstring var_varName_12567 = GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 273)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  GGS_localVarValuation temp_0 ;
  const GalgasBool test_1 = constinArgument_inInitialized.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas3", 281)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas3", 281)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, var_varName_12567, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas3", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas3", 280)), temp_0, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 274)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GGS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas3", 290))  COMMA_SOURCE_FILE ("variable-manager.galgas3", 290)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GGS_localVarManager & ioObject,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_repeatOverride (SOURCE_FILE ("variable-manager.galgas3", 296))  COMMA_SOURCE_FILE ("variable-manager.galgas3", 296)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GGS_localVarManager & ioObject,
                                    const GGS_location /* constinArgument_inEndOfBranchLocation */,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 302)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_13813 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_13813, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 303)) ;
      }
      switch (var_savedManager_13813.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_13992_savedManager_0 ;
          GGS_currentVarManager extractedValue_14024_referenceManager_1 ;
          var_savedManager_13813.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_13992_savedManager_0, extractedValue_14024_referenceManager_1) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14024_referenceManager_1 ;
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
//Extension method '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GGS_localVarManager & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 316)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GGS_localVarManager & ioObject,
                                  const GGS_location constinArgument_inEndOfBranchLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 322)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas3", 324)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_14644 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_14644, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 325)) ;
      }
      switch (var_savedManager_14644.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        {
          GGS_currentVarManager extractedValue_14737_savedManager_0 ;
          var_savedManager_14644.getAssociatedValuesFor_selectOverrideFirstBranch (extractedValue_14737_savedManager_0) ;
          const GGS_localVarManager temp_2 = ioObject ;
          ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14737_savedManager_0, temp_2.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas3", 328))  COMMA_SOURCE_FILE ("variable-manager.galgas3", 328)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14737_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_14983_savedManager_0 ;
          GGS_currentVarManager extractedValue_15015_referenceManager_1 ;
          var_savedManager_14644.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_14983_savedManager_0, extractedValue_15015_referenceManager_1) ;
          const GGS_localVarManager temp_3 = ioObject ;
          GGS_currentVarManager var_newReferenceManager_15045 = temp_3.readProperty_mCurrentManager () ;
          {
          extensionSetter_combineManagerWith (var_newReferenceManager_15045, extractedValue_15015_referenceManager_1, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 332)) ;
          }
          ioObject.mProperty_mOverridenManagers.addAssignOperation (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14983_savedManager_0, var_newReferenceManager_15045  COMMA_SOURCE_FILE ("variable-manager.galgas3", 333))  COMMA_SOURCE_FILE ("variable-manager.galgas3", 333)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14983_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        {
          ioObject.mProperty_mOverridenManagers.addAssignOperation (var_savedManager_14644  COMMA_SOURCE_FILE ("variable-manager.galgas3", 336)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GGS_localVarManager inObject,
                                                        const GGS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkSelfObjectIsFullyInitialized (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 416)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager neutralAccess'
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
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 442)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 499)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForWriteAccess'
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
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 529)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadAccess'
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
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 633)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager searchForReadWriteAccess'
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
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 717)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GGS_localVarManager inObject,
                                           const GGS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas3", 866)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_routineMap & ioObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_formalParameterSignature constinArgument_inRoutineSignature,
                                const GGS_bool constinArgument_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineArgumentMap var_routineArgumentMap_2929 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_hasKey (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas3", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2929, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 73)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_routineArgumentMap_2929 = GGS_routineArgumentMap::init (inCompiler COMMA_HERE) ;
  }
  GGS_string var_routineArguments_3143 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 77)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_routineArgumentMap_2929.getter_hasKey (var_routineArguments_3143 COMMA_SOURCE_FILE ("routineMap.galgas3", 78)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 79)).add_operation (var_routineArguments_3143, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 79)).add_operation (GGS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 79)), fixItArray4  COMMA_SOURCE_FILE ("routineMap.galgas3", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    {
    var_routineArgumentMap_2929.setter_insertKey (GGS_lstring::init_21__21_ (var_routineArguments_3143, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 81)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2929 COMMA_SOURCE_FILE ("routineMap.galgas3", 86)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap searchKey'
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
    const GGS_internalRoutineMap_2E_element var_routine_4095 = temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outIsFilePrivate = GGS_bool (false) ;
      outArgument_outRoutineSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4242 (var_routine_4095.readProperty_mArgumentMap ()) ;
      while (enumerator_4242.hasCurrentObject ()) {
        outArgument_outIsFilePrivate = enumerator_4242.current (HERE).readProperty_mIsFilePrivate () ;
        outArgument_outRoutineSignature = enumerator_4242.current (HERE).readProperty_mRoutineSignature () ;
        enumerator_4242.gotoNextObject () ;
      }
      GGS_acceptableParameterList var_acceptableParameterList_4405 = GGS_acceptableParameterList::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4462 (var_routine_4095.readProperty_mArgumentMap ()) ;
      while (enumerator_4462.hasCurrentObject ()) {
        GGS_bool var_accept_4490 = GGS_bool (ComparisonKind::equal, constinArgument_inActualParameterList.getter_count (SOURCE_FILE ("routineMap.galgas3", 106)).objectCompare (enumerator_4462.current (HERE).readProperty_mRoutineSignature ().getter_count (SOURCE_FILE ("routineMap.galgas3", 106)))) ;
        UpEnumerator_formalParameterSignature enumerator_4597 (enumerator_4462.current (HERE).readProperty_mRoutineSignature ()) ;
        UpEnumerator_actualParameterListAST enumerator_4617 (constinArgument_inActualParameterList) ;
        bool bool_2 = var_accept_4490.isValidAndTrue () ;
        if (enumerator_4597.hasCurrentObject () && enumerator_4617.hasCurrentObject () && bool_2) {
          while (enumerator_4597.hasCurrentObject () && enumerator_4617.hasCurrentObject () && bool_2) {
            var_accept_4490 = callExtensionGetter_isCompatibleWith ((const cPtr_actualParameterAST *) enumerator_4617.current_mActualParameter (HERE).ptr (), enumerator_4597.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4597.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 108)) ;
            enumerator_4597.gotoNextObject () ;
            enumerator_4617.gotoNextObject () ;
            if (enumerator_4597.hasCurrentObject () && enumerator_4617.hasCurrentObject ()) {
              bool_2 = var_accept_4490.isValidAndTrue () ;
            }
          }
        }
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_accept_4490.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_acceptableParameterList_4405.addAssignOperation (enumerator_4462.current (HERE).readProperty_mRoutineSignature (), enumerator_4462.current (HERE).readProperty_mIsFilePrivate ()  COMMA_SOURCE_FILE ("routineMap.galgas3", 114)) ;
          }
        }
        enumerator_4462.gotoNextObject () ;
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4405.getter_count (SOURCE_FILE ("routineMap.galgas3", 117)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_acceptableParameterList_4405.method_first (outArgument_outRoutineSignature, outArgument_outIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 118)) ;
          outArgument_outRoutineMangledName = function_routineMangledName (constinArgument_inRoutineName, outArgument_outRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 119)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4405.getter_count (SOURCE_FILE ("routineMap.galgas3", 120)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("cannot find any procedure with compatible formal argument list"), fixItArray6  COMMA_SOURCE_FILE ("routineMap.galgas3", 121)) ;
            outArgument_outRoutineSignature.drop () ; // Release error dropped variable
            outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
            outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          GGS_string var_s_5454 = GGS_string ("ambiguity, several procedures with compatible formal argument list:") ;
          UpEnumerator_acceptableParameterList enumerator_5551 (var_acceptableParameterList_4405) ;
          while (enumerator_5551.hasCurrentObject ()) {
            var_s_5454.plusAssignOperation(GGS_string ("\n  - ").add_operation (function_routineArgumentFromFormalParameters (enumerator_5551.current (HERE).readProperty_mRoutineSignature (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 127)), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 127)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 127)) ;
            enumerator_5551.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_s_5454, fixItArray7  COMMA_SOURCE_FILE ("routineMap.galgas3", 129)) ;
          outArgument_outRoutineSignature.drop () ; // Release error dropped variable
          outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
          outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 135)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 135)), fixItArray8  COMMA_SOURCE_FILE ("routineMap.galgas3", 134)) ;
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
  result_result = temp_0.readProperty_mInternalRoutineMap ().getter_locationForKey (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 143)) ;
//---
  return result_result ;
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
      test_1 = enumerator_1851.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas3", 37)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.addAssignOperation (enumerator_1851.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 38)) ;
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
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas3", 152)), GGS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas3", 152)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeDefinition::Enumeration::enum_solved:
    {
      GGS_unifiedTypeDefinition extractedValue_5944_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_5944_definition_0) ;
      result_result = extractedValue_5944_definition_0 ;
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
//Extension method '@syntaxExtensions insertKey'
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
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 44)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_galgas_33_SyntaxExtensionListAST var_aList_2266 ;
      const GGS_syntaxExtensions temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_2266, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 45)) ;
      {
      var_aList_2266.setter_append (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 46)) ;
      }
      ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, var_aList_2266, inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 47)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_galgas_33_SyntaxExtensionListAST temp_3 = GGS_galgas_33_SyntaxExtensionListAST::init (inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 49)) ;
    temp_3.plusPlusAssignOperation (GGS_galgas_33_SyntaxExtensionListAST_2E_element::init_21__21__21_ (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 49)) ;
    ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, temp_3, inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 49)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @inputParameterVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterVariable::objectCompare (const GGS_inputParameterVariable & inOperand) const {
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

GGS_inputParameterVariable::GGS_inputParameterVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::
init_21_ (const GGS_lstring & in_mActualParameterName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inputParameterVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterVariable_init_21_ (in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::
inputParameterVariable_init_21_ (const GGS_lstring & in_mActualParameterName,
                                 Compiler * /* inCompiler */) {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable::GGS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GGS_lstring & in_mActualParameterName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterVariable:") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                                                           & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterVariable result ;
  const GGS_inputParameterVariable * p = (const GGS_inputParameterVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredVariable::objectCompare (const GGS_inputParameterDeclaredVariable & inOperand) const {
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

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredVariable_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::
inputParameterDeclaredVariable_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredVariable:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterDeclaredVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredVariable result ;
  const GGS_inputParameterDeclaredVariable * p = (const GGS_inputParameterDeclaredVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredConstant reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterDeclaredConstant::objectCompare (const GGS_inputParameterDeclaredConstant & inOperand) const {
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

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredConstant * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredConstant (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredConstant_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredConstant result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::
inputParameterDeclaredConstant_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredConstant class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredConstant:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterDeclaredConstant::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredConstant::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterDeclaredConstant generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredConstant result ;
  const GGS_inputParameterDeclaredConstant * p = (const GGS_inputParameterDeclaredConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externFunctionDeclarationAST::objectCompare (const GGS_externFunctionDeclarationAST & inOperand) const {
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

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                 const GGS_lstring & in_mFunctionName,
                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                 const GGS_lstring & in_mResultTypeName,
                                                 const GGS_bool & in_usefullFunc,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler) ;
  const GGS_externFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::
externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                                              const GGS_lstring & in_mFunctionName,
                                                                              const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                              const GGS_lstring & in_mResultTypeName,
                                                                              const GGS_bool & in_usefullFunc,
                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_externFunctionDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionDeclarationAST::readProperty_usefullFunc (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_usefullFunc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mFunctionName,
                                                                      const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GGS_lstring & in_mResultTypeName,
                                                                      const GGS_bool & in_usefullFunc,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

void cPtr_externFunctionDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@externFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_externFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_usefullFunc.printNonNullClassInstanceProperties ("usefullFunc") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationAST result ;
  const GGS_externFunctionDeclarationAST * p = (const GGS_externFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionDeclarationAST::objectCompare (const GGS_functionDeclarationAST & inOperand) const {
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

GGS_functionDeclarationAST::GGS_functionDeclarationAST (void) :
GGS_externFunctionDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                 const GGS_lstring & in_mFunctionName,
                                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                 const GGS_lstring & in_mResultTypeName,
                                                                 const GGS_bool & in_usefullFunc,
                                                                 const GGS_lstring & in_mResultVariableName,
                                                                 const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                 const GGS_location & in_mEndOfFunctionInstructionList,
                                                                 const GGS_bool & in_mIsInternal,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, inCompiler) ;
  const GGS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::
functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                        const GGS_lstring & in_mFunctionName,
                                                                                        const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                        const GGS_lstring & in_mResultTypeName,
                                                                                        const GGS_bool & in_usefullFunc,
                                                                                        const GGS_lstring & in_mResultVariableName,
                                                                                        const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                                        const GGS_location & in_mEndOfFunctionInstructionList,
                                                                                        const GGS_bool & in_mIsInternal,
                                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST::GGS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GGS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_functionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mFunctionName,
                                                          const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GGS_lstring & in_mResultTypeName,
                                                          const GGS_bool & in_usefullFunc,
                                                          const GGS_lstring & in_mResultVariableName,
                                                          const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                          const GGS_location & in_mEndOfFunctionInstructionList,
                                                          const GGS_bool & in_mIsInternal,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@functionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST result ;
  const GGS_functionDeclarationAST * p = (const GGS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationAST::objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const {
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

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mFunctionName,
                                                  const GGS_lstring & in_mResultTypeName,
                                                  const GGS_lstring & in_mResultVariableName,
                                                  const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_bool & in_mIsUsefull,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mResultTypeName, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, in_mIsUsefull, inCompiler) ;
  const GGS_onceFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::
onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mFunctionName,
                                                                             const GGS_lstring & in_mResultTypeName,
                                                                             const GGS_lstring & in_mResultVariableName,
                                                                             const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                             const GGS_location & in_mEndOfFunctionInstructionList,
                                                                             const GGS_bool & in_mIsInternal,
                                                                             const GGS_bool & in_mIsUsefull,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mFunctionName,
                                                                  const GGS_lstring & in_mResultTypeName,
                                                                  const GGS_lstring & in_mResultVariableName,
                                                                  const GGS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                                  const GGS_bool & in_mIsInternal,
                                                                  const GGS_bool & in_mIsUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_onceFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mIsUsefull.printNonNullClassInstanceProperties ("mIsUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST result ;
  const GGS_onceFunctionDeclarationAST * p = (const GGS_onceFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationAST::objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const {
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

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_string & in_mSourceFileAbsolutePath,
                                                  const GGS_lstring & in_mFilewrapperName,
                                                  const GGS_lstring & in_mFilewrapperPath,
                                                  const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                  const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                  const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationAST (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsInternal, in_mSourceFileAbsolutePath, in_mFilewrapperName, in_mFilewrapperPath, in_mFilewrapperTextFileExtensionList, in_mFilewrapperBinaryFileExtensionList, in_mFilewrapperTemplateList, inCompiler) ;
  const GGS_filewrapperDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::
filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                            const GGS_bool & in_mIsInternal,
                                                                            const GGS_string & in_mSourceFileAbsolutePath,
                                                                            const GGS_lstring & in_mFilewrapperName,
                                                                            const GGS_lstring & in_mFilewrapperPath,
                                                                            const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                            const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                            const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationAST::readProperty_mSourceFileAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mSourceFileAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTextFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTextFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperBinaryFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTemplateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_filewrapperTemplateListAST () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTemplateList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                                                const GGS_bool & in_mIsInternal,
                                                                const GGS_string & in_mSourceFileAbsolutePath,
                                                                const GGS_lstring & in_mFilewrapperName,
                                                                const GGS_lstring & in_mFilewrapperPath,
                                                                const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mProperty_isPredefined, mProperty_mIsInternal, mProperty_mSourceFileAbsolutePath, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, mProperty_mFilewrapperTextFileExtensionList, mProperty_mFilewrapperBinaryFileExtensionList, mProperty_mFilewrapperTemplateList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mSourceFileAbsolutePath.printNonNullClassInstanceProperties ("mSourceFileAbsolutePath") ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
    mProperty_mFilewrapperTextFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperTextFileExtensionList") ;
    mProperty_mFilewrapperBinaryFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperBinaryFileExtensionList") ;
    mProperty_mFilewrapperTemplateList.printNonNullClassInstanceProperties ("mFilewrapperTemplateList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationAST result ;
  const GGS_filewrapperDeclarationAST * p = (const GGS_filewrapperDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_SyntaxComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_SyntaxComponentAST::objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::
init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                          const GGS_lstring & in_mSyntaxComponentName,
                                          const GGS_lstring & in_mLexiqueName,
                                          const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                          const GGS_syntaxRuleListAST & in_mRuleList,
                                          const GGS_bool & in_mHasTranslateFeature,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_SyntaxComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_SyntaxComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (in_isPredefined, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_SyntaxComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::
galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mSyntaxComponentName,
                                                                       const GGS_lstring & in_mLexiqueName,
                                                                       const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                       const GGS_syntaxRuleListAST & in_mRuleList,
                                                                       const GGS_bool & in_mHasTranslateFeature,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mNonterminalDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonterminalDeclarationListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mNonterminalDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mRuleList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxRuleListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_SyntaxComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3SyntaxComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_lstring & in_mLexiqueName,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList,
                                                                      const GGS_bool & in_mHasTranslateFeature,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3SyntaxComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_galgas_33_SyntaxComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mProperty_isPredefined, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_SyntaxComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationList.printNonNullClassInstanceProperties ("mNonterminalDeclarationList") ;
    mProperty_mRuleList.printNonNullClassInstanceProperties ("mRuleList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @galgas3SyntaxComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST result ;
  const GGS_galgas_33_SyntaxComponentAST * p = (const GGS_galgas_33_SyntaxComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

