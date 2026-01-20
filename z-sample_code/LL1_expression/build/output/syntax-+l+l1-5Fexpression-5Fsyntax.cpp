#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-c+add.h"
#include "class-c+const.h"
#include "class-c+expression.h"
#include "class-c+mult.h"
#include "syntax-+l+l1-5Fexpression-5Fsyntax.h"



//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_ (String & ioSyntaxDirectedTranslationResult,
                                                                                                  Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  GGS_cExpression var_expressionTree_122 ;
  GGS_uint var_value_148 ;
  String syntaxDirectedTranslationResult_91 ;
  nt_Expression_ (var_expressionTree_122, var_value_148, syntaxDirectedTranslationResult_91, inCompiler) ;
  ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_91) ;
  var_expressionTree_122.log ("expressionTree"  COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 5)) ;
  var_value_148.log ("value"  COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 5)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_parse (String & ioSyntaxDirectedTranslationResult,
                                                                                                       Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  String syntaxDirectedTranslationResult_91 ;
  nt_Expression_parse (syntaxDirectedTranslationResult_91, inCompiler) ;
  ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_91) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  nt_Expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Constant_i1_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                               GGS_uint & outArgument_outValue,
                                                                                               String & ioSyntaxDirectedTranslationResult,
                                                                                               Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  GGS_luint var_cst_280 = inCompiler->synthetizedAttribute_number () ;
  ioSyntaxDirectedTranslationResult.appendString (inCompiler->separatorString ()) ;
  ioSyntaxDirectedTranslationResult.appendString (inCompiler->tokenString ()) ;
  inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken_number COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 11)) ;
  if (GGS_string (" ").isValid ()) {
    ioSyntaxDirectedTranslationResult.appendString (GGS_string (" ").stringValue ()) ;
  }
  outArgument_outExpressionTree = GGS_cConst::init_21_ (var_cst_280, inCompiler COMMA_HERE) ;
  outArgument_outValue = var_cst_280.readProperty_uint () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Constant_i1_parse (String & ioSyntaxDirectedTranslationResult,
                                                                                                    Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  ioSyntaxDirectedTranslationResult.appendString (inCompiler->separatorString ()) ;
  ioSyntaxDirectedTranslationResult.appendString (inCompiler->tokenString ()) ;
  inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken_number COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 11)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Constant_i1_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken_number COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 11)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Expression_i2_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                                 GGS_uint & outArgument_outValue,
                                                                                                 String & ioSyntaxDirectedTranslationResult,
                                                                                                 Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  String syntaxDirectedTranslationResult_434 ;
  nt_Terme_ (outArgument_outExpressionTree, outArgument_outValue, syntaxDirectedTranslationResult_434, inCompiler) ;
  ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_434) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_LL_31__5F_expression_5F_syntax_0 (inCompiler) == 2) {
      const GGS_string var_sep_513 (inCompiler->separatorString ()) ;
      const GGS_string var_token_530 (inCompiler->tokenString ()) ;
      inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 23)) ;
      if (var_sep_513.isValid ()) {
        ioSyntaxDirectedTranslationResult.appendString (var_sep_513.stringValue ()) ;
      }
      GGS_cExpression var_rightOperand_579 ;
      GGS_uint var_v_603 ;
      String syntaxDirectedTranslationResult_553 ;
      nt_Terme_ (var_rightOperand_579, var_v_603, syntaxDirectedTranslationResult_553, inCompiler) ;
      ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_553) ;
      if (var_token_530.isValid ()) {
        ioSyntaxDirectedTranslationResult.appendString (var_token_530.stringValue ()) ;
      }
      outArgument_outExpressionTree = GGS_cAdd::init_21__21_ (outArgument_outExpressionTree, var_rightOperand_579, inCompiler COMMA_HERE) ;
      outArgument_outValue = outArgument_outValue.add_operation (var_v_603, inCompiler COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 28)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Expression_i2_parse (String & ioSyntaxDirectedTranslationResult,
                                                                                                      Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  String syntaxDirectedTranslationResult_434 ;
  nt_Terme_parse (syntaxDirectedTranslationResult_434, inCompiler) ;
  ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_434) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_LL_31__5F_expression_5F_syntax_0 (inCompiler) == 2) {
      ioSyntaxDirectedTranslationResult.appendString (inCompiler->separatorString ()) ;
      ioSyntaxDirectedTranslationResult.appendString (inCompiler->tokenString ()) ;
      inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 23)) ;
      String syntaxDirectedTranslationResult_553 ;
      nt_Terme_parse (syntaxDirectedTranslationResult_553, inCompiler) ;
      ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_553) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Expression_i2_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  nt_Terme_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_LL_31__5F_expression_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 23)) ;
      nt_Terme_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Terme_i3_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                            GGS_uint & outArgument_outValue,
                                                                                            String & ioSyntaxDirectedTranslationResult,
                                                                                            Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  String syntaxDirectedTranslationResult_795 ;
  nt_Facteur_ (outArgument_outExpressionTree, outArgument_outValue, syntaxDirectedTranslationResult_795, inCompiler) ;
  ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_795) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_LL_31__5F_expression_5F_syntax_1 (inCompiler) == 2) {
      const GGS_string var_sep_876 (inCompiler->separatorString ()) ;
      const GGS_string var_token_893 (inCompiler->tokenString ()) ;
      inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 38)) ;
      if (var_sep_876.isValid ()) {
        ioSyntaxDirectedTranslationResult.appendString (var_sep_876.stringValue ()) ;
      }
      GGS_cExpression var_rightOperand_944 ;
      GGS_uint var_v_968 ;
      String syntaxDirectedTranslationResult_916 ;
      nt_Facteur_ (var_rightOperand_944, var_v_968, syntaxDirectedTranslationResult_916, inCompiler) ;
      ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_916) ;
      if (var_token_893.isValid ()) {
        ioSyntaxDirectedTranslationResult.appendString (var_token_893.stringValue ()) ;
      }
      outArgument_outExpressionTree = GGS_cMult::init_21__21_ (outArgument_outExpressionTree, var_rightOperand_944, inCompiler COMMA_HERE) ;
      outArgument_outValue = outArgument_outValue.multiply_operation (var_v_968, inCompiler COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Terme_i3_parse (String & ioSyntaxDirectedTranslationResult,
                                                                                                 Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  String syntaxDirectedTranslationResult_795 ;
  nt_Facteur_parse (syntaxDirectedTranslationResult_795, inCompiler) ;
  ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_795) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_LL_31__5F_expression_5F_syntax_1 (inCompiler) == 2) {
      ioSyntaxDirectedTranslationResult.appendString (inCompiler->separatorString ()) ;
      ioSyntaxDirectedTranslationResult.appendString (inCompiler->tokenString ()) ;
      inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 38)) ;
      String syntaxDirectedTranslationResult_916 ;
      nt_Facteur_parse (syntaxDirectedTranslationResult_916, inCompiler) ;
      ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_916) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Terme_i3_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  nt_Facteur_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_LL_31__5F_expression_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 38)) ;
      nt_Facteur_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Facteur_i4_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                              GGS_uint & outArgument_outValue,
                                                                                              String & ioSyntaxDirectedTranslationResult,
                                                                                              Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  switch (select_LL_31__5F_expression_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 51)) ;
    String syntaxDirectedTranslationResult_1189 ;
    nt_Expression_ (outArgument_outExpressionTree, outArgument_outValue, syntaxDirectedTranslationResult_1189, inCompiler) ;
    ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_1189) ;
    inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 53)) ;
  } break ;
  case 2: {
    String syntaxDirectedTranslationResult_1257 ;
    nt_Constant_ (outArgument_outExpressionTree, outArgument_outValue, syntaxDirectedTranslationResult_1257, inCompiler) ;
    ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_1257) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Facteur_i4_parse (String & ioSyntaxDirectedTranslationResult,
                                                                                                   Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  switch (select_LL_31__5F_expression_5F_syntax_2 (inCompiler)) {
  case 1: {
    ioSyntaxDirectedTranslationResult.appendString (inCompiler->separatorString ()) ;
    ioSyntaxDirectedTranslationResult.appendString (inCompiler->tokenString ()) ;
    inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 51)) ;
    String syntaxDirectedTranslationResult_1189 ;
    nt_Expression_parse (syntaxDirectedTranslationResult_1189, inCompiler) ;
    ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_1189) ;
    ioSyntaxDirectedTranslationResult.appendString (inCompiler->separatorString ()) ;
    ioSyntaxDirectedTranslationResult.appendString (inCompiler->tokenString ()) ;
    inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 53)) ;
  } break ;
  case 2: {
    String syntaxDirectedTranslationResult_1257 ;
    nt_Constant_parse (syntaxDirectedTranslationResult_1257, inCompiler) ;
    ioSyntaxDirectedTranslationResult.appendString (syntaxDirectedTranslationResult_1257) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LL_31__5F_expression_5F_syntax::rule_LL_31__5F_expression_5F_syntax_Facteur_i4_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) {
  switch (select_LL_31__5F_expression_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 51)) ;
    nt_Expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_LL_31__5F_expression_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("LL1_expression_syntax.galgas", 53)) ;
  } break ;
  case 2: {
    nt_Constant_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

