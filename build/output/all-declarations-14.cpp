#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUserImplicitDeclaredTypeSet */,
                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbool var_hasIndexing_6783 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_6783 = GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 190))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 190)) ;
  } break ;
  case 2: {
    var_hasIndexing_6783 = GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 192))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 192)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 195)) ;
  GALGAS_lstring var_mGrammarName_6994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 196)) ;
  GALGAS_lstring var_mGrammarClass_7072 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 197)) ;
  GALGAS_bool var_hasTranslateFeature_7125 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_7125 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 203)) ;
    var_hasTranslateFeature_7125 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 206)) ;
  GALGAS_lstringlist var_syntaxComponents_7301 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 208)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 210)) ;
    GALGAS_lstring var_syntaxComponent_7382 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 211)) ;
    var_syntaxComponents_7301.addAssign_operation (var_syntaxComponent_7382  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 212)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_startSymbol_7513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 216)) ;
  GALGAS_nonTerminalLabelListAST var_mLabelList_7556 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 217)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 218))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 218)), var_mLabelList_7556, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 221)) ;
      GALGAS_lstring var_labelName_7747 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 222)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (var_labelName_7747, var_mLabelList_7556, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GALGAS_lstringlist var_mUnusedNonterminalList_7868 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 226)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 229)) ;
      GALGAS_lstring var_nonterminalSymbolName_7982 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 230)) ;
      var_mUnusedNonterminalList_7868.addAssign_operation (var_nonterminalSymbolName_7982  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 231)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 234)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_galgas_33_GrammarComponentAST::constructor_new (GALGAS_bool (false), var_hasIndexing_6783, var_mGrammarName_6994, var_mGrammarClass_7072, var_syntaxComponents_7301, var_startSymbol_7513, var_mLabelList_7556, var_mUnusedNonterminalList_7868, var_hasTranslateFeature_7125  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 235))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 195)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 196)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 197)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 203)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 206)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 210)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 211)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 216)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 221)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 222)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 229)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 230)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 234)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 193)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 195)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 196)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 197)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 203)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 206)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 210)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 211)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 216)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 221)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 222)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 229)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 230)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 234)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  GALGAS_stringset var_argumentNameSet_8654 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 251)) ;
  GALGAS_formalParameterListAST var_formalParameterList_8707 = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 252)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 253)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_argumentName_8809 ;
      nt_label_5F_formal_5F_parameter_ (var_argumentName_8809, var_formalParameterList_8707, inCompiler) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_argumentNameSet_8654.getter_hasKey (var_argumentName_8809.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 258)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_8809.readProperty_location (), GALGAS_string ("there is already an argument named '").add_operation (var_argumentName_8809.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 259)) ;
        }
      }
      var_argumentNameSet_8654.addAssign_operation (var_argumentName_8809.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 261)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 263)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)) ;
  ioArgument_ioLabelList.addAssign_operation (constinArgument_inLabelName, var_formalParameterList_8707, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 267))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 267)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 253)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_parse (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 263)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 253)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 263)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 266)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_9462 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 274)) ;
  GALGAS_lstring var_mTypeName_9497 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 275)) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 280)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_9462, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 283)), var_mTypeName_9497, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 281)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 274)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 275)) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 280)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 274)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 275)) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 278)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 280)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_10040 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 294)) ;
  GALGAS_lstring var_mTypeName_10085 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 295)) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 298)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 300)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_10040, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 303)), var_mTypeName_10085, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 301)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 295)) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 298)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 300)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 295)) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 298)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_10637 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 313)) ;
  GALGAS_lstring var_mTypeName_10672 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 314)) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 317)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 319)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_10637, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 322)), var_mTypeName_10672, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 320)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 313)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 314)) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 317)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 319)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 313)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 314)) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 317)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 319)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument_outArgumentName,
                                                                                                                       GALGAS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_11218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 332)) ;
  GALGAS_lstring var_mTypeName_11253 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 333)) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 334)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssign_operation (var_selector_11218, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 337)), var_mTypeName_11253, outArgument_outArgumentName, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 335)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 332)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 333)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 334)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 332)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 333)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas", 334)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 129)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_5419 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_prologueInstructionList_5419, inCompiler) ;
  GALGAS_location var_endOfPrologue_5451 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 132)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssign_operation (var_prologueInstructionList_5419, var_endOfPrologue_5451  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 133)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 129)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 132)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 129)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 145)) ;
  GALGAS_semanticInstructionListAST var_prologueInstructionList_6144 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_prologueInstructionList_6144, inCompiler) ;
  GALGAS_location var_endOfPrologue_6176 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 147)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 148)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssign_operation (var_prologueInstructionList_6144, var_endOfPrologue_6176  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 145)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 148)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 145)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 148)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GALGAS_stringset & ioArgument_ioUserImplicitDeclaredTypeSet,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 161)) ;
  GALGAS_lstring var_mSourceFileExtension_6783 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 163)) ;
  GALGAS_lstring var_mSourceFileHelp_6853 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  GALGAS_lstring var_referenceGrammar_6911 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6911 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas", 168)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 170)) ;
    var_referenceGrammar_6911 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_selector_7081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_7081.readProperty_string ().objectCompare (GALGAS_string ("sourceFilePath"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_7081.readProperty_location (), GALGAS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 176)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_typeName_7290 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, var_typeName_7290.readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_7290.readProperty_location (), GALGAS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 182)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isUnused_7442 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7442 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 189)) ;
    var_isUnused_7442 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSourceFileVariableName_7568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 194)) ;
  GALGAS_semanticInstructionListAST var_mInstructionList_7721 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, ioArgument_ioUserImplicitDeclaredTypeSet, var_mInstructionList_7721, inCompiler) ;
  GALGAS_location var_endOfInstructionList_7746 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 196)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 197)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssign_operation (var_mSourceFileExtension_6783, var_mSourceFileHelp_6853, var_mSourceFileVariableName_7568, var_isUnused_7442, var_referenceGrammar_6911, var_mInstructionList_7721, var_endOfInstructionList_7746  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 170)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 189)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 194)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 197)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 160)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 162)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 163)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 164)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_useGrammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 170)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 171)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 174)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 180)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 189)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 192)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 194)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas", 197)) ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerCompositionMap::cMapElement_headerCompositionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_stringset & in_mInclusion,
                                                                    const GALGAS_string & in_mHeaderString
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInclusion (in_mInclusion),
mProperty_mHeaderString (in_mHeaderString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_headerCompositionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_headerCompositionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_headerCompositionMap (mProperty_lkey, mProperty_mInclusion, mProperty_mHeaderString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_headerCompositionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInclusion" ":" ;
  mProperty_mInclusion.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderString" ":" ;
  mProperty_mHeaderString.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_headerCompositionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_headerCompositionMap * operand = (cMapElement_headerCompositionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInclusion.objectCompare (operand->mProperty_mInclusion) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHeaderString.objectCompare (operand->mProperty_mHeaderString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap::GALGAS_headerCompositionMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap::GALGAS_headerCompositionMap (const GALGAS_headerCompositionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap & GALGAS_headerCompositionMap::operator = (const GALGAS_headerCompositionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::constructor_mapWithMapToOverride (const GALGAS_headerCompositionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_headerCompositionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_headerCompositionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_stringset & inArgument0,
                                                       const GALGAS_string & inArgument1,
                                                       C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::add_operation (const GALGAS_headerCompositionMap & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_headerCompositionMap result = *this ;
  cEnumerator_headerCompositionMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mInclusion (HERE), enumerator.current_mHeaderString (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_stringset inArgument0,
                                                    GALGAS_string inArgument1,
                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_headerCompositionMap_searchKey = "there is no '%K' key" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_stringset & outArgument0,
                                                    GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_headerCompositionMap::getter_mInclusionForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerCompositionMap::getter_mHeaderStringForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_setMInclusionForKey (GALGAS_stringset inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerCompositionMap * p = (cMapElement_headerCompositionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    p->mProperty_mInclusion = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerCompositionMap::setter_setMHeaderStringForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerCompositionMap * p = (cMapElement_headerCompositionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
    p->mProperty_mHeaderString = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerCompositionMap * GALGAS_headerCompositionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_headerCompositionMap * result = (cMapElement_headerCompositionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_headerCompositionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_headerCompositionMap::cEnumerator_headerCompositionMap (const GALGAS_headerCompositionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap_2D_element cEnumerator_headerCompositionMap::current (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return GALGAS_headerCompositionMap_2D_element (p->mProperty_lkey, p->mProperty_mInclusion, p->mProperty_mHeaderString) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_headerCompositionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cEnumerator_headerCompositionMap::current_mInclusion (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return p->mProperty_mInclusion ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_headerCompositionMap::current_mHeaderString (LOCATION_ARGS) const {
  const cMapElement_headerCompositionMap * p = (const cMapElement_headerCompositionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerCompositionMap) ;
  return p->mProperty_mHeaderString ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @headerCompositionMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerCompositionMap ("headerCompositionMap",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerCompositionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerCompositionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerCompositionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerCompositionMap GALGAS_headerCompositionMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerRepartitionMap::cMapElement_headerRepartitionMap (const GALGAS_lstring & inKey,
                                                                    const GALGAS_string & in_mHeaderFileName
                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mHeaderFileName (in_mHeaderFileName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_headerRepartitionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_headerRepartitionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_headerRepartitionMap (mProperty_lkey, mProperty_mHeaderFileName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_headerRepartitionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHeaderFileName" ":" ;
  mProperty_mHeaderFileName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_headerRepartitionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_headerRepartitionMap * operand = (cMapElement_headerRepartitionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mHeaderFileName.objectCompare (operand->mProperty_mHeaderFileName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap::GALGAS_headerRepartitionMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap::GALGAS_headerRepartitionMap (const GALGAS_headerRepartitionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap & GALGAS_headerRepartitionMap::operator = (const GALGAS_headerRepartitionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::constructor_mapWithMapToOverride (const GALGAS_headerRepartitionMap & inMapToOverride
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_headerRepartitionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_headerRepartitionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                       const GALGAS_string & inArgument0,
                                                       C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::add_operation (const GALGAS_headerRepartitionMap & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_headerRepartitionMap result = *this ;
  cEnumerator_headerRepartitionMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mHeaderFileName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::setter_insertKey (GALGAS_lstring inKey,
                                                    GALGAS_string inArgument0,
                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_headerRepartitionMap_searchKey = "there is no '%K' key" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::method_searchKey (GALGAS_lstring inKey,
                                                    GALGAS_string & outArgument0,
                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_headerRepartitionMap::getter_mHeaderFileNameForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_headerRepartitionMap::setter_setMHeaderFileNameForKey (GALGAS_string inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_headerRepartitionMap * p = (cMapElement_headerRepartitionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
    p->mProperty_mHeaderFileName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_headerRepartitionMap * GALGAS_headerRepartitionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_headerRepartitionMap * result = (cMapElement_headerRepartitionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_headerRepartitionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_headerRepartitionMap::cEnumerator_headerRepartitionMap (const GALGAS_headerRepartitionMap & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap_2D_element cEnumerator_headerRepartitionMap::current (LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
  return GALGAS_headerRepartitionMap_2D_element (p->mProperty_lkey, p->mProperty_mHeaderFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_headerRepartitionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_headerRepartitionMap::current_mHeaderFileName (LOCATION_ARGS) const {
  const cMapElement_headerRepartitionMap * p = (const cMapElement_headerRepartitionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_headerRepartitionMap) ;
  return p->mProperty_mHeaderFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @headerRepartitionMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_headerRepartitionMap ("headerRepartitionMap",
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_headerRepartitionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_headerRepartitionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_headerRepartitionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerRepartitionMap GALGAS_headerRepartitionMap::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_projectQualifiedFeatureMap::cMapElement_projectQualifiedFeatureMap (const GALGAS_lstring & inKey,
                                                                                const GALGAS_lstring & in_mFeatureValue
                                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFeatureValue (in_mFeatureValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_projectQualifiedFeatureMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_projectQualifiedFeatureMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_projectQualifiedFeatureMap (mProperty_lkey, mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_projectQualifiedFeatureMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureValue" ":" ;
  mProperty_mFeatureValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_projectQualifiedFeatureMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_projectQualifiedFeatureMap * operand = (cMapElement_projectQualifiedFeatureMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFeatureValue.objectCompare (operand->mProperty_mFeatureValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap::GALGAS_projectQualifiedFeatureMap (void) :
AC_GALGAS_map () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap::GALGAS_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap & GALGAS_projectQualifiedFeatureMap::operator = (const GALGAS_projectQualifiedFeatureMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::constructor_mapWithMapToOverride (const GALGAS_projectQualifiedFeatureMap & inMapToOverride
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_projectQualifiedFeatureMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_projectQualifiedFeatureMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                             const GALGAS_lstring & inArgument0,
                                                             C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::add_operation (const GALGAS_projectQualifiedFeatureMap & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_projectQualifiedFeatureMap result = *this ;
  cEnumerator_projectQualifiedFeatureMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFeatureValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::setter_insertKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring inArgument0,
                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_projectQualifiedFeatureMap_searchKey = "the '%K' attribute is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::method_searchKey (GALGAS_lstring inKey,
                                                          GALGAS_lstring & outArgument0,
                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_projectQualifiedFeatureMap::getter_mFeatureValueForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_projectQualifiedFeatureMap::setter_setMFeatureValueForKey (GALGAS_lstring inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_projectQualifiedFeatureMap * p = (cMapElement_projectQualifiedFeatureMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
    p->mProperty_mFeatureValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_projectQualifiedFeatureMap * GALGAS_projectQualifiedFeatureMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_projectQualifiedFeatureMap * result = (cMapElement_projectQualifiedFeatureMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_projectQualifiedFeatureMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_projectQualifiedFeatureMap::cEnumerator_projectQualifiedFeatureMap (const GALGAS_projectQualifiedFeatureMap & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap_2D_element cEnumerator_projectQualifiedFeatureMap::current (LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
  return GALGAS_projectQualifiedFeatureMap_2D_element (p->mProperty_lkey, p->mProperty_mFeatureValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectQualifiedFeatureMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_projectQualifiedFeatureMap::current_mFeatureValue (LOCATION_ARGS) const {
  const cMapElement_projectQualifiedFeatureMap * p = (const cMapElement_projectQualifiedFeatureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_projectQualifiedFeatureMap) ;
  return p->mProperty_mFeatureValue ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @projectQualifiedFeatureMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ("projectQualifiedFeatureMap",
                                                   nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_projectQualifiedFeatureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_projectQualifiedFeatureMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_projectQualifiedFeatureMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_projectQualifiedFeatureMap GALGAS_projectQualifiedFeatureMap::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeGroupList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public: GALGAS_XCodeGroupList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                             const GALGAS_string & in_mGroupName,
                                             const GALGAS_string & in_mGroupPath,
                                             const GALGAS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                                                      const GALGAS_string & in_mGroupName,
                                                                      const GALGAS_string & in_mGroupPath,
                                                                      const GALGAS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeGroupList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupReference" ":" ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupPath" ":" ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mChildrenRefs" ":" ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeGroupList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeGroupList * operand = (cCollectionElement_XCodeGroupList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeGroupList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_append (const GALGAS_string inOperand0,
                                           const GALGAS_string inOperand1,
                                           const GALGAS_string inOperand2,
                                           const GALGAS_stringlist inOperand3,
                                           C_Compiler * /* inCompiler */
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_string inOperand2,
                                                  const GALGAS_stringlist inOperand3,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popFirst (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_stringlist & outOperand3,
                                             C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_popLast (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            GALGAS_stringlist & outOperand3,
                                            C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_stringlist & outOperand3,
                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         GALGAS_stringlist & outOperand3,
                                         C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupNameAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupPathAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupPathAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GALGAS_stringlist inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeToolTargetList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public: GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Constructors
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeToolTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeToolTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeToolTargetList * operand = (cCollectionElement_XCodeToolTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeToolTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
                                                C_Compiler * /* inCompiler */
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                       C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                       C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                 C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                               C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                              C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element cEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeAppTargetList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Constructors
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
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeAppTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependentTargets" ":" ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceBuildRef" ":" ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceFileBuildRefs" ":" ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
                                               C_Compiler * /* inCompiler */
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                 C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                              C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

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
                                             C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GALGAS__32_stringlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@BuildFileList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_BuildFileList : public cCollectionElement {
  public: GALGAS_BuildFileList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                            const GALGAS_string & in_mFileName,
                                            const GALGAS_string & in_mBuildReference
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_BuildFileList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_BuildFileList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileReference" ":" ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileName" ":" ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildReference" ":" ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_append (const GALGAS_string inOperand0,
                                          const GALGAS_string inOperand1,
                                          const GALGAS_string inOperand2,
                                          C_Compiler * /* inCompiler */
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_string inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_string & outOperand2,
                                           C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_string & outOperand2,
                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::add_operation (const GALGAS_BuildFileList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileReferenceAtIndex (GALGAS_string inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileNameAtIndex (GALGAS_string inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMBuildReferenceAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildReference = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
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



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @BuildFileList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element::~ GALGAS_templateInstructionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (const GALGAS_templateInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::constructor_new (const GALGAS_templateInstructionAST & in_mInstruction 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_templateInstructionListAST_2D_element (in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionListAST_2D_element::objectCompare (const GALGAS_templateInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionListAST_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @templateInstructionListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ("templateInstructionListAST-element",
                                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element::~ GALGAS_templateInstructionIfBranchListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                            const GALGAS_templateInstructionListAST & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::constructor_new (const GALGAS_templateExpressionAST & in_mExpression,
                                                                                                                            const GALGAS_templateInstructionListAST & in_mInstructionList 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  if (in_mExpression.isValid () && in_mInstructionList.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListAST_2D_element (in_mExpression, in_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionIfBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionIfBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionIfBranchListAST_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionIfBranchListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionIfBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @templateInstructionIfBranchListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ("templateInstructionIfBranchListAST-element",
                                                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) :
mProperty_mConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructionList (),
mProperty_mEndOfBranch () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element::~ GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                    const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                                    const GALGAS_templateInstructionListAST & inOperand2,
                                                                                                                    const GALGAS_location & inOperand3) :
mProperty_mConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListAST_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_switchExtractedValuesListAST::constructor_emptyList (HERE),
                                                                   GALGAS_templateInstructionListAST::constructor_emptyList (HERE),
                                                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::constructor_new (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                    const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                                                                    const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                                                                                    const GALGAS_location & in_mEndOfBranch 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  if (in_mConstantList.isValid () && in_mAssociatedValuesExtraction.isValid () && in_mInstructionList.isValid () && in_mEndOfBranch.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListAST_2D_element (in_mConstantList, in_mAssociatedValuesExtraction, in_mInstructionList, in_mEndOfBranch) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionSwitchBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantList.objectCompare (inOperand.mProperty_mConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssociatedValuesExtraction.objectCompare (inOperand.mProperty_mAssociatedValuesExtraction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBranch.objectCompare (inOperand.mProperty_mEndOfBranch) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionSwitchBranchListAST_2D_element::isValid (void) const {
  return mProperty_mConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::drop (void) {
  mProperty_mConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionSwitchBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @templateInstructionSwitchBranchListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ("templateInstructionSwitchBranchListAST-element",
                                                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) :
mProperty_mConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::~ GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                                        const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                                                        const GALGAS_uint & inOperand2,
                                                                                                                                        const GALGAS_templateInstructionListForGeneration & inOperand3) :
mProperty_mConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                             GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (HERE),
                                                                             GALGAS_uint::constructor_default (HERE),
                                                                             GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::constructor_new (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                                        const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                                        const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                                        const GALGAS_templateInstructionListForGeneration & in_mInstructionList 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  if (in_mConstantList.isValid () && in_mExtractedAssociatedValuesForGeneration.isValid () && in_mEndOfBranchLocationIndex.isValid () && in_mInstructionList.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (in_mConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantList.objectCompare (inOperand.mProperty_mConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtractedAssociatedValuesForGeneration.objectCompare (inOperand.mProperty_mExtractedAssociatedValuesForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBranchLocationIndex.objectCompare (inOperand.mProperty_mEndOfBranchLocationIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::isValid (void) const {
  return mProperty_mConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::drop (void) {
  mProperty_mConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionSwitchBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @templateInstructionSwitchBranchListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ("templateInstructionSwitchBranchListForGeneration-element",
                                                                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element::~ GALGAS_lexicalInstructionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::constructor_new (const GALGAS_lexicalInstructionAST & in_mInstruction 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_lexicalInstructionListAST_2D_element (in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalInstructionListAST_2D_element::objectCompare (const GALGAS_lexicalInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalInstructionListAST_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalInstructionListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ("lexicalInstructionListAST-element",
                                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (void) :
mProperty_mLexicalRule () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element::~ GALGAS_lexicalRuleListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & inOperand0) :
mProperty_mLexicalRule (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::constructor_new (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  if (in_mLexicalRule.isValid ()) {
    result = GALGAS_lexicalRuleListAST_2D_element (in_mLexicalRule) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRuleListAST_2D_element::objectCompare (const GALGAS_lexicalRuleListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexicalRule.objectCompare (inOperand.mProperty_mLexicalRule) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRuleListAST_2D_element::isValid (void) const {
  return mProperty_mLexicalRule.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST_2D_element::drop (void) {
  mProperty_mLexicalRule.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @lexicalRuleListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexicalRule.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalRuleListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ("lexicalRuleListAST-element",
                                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRuleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (void) :
mProperty_mWhileExpression (),
mProperty_mWhileInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element::~ GALGAS_lexicalWhileBranchListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                          const GALGAS_lexicalInstructionListAST & inOperand1) :
mProperty_mWhileExpression (inOperand0),
mProperty_mWhileInstructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::constructor_new (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                                          const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  if (in_mWhileExpression.isValid () && in_mWhileInstructionList.isValid ()) {
    result = GALGAS_lexicalWhileBranchListAST_2D_element (in_mWhileExpression, in_mWhileInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalWhileBranchListAST_2D_element::objectCompare (const GALGAS_lexicalWhileBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mWhileExpression.objectCompare (inOperand.mProperty_mWhileExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mWhileInstructionList.objectCompare (inOperand.mProperty_mWhileInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalWhileBranchListAST_2D_element::isValid (void) const {
  return mProperty_mWhileExpression.isValid () && mProperty_mWhileInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST_2D_element::drop (void) {
  mProperty_mWhileExpression.drop () ;
  mProperty_mWhileInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalWhileBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalWhileBranchListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ("lexicalWhileBranchListAST-element",
                                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (void) :
mProperty_mSelectExpression (),
mProperty_mSelectInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element::~ GALGAS_lexicalSelectBranchListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                            const GALGAS_lexicalInstructionListAST & inOperand1) :
mProperty_mSelectExpression (inOperand0),
mProperty_mSelectInstructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::constructor_new (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                                            const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  if (in_mSelectExpression.isValid () && in_mSelectInstructionList.isValid ()) {
    result = GALGAS_lexicalSelectBranchListAST_2D_element (in_mSelectExpression, in_mSelectInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalSelectBranchListAST_2D_element::objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelectExpression.objectCompare (inOperand.mProperty_mSelectExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectInstructionList.objectCompare (inOperand.mProperty_mSelectInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalSelectBranchListAST_2D_element::isValid (void) const {
  return mProperty_mSelectExpression.isValid () && mProperty_mSelectInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST_2D_element::drop (void) {
  mProperty_mSelectExpression.drop () ;
  mProperty_mSelectInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @lexicalSelectBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalSelectBranchListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ("lexicalSelectBranchListAST-element",
                                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) :
mProperty_mLexicalActualInputArgument () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0) :
mProperty_mLexicalActualInputArgument (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::constructor_new (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  if (in_mLexicalActualInputArgument.isValid ()) {
    result = GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (in_mLexicalActualInputArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexicalActualInputArgument.objectCompare (inOperand.mProperty_mLexicalActualInputArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mLexicalActualInputArgument.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::drop (void) {
  mProperty_mLexicalActualInputArgument.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionCallActualArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexicalActualInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionCallActualArgumentListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ("lexicalFunctionCallActualArgumentListAST-element",
                                                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (void) :
mProperty_mLength (),
mProperty_mName (),
mProperty_mTerminalName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element::~ GALGAS_tokenSortedlist_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2) :
mProperty_mLength (inOperand0),
mProperty_mName (inOperand1),
mProperty_mTerminalName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tokenSortedlist_2D_element (GALGAS_uint::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::constructor_new (const GALGAS_uint & in_mLength,
                                                                                      const GALGAS_string & in_mName,
                                                                                      const GALGAS_string & in_mTerminalName 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  if (in_mLength.isValid () && in_mName.isValid () && in_mTerminalName.isValid ()) {
    result = GALGAS_tokenSortedlist_2D_element (in_mLength, in_mName, in_mTerminalName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tokenSortedlist_2D_element::objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLength.objectCompare (inOperand.mProperty_mLength) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalName.objectCompare (inOperand.mProperty_mTerminalName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tokenSortedlist_2D_element::isValid (void) const {
  return mProperty_mLength.isValid () && mProperty_mName.isValid () && mProperty_mTerminalName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist_2D_element::drop (void) {
  mProperty_mLength.drop () ;
  mProperty_mName.drop () ;
  mProperty_mTerminalName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @tokenSortedlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLength.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @tokenSortedlist-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ("tokenSortedlist-element",
                                                   nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tokenSortedlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tokenSortedlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) :
mProperty_mLexicalFormalArgumentMode (),
mProperty_mLexicalFormalArgumentType (),
mProperty_mArgumentNameForComment () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element::~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                        const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                        const GALGAS_string & inOperand2) :
mProperty_mLexicalFormalArgumentMode (inOperand0),
mProperty_mLexicalFormalArgumentType (inOperand1),
mProperty_mArgumentNameForComment (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::constructor_new (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                                        const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                                        const GALGAS_string & in_mArgumentNameForComment 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  if (in_mLexicalFormalArgumentMode.isValid () && in_mLexicalFormalArgumentType.isValid () && in_mArgumentNameForComment.isValid ()) {
    result = GALGAS_lexicalRoutineFormalArgumentList_2D_element (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRoutineFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexicalFormalArgumentMode.objectCompare (inOperand.mProperty_mLexicalFormalArgumentMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalFormalArgumentType.objectCompare (inOperand.mProperty_mLexicalFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentNameForComment.objectCompare (inOperand.mProperty_mArgumentNameForComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRoutineFormalArgumentList_2D_element::isValid (void) const {
  return mProperty_mLexicalFormalArgumentMode.isValid () && mProperty_mLexicalFormalArgumentType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::drop (void) {
  mProperty_mLexicalFormalArgumentMode.drop () ;
  mProperty_mLexicalFormalArgumentType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineFormalArgumentList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ("lexicalRoutineFormalArgumentList-element",
                                                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) :
mProperty_mLexicalType (),
mProperty_mArgumentNameForComment () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element::~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                          const GALGAS_string & inOperand1) :
mProperty_mLexicalType (inOperand0),
mProperty_mArgumentNameForComment (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::constructor_new (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                                                                          const GALGAS_string & in_mArgumentNameForComment 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  if (in_mLexicalType.isValid () && in_mArgumentNameForComment.isValid ()) {
    result = GALGAS_lexicalFunctionFormalArgumentList_2D_element (in_mLexicalType, in_mArgumentNameForComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexicalType.objectCompare (inOperand.mProperty_mLexicalType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArgumentNameForComment.objectCompare (inOperand.mProperty_mArgumentNameForComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalFunctionFormalArgumentList_2D_element::isValid (void) const {
  return mProperty_mLexicalType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::drop (void) {
  mProperty_mLexicalType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionFormalArgumentList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ("lexicalFunctionFormalArgumentList-element",
                                                                     nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) :
mProperty_mLexicalRoutineActualArgument () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::~ GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0) :
mProperty_mLexicalRoutineActualArgument (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::constructor_new (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  if (in_mLexicalRoutineActualArgument.isValid ()) {
    result = GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (in_mLexicalRoutineActualArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexicalRoutineActualArgument.objectCompare (inOperand.mProperty_mLexicalRoutineActualArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mLexicalRoutineActualArgument.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::drop (void) {
  mProperty_mLexicalRoutineActualArgument.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineCallActualArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineCallActualArgumentListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ("lexicalRoutineCallActualArgumentListAST-element",
                                                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (void) :
mProperty_mLeadingCharacterStrippedCount (),
mProperty_mTerminalList (),
mProperty_mLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element::~ GALGAS_guiLabelListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_terminalLabelListAST & inOperand1,
                                                                      const GALGAS_location & inOperand2) :
mProperty_mLeadingCharacterStrippedCount (inOperand0),
mProperty_mTerminalList (inOperand1),
mProperty_mLocation (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiLabelListAST_2D_element (GALGAS_uint::constructor_default (HERE),
                                            GALGAS_terminalLabelListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::constructor_new (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                                                      const GALGAS_terminalLabelListAST & in_mTerminalList,
                                                                                      const GALGAS_location & in_mLocation 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  if (in_mLeadingCharacterStrippedCount.isValid () && in_mTerminalList.isValid () && in_mLocation.isValid ()) {
    result = GALGAS_guiLabelListAST_2D_element (in_mLeadingCharacterStrippedCount, in_mTerminalList, in_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_guiLabelListAST_2D_element::objectCompare (const GALGAS_guiLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLeadingCharacterStrippedCount.objectCompare (inOperand.mProperty_mLeadingCharacterStrippedCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalList.objectCompare (inOperand.mProperty_mTerminalList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLocation.objectCompare (inOperand.mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_guiLabelListAST_2D_element::isValid (void) const {
  return mProperty_mLeadingCharacterStrippedCount.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST_2D_element::drop (void) {
  mProperty_mLeadingCharacterStrippedCount.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiLabelListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @guiLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLeadingCharacterStrippedCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @guiLabelListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ("guiLabelListAST-element",
                                                   nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element::GALGAS_guiCommandLineOptionList_2D_element (void) :
mProperty_mOptionComponent (),
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element::~ GALGAS_guiCommandLineOptionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCommandLineOptionList_2D_element (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_char::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::constructor_new (const GALGAS_string & in_mOptionComponent,
                                                                                                        const GALGAS_string & in_mOptionIdentifier,
                                                                                                        const GALGAS_char & in_mOptionChar,
                                                                                                        const GALGAS_string & in_mOptionString,
                                                                                                        const GALGAS_string & in_mComment 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  if (in_mOptionComponent.isValid () && in_mOptionIdentifier.isValid () && in_mOptionChar.isValid () && in_mOptionString.isValid () && in_mComment.isValid ()) {
    result = GALGAS_guiCommandLineOptionList_2D_element (in_mOptionComponent, in_mOptionIdentifier, in_mOptionChar, in_mOptionString, in_mComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_guiCommandLineOptionList_2D_element::objectCompare (const GALGAS_guiCommandLineOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionComponent.objectCompare (inOperand.mProperty_mOptionComponent) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionIdentifier.objectCompare (inOperand.mProperty_mOptionIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionChar.objectCompare (inOperand.mProperty_mOptionChar) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionString.objectCompare (inOperand.mProperty_mOptionString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mComment.objectCompare (inOperand.mProperty_mComment) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_guiCommandLineOptionList_2D_element::isValid (void) const {
  return mProperty_mOptionComponent.isValid () && mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList_2D_element::drop (void) {
  mProperty_mOptionComponent.drop () ;
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_guiCommandLineOptionList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @guiCommandLineOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionComponent.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @guiCommandLineOptionList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ("guiCommandLineOptionList-element",
                                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guiCommandLineOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (void) :
mProperty_mKey (),
mProperty_mContents () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element::~ GALGAS_textMacroList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mContents (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_textMacroList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::constructor_new (const GALGAS_string & in_mKey,
                                                                                  const GALGAS_string & in_mContents 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  if (in_mKey.isValid () && in_mContents.isValid ()) {
    result = GALGAS_textMacroList_2D_element (in_mKey, in_mContents) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_textMacroList_2D_element::objectCompare (const GALGAS_textMacroList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mKey.objectCompare (inOperand.mProperty_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mContents.objectCompare (inOperand.mProperty_mContents) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_textMacroList_2D_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mContents.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_textMacroList_2D_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mContents.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_textMacroList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @textMacroList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mContents.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @textMacroList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList_2D_element ("textMacroList-element",
                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_textMacroList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_textMacroList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element::GALGAS_importedLexiqueList_2D_element (void) :
mProperty_mLexiqueClassName (),
mProperty_mIndex (),
mProperty_mBlockComment (),
mProperty_mTitle (),
mProperty_mTextMacroList (),
mProperty_mLabels (),
mProperty_mLexicalStyleList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element::~ GALGAS_importedLexiqueList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_importedLexiqueList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_uint::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_textMacroList::constructor_emptyList (HERE),
                                                GALGAS_guiLabelListAST::constructor_emptyList (HERE),
                                                GALGAS_lexicalStyleListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::constructor_new (const GALGAS_string & in_mLexiqueClassName,
                                                                                              const GALGAS_uint & in_mIndex,
                                                                                              const GALGAS_string & in_mBlockComment,
                                                                                              const GALGAS_string & in_mTitle,
                                                                                              const GALGAS_textMacroList & in_mTextMacroList,
                                                                                              const GALGAS_guiLabelListAST & in_mLabels,
                                                                                              const GALGAS_lexicalStyleListAST & in_mLexicalStyleList 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  if (in_mLexiqueClassName.isValid () && in_mIndex.isValid () && in_mBlockComment.isValid () && in_mTitle.isValid () && in_mTextMacroList.isValid () && in_mLabels.isValid () && in_mLexicalStyleList.isValid ()) {
    result = GALGAS_importedLexiqueList_2D_element (in_mLexiqueClassName, in_mIndex, in_mBlockComment, in_mTitle, in_mTextMacroList, in_mLabels, in_mLexicalStyleList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_importedLexiqueList_2D_element::objectCompare (const GALGAS_importedLexiqueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueClassName.objectCompare (inOperand.mProperty_mLexiqueClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBlockComment.objectCompare (inOperand.mProperty_mBlockComment) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTitle.objectCompare (inOperand.mProperty_mTitle) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTextMacroList.objectCompare (inOperand.mProperty_mTextMacroList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabels.objectCompare (inOperand.mProperty_mLabels) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalStyleList.objectCompare (inOperand.mProperty_mLexicalStyleList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_importedLexiqueList_2D_element::isValid (void) const {
  return mProperty_mLexiqueClassName.isValid () && mProperty_mIndex.isValid () && mProperty_mBlockComment.isValid () && mProperty_mTitle.isValid () && mProperty_mTextMacroList.isValid () && mProperty_mLabels.isValid () && mProperty_mLexicalStyleList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList_2D_element::drop (void) {
  mProperty_mLexiqueClassName.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBlockComment.drop () ;
  mProperty_mTitle.drop () ;
  mProperty_mTextMacroList.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mLexicalStyleList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_importedLexiqueList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @importedLexiqueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexiqueClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBlockComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTitle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTextMacroList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @importedLexiqueList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ("importedLexiqueList-element",
                                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_importedLexiqueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_importedLexiqueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (void) :
mProperty_mConstantName (),
mProperty_mAssociatedValueTypeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element::~ GALGAS_enumConstantListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_unifiedTypeMapEntryList & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mAssociatedValueTypeList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_unifiedTypeMapEntryList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::constructor_new (const GALGAS_string & in_mConstantName,
                                                                                                                  const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  if (in_mConstantName.isValid () && in_mAssociatedValueTypeList.isValid ()) {
    result = GALGAS_enumConstantListForGeneration_2D_element (in_mConstantName, in_mAssociatedValueTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumConstantListForGeneration_2D_element::objectCompare (const GALGAS_enumConstantListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssociatedValueTypeList.objectCompare (inOperand.mProperty_mAssociatedValueTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumConstantListForGeneration_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mAssociatedValueTypeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mAssociatedValueTypeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumConstantListForGeneration_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @enumConstantListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssociatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @enumConstantListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ("enumConstantListForGeneration-element",
                                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) :
mProperty_mInsertOrReplaceDeclarationLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element::~ GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (const GALGAS_location & inOperand0) :
mProperty_mInsertOrReplaceDeclarationLocation (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST_2D_element (GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::constructor_new (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  if (in_mInsertOrReplaceDeclarationLocation.isValid ()) {
    result = GALGAS_insertOrReplaceDeclarationListAST_2D_element (in_mInsertOrReplaceDeclarationLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_insertOrReplaceDeclarationListAST_2D_element::objectCompare (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInsertOrReplaceDeclarationLocation.objectCompare (inOperand.mProperty_mInsertOrReplaceDeclarationLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_insertOrReplaceDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mInsertOrReplaceDeclarationLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::drop (void) {
  mProperty_mInsertOrReplaceDeclarationLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @insertOrReplaceDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @insertOrReplaceDeclarationListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ("insertOrReplaceDeclarationListAST-element",
                                                                     nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (void) :
mProperty_mAttributeTypeIndex (),
mProperty_mAttributeName (),
mProperty_mAscendingOrder () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::~ GALGAS_sortDescriptorListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element::GALGAS_sortDescriptorListForGeneration_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_bool & inOperand2) :
mProperty_mAttributeTypeIndex (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mAscendingOrder (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                                      const GALGAS_string & in_mAttributeName,
                                                                                                                      const GALGAS_bool & in_mAscendingOrder 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortDescriptorListForGeneration_2D_element result ;
  if (in_mAttributeTypeIndex.isValid () && in_mAttributeName.isValid () && in_mAscendingOrder.isValid ()) {
    result = GALGAS_sortDescriptorListForGeneration_2D_element (in_mAttributeTypeIndex, in_mAttributeName, in_mAscendingOrder) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sortDescriptorListForGeneration_2D_element::objectCompare (const GALGAS_sortDescriptorListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeTypeIndex.objectCompare (inOperand.mProperty_mAttributeTypeIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAscendingOrder.objectCompare (inOperand.mProperty_mAscendingOrder) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_sortDescriptorListForGeneration_2D_element::isValid (void) const {
  return mProperty_mAttributeTypeIndex.isValid () && mProperty_mAttributeName.isValid () && mProperty_mAscendingOrder.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration_2D_element::drop (void) {
  mProperty_mAttributeTypeIndex.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mAscendingOrder.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortDescriptorListForGeneration_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @sortDescriptorListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAttributeTypeIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAscendingOrder.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @sortDescriptorListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ("sortDescriptorListForGeneration-element",
                                                                   nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortDescriptorListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortDescriptorListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortDescriptorListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration_2D_element GALGAS_sortDescriptorListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (void) :
mProperty_mActualParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::~ GALGAS_actualParameterListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (const GALGAS_actualParameterAST & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::constructor_new (const GALGAS_actualParameterAST & in_mActualParameter 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  if (in_mActualParameter.isValid ()) {
    result = GALGAS_actualParameterListAST_2D_element (in_mActualParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualParameterListAST_2D_element::objectCompare (const GALGAS_actualParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActualParameter.objectCompare (inOperand.mProperty_mActualParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actualParameterListAST_2D_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @actualParameterListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ("actualParameterListAST-element",
                                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::~ GALGAS_semanticInstructionListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (const GALGAS_semanticInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::constructor_new (const GALGAS_semanticInstructionAST & in_mInstruction 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_semanticInstructionListAST_2D_element (in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticInstructionListAST_2D_element::objectCompare (const GALGAS_semanticInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticInstructionListAST_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @semanticInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ("semanticInstructionListAST-element",
                                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (void) :
mProperty_mSemanticDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::~ GALGAS_semanticDeclarationListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (const GALGAS_semanticDeclarationAST & inOperand0) :
mProperty_mSemanticDeclaration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::constructor_new (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  if (in_mSemanticDeclaration.isValid ()) {
    result = GALGAS_semanticDeclarationListAST_2D_element (in_mSemanticDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticDeclarationListAST_2D_element::objectCompare (const GALGAS_semanticDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSemanticDeclaration.objectCompare (inOperand.mProperty_mSemanticDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mSemanticDeclaration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::drop (void) {
  mProperty_mSemanticDeclaration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @semanticDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSemanticDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ("semanticDeclarationListAST-element",
                                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::~ GALGAS_syntaxInstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::constructor_new (const GALGAS_syntaxInstructionAST & in_mInstruction 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_syntaxInstructionList_2D_element (in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxInstructionList_2D_element::objectCompare (const GALGAS_syntaxInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @syntaxInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ("syntaxInstructionList-element",
                                                         nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (void) :
mProperty_mSyntaxInstructionList (),
mProperty_mEndOf_5F_instructions () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::~ GALGAS_listOfSyntaxInstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                              const GALGAS_location & inOperand1) :
mProperty_mSyntaxInstructionList (inOperand0),
mProperty_mEndOf_5F_instructions (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSyntaxInstructionList_2D_element (GALGAS_syntaxInstructionList::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::constructor_new (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                              const GALGAS_location & in_mEndOf_instructions 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  if (in_mSyntaxInstructionList.isValid () && in_mEndOf_instructions.isValid ()) {
    result = GALGAS_listOfSyntaxInstructionList_2D_element (in_mSyntaxInstructionList, in_mEndOf_instructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listOfSyntaxInstructionList_2D_element::objectCompare (const GALGAS_listOfSyntaxInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxInstructionList.objectCompare (inOperand.mProperty_mSyntaxInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOf_5F_instructions.objectCompare (inOperand.mProperty_mEndOf_5F_instructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_listOfSyntaxInstructionList_2D_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOf_5F_instructions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOf_5F_instructions.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @listOfSyntaxInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @listOfSyntaxInstructionList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ("listOfSyntaxInstructionList-element",
                                                               nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element::~ GALGAS_syntaxExtensions_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (const GALGAS_string & inOperand0,
                                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxExtensions_2D_element (GALGAS_string::constructor_default (HERE),
                                             GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::constructor_new (const GALGAS_string & in_key,
                                                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & in_mList 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  if (in_key.isValid () && in_mList.isValid ()) {
    result = GALGAS_syntaxExtensions_2D_element (in_key, in_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxExtensions_2D_element::objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxExtensions_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensions_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensions_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @syntaxExtensions-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @syntaxExtensions-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ("syntaxExtensions-element",
                                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxExtensions_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxExtensions_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensions_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element::~ GALGAS_prologueEpilogueList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                const GALGAS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prologueEpilogueList_2D_element (GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::constructor_new (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                const GALGAS_location & in_mEndOfInstructionList 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  if (in_mInstructionList.isValid () && in_mEndOfInstructionList.isValid ()) {
    result = GALGAS_prologueEpilogueList_2D_element (in_mInstructionList, in_mEndOfInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_prologueEpilogueList_2D_element::objectCompare (const GALGAS_prologueEpilogueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInstructionList.objectCompare (inOperand.mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_prologueEpilogueList_2D_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList_2D_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @prologueEpilogueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @prologueEpilogueList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ("prologueEpilogueList-element",
                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prologueEpilogueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prologueEpilogueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prologueEpilogueList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  const GALGAS_prologueEpilogueList_2D_element * p = (const GALGAS_prologueEpilogueList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prologueEpilogueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (void) :
mProperty_mEnumeratedType (),
mProperty_mEnumerationName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::~ GALGAS_enumerationDescriptorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element::GALGAS_enumerationDescriptorList_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                          const GALGAS_string & inOperand1) :
mProperty_mEnumeratedType (inOperand0),
mProperty_mEnumerationName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::constructor_new (const GALGAS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                                          const GALGAS_string & in_mEnumerationName 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  if (in_mEnumeratedType.isValid () && in_mEnumerationName.isValid ()) {
    result = GALGAS_enumerationDescriptorList_2D_element (in_mEnumeratedType, in_mEnumerationName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumerationDescriptorList_2D_element::objectCompare (const GALGAS_enumerationDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumeratedType.objectCompare (inOperand.mProperty_mEnumeratedType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumerationName.objectCompare (inOperand.mProperty_mEnumerationName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumerationDescriptorList_2D_element::isValid (void) const {
  return mProperty_mEnumeratedType.isValid () && mProperty_mEnumerationName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList_2D_element::drop (void) {
  mProperty_mEnumeratedType.drop () ;
  mProperty_mEnumerationName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDescriptorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @enumerationDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumeratedType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @enumerationDescriptorList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ("enumerationDescriptorList-element",
                                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDescriptorList_2D_element GALGAS_enumerationDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDescriptorList_2D_element result ;
  const GALGAS_enumerationDescriptorList_2D_element * p = (const GALGAS_enumerationDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element::~ GALGAS_templateInstructionListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::constructor_new (const GALGAS_templateInstructionForGeneration & in_mInstruction 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_templateInstructionListForGeneration_2D_element (in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_templateInstructionListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_templateInstructionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @templateInstructionListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ("templateInstructionListForGeneration-element",
                                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  const GALGAS_templateInstructionListForGeneration_2D_element * p = (const GALGAS_templateInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (void) :
mProperty_mActualParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::~ GALGAS_actualParameterListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element::GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::constructor_new (const GALGAS_actualParameterForGeneration & in_mActualParameter 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  if (in_mActualParameter.isValid ()) {
    result = GALGAS_actualParameterListForGeneration_2D_element (in_mActualParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_actualParameterListForGeneration_2D_element::objectCompare (const GALGAS_actualParameterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mActualParameter.objectCompare (inOperand.mProperty_mActualParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actualParameterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @actualParameterListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ("actualParameterListForGeneration-element",
                                                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration_2D_element GALGAS_actualParameterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListForGeneration_2D_element result ;
  const GALGAS_actualParameterListForGeneration_2D_element * p = (const GALGAS_actualParameterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualParameterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element::~ GALGAS_semanticInstructionListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::constructor_new (const GALGAS_semanticInstructionForGeneration & in_mInstruction 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_semanticInstructionListForGeneration_2D_element (in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticInstructionListForGeneration_2D_element::objectCompare (const GALGAS_semanticInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @semanticInstructionListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ("semanticInstructionListForGeneration-element",
                                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  const GALGAS_semanticInstructionListForGeneration_2D_element * p = (const GALGAS_semanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::~ GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                            const GALGAS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSemanticInstructionListForGeneration_2D_element (GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::constructor_new (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                            const GALGAS_location & in_mEndOfInstructionList 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  if (in_mInstructionList.isValid () && in_mEndOfInstructionList.isValid ()) {
    result = GALGAS_listOfSemanticInstructionListForGeneration_2D_element (in_mInstructionList, in_mEndOfInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listOfSemanticInstructionListForGeneration_2D_element::objectCompare (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInstructionList.objectCompare (inOperand.mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_listOfSemanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @listOfSemanticInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @listOfSemanticInstructionListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ("listOfSemanticInstructionListForGeneration-element",
                                                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSemanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  const GALGAS_listOfSemanticInstructionListForGeneration_2D_element * p = (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element::GALGAS_semanticDeclarationListForGeneration_2D_element (void) :
mProperty_mMessage (),
mProperty_mDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element::~ GALGAS_semanticDeclarationListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element::GALGAS_semanticDeclarationListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_semanticDeclarationForGeneration & inOperand1) :
mProperty_mMessage (inOperand0),
mProperty_mDeclaration (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element GALGAS_semanticDeclarationListForGeneration_2D_element::constructor_new (const GALGAS_string & in_mMessage,
                                                                                                                                const GALGAS_semanticDeclarationForGeneration & in_mDeclaration 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration_2D_element result ;
  if (in_mMessage.isValid () && in_mDeclaration.isValid ()) {
    result = GALGAS_semanticDeclarationListForGeneration_2D_element (in_mMessage, in_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticDeclarationListForGeneration_2D_element::objectCompare (const GALGAS_semanticDeclarationListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMessage.objectCompare (inOperand.mProperty_mMessage) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticDeclarationListForGeneration_2D_element::isValid (void) const {
  return mProperty_mMessage.isValid () && mProperty_mDeclaration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration_2D_element::drop (void) {
  mProperty_mMessage.drop () ;
  mProperty_mDeclaration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticDeclarationListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2D_element ("semanticDeclarationListForGeneration-element",
                                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element GALGAS_semanticDeclarationListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration_2D_element result ;
  const GALGAS_semanticDeclarationListForGeneration_2D_element * p = (const GALGAS_semanticDeclarationListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonTerminalToAddCount () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element::~ GALGAS_nonTerminalToAddList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_uint & inOperand1) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonTerminalToAddCount (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalToAddList_2D_element (GALGAS_string::constructor_default (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::constructor_new (const GALGAS_string & in_mSyntaxComponentName,
                                                                                                const GALGAS_uint & in_mNonTerminalToAddCount 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  if (in_mSyntaxComponentName.isValid () && in_mNonTerminalToAddCount.isValid ()) {
    result = GALGAS_nonTerminalToAddList_2D_element (in_mSyntaxComponentName, in_mNonTerminalToAddCount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonTerminalToAddList_2D_element::objectCompare (const GALGAS_nonTerminalToAddList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxComponentName.objectCompare (inOperand.mProperty_mSyntaxComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNonTerminalToAddCount.objectCompare (inOperand.mProperty_mNonTerminalToAddCount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalToAddList_2D_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonTerminalToAddCount.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList_2D_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonTerminalToAddCount.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalToAddList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNonTerminalToAddCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @nonTerminalToAddList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ("nonTerminalToAddList-element",
                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalToAddList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalToAddList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalToAddList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  const GALGAS_nonTerminalToAddList_2D_element * p = (const GALGAS_nonTerminalToAddList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalToAddList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mTargetVarCppName (),
mProperty_mSourceLexicalAttributeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element::~ GALGAS_terminalCheckAssignementList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mProperty_mTypeName (inOperand0),
mProperty_mTargetVarCppName (inOperand1),
mProperty_mSourceLexicalAttributeName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalCheckAssignementList_2D_element (GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::constructor_new (const GALGAS_string & in_mTypeName,
                                                                                                                const GALGAS_string & in_mTargetVarCppName,
                                                                                                                const GALGAS_string & in_mSourceLexicalAttributeName 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  if (in_mTypeName.isValid () && in_mTargetVarCppName.isValid () && in_mSourceLexicalAttributeName.isValid ()) {
    result = GALGAS_terminalCheckAssignementList_2D_element (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalCheckAssignementList_2D_element::objectCompare (const GALGAS_terminalCheckAssignementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetVarCppName.objectCompare (inOperand.mProperty_mTargetVarCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceLexicalAttributeName.objectCompare (inOperand.mProperty_mSourceLexicalAttributeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalCheckAssignementList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mTargetVarCppName.isValid () && mProperty_mSourceLexicalAttributeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mTargetVarCppName.drop () ;
  mProperty_mSourceLexicalAttributeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @terminalCheckAssignementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @terminalCheckAssignementList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ("terminalCheckAssignementList-element",
                                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalCheckAssignementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalCheckAssignementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckAssignementList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  const GALGAS_terminalCheckAssignementList_2D_element * p = (const GALGAS_terminalCheckAssignementList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalCheckAssignementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplateFormalInputParameters (),
mProperty_mTemplateInstructionListForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element::~ GALGAS_filewrapperTemplateListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand1),
mProperty_mTemplateInstructionListForGeneration (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                 GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::constructor_new (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                                                const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                                const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  if (in_mFilewrapperTemplateName.isValid () && in_mFilewrapperTemplateFormalInputParameters.isValid () && in_mTemplateInstructionListForGeneration.isValid ()) {
    result = GALGAS_filewrapperTemplateListForGeneration_2D_element (in_mFilewrapperTemplateName, in_mFilewrapperTemplateFormalInputParameters, in_mTemplateInstructionListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_filewrapperTemplateListForGeneration_2D_element::objectCompare (const GALGAS_filewrapperTemplateListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplateName.objectCompare (inOperand.mProperty_mFilewrapperTemplateName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFilewrapperTemplateFormalInputParameters.objectCompare (inOperand.mProperty_mFilewrapperTemplateFormalInputParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTemplateInstructionListForGeneration.objectCompare (inOperand.mProperty_mTemplateInstructionListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_filewrapperTemplateListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () && mProperty_mTemplateInstructionListForGeneration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration_2D_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
  mProperty_mTemplateInstructionListForGeneration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @filewrapperTemplateListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ("filewrapperTemplateListForGeneration-element",
                                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  const GALGAS_filewrapperTemplateListForGeneration_2D_element * p = (const GALGAS_filewrapperTemplateListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperTemplateListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (void) :
mProperty_mNonterminalName (),
mProperty_mRuleIndex (),
mProperty_mLabelImplementationList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element::~ GALGAS_ruleDeclarationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_uint & inOperand1,
                                                                              const GALGAS_ruleLabelImplementationList & inOperand2) :
mProperty_mNonterminalName (inOperand0),
mProperty_mRuleIndex (inOperand1),
mProperty_mLabelImplementationList (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleDeclarationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_uint::constructor_default (HERE),
                                                GALGAS_ruleLabelImplementationList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::constructor_new (const GALGAS_string & in_mNonterminalName,
                                                                                              const GALGAS_uint & in_mRuleIndex,
                                                                                              const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  if (in_mNonterminalName.isValid () && in_mRuleIndex.isValid () && in_mLabelImplementationList.isValid ()) {
    result = GALGAS_ruleDeclarationList_2D_element (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ruleDeclarationList_2D_element::objectCompare (const GALGAS_ruleDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mNonterminalName.objectCompare (inOperand.mProperty_mNonterminalName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRuleIndex.objectCompare (inOperand.mProperty_mRuleIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLabelImplementationList.objectCompare (inOperand.mProperty_mLabelImplementationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ruleDeclarationList_2D_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mRuleIndex.isValid () && mProperty_mLabelImplementationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList_2D_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mRuleIndex.drop () ;
  mProperty_mLabelImplementationList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @ruleDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRuleIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLabelImplementationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ruleDeclarationList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ("ruleDeclarationList-element",
                                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ruleDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ruleDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  const GALGAS_ruleDeclarationList_2D_element * p = (const GALGAS_ruleDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ruleDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::GALGAS_localVarMapListForLLVM_2D_element (void) :
mProperty_mMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::~ GALGAS_localVarMapListForLLVM_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element::GALGAS_localVarMapListForLLVM_2D_element (const GALGAS_scopeLocalVarMap & inOperand0) :
mProperty_mMap (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVarMapListForLLVM_2D_element (GALGAS_scopeLocalVarMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::constructor_new (const GALGAS_scopeLocalVarMap & in_mMap 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM_2D_element result ;
  if (in_mMap.isValid ()) {
    result = GALGAS_localVarMapListForLLVM_2D_element (in_mMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_localVarMapListForLLVM_2D_element::objectCompare (const GALGAS_localVarMapListForLLVM_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mMap.objectCompare (inOperand.mProperty_mMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_localVarMapListForLLVM_2D_element::isValid (void) const {
  return mProperty_mMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::drop (void) {
  mProperty_mMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @localVarMapListForLLVM-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @localVarMapListForLLVM-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ("localVarMapListForLLVM-element",
                                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarMapListForLLVM_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarMapListForLLVM_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarMapListForLLVM_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element GALGAS_localVarMapListForLLVM_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::GALGAS_openedOverrideList_2D_element (void) :
mProperty_mOverrideKind () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::~ GALGAS_openedOverrideList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element::GALGAS_openedOverrideList_2D_element (const GALGAS_overrideKind & inOperand0) :
mProperty_mOverrideKind (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::constructor_new (const GALGAS_overrideKind & in_mOverrideKind 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_openedOverrideList_2D_element result ;
  if (in_mOverrideKind.isValid ()) {
    result = GALGAS_openedOverrideList_2D_element (in_mOverrideKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_openedOverrideList_2D_element::objectCompare (const GALGAS_openedOverrideList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOverrideKind.objectCompare (inOperand.mProperty_mOverrideKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_openedOverrideList_2D_element::isValid (void) const {
  return mProperty_mOverrideKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::drop (void) {
  mProperty_mOverrideKind.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @openedOverrideList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOverrideKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @openedOverrideList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedOverrideList_2D_element ("openedOverrideList-element",
                                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedOverrideList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedOverrideList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedOverrideList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element GALGAS_openedOverrideList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (void) :
mProperty_mElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element::~ GALGAS_collectionValueElementList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (const GALGAS_abstractCollectionValueElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::constructor_new (const GALGAS_abstractCollectionValueElement & in_mElement 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  if (in_mElement.isValid ()) {
    result = GALGAS_collectionValueElementList_2D_element (in_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_collectionValueElementList_2D_element::objectCompare (const GALGAS_collectionValueElementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_collectionValueElementList_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @collectionValueElementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @collectionValueElementList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ("collectionValueElementList-element",
                                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueElementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueElementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  const GALGAS_collectionValueElementList_2D_element * p = (const GALGAS_collectionValueElementList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_collectionValueElementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration_2D_element::GALGAS_collectionValueElementListForGeneration_2D_element (void) :
mProperty_mElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration_2D_element::~ GALGAS_collectionValueElementListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration_2D_element::GALGAS_collectionValueElementListForGeneration_2D_element (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0) :
mProperty_mElement (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration_2D_element GALGAS_collectionValueElementListForGeneration_2D_element::constructor_new (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration_2D_element result ;
  if (in_mElement.isValid ()) {
    result = GALGAS_collectionValueElementListForGeneration_2D_element (in_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_collectionValueElementListForGeneration_2D_element::objectCompare (const GALGAS_collectionValueElementListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_collectionValueElementListForGeneration_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @collectionValueElementListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @collectionValueElementListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ("collectionValueElementListForGeneration-element",
                                                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueElementListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueElementListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration_2D_element GALGAS_collectionValueElementListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration_2D_element result ;
  const GALGAS_collectionValueElementListForGeneration_2D_element * p = (const GALGAS_collectionValueElementListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_collectionValueElementListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (void) :
mProperty_mTypeComparisonKind (),
mProperty_mType (),
mProperty_mCastedVarCppName (),
mProperty_mInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::~ GALGAS_castInstructionBranchListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element::GALGAS_castInstructionBranchListForGeneration_2D_element (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                    const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mTypeComparisonKind (inOperand0),
mProperty_mType (inOperand1),
mProperty_mCastedVarCppName (inOperand2),
mProperty_mInstructionList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::constructor_new (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                                    const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                                    const GALGAS_string & in_mCastedVarCppName,
                                                                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructionList 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  if (in_mTypeComparisonKind.isValid () && in_mType.isValid () && in_mCastedVarCppName.isValid () && in_mInstructionList.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration_2D_element (in_mTypeComparisonKind, in_mType, in_mCastedVarCppName, in_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_castInstructionBranchListForGeneration_2D_element::objectCompare (const GALGAS_castInstructionBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeComparisonKind.objectCompare (inOperand.mProperty_mTypeComparisonKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCastedVarCppName.objectCompare (inOperand.mProperty_mCastedVarCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_castInstructionBranchListForGeneration_2D_element::isValid (void) const {
  return mProperty_mTypeComparisonKind.isValid () && mProperty_mType.isValid () && mProperty_mCastedVarCppName.isValid () && mProperty_mInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration_2D_element::drop (void) {
  mProperty_mTypeComparisonKind.drop () ;
  mProperty_mType.drop () ;
  mProperty_mCastedVarCppName.drop () ;
  mProperty_mInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @castInstructionBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCastedVarCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @castInstructionBranchListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ("castInstructionBranchListForGeneration-element",
                                                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element GALGAS_castInstructionBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration_2D_element result ;
  const GALGAS_castInstructionBranchListForGeneration_2D_element * p = (const GALGAS_castInstructionBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element::GALGAS_fixitListAST_2D_element (void) :
mProperty_mElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element::~ GALGAS_fixitListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element::GALGAS_fixitListAST_2D_element (const GALGAS_fixitElementAST & inOperand0) :
mProperty_mElement (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element GALGAS_fixitListAST_2D_element::constructor_new (const GALGAS_fixitElementAST & in_mElement 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListAST_2D_element result ;
  if (in_mElement.isValid ()) {
    result = GALGAS_fixitListAST_2D_element (in_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixitListAST_2D_element::objectCompare (const GALGAS_fixitListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitListAST_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @fixitListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @fixitListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListAST_2D_element ("fixitListAST-element",
                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element GALGAS_fixitListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST_2D_element result ;
  const GALGAS_fixitListAST_2D_element * p = (const GALGAS_fixitListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element::GALGAS_fixitListForGeneration_2D_element (void) :
mProperty_mElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element::~ GALGAS_fixitListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element::GALGAS_fixitListForGeneration_2D_element (const GALGAS_fixitElementForGeneration & inOperand0) :
mProperty_mElement (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element GALGAS_fixitListForGeneration_2D_element::constructor_new (const GALGAS_fixitElementForGeneration & in_mElement 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration_2D_element result ;
  if (in_mElement.isValid ()) {
    result = GALGAS_fixitListForGeneration_2D_element (in_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixitListForGeneration_2D_element::objectCompare (const GALGAS_fixitListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitListForGeneration_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @fixitListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @fixitListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ("fixitListForGeneration-element",
                                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element GALGAS_fixitListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration_2D_element result ;
  const GALGAS_fixitListForGeneration_2D_element * p = (const GALGAS_fixitListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fixitListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) :
mProperty_mAscending (),
mProperty_mEnumeratedCollection () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::~ GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                                                                  const GALGAS_abstractEnumeratedCollectionAST & inOperand1) :
mProperty_mAscending (inOperand0),
mProperty_mEnumeratedCollection (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::constructor_new (const GALGAS_bool & in_mAscending,
                                                                                                                                  const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  if (in_mAscending.isValid () && in_mEnumeratedCollection.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListAST_2D_element (in_mAscending, in_mEnumeratedCollection) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forInstructionEnumeratedObjectListAST_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAscending.objectCompare (inOperand.mProperty_mAscending) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumeratedCollection.objectCompare (inOperand.mProperty_mEnumeratedCollection) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_forInstructionEnumeratedObjectListAST_2D_element::isValid (void) const {
  return mProperty_mAscending.isValid () && mProperty_mEnumeratedCollection.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::drop (void) {
  mProperty_mAscending.drop () ;
  mProperty_mEnumeratedCollection.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAscending.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @forInstructionEnumeratedObjectListAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ("forInstructionEnumeratedObjectListAST-element",
                                                                         nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectListAST_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element::GALGAS_ifExpressionList_2D_element (void) :
mProperty_mExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element::~ GALGAS_ifExpressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element::GALGAS_ifExpressionList_2D_element (const GALGAS_ifExpressionKind & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element GALGAS_ifExpressionList_2D_element::constructor_new (const GALGAS_ifExpressionKind & in_mExpression 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifExpressionList_2D_element result ;
  if (in_mExpression.isValid ()) {
    result = GALGAS_ifExpressionList_2D_element (in_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ifExpressionList_2D_element::objectCompare (const GALGAS_ifExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ifExpressionList_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @ifExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ifExpressionList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifExpressionList_2D_element ("ifExpressionList-element",
                                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element GALGAS_ifExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList_2D_element result ;
  const GALGAS_ifExpressionList_2D_element * p = (const GALGAS_ifExpressionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (void) :
mProperty_mParameter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::~ GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (const GALGAS_optionalMethodActualArgumentForGeneration & inOperand0) :
mProperty_mParameter (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentListForGeneration_2D_element GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::constructor_new (const GALGAS_optionalMethodActualArgumentForGeneration & in_mParameter 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentListForGeneration_2D_element result ;
  if (in_mParameter.isValid ()) {
    result = GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (in_mParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::objectCompare (const GALGAS_optionalMethodActualArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mParameter.objectCompare (inOperand.mProperty_mParameter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::isValid (void) const {
  return mProperty_mParameter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::drop (void) {
  mProperty_mParameter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @optionalMethodActualArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @optionalMethodActualArgumentListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionalMethodActualArgumentListForGeneration_2D_element ("optionalMethodActualArgumentListForGeneration-element",
                                                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodActualArgumentListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalMethodActualArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionalMethodActualArgumentListForGeneration_2D_element GALGAS_optionalMethodActualArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_optionalMethodActualArgumentListForGeneration_2D_element result ;
  const GALGAS_optionalMethodActualArgumentListForGeneration_2D_element * p = (const GALGAS_optionalMethodActualArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalMethodActualArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalMethodActualArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element::GALGAS_ifTestListForGeneration_2D_element (void) :
mProperty_mExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element::~ GALGAS_ifTestListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element::GALGAS_ifTestListForGeneration_2D_element (const GALGAS_ifTestForGeneration & inOperand0) :
mProperty_mExpression (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element GALGAS_ifTestListForGeneration_2D_element::constructor_new (const GALGAS_ifTestForGeneration & in_mExpression 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration_2D_element result ;
  if (in_mExpression.isValid ()) {
    result = GALGAS_ifTestListForGeneration_2D_element (in_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ifTestListForGeneration_2D_element::objectCompare (const GALGAS_ifTestListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ifTestListForGeneration_2D_element::isValid (void) const {
  return mProperty_mExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration_2D_element::drop (void) {
  mProperty_mExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @ifTestListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @ifTestListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ifTestListForGeneration_2D_element ("ifTestListForGeneration-element",
                                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifTestListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifTestListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifTestListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element GALGAS_ifTestListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration_2D_element result ;
  const GALGAS_ifTestListForGeneration_2D_element * p = (const GALGAS_ifTestListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifTestListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructions (),
mProperty_mEndOfBranch () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element::~ GALGAS_switchBranchesAST_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                          const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                          const GALGAS_semanticInstructionListAST & inOperand2,
                                                                          const GALGAS_location & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructions (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesAST_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                              GALGAS_switchExtractedValuesListAST::constructor_emptyList (HERE),
                                              GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::constructor_new (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                                                          const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                          const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                                                          const GALGAS_location & in_mEndOfBranch 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  if (in_mSwitchConstantList.isValid () && in_mAssociatedValuesExtraction.isValid () && in_mInstructions.isValid () && in_mEndOfBranch.isValid ()) {
    result = GALGAS_switchBranchesAST_2D_element (in_mSwitchConstantList, in_mAssociatedValuesExtraction, in_mInstructions, in_mEndOfBranch) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_switchBranchesAST_2D_element::objectCompare (const GALGAS_switchBranchesAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSwitchConstantList.objectCompare (inOperand.mProperty_mSwitchConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssociatedValuesExtraction.objectCompare (inOperand.mProperty_mAssociatedValuesExtraction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructions.objectCompare (inOperand.mProperty_mInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBranch.objectCompare (inOperand.mProperty_mEndOfBranch) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_switchBranchesAST_2D_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructions.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST_2D_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructions.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @switchBranchesAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @switchBranchesAST-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ("switchBranchesAST-element",
                                                     nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchBranchesAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchBranchesAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesAST_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  const GALGAS_switchBranchesAST_2D_element * p = (const GALGAS_switchBranchesAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchBranchesAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) :
mProperty_mType (),
mProperty_mCppName (),
mProperty_mIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::~ GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element::GALGAS_extractedAssociatedValuesForGeneration_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_uint & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mCppName (inOperand1),
mProperty_mIndex (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                                                    const GALGAS_string & in_mCppName,
                                                                                                                                    const GALGAS_uint & in_mIndex 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  if (in_mType.isValid () && in_mCppName.isValid () && in_mIndex.isValid ()) {
    result = GALGAS_extractedAssociatedValuesForGeneration_2D_element (in_mType, in_mCppName, in_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extractedAssociatedValuesForGeneration_2D_element::objectCompare (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppName.objectCompare (inOperand.mProperty_mCppName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extractedAssociatedValuesForGeneration_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mCppName.isValid () && mProperty_mIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mCppName.drop () ;
  mProperty_mIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @extractedAssociatedValuesForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @extractedAssociatedValuesForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ("extractedAssociatedValuesForGeneration-element",
                                                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element GALGAS_extractedAssociatedValuesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration_2D_element result ;
  const GALGAS_extractedAssociatedValuesForGeneration_2D_element * p = (const GALGAS_extractedAssociatedValuesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extractedAssociatedValuesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (void) :
mProperty_mSwitchConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructions () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element::~ GALGAS_switchBranchesForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                              const GALGAS_uint & inOperand2,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructions (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesForGeneration_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                        GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_uint::constructor_default (HERE),
                                                        GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::constructor_new (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                                                                              const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                              const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & in_mInstructions 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  if (in_mSwitchConstantList.isValid () && in_mExtractedAssociatedValuesForGeneration.isValid () && in_mEndOfBranchLocationIndex.isValid () && in_mInstructions.isValid ()) {
    result = GALGAS_switchBranchesForGeneration_2D_element (in_mSwitchConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_switchBranchesForGeneration_2D_element::objectCompare (const GALGAS_switchBranchesForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSwitchConstantList.objectCompare (inOperand.mProperty_mSwitchConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExtractedAssociatedValuesForGeneration.objectCompare (inOperand.mProperty_mExtractedAssociatedValuesForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfBranchLocationIndex.objectCompare (inOperand.mProperty_mEndOfBranchLocationIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructions.objectCompare (inOperand.mProperty_mInstructions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_switchBranchesForGeneration_2D_element::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration_2D_element::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructions.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @switchBranchesForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @switchBranchesForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ("switchBranchesForGeneration-element",
                                                               nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchBranchesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchBranchesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  const GALGAS_switchBranchesForGeneration_2D_element * p = (const GALGAS_switchBranchesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchBranchesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::~ GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  if (in_mInstruction.isValid ()) {
    result = GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (in_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @syntaxInstructionListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionListForGrammarAnalysis-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ("syntaxInstructionListForGrammarAnalysis-element",
                                                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element * p = (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (void) :
mProperty_mSyntaxInstructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::~ GALGAS_branchListForGrammarAnalysis_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0) :
mProperty_mSyntaxInstructionList (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_branchListForGrammarAnalysis_2D_element (GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  if (in_mSyntaxInstructionList.isValid ()) {
    result = GALGAS_branchListForGrammarAnalysis_2D_element (in_mSyntaxInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_branchListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_branchListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSyntaxInstructionList.objectCompare (inOperand.mProperty_mSyntaxInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_branchListForGrammarAnalysis_2D_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis_2D_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @branchListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @branchListForGrammarAnalysis-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ("branchListForGrammarAnalysis-element",
                                                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  const GALGAS_branchListForGrammarAnalysis_2D_element * p = (const GALGAS_branchListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_branchListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (void) :
mProperty_columns () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::~ GALGAS_rowList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (const GALGAS__32_stringlist & inOperand0) :
mProperty_columns (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_rowList_2D_element (GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::constructor_new (const GALGAS__32_stringlist & in_columns 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  if (in_columns.isValid ()) {
    result = GALGAS_rowList_2D_element (in_columns) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_rowList_2D_element::objectCompare (const GALGAS_rowList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_columns.objectCompare (inOperand.mProperty_columns) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_rowList_2D_element::isValid (void) const {
  return mProperty_columns.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList_2D_element::drop (void) {
  mProperty_columns.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @rowList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_columns.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @rowList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rowList_2D_element ("rowList-element",
                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rowList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rowList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rowList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  const GALGAS_rowList_2D_element * p = (const GALGAS_rowList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_rowList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (void) :
mProperty_mDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::~ GALGAS_programListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (const GALGAS_semanticDeclarationForGeneration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::constructor_new (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  if (in_mDeclaration.isValid ()) {
    result = GALGAS_programListForGeneration_2D_element (in_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_programListForGeneration_2D_element::objectCompare (const GALGAS_programListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_programListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @programListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @programListForGeneration-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programListForGeneration_2D_element ("programListForGeneration-element",
                                                            nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  const GALGAS_programListForGeneration_2D_element * p = (const GALGAS_programListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element::GALGAS_genericExtensionMethodListMap_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element::~ GALGAS_genericExtensionMethodListMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element::GALGAS_genericExtensionMethodListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_genericExtensionMethodListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::constructor_new (const GALGAS_string & in_key,
                                                                                                                  const GALGAS_lstringlist & in_mList 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap_2D_element result ;
  if (in_key.isValid () && in_mList.isValid ()) {
    result = GALGAS_genericExtensionMethodListMap_2D_element (in_key, in_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_genericExtensionMethodListMap_2D_element::objectCompare (const GALGAS_genericExtensionMethodListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_genericExtensionMethodListMap_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMap_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @genericExtensionMethodListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @genericExtensionMethodListMap-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ("genericExtensionMethodListMap-element",
                                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericExtensionMethodListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap_2D_element result ;
  const GALGAS_genericExtensionMethodListMap_2D_element * p = (const GALGAS_genericExtensionMethodListMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericExtensionMethodListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::GALGAS_unifiedTypeMapEntryList_2D_element (void) :
mProperty_mEntry () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::~ GALGAS_unifiedTypeMapEntryList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element::GALGAS_unifiedTypeMapEntryList_2D_element (const GALGAS_unifiedTypeMapEntry & inOperand0) :
mProperty_mEntry (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::constructor_new (const GALGAS_unifiedTypeMapEntry & in_mEntry 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList_2D_element result ;
  if (in_mEntry.isValid ()) {
    result = GALGAS_unifiedTypeMapEntryList_2D_element (in_mEntry) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeMapEntryList_2D_element::objectCompare (const GALGAS_unifiedTypeMapEntryList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEntry.objectCompare (inOperand.mProperty_mEntry) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMapEntryList_2D_element::isValid (void) const {
  return mProperty_mEntry.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList_2D_element::drop (void) {
  mProperty_mEntry.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMapEntryList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeMapEntryList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEntry.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapEntryList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ("unifiedTypeMapEntryList-element",
                                                           nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapEntryList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapEntryList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapEntryList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList_2D_element GALGAS_unifiedTypeMapEntryList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntryList_2D_element result ;
  const GALGAS_unifiedTypeMapEntryList_2D_element * p = (const GALGAS_unifiedTypeMapEntryList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapEntryList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntryList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element::~ GALGAS_descendantClassListMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_unifiedTypeMapEntryList & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_descendantClassListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                   GALGAS_unifiedTypeMapEntryList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_new (const GALGAS_string & in_key,
                                                                                                    const GALGAS_unifiedTypeMapEntryList & in_mList 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  if (in_key.isValid () && in_mList.isValid ()) {
    result = GALGAS_descendantClassListMap_2D_element (in_key, in_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_descendantClassListMap_2D_element::objectCompare (const GALGAS_descendantClassListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_descendantClassListMap_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMap_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @descendantClassListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @descendantClassListMap-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ("descendantClassListMap-element",
                                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_descendantClassListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_descendantClassListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  const GALGAS_descendantClassListMap_2D_element * p = (const GALGAS_descendantClassListMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_descendantClassListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_new (const GALGAS_string & in_mGroupReference,
                                                                                    const GALGAS_string & in_mGroupName,
                                                                                    const GALGAS_string & in_mGroupPath,
                                                                                    const GALGAS_stringlist & in_mChildrenRefs 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (in_mGroupReference.isValid () && in_mGroupName.isValid () && in_mGroupPath.isValid () && in_mChildrenRefs.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupReference.objectCompare (inOperand.mProperty_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupPath.objectCompare (inOperand.mProperty_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mChildrenRefs.objectCompare (inOperand.mProperty_mChildrenRefs) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_new (const GALGAS_string & in_mTargetRef,
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
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (in_mTargetRef.isValid () && in_mTargetName.isValid () && in_mProductFileReference.isValid () && in_mProductFileName.isValid () && in_mBuildPhaseRefList.isValid () && in_mBuildPhaseRef.isValid () && in_mBuildConfigurationListRef.isValid () && in_mBuildConfigurationSettingList.isValid () && in_mBuildConfigurationRef.isValid () && in_mFrameworksFileRefList.isValid () && in_mFrameworkBuildPhaseRef.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
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
                                                                            const GALGAS_stringlist & inOperand13) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS__32_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_new (const GALGAS_string & in_mTargetRef,
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
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (in_mTargetRef.isValid () && in_mTargetName.isValid () && in_mProductFileReference.isValid () && in_mProductFileName.isValid () && in_mBuildPhaseRefList.isValid () && in_mBuildPhaseRef.isValid () && in_mBuildConfigurationListRef.isValid () && in_mBuildConfigurationSettingList.isValid () && in_mBuildConfigurationRef.isValid () && in_mFrameworksFileRefList.isValid () && in_mFrameworkBuildPhaseRef.isValid () && in_mDependentTargets.isValid () && in_mResourceBuildRef.isValid () && in_mResourceFileBuildRefs.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDependentTargets.objectCompare (inOperand.mProperty_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceBuildRef.objectCompare (inOperand.mProperty_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceFileBuildRefs.objectCompare (inOperand.mProperty_mResourceFileBuildRefs) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_new (const GALGAS_string & in_mFileReference,
                                                                                  const GALGAS_string & in_mFileName,
                                                                                  const GALGAS_string & in_mBuildReference 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (in_mFileReference.isValid () && in_mFileName.isValid () && in_mBuildReference.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (in_mFileReference, in_mFileName, in_mBuildReference) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileReference.objectCompare (inOperand.mProperty_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileName.objectCompare (inOperand.mProperty_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildReference.objectCompare (inOperand.mProperty_mBuildReference) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @BuildFileList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgasTemplateScanner::C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                                                                  const C_String & inSourceFileName
                                                                  COMMA_LOCATION_ARGS) :
C_Lexique_galgasScanner (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgasTemplateScanner::C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                                                                  const C_String & inSourceString,
                                                                  const C_String & inStringForError
                                                                  COMMA_LOCATION_ARGS) :
C_Lexique_galgasScanner (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S
//----------------------------------------------------------------------------------------------------------------------

//--- Unicode string for '$_A_$'
static const utf32 kUnicodeString_galgasTemplateScanner__A_ [] = {
  TO_UNICODE (10),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_25_$'
static const utf32 kUnicodeString_galgasTemplateScanner__25_ [] = {
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__25_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C__25_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('%'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__5C_$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C_n$'
static const utf32 kUnicodeString_galgasTemplateScanner__5C_n [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters
//----------------------------------------------------------------------------------------------------------------------

static const cTemplateDelimiter galgasTemplateScanner_kTemplateDefinitionArray [1] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__25_, 1, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements
//----------------------------------------------------------------------------------------------------------------------

static const cTemplateDelimiter galgasTemplateScanner_kTemplateReplacementArray [3] = {
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__25_, 2, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C_n, 2, kUnicodeString_galgasTemplateScanner__A_, 1, nullptr, true),
  cTemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, kUnicodeString_galgasTemplateScanner__5C_, 1, nullptr, true)
} ;

//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark
//----------------------------------------------------------------------------------------------------------------------

static const bool galgasTemplateScanner_kEndOfScriptInTemplateArray [187] = {
  false /* identifier */,
  false /* double.xxx */,
  false /* literalInt */,
  false /* . */,
  false /* ... */,
  false /* ..< */,
  false /* @type */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* comment */,
  false /* commentMark */,
  false /* ? */,
  false /* ?! */,
  false /* ! */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* abstract */,
  false /* after */,
  false /* array */,
  false /* as */,
  false /* bang */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* cast */,
  false /* case */,
  false /* class */,
  false /* constructor */,
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
  false /* for */,
  false /* fixit */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* is */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* listmap */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* method */,
  false /* mod */,
  false /* mutating */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* refclass */,
  false /* repeat */,
  false /* rewind */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* spoil */,
  false /* struct */,
  false /* style */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* typealias */,
  false /* unused */,
  false /* var */,
  false /* warning */,
  false /* while */,
  false /* with */,
  false /* %app-link */,
  false /* %app-source */,
  false /* %makefile-macosx */,
  false /* %makefile-unix */,
  false /* %makefile-x86linux32-on-macosx */,
  false /* %makefile-x86linux64-on-macosx */,
  false /* %makefile-win32-on-macosx */,
  false /* %codeblocks-windows */,
  false /* %codeblocks-linux32 */,
  false /* %codeblocks-linux64 */,
  false /* %applicationBundleBase */,
  false /* %MacOS */,
  false /* %MacOSDeployment */,
  false /* %quietOutputByDefault */,
  false /* %macCodeSign */,
  false /* %libpmAtPath */,
  false /* %tool-source */,
  false /* %translate */,
  false /* %once */,
  false /* %usefull */,
  false /* %generatedInSeparateFile */,
  false /* %nonAtomicSelection */,
  false /* %templateEndMark */,
  false /* %preserved */,
  false /* %selector */,
  false /* %insertSetter */,
  false /* %searchMethod */,
  false /* %removeSetter */,
  false /* %errorMessage */,
  false /* %insertOrReplaceSetter */,
  false /* %remove */,
  false /* %replaceBy */,
  false /* %insertAfter */,
  false /* %insertBefore */,
  false /* %useGrammar */,
  false /* %codeFor */,
  false /* %templateReplacement */,
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
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* -- */,
  false /* ++ */,
  false /* &-- */,
  false /* &++ */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */
} ;

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
        && (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
        && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                              galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,
                                                              true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {
            token.mTemplateStringBeforeToken << galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString ;
          }else{
            C_String s ;
            while (notTestForInputUTF32String (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString,
                                               galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndStringLength,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;
            }
            galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
      internalParseLexicalToken (token) ;
    }
    if ((token.mTokenCode > 0) && galgasTemplateScanner_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_galgasTemplateScanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literalInt") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("$terminal$") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<non_terminal>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bang") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("constructor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dict") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("drop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("fileprivate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("filewrapper") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("indexing") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("is") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("lexique") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("list") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("listmap") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("log") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("mutating") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("protected") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("refclass") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("setter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("spoil") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("typealias") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%app-link") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%app-source") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-macosx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-unix") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux32-on-macosx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux64-on-macosx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-win32-on-macosx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-windows") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux32") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux64") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%applicationBundleBase") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOS") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOSDeployment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%quietOutputByDefault") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%macCodeSign") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%libpmAtPath") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%tool-source") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%translate") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%once") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%usefull") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%generatedInSeparateFile") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%nonAtomicSelection") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%templateEndMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%preserved") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%selector") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%insertSetter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%searchMethod") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%removeSetter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%errorMessage") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%insertOrReplaceSetter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%remove") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%replaceBy") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%insertAfter") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%insertBefore") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%useGrammar") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%codeFor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%templateReplacement") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&*") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("`") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("===") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!==") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasTemplateScanner (TC_UniqueArray <C_String> & /* ioList */) {
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasTemplateScanner (const C_String & /* inIdentifier */,
                                                            bool & /* ioFound */,
                                                            TC_UniqueArray <C_String> & /* ioList */) {
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgasTemplateScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasTemplateScanner, getKeywordsForIdentifier_galgasTemplateScanner) ;

//----------------------------------------------------------------------------------------------------------------------
// @templateConstructorAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateConstructorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mConstructorName.printNonNullClassInstanceProperties ("mConstructorName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateConstructorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateConstructorAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateConstructorAST::objectCompare (const GALGAS_templateConstructorAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateConstructorAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (const cPtr_templateConstructorAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateConstructorAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                              const GALGAS_lstring & inAttribute_mConstructorName,
                                                                              const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateConstructorAST (inAttribute_mTypeName, inAttribute_mConstructorName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateConstructorAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateConstructorAST * p = (cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateConstructorAST::readProperty_mConstructorName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateConstructorAST * p = (cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    return p->mProperty_mConstructorName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateConstructorAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateConstructorAST * p = (cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateConstructorAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateConstructorAST::cPtr_templateConstructorAST (const GALGAS_lstring & in_mTypeName,
                                                          const GALGAS_lstring & in_mConstructorName,
                                                          const GALGAS_templateExpressionListAST & in_mExpressionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateConstructorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

void cPtr_templateConstructorAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateConstructorAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateConstructorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateConstructorAST (mProperty_mTypeName, mProperty_mConstructorName, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @templateConstructorAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateConstructorAST ("templateConstructorAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateConstructorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateConstructorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateConstructorAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  const GALGAS_templateConstructorAST * p = (const GALGAS_templateConstructorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateConstructorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateConstructorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateFileWrapperTemplateCallAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFileWrapperTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFileWrapperName.printNonNullClassInstanceProperties ("mFileWrapperName") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateFileWrapperTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mFileWrapperName.objectCompare (p->mProperty_mFileWrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateName.objectCompare (p->mProperty_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutExpressionList.objectCompare (p->mProperty_mOutExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateFileWrapperTemplateCallAST::objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFileWrapperTemplateCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_new (const GALGAS_lstring & inAttribute_mFileWrapperName,
                                                                                                      const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                      const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  if (inAttribute_mFileWrapperName.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFileWrapperTemplateCallAST (inAttribute_mFileWrapperName, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::readProperty_mFileWrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mFileWrapperName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateFileWrapperTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateFileWrapperTemplateCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                                                  const GALGAS_lstring & in_mTemplateName,
                                                                                  const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mFileWrapperName (in_mFileWrapperName),
mProperty_mTemplateName (in_mTemplateName),
mProperty_mOutExpressionList (in_mOutExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateFileWrapperTemplateCallAST:" ;
  mProperty_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateFileWrapperTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mProperty_mFileWrapperName, mProperty_mTemplateName, mProperty_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @templateFileWrapperTemplateCallAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  const GALGAS_templateFileWrapperTemplateCallAST * p = (const GALGAS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateExtensionTemplateCallAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateExtensionTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateExtensionTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionValue.objectCompare (p->mProperty_mExpressionValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateName.objectCompare (p->mProperty_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutExpressionList.objectCompare (p->mProperty_mOutExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateExtensionTemplateCallAST::objectCompare (const GALGAS_templateExtensionTemplateCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpressionValue,
                                                                                                  const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                  const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  if (inAttribute_mExpressionValue.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateExtensionTemplateCallAST (inAttribute_mExpressionValue, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateExtensionTemplateCallAST::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mExpressionValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateExtensionTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionListAST GALGAS_templateExtensionTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionListAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateExtensionTemplateCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                                              const GALGAS_lstring & in_mTemplateName,
                                                                              const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mExpressionValue (in_mExpressionValue),
mProperty_mTemplateName (in_mTemplateName),
mProperty_mOutExpressionList (in_mOutExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

void cPtr_templateExtensionTemplateCallAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateExtensionTemplateCallAST:" ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateExtensionTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mProperty_mExpressionValue, mProperty_mTemplateName, mProperty_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @templateExtensionTemplateCallAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  const GALGAS_templateExtensionTemplateCallAST * p = (const GALGAS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateLiteralStringExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralStringExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralStringList.printNonNullClassInstanceProperties ("mLiteralStringList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateLiteralStringExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralStringList.objectCompare (p->mProperty_mLiteralStringList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateLiteralStringExpressionAST::objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralStringExpressionAST::constructor_new (GALGAS_stringlist::constructor_emptyList (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralStringExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_new (const GALGAS_stringlist & inAttribute_mLiteralStringList,
                                                                                                      const GALGAS_location & inAttribute_mLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  if (inAttribute_mLiteralStringList.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralStringExpressionAST (inAttribute_mLiteralStringList, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_templateLiteralStringExpressionAST::readProperty_mLiteralStringList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLiteralStringList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateLiteralStringExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralStringExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (const GALGAS_stringlist & in_mLiteralStringList,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mLiteralStringList (in_mLiteralStringList),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLiteralStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

void cPtr_templateLiteralStringExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateLiteralStringExpressionAST:" ;
  mProperty_mLiteralStringList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLiteralStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralStringExpressionAST (mProperty_mLiteralStringList, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @templateLiteralStringExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ("templateLiteralStringExpressionAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLiteralStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLiteralStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralStringExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  const GALGAS_templateLiteralStringExpressionAST * p = (const GALGAS_templateLiteralStringExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateLiteralStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structFieldAccessTemplateExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structFieldAccessTemplateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mStructFieldName.printNonNullClassInstanceProperties ("mStructFieldName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structFieldAccessTemplateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructFieldName.objectCompare (p->mProperty_mStructFieldName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structFieldAccessTemplateExpressionAST::objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                                              const GALGAS_lstring & inAttribute_mStructFieldName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structFieldAccessTemplateExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_structFieldAccessTemplateExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structFieldAccessTemplateExpressionAST::readProperty_mStructFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mStructFieldName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                                          const GALGAS_templateExpressionAST & in_mExpression,
                                                                                          const GALGAS_lstring & in_mStructFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression),
mProperty_mStructFieldName (in_mStructFieldName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@structFieldAccessTemplateExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structFieldAccessTemplateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @structFieldAccessTemplateExpressionAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  const GALGAS_structFieldAccessTemplateExpressionAST * p = (const GALGAS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateOptionAccessAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateOptionAccessAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionName.printNonNullClassInstanceProperties ("mOptionName") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateOptionAccessAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionName.objectCompare (p->mProperty_mOptionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGetterName.objectCompare (p->mProperty_mGetterName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateOptionAccessAST::objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateOptionAccessAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                                const GALGAS_lstring & inAttribute_mOptionName,
                                                                                const GALGAS_lstring & inAttribute_mGetterName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  if (inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionName.isValid () && inAttribute_mGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateOptionAccessAST (inAttribute_mOptionComponentName, inAttribute_mOptionName, inAttribute_mGetterName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::readProperty_mOptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateOptionAccessAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                                            const GALGAS_lstring & in_mOptionName,
                                                            const GALGAS_lstring & in_mGetterName
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptionName (in_mOptionName),
mProperty_mGetterName (in_mGetterName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateOptionAccessAST:" ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateOptionAccessAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @templateOptionAccessAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  const GALGAS_templateOptionAccessAST * p = (const GALGAS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @templateTestDynamicClassAST reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateTestDynamicClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateTestDynamicClassAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateTestDynamicClassAST * p = (const cPtr_templateTestDynamicClassAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverExpression.objectCompare (p->mProperty_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReceiverExpression.objectCompare (p->mProperty_mEndOfReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeComparisonKind.objectCompare (p->mProperty_mTypeComparisonKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateTestDynamicClassAST::objectCompare (const GALGAS_templateTestDynamicClassAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST::GALGAS_templateTestDynamicClassAST (void) :
GALGAS_templateExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST::GALGAS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mReceiverExpression,
                                                                                        const GALGAS_location & inAttribute_mEndOfReceiverExpression,
                                                                                        const GALGAS_dynamicTypeComparisonKind & inAttribute_mTypeComparisonKind,
                                                                                        const GALGAS_lstring & inAttribute_mTypeName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mEndOfReceiverExpression.isValid () && inAttribute_mTypeComparisonKind.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateTestDynamicClassAST (inAttribute_mReceiverExpression, inAttribute_mEndOfReceiverExpression, inAttribute_mTypeComparisonKind, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateTestDynamicClassAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateExpressionAST () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateTestDynamicClassAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_templateTestDynamicClassAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateTestDynamicClassAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                                                    const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GALGAS_lstring & in_mTypeName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mProperty_mReceiverExpression (in_mReceiverExpression),
mProperty_mEndOfReceiverExpression (in_mEndOfReceiverExpression),
mProperty_mTypeComparisonKind (in_mTypeComparisonKind),
mProperty_mTypeName (in_mTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

void cPtr_templateTestDynamicClassAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@templateTestDynamicClassAST:" ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateTestDynamicClassAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @templateTestDynamicClassAST generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                    & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateTestDynamicClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateTestDynamicClassAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateTestDynamicClassAST GALGAS_templateTestDynamicClassAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateTestDynamicClassAST result ;
  const GALGAS_templateTestDynamicClassAST * p = (const GALGAS_templateTestDynamicClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateTestDynamicClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

