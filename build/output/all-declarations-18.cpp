#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"



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
                                          const GGS_lstringlist & in_mEnumeration,
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
                                                                        const GGS_lstringlist & in_mEnumeration,
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

GGS_lstringlist GGS_templateInstructionForeachAST::readProperty_mEnumeration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
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
                                                                        const GGS_lstringlist & in_mEnumeration,
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

acPtr_class * cPtr_templateInstructionForeachAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachAST result ;
  const GGS_templateInstructionForeachAST * p = (const GGS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

acPtr_class * cPtr_templateInstructionForeachForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration result ;
  const GGS_templateInstructionForeachForGeneration * p = (const GGS_templateInstructionForeachForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

acPtr_class * cPtr_templateInstructionSwitchForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchForGeneration result ;
  const GGS_templateInstructionSwitchForGeneration * p = (const GGS_templateInstructionSwitchForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

acPtr_class * cPtr_templateInstructionExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration result ;
  const GGS_templateInstructionExpressionForGeneration * p = (const GGS_templateInstructionExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

acPtr_class * cPtr_templateBlockInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_templateBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration result ;
  const GGS_templateBlockInstructionForGeneration * p = (const GGS_templateBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

acPtr_class * cPtr_lexicalImplicitRuleAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

acPtr_class * cPtr_lexicalCharacterSetMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

acPtr_class * cPtr_lexicalStringMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

acPtr_class * cPtr_lexicalStringNotMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

acPtr_class * cPtr_lexicalSendTerminalByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

acPtr_class * cPtr_lexicalErrorByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

acPtr_class * cPtr_lexicalAttributeInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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
// @lexicalUnsignedInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalUnsignedInputArgumentAST::objectCompare (const GGS_lexicalUnsignedInputArgumentAST & inOperand) const {
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

GGS_lexicalUnsignedInputArgumentAST::GGS_lexicalUnsignedInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST GGS_lexicalUnsignedInputArgumentAST::
init_21_ (const GGS_lbigint & in_mUnsigned,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalUnsignedInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalUnsignedInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalUnsignedInputArgumentAST_init_21_ (in_mUnsigned, inCompiler) ;
  const GGS_lexicalUnsignedInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::
lexicalUnsignedInputArgumentAST_init_21_ (const GGS_lbigint & in_mUnsigned,
                                          Compiler * /* inCompiler */) {
  mProperty_mUnsigned = in_mUnsigned ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST::GGS_lexicalUnsignedInputArgumentAST (const cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalUnsignedInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_lexicalUnsignedInputArgumentAST::readProperty_mUnsigned (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_lexicalUnsignedInputArgumentAST * p = (cPtr_lexicalUnsignedInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
    return p->mProperty_mUnsigned ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalUnsignedInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mUnsigned () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (const GGS_lbigint & in_mUnsigned,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mUnsigned () {
  mProperty_mUnsigned = in_mUnsigned ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalUnsignedInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

void cPtr_lexicalUnsignedInputArgumentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalUnsignedInputArgumentAST:") ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalUnsignedInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalUnsignedInputArgumentAST (mProperty_mUnsigned, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalUnsignedInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mUnsigned.printNonNullClassInstanceProperties ("mUnsigned") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalUnsignedInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ("lexicalUnsignedInputArgumentAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalUnsignedInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalUnsignedInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalUnsignedInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST GGS_lexicalUnsignedInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalUnsignedInputArgumentAST result ;
  const GGS_lexicalUnsignedInputArgumentAST * p = (const GGS_lexicalUnsignedInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalUnsignedInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalUnsignedInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

