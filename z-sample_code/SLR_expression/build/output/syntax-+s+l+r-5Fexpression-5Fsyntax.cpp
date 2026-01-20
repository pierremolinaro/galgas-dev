#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-c+add.h"
#include "class-c+const.h"
#include "class-c+expression.h"
#include "syntax-+s+l+r-5Fexpression-5Fsyntax.h"



//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_ (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  GGS_cExpression var_expressionTree_398 ;
  GGS_uint var_value_418 ;
  nt_Expression_ (var_expressionTree_398, var_value_418, inCompiler) ;
  var_value_418.log ("value"  COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 22)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  nt_Expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  nt_Expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Constant_i1_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                         GGS_uint & outArgument_outValue,
                                                                                         Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  GGS_luint var_cst_527 = inCompiler->synthetizedAttribute_number () ;
  inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken_number COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 28)) ;
  outArgument_outExpressionTree = GGS_cConst::init_21_ (var_cst_527, inCompiler COMMA_HERE) ;
  outArgument_outValue = var_cst_527.readProperty_uint () ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Constant_i1_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken_number COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Constant_i1_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken_number COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 28)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Expression_i2_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                           GGS_uint & outArgument_outValue,
                                                                                           Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  switch (select_SLR_5F_expression_5F_syntax_0 (inCompiler)) {
  case 1: {
    nt_Terme_ (outArgument_outExpressionTree, outArgument_outValue, inCompiler) ;
  } break ;
  case 2: {
    nt_Expression_ (outArgument_outExpressionTree, outArgument_outValue, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 40)) ;
    GGS_cExpression var_rightOperand_793 ;
    GGS_uint var_v_811 ;
    nt_Terme_ (var_rightOperand_793, var_v_811, inCompiler) ;
    outArgument_outExpressionTree = GGS_cAdd::init_21__21_ (outArgument_outExpressionTree, var_rightOperand_793, inCompiler COMMA_HERE) ;
    outArgument_outValue = outArgument_outValue.add_operation (var_v_811, inCompiler COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Expression_i2_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  switch (select_SLR_5F_expression_5F_syntax_0 (inCompiler)) {
  case 1: {
    nt_Terme_parse (inCompiler) ;
  } break ;
  case 2: {
    nt_Expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 40)) ;
    nt_Terme_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Expression_i2_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  switch (select_SLR_5F_expression_5F_syntax_0 (inCompiler)) {
  case 1: {
    nt_Terme_indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_Expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 40)) ;
    nt_Terme_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Terme_i3_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                      GGS_uint & outArgument_outValue,
                                                                                      Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  switch (select_SLR_5F_expression_5F_syntax_1 (inCompiler)) {
  case 1: {
    nt_Facteur_ (outArgument_outExpressionTree, outArgument_outValue, inCompiler) ;
  } break ;
  case 2: {
    nt_Terme_ (outArgument_outExpressionTree, outArgument_outValue, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 54)) ;
    GGS_cExpression var_rightOperand_1110 ;
    GGS_uint var_v_1128 ;
    nt_Facteur_ (var_rightOperand_1110, var_v_1128, inCompiler) ;
    outArgument_outExpressionTree = GGS_cAdd::init_21__21_ (outArgument_outExpressionTree, var_rightOperand_1110, inCompiler COMMA_HERE) ;
    outArgument_outValue = outArgument_outValue.multiply_operation (var_v_1128, inCompiler COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Terme_i3_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  switch (select_SLR_5F_expression_5F_syntax_1 (inCompiler)) {
  case 1: {
    nt_Facteur_parse (inCompiler) ;
  } break ;
  case 2: {
    nt_Terme_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 54)) ;
    nt_Facteur_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Terme_i3_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  switch (select_SLR_5F_expression_5F_syntax_1 (inCompiler)) {
  case 1: {
    nt_Facteur_indexing (inCompiler) ;
  } break ;
  case 2: {
    nt_Terme_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 54)) ;
    nt_Facteur_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Facteur_i4_ (GGS_cExpression & outArgument_outExpressionTree,
                                                                                        GGS_uint & outArgument_outValue,
                                                                                        Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  outArgument_outExpressionTree.drop () ; // Release 'out' argument
  outArgument_outValue.drop () ; // Release 'out' argument
  switch (select_SLR_5F_expression_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 65)) ;
    nt_Expression_ (outArgument_outExpressionTree, outArgument_outValue, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 67)) ;
  } break ;
  case 2: {
    nt_Constant_ (outArgument_outExpressionTree, outArgument_outValue, inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Facteur_i4_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  switch (select_SLR_5F_expression_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 65)) ;
    nt_Expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 67)) ;
  } break ;
  case 2: {
    nt_Constant_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_SLR_5F_expression_5F_syntax::rule_SLR_5F_expression_5F_syntax_Facteur_i4_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) {
  switch (select_SLR_5F_expression_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 65)) ;
    nt_Expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_SLR_5F_expression_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("SLR_expression_syntax.galgas", 67)) ;
  } break ;
  case 2: {
    nt_Constant_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

