#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_ifExpression_1021 ;
  nt_expression_ (var_ifExpression_1021, inCompiler) ;
  GALGAS_location var_operatorLocation_1046 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1111 ;
  nt_expression_ (var_thenExpression_1111, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1159 ;
  nt_expression_ (var_elseExpression_1159, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1046, var_ifExpression_1021, var_thenExpression_1111, var_elseExpression_1159  COMMA_SOURCE_FILE ("expression-if.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_904 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_904, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_905 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_905, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_851 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_851  COMMA_SOURCE_FILE ("expression-var.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_996 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      GALGAS_semanticExpressionAST var_expression_1054 ;
      nt_expression_ (var_expression_1054, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_996, var_expression_1054, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_909 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_961 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    var_literalStringList_909.addAssign_operation (var_literalString_961.readProperty_string ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 22)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)), var_literalStringList_909  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_862 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_862  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_870 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_870  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_1739 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_1739  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1394 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1444 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1504 ;
      nt_simple_5F_expression_ (var_rightOperand_1504, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1394, var_leftOperand_1444, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 41)), var_rightOperand_1504  COMMA_SOURCE_FILE ("expression-comparison.galgas", 41)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1647 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1697 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1757 ;
      nt_simple_5F_expression_ (var_rightOperand_1757, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1647, var_leftOperand_1697, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 47)), var_rightOperand_1757  COMMA_SOURCE_FILE ("expression-comparison.galgas", 47)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_1903 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1953 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2013 ;
      nt_simple_5F_expression_ (var_rightOperand_2013, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1903, var_leftOperand_1953, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 53)), var_rightOperand_2013  COMMA_SOURCE_FILE ("expression-comparison.galgas", 53)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2163 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2213 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2273 ;
      nt_simple_5F_expression_ (var_rightOperand_2273, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2163, var_leftOperand_2213, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 59)), var_rightOperand_2273  COMMA_SOURCE_FILE ("expression-comparison.galgas", 59)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_2425 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2474 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2534 ;
      nt_simple_5F_expression_ (var_rightOperand_2534, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2425, var_leftOperand_2474, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 65)), var_rightOperand_2534  COMMA_SOURCE_FILE ("expression-comparison.galgas", 65)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_2683 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2732 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2792 ;
      nt_simple_5F_expression_ (var_rightOperand_2792, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2683, var_leftOperand_2732, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 71)), var_rightOperand_2792  COMMA_SOURCE_FILE ("expression-comparison.galgas", 71)) ;
    } break ;
    case 8: {
      GALGAS_location var_operatorLocation_2939 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2990 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3050 ;
      nt_simple_5F_expression_ (var_rightOperand_3050, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2939, var_leftOperand_2990, GALGAS_comparison::constructor_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 77)), var_rightOperand_3050  COMMA_SOURCE_FILE ("expression-comparison.galgas", 77)) ;
    } break ;
    case 9: {
      GALGAS_location var_operatorLocation_3200 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3251 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3311 ;
      nt_simple_5F_expression_ (var_rightOperand_3311, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_3200, var_leftOperand_3251, GALGAS_comparison::constructor_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 83)), var_rightOperand_3311  COMMA_SOURCE_FILE ("expression-comparison.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2692 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2742 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2789 ;
      nt_term_ (var_rightOperand_2789, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_2692, var_leftOperand_2742, var_rightOperand_2789  COMMA_SOURCE_FILE ("expression-additive.galgas", 67)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2923 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 69)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2973 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3020 ;
      nt_term_ (var_rightOperand_3020, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_2923, var_leftOperand_2973, var_rightOperand_3020  COMMA_SOURCE_FILE ("expression-additive.galgas", 73)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_3155 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3204 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3251 ;
      nt_term_ (var_rightOperand_3251, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_3155, var_leftOperand_3204, var_rightOperand_3251  COMMA_SOURCE_FILE ("expression-additive.galgas", 79)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3379 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3429 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3476 ;
      nt_term_ (var_rightOperand_3476, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_3379, var_leftOperand_3429, var_rightOperand_3476  COMMA_SOURCE_FILE ("expression-additive.galgas", 85)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3614 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3663 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3710 ;
      nt_term_ (var_rightOperand_3710, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_3614, var_leftOperand_3663, var_rightOperand_3710  COMMA_SOURCE_FILE ("expression-additive.galgas", 91)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_3838 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3888 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3935 ;
      nt_term_ (var_rightOperand_3935, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_3838, var_leftOperand_3888, var_rightOperand_3935  COMMA_SOURCE_FILE ("expression-additive.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2360 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2409 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2481 ;
      nt_factor_ (var_rightOperand_2481, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_2360, var_leftOperand_2409, var_rightOperand_2481  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2620 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2670 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2742 ;
      nt_factor_ (var_rightOperand_2742, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_2620, var_leftOperand_2670, var_rightOperand_2742  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2891 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2940 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2989 ;
      nt_factor_ (var_rightOperand_2989, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_2891, var_leftOperand_2940, var_rightOperand_2989  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3122 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3172 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3221 ;
      nt_factor_ (var_rightOperand_3221, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_3122, var_leftOperand_3172, var_rightOperand_3221  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3364 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3415 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3464 ;
      nt_factor_ (var_rightOperand_3464, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_3364, var_leftOperand_3415, var_rightOperand_3464  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_1638 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_1708 ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
      var_kind_1708 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-is-as.galgas", 46)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
      var_kind_1708 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 49)) ;
    } break ;
    case 3: {
      var_kind_1708 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
      var_kind_1708 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-is-as.galgas", 54)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_1932 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_1638, var_kind_1708, var_typeName_1932  COMMA_SOURCE_FILE ("expression-is-as.galgas", 57)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_2130 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    GALGAS_lstring var_typeName_2186 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2130, var_typeName_2186  COMMA_SOURCE_FILE ("expression-is-as.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  GALGAS_lstring var_optionComponentName_974 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  GALGAS_lstring var_optionName_1049 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  GALGAS_lstring var_getterName_1082 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_974, var_optionName_1049, var_getterName_1082  COMMA_SOURCE_FILE ("expression-option.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  GALGAS_lstring var_optionName_1432 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  GALGAS_lstring var_getterName_1465 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 38))  COMMA_SOURCE_FILE ("expression-option.galgas", 38)), var_optionName_1432, var_getterName_1465  COMMA_SOURCE_FILE ("expression-option.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  GALGAS_lstring var_lexiqueName_945 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  GALGAS_lstring var_getterName_986 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_945, var_getterName_986  COMMA_SOURCE_FILE ("expression-lexique.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  GALGAS_lstring var_filewrapperName_1521 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_1521  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_1742 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_1521, var_filePath_1742  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 44)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_1925 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      GALGAS_actualOutputExpressionList var_expressionList_2006 ;
      nt_output_5F_expression_5F_list_ (var_expressionList_2006, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_1521, var_filewrapperTemplateName_1925, var_expressionList_2006  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 22)) ;
  GALGAS_location var_startLocation_1115 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_1196 ;
  nt_expression_ (var_receiverExpression_1196, inCompiler) ;
  GALGAS_lstring var_getterName_1261 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1363 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1363, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 30)) ;
  GALGAS_location var_endLocation_1391 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 31)) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()), var_receiverExpression_1196, var_getterName_1261, var_expressionList_1363, var_startLocation_1115.getter_union (var_endLocation_1391, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 37))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 22)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 22)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 28))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 28)) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1581 ;
  nt_optional_5F_type_ (var_typeName_1581, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  GALGAS_location var_startOfExpression_1615 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  GALGAS_lstring var_constructorName_1703 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1778 ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    var_expressionList_1778 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 46)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_1778, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfExpression_1921 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 52)) ;
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_1581, var_constructorName_1703, var_expressionList_1778, var_startOfExpression_1615.getter_union (var_endOfExpression_1921, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 57))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_2338 ;
  nt_optional_5F_type_ (var_typeName_2338, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 66)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName_2338  COMMA_SOURCE_FILE ("expression-constructor.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1040 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1040, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_933, var_expressionList_1040  COMMA_SOURCE_FILE ("expression-function-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  GALGAS_lstring var_typeName_876 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_876  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1967 ;
  nt_optional_5F_type_ (var_typeName_1967, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  GALGAS_collectionValueElementList var_elementList_2023 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 46)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_2139 ;
      nt_collection_5F_value_5F_element_ (var_element_2139, inCompiler) ;
      var_elementList_2023.addAssign_operation (var_element_2139  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 51)) ;
      switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_1967, var_elementList_2023, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 59))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_2590 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_2630 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    GALGAS_semanticExpressionAST var_expression_2688 ;
    nt_expression_ (var_expression_2688, inCompiler) ;
    var_expressionList_2590.addAssign_operation (var_selector_2630, var_expression_2688, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71)) ;
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_2590, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i28_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_3131 ;
  nt_expression_ (var_expression_3131, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_3131, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 19))  COMMA_SOURCE_FILE ("expression-self.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      GALGAS_lstring var_structFieldName_1027 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_1027.readProperty_location (), outArgument_outExpression, var_structFieldName_1027  COMMA_SOURCE_FILE ("expression-property-access.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i31_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_900 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_900, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i32_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_902 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_902, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_900 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 19)) ;
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::constructor_new (var_operatorLocation_900, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-bang.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_915 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_915, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2348 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2397 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2454 ;
      nt_expression_5F_and_ (var_rightOperand_2454, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_2348, var_leftOperand_2397, var_rightOperand_2454  COMMA_SOURCE_FILE ("expression-or.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2581 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2631 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2688 ;
      nt_expression_5F_and_ (var_rightOperand_2688, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_2581, var_leftOperand_2631, var_rightOperand_2688  COMMA_SOURCE_FILE ("expression-or.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2820 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2869 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2926 ;
      nt_expression_5F_and_ (var_rightOperand_2926, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_2820, var_leftOperand_2869, var_rightOperand_2926  COMMA_SOURCE_FILE ("expression-or.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3054 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3105 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3162 ;
      nt_expression_5F_and_ (var_rightOperand_3162, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_3054, var_leftOperand_3105, var_rightOperand_3162  COMMA_SOURCE_FILE ("expression-or.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3298 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3349 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3406 ;
      nt_expression_5F_and_ (var_rightOperand_3406, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_3298, var_leftOperand_3349, var_rightOperand_3406  COMMA_SOURCE_FILE ("expression-or.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1354 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1403 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1484 ;
      nt_relation_5F_factor_ (var_rightOperand_1484, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_1354, var_leftOperand_1403, var_rightOperand_1484  COMMA_SOURCE_FILE ("expression-and.galgas", 35)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1612 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1662 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1743 ;
      nt_relation_5F_factor_ (var_rightOperand_1743, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_1612, var_leftOperand_1662, var_rightOperand_1743  COMMA_SOURCE_FILE ("expression-and.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_1708 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_1776 ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_1708 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
        var_mFormalParameterPassingMode_1776 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 34)) ;
      } break ;
      case 2: {
        var_selector_1708 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
        var_mFormalParameterPassingMode_1776 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 38)) ;
      } break ;
      case 3: {
        var_selector_1708 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
        var_mFormalParameterPassingMode_1776 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 41)) ;
      } break ;
      case 4: {
        var_selector_1708 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
        var_mFormalParameterPassingMode_1776 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 44)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_2314 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      GALGAS_bool var_mIsUnused_2340 ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_2340 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
        var_mIsUnused_2340 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_2494 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_1708, var_mFormalParameterPassingMode_1776, var_mFormalParameterTypeName_2314, var_mFormalParameterName_2494, var_mIsUnused_2340  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 55)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3127 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      GALGAS_semanticExpressionAST var_e_3176 ;
      nt_expression_ (var_e_3176, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_3220 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 74)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_3127, var_e_3176, var_endOfExpressionLocation_3220  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 75))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 75)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_3406 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_3406  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 84))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 84)) ;
      } break ;
      case 2: {
        GALGAS_lbigint var_count_3559 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 86)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
        GALGAS_uint var_n_3585 = var_count_3559.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 88)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_3406.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("\?")) ;
            inCompiler->emitSemanticError (var_selector_3406.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 90)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_n_3585.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_3559.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 93)) ;
          }
        }
        if (kBoolFalse == test_3) {
          if (var_n_3585.isValid ()) {
            uint32_t variant_3840 = var_n_3585.uintValue () ;
            bool loop_3840 = true ;
            while (loop_3840) {
              loop_3840 = GALGAS_bool (kIsStrictSup, var_n_3585.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
              if (loop_3840) {
                loop_3840 = GALGAS_bool (kIsStrictSup, var_n_3585.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
              }
              if (loop_3840 && (0 == variant_3840)) {
                loop_3840 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 95)) ;
              }
              if (loop_3840) {
                variant_3840 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_3406.readProperty_location (), var_n_3585  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 97))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 97)) ;
                var_n_3585.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 98)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      GALGAS_lstring var_selector_4056 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 103)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSelfParameterAST::constructor_new (var_selector_4056  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_4182 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 107)) ;
      GALGAS_lstring var_outputInputActualParameterName_4237 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      GALGAS_lstringlist var_structAttributeList_4267 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 109)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 112)) ;
          GALGAS_lstring var_structAttributeName_4368 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
          var_structAttributeList_4267.addAssign_operation (var_structAttributeName_4368  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 114)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_4182, var_outputInputActualParameterName_4237, var_structAttributeList_4267  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 116))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 116)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_4631 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_4631  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124)) ;
    } break ;
    case 7: {
      GALGAS_lstring var_selector_4761 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 126)) ;
      GALGAS_lbigint var_count_4791 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
      GALGAS_uint var_n_4813 = var_count_4791.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 129)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_selector_4761.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("!\?")) ;
          inCompiler->emitSemanticError (var_selector_4761.readProperty_location (), GALGAS_string ("the selector should be '!\?'"), fixItArray7  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 131)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, var_n_4813.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_count_4791.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 134)) ;
        }
      }
      if (kBoolFalse == test_8) {
        if (var_n_4813.isValid ()) {
          uint32_t variant_5057 = var_n_4813.uintValue () ;
          bool loop_5057 = true ;
          while (loop_5057) {
            loop_5057 = GALGAS_bool (kIsStrictSup, var_n_4813.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
            if (loop_5057) {
              loop_5057 = GALGAS_bool (kIsStrictSup, var_n_4813.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_5057 && (0 == variant_5057)) {
              loop_5057 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 136)) ;
            }
            if (loop_5057) {
              variant_5057 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_4761.readProperty_location (), var_n_4813  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 138))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 138)) ;
              var_n_4813.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 139)) ;
            }
          }
        }
      }
    } break ;
    case 8: {
      GALGAS_lstring var_selector_5289 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 143)) ;
      GALGAS_lstring var_inputActualParameterName_5338 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_5289, var_inputActualParameterName_5338  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_5545 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 150)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 151)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 152)) ;
      GALGAS_lstring var_inputActualParameterName_5617 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::constructor_new (var_selector_5545, var_inputActualParameterName_5617  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_5811 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 160)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfParameterAST::constructor_new (var_selector_5811, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 163))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 161))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 161)) ;
    } break ;
    case 11: {
      GALGAS_lstring var_selector_6000 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 166)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 167)) ;
      GALGAS_lstring var_declarationTypeName_6051 ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_6051 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 170)) ;
      } break ;
      case 2: {
        var_declarationTypeName_6051 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 172)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_6212 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6000, var_declarationTypeName_6051, var_inputActualParameterName_6212  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 175))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 175)) ;
    } break ;
    case 12: {
      GALGAS_lstring var_selector_6458 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      GALGAS_lstring var_declarationTypeName_6506 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 182)) ;
      GALGAS_lstring var_inputActualParameterName_6555 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 183)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6458, var_declarationTypeName_6506, var_inputActualParameterName_6555  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 184))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 184)) ;
    } break ;
    case 13: {
      GALGAS_lstring var_selector_6785 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      GALGAS_lstring var_declarationTypeName_6836 ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_6836 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 194)) ;
      } break ;
      case 2: {
        var_declarationTypeName_6836 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 196)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_6979 ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_6979 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
        var_markedAsUnused_6979 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_7138 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 205)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_6785, var_declarationTypeName_6836, var_inputActualParameterName_7138, var_markedAsUnused_6979  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 206))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 206)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 86)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 103)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 112)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 150)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 151)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 152)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 160)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 166)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 167)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 172)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 182)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 183)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 196)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 205)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 86)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 103)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 112)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 143)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 150)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 151)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 152)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 159)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 160)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 166)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 167)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 172)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 182)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 183)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 196)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 205)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 220)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_bool var_isConstant_7818 ;
      GALGAS_lstring var_selector_7842 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 224)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_7818 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 228)) ;
        var_isConstant_7818 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_7994 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 231)) ;
      GALGAS_bool var_mIsUnused_8020 ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_8020 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 236)) ;
        var_mIsUnused_8020 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_8174 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 239)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_7842, var_mFormalParameterTypeName_7994, var_mFormalParameterName_8174, var_mIsUnused_8020, var_isConstant_7818  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 240)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 224)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 228)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 231)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 236)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 239)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 224)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 228)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 231)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 236)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 239)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 38)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_2205 ;
      nt_semantic_5F_instruction_ (var_instruction_2205, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_2205  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 38)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 38)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 51)) ;
  GALGAS_lstring var_mActionName_2693 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 52)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_2798 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_2798, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_2693, var_mFormalParameterList_2798  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 54))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 51)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 52)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 51)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 52)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 67)) ;
  GALGAS_lstring var_mRoutineName_3393 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 68)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3498 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_3498, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_3595 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_3595, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 72)) ;
  GALGAS_location var_endOfInstructionList_3632 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 73)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mRoutineName_3393, var_mFormalParameterList_3498, var_mRoutineInstructionList_3595, var_endOfInstructionList_3632  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 74))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 68)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 67)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 68)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 87)) ;
  GALGAS_lstring var_mRoutineName_4132 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 88)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_4237 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_4237, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_4334 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_4334, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 92)) ;
  GALGAS_location var_endOfInstructionList_4371 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 93)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_mRoutineName_4132, var_mFormalParameterList_4237, var_mRoutineInstructionList_4334, var_endOfInstructionList_4371  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 94))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 94)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 87)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 88)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 92)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 87)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 88)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 109)) ;
  GALGAS_bool var_isOnce_5010 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_5036 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_5108 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 114)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attribute_5108.readProperty_string ().objectCompare (GALGAS_string ("once"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_isOnce_5010.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attribute_5108.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 117)) ;
            }
          }
          var_isOnce_5010 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attribute_5108.readProperty_string ().objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_isUsefull_5036.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attribute_5108.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 122)) ;
              }
            }
            var_isUsefull_5036 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_5108.readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 126)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_5605 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 129)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_5726 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_5726, inCompiler) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_isOnce_5010.boolEnum () ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_5726.getter_length (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 131)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_functionName_5605.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 132)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 134)) ;
  GALGAS_lstring var_resultTypeName_5905 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 135)) ;
  GALGAS_lstring var_resultVariableName_5941 ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
    var_resultVariableName_5941 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 138)) ;
  } break ;
  case 2: {
    var_resultVariableName_5941 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 140))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 140)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 142)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_6154 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_6154, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 144)) ;
  GALGAS_location var_endOfFunctionInstructionList_6199 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 145)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_isOnce_5010.boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_5605, var_resultTypeName_5905, var_resultVariableName_5941, var_functionInstructionList_6154, var_endOfFunctionInstructionList_6199, GALGAS_bool (false), var_isUsefull_5036  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 147))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 147)) ;
    }
  }
  if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_5605, var_formalInputParameterList_5726, var_resultTypeName_5905, var_resultVariableName_5941, var_functionInstructionList_6154, var_endOfFunctionInstructionList_6199, GALGAS_bool (false), var_isUsefull_5036  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 158))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 158)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 129)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 135)) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 138)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 142)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 114)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 129)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 135)) ;
  switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 138)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 142)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 144)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 176)) ;
  GALGAS_bool var_isOnce_7127 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_7153 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_7225 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 181)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attribute_7225.readProperty_string ().objectCompare (GALGAS_string ("once"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_isOnce_7127.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attribute_7225.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 184)) ;
            }
          }
          var_isOnce_7127 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attribute_7225.readProperty_string ().objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_isUsefull_7153.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attribute_7225.readProperty_location (), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 189)) ;
              }
            }
            var_isUsefull_7153 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_7225.readProperty_location (), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 193)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_7722 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 196)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_7843 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_7843, inCompiler) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_isOnce_7127.boolEnum () ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_7843.getter_length (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 198)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_functionName_7722.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 199)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 201)) ;
  GALGAS_lstring var_resultTypeName_8022 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 202)) ;
  GALGAS_lstring var_resultVariableName_8058 ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    var_resultVariableName_8058 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 205)) ;
  } break ;
  case 2: {
    var_resultVariableName_8058 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 207))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 207)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 209)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_8271 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_8271, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  GALGAS_location var_endOfFunctionInstructionList_8316 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 212)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_isOnce_7127.boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_7722, var_resultTypeName_8022, var_resultVariableName_8058, var_functionInstructionList_8271, var_endOfFunctionInstructionList_8316, GALGAS_bool (true), var_isUsefull_7153  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 214))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 214)) ;
    }
  }
  if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_7722, var_formalInputParameterList_7843, var_resultTypeName_8022, var_resultVariableName_8058, var_functionInstructionList_8271, var_endOfFunctionInstructionList_8316, GALGAS_bool (true), var_isUsefull_7153  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 225))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 225)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 196)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 201)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 202)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 205)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 209)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 176)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 196)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 201)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 202)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 205)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 209)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 245)) ;
  GALGAS_lstring var_mActionName_9495 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 246)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_9616 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_9616, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 248)) ;
  GALGAS_lstring var_resultTypeName_9657 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 249)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_9495, var_formalInputParameterList_9616, var_resultTypeName_9657  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 250))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 250)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 245)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 246)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 249)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 245)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 246)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 248)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_10485 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 267)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_10485.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
      inCompiler->emitSemanticError (var_selector_10485.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 269)) ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 272)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 273))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 273)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_10764 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 275)) ;
    GALGAS_lstring var_actualParameterName_10808 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 276)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_10764, var_actualParameterName_10808  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 277)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 279)) ;
    GALGAS_lstring var_actualParameterTypeName_11001 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 280)) ;
    GALGAS_lstring var_actualParameterName_11045 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 281)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_11001, var_actualParameterName_11045  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 282)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_11229 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 284)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_11229  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 285)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 267)) ;
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 272)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 275)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 276)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 279)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 280)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 281)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 284)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 267)) ;
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 272)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 275)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 276)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 279)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 280)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 281)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 284)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 292)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_11670 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 295)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 296)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_11670, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 297))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 297)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_11799 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 299)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 300)) ;
      GALGAS_lstring var_actualParameterTypeName_11854 ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_11854 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 303)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_11854 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_12018 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 307)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_11799, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_11854, var_actualParameterName_12018  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 310))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 308)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_12200 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 312)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 313)) ;
      GALGAS_lstring var_actualParameterTypeName_12255 ;
      switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_12255 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_12255 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_12419 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 320)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_12200, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_12255, var_actualParameterName_12419  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 323))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 321)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_12601 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 325)) ;
      GALGAS_lstring var_actualParameterName_12645 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 326)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_12601, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_12645  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 295)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 296)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 299)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 300)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 307)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 312)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 313)) ;
      switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 320)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 325)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 326)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 295)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 296)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 299)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 300)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 305)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 307)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 312)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 313)) ;
      switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 320)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 325)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 326)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_1331 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  GALGAS_lstring var_optionalProperty_1365 ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    var_optionalProperty_1365 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    GALGAS_lstring var_attributeName_1469 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
    var_optionalProperty_1365 = var_attributeName_1469 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_1587 ;
  nt_expression_ (var_mSourceExpression_1587, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_1331.readProperty_location (), var_mTargetVariableName_1331, var_optionalProperty_1365, var_mSourceExpression_1587  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  GALGAS_lstring var_mTargetVariableName_2019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  GALGAS_lstring var_optionalProperty_2053 ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    var_optionalProperty_2053 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    GALGAS_lstring var_attributeName_2157 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
    var_optionalProperty_2053 = var_attributeName_2157 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_2275 ;
  nt_expression_ (var_mSourceExpression_2275, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (var_mTargetVariableName_2019.readProperty_location (), var_mTargetVariableName_2019, var_optionalProperty_2053, var_mSourceExpression_2275  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_1546 ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
    var_kind_1546 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("instruction-cast.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
    var_kind_1546 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
    var_kind_1546 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("instruction-cast.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_1714 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  GALGAS_lstring var_mConstantVarName_1748 ;
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    var_mConstantVarName_1748 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
    var_mConstantVarName_1748 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList_2005 ;
  nt_semantic_5F_instruction_5F_list_ (var_mCastBranchInstructionList_2005, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName_1714, var_mConstantVarName_1748, var_mCastBranchInstructionList_2005, var_kind_1546, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 57))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_ (outArgument_outElseOrDefault, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    GALGAS_location var_instructionLocation_2523 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    GALGAS_semanticExpressionAST var_errorLocationExpression_2625 ;
    nt_expression_ (var_errorLocationExpression_2625, inCompiler) ;
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 73)) ;
    GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    temp_0.addAssign_operation (GALGAS_string ("cast instruction run-time error")  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    outArgument_outElseOrDefault.addAssign_operation (GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2523, var_errorLocationExpression_2625, GALGAS_literalStringExpressionAST::constructor_new (var_instructionLocation_2523, temp_0  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 78)), GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 79))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)), GALGAS_string ("This instruction is not handled in GALGAS 4"), fixItArray1  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)) ;
    }
  }
  GALGAS_location var_instructionLocation_3307 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  GALGAS_semanticExpressionAST var_expression_3380 ;
  nt_expression_ (var_expression_3380, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList_3415 = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 93)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList_3415, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault_3616 ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault_3616, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3688 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 102)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, var_terminator_3688.readProperty_string ().objectCompare (GALGAS_string ("cast"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("%cast")) ;
        inCompiler->emitSemanticError (var_terminator_3688.readProperty_location (), GALGAS_string ("the terminator attribute should be '%cast'"), fixItArray4  COMMA_SOURCE_FILE ("instruction-cast.galgas", 104)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfInstructionLocation_3879 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 107)) ;
  outArgument_outInstruction = GALGAS_structuredCastInstructionAST::constructor_new (var_instructionLocation_3307, var_expression_3380, var_mCastInstructionBranchList_3415, var_mElseOrDefault_3616, var_endOfInstructionLocation_3879  COMMA_SOURCE_FILE ("instruction-cast.galgas", 108)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 102)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-cast.galgas", 102)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_ (const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_3183 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  GALGAS_location var_instructionLocation_3211 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 74)) ;
  GALGAS_lstringlist var_mStructAttributeList_3270 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      GALGAS_lstring var_attributeName_3344 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
      var_mStructAttributeList_3270.addAssign_operation (var_attributeName_3344  COMMA_SOURCE_FILE ("instruction-concat.galgas", 80)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 83)) ;
    GALGAS_semanticExpressionAST var_expression_3477 ;
    nt_expression_ (var_expression_3477, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3211, constinArgument_inHasSelfPrefix, var_receiverName_3183, var_mStructAttributeList_3270, var_expression_3477  COMMA_SOURCE_FILE ("instruction-concat.galgas", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 1: {
      GALGAS_actualOutputExpressionList var_expressionList_3798 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_3798, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation_3211, constinArgument_inHasSelfPrefix, var_receiverName_3183, var_mStructAttributeList_3270, var_expressionList_3798  COMMA_SOURCE_FILE ("instruction-concat.galgas", 96)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_4081 ;
      nt_expression_ (var_expression_4081, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3211, constinArgument_inHasSelfPrefix, var_receiverName_3183, var_mStructAttributeList_3270, var_expression_4081  COMMA_SOURCE_FILE ("instruction-concat.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 114)) ;
    GALGAS_semanticExpressionAST var_expression_4379 ;
    nt_expression_ (var_expression_4379, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3211, constinArgument_inHasSelfPrefix, var_receiverName_3183, var_mStructAttributeList_3270, var_expression_4379  COMMA_SOURCE_FILE ("instruction-concat.galgas", 116)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 124)) ;
    GALGAS_semanticExpressionAST var_expression_4652 ;
    nt_expression_ (var_expression_4652, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3211, constinArgument_inHasSelfPrefix, var_receiverName_3183, var_mStructAttributeList_3270, var_expression_4652  COMMA_SOURCE_FILE ("instruction-concat.galgas", 126)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 83)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 114)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 124)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 83)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 114)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 124)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i17_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_5139 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
    GALGAS_semanticExpressionAST var_expression_5197 ;
    nt_expression_ (var_expression_5197, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_5139, var_expression_5197, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 143))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 143)) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  GALGAS_location var_instructionLocation_877 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  GALGAS_lstringlist var_dropList_924 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_977 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    var_dropList_924.addAssign_operation (var_variableName_977  COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_877, var_dropList_924  COMMA_SOURCE_FILE ("instruction-drop.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 36)) ;
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    GALGAS_bool var_hasFixItRemove_1658 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_1658.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 48))  COMMA_SOURCE_FILE ("instruction-error.galgas", 48)) ;
          var_hasFixItRemove_1658 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        GALGAS_location var_errorLocation_1958 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 53)) ;
        GALGAS_semanticExpressionAST var_expression_2035 ;
        nt_expression_ (var_expression_2035, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_2035, var_errorLocation_1958  COMMA_SOURCE_FILE ("instruction-error.galgas", 55))  COMMA_SOURCE_FILE ("instruction-error.galgas", 55)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        GALGAS_location var_errorLocation_2178 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 58)) ;
        GALGAS_semanticExpressionAST var_expression_2255 ;
        nt_expression_ (var_expression_2255, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_2255, var_errorLocation_2178  COMMA_SOURCE_FILE ("instruction-error.galgas", 60))  COMMA_SOURCE_FILE ("instruction-error.galgas", 60)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        GALGAS_location var_errorLocation_2403 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 63)) ;
        GALGAS_semanticExpressionAST var_expression_2480 ;
        nt_expression_ (var_expression_2480, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_2480, var_errorLocation_2403  COMMA_SOURCE_FILE ("instruction-error.galgas", 65))  COMMA_SOURCE_FILE ("instruction-error.galgas", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i20_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  GALGAS_location var_instructionLocation_2841 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_2923 ;
  nt_expression_ (var_mReceiverExpression_2923, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_2993 ;
  nt_expression_ (var_mErrorExpression_2993, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_3020 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_3122 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      var_mBuiltVariableList_3020.addAssign_operation (var_builtVariableName_3122  COMMA_SOURCE_FILE ("instruction-error.galgas", 85)) ;
      switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_fixitListAST var_fixitListAST_3262 ;
  nt_issue_5F_fixit_ (var_fixitListAST_3262, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2841, var_mReceiverExpression_2923, var_mErrorExpression_2993, var_mBuiltVariableList_3020, var_fixitListAST_3262  COMMA_SOURCE_FILE ("instruction-error.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbigint var_count_3620 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
  GALGAS_uint var_n_3638 = var_count_3620.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 78)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_3620.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 80)) ;
    }
  }
  if (var_n_3638.isValid ()) {
    uint32_t variant_3742 = var_n_3638.uintValue () ;
    bool loop_3742 = true ;
    while (loop_3742) {
      loop_3742 = GALGAS_bool (kIsStrictSup, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_3742) {
        loop_3742 = GALGAS_bool (kIsStrictSup, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_3742 && (0 == variant_3742)) {
        loop_3742 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 82)) ;
      }
      if (loop_3742) {
        variant_3742 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 83)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 83))  COMMA_SOURCE_FILE ("instruction-for.galgas", 83)) ;
        var_n_3638.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_typeName_4093 ;
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    var_typeName_4093 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 93)) ;
  } break ;
  case 2: {
    var_typeName_4093 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_4093, GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 99))  COMMA_SOURCE_FILE ("instruction-for.galgas", 99)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isUnused_4276 ;
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      var_isUnused_4276 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
      var_isUnused_4276 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_constantName_4420 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_4093, var_isUnused_4276, var_constantName_4420  COMMA_SOURCE_FILE ("instruction-for.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_4743 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 117)) ;
  GALGAS_bool var_endsWithEllipsis_4825 ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
    var_endsWithEllipsis_4825 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList_4743, inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis_4825 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
      var_endsWithEllipsis_4825 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_location_5104 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5204 ;
  nt_expression_ (var_enumeratedExpression_5204, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_4743, var_endsWithEllipsis_4825, var_enumeratedExpression_5204, var_location_5104  COMMA_SOURCE_FILE ("instruction-for.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_5641 ;
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_typeName_5641 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 151)) ;
  } break ;
  case 2: {
    var_typeName_5641 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_5758 ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
    var_enumerationVariable_5758 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 158)) ;
  } break ;
  case 2: {
    var_enumerationVariable_5758 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5947 ;
  nt_expression_ (var_enumeratedExpression_5947, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_5641, var_enumerationVariable_5758, var_enumeratedExpression_5947, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 168))  COMMA_SOURCE_FILE ("instruction-for.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  GALGAS_location var_startLocation_6371 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  GALGAS_lstring var_prefix_6420 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_prefix_6420 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 180)) ;
  } break ;
  case 2: {
    var_prefix_6420 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endLocation_6521 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 184)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_6613 ;
  nt_expression_ (var_enumeratedExpression_6613, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_6420, var_enumeratedExpression_6613, var_startLocation_6371.getter_union (var_endLocation_6521, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 190))  COMMA_SOURCE_FILE ("instruction-for.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  GALGAS_location var_instructionLocation_7017 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_7064 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 199)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_7145 ;
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
      var_ascending_7145 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
      var_ascending_7145 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_7337 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_7337, inCompiler) ;
    var_mEnumeratedObjectList_7064.addAssign_operation (var_ascending_7145, var_enumeratedObject_7337  COMMA_SOURCE_FILE ("instruction-for.galgas", 209)) ;
    switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_7473 ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_mWhileExpression_7473 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 215))  COMMA_SOURCE_FILE ("instruction-for.galgas", 215)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_ (var_mWhileExpression_7473, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_7648 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 220)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_7724 ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7724 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 223)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList_7724, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_7914 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  GALGAS_lstring var_indexVariableName_7975 ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_indexVariableName_7975 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 232))  COMMA_SOURCE_FILE ("instruction-for.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    var_indexVariableName_7975 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_8177 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList_8177, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_8201 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 239)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_8278 ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_8278 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 242)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList_8278, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_8472 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 247)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_8547 ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_8547 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 250)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList_8547, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_8733 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_8822 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 259)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_8822.readProperty_string ().objectCompare (GALGAS_string ("for"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%for")) ;
        inCompiler->emitSemanticError (var_terminator_8822.readProperty_location (), GALGAS_string ("the terminator attribute should be '%for'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for.galgas", 261)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction_9011 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 264)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_7017, var_mEnumeratedObjectList_7064, var_indexVariableName_7975, var_mWhileExpression_7473, var_endof_5F_while_5F_expression_7648, var_mBeforeInstructionList_7724, var_endof_5F_before_5F_branch_7914, var_mBetweenInstructionList_8278, var_endof_5F_between_5F_branch_8472, var_mDoInstructionList_8177, var_endof_5F_do_5F_branch_8201, var_mAfterInstructionList_8547, var_endof_5F_after_5F_branch_8733, var_endof_5F_foreach_5F_instruction_9011  COMMA_SOURCE_FILE ("instruction-for.galgas", 265)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 259)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-for.galgas", 259)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  GALGAS_location var_instructionLocation_3901 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 80)) ;
  GALGAS_lstring var_grammarComponentName_3970 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  GALGAS_lstring var_labelName_4032 ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_labelName_4032 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    var_labelName_4032 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4240 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_4240, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_3901, var_actualParameterList_4240, var_grammarComponentName_3970, var_labelName_4032, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_4931 ;
  nt_expression_ (var_sourceExpression_4931, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_4961 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 104)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_5148 ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_5148 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 108)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_5148, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_4931, var_endOfSourceExpression_4961, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_5148  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_6232 ;
  nt_expression_ (var_sourceExpression_6232, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_6272 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  GALGAS_semanticExpressionAST var_nameExpression_6348 ;
  nt_expression_ (var_nameExpression_6348, inCompiler) ;
  GALGAS_location var_endOfNameExpression_6386 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6564 ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6564 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 140)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_6564, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_6232, var_endOfSourceExpression_6272, var_nameExpression_6348, var_endOfNameExpression_6386, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_6564  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  GALGAS_location var_instructionLocation_7575 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 164)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticWarning (var_instructionLocation_7575, GALGAS_string ("obsolete 'grammar' instruction syntax"), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 166)) ;
    }
  }
  GALGAS_lstring var_grammarComponentName_7809 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  GALGAS_lstring var_labelName_7871 ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    var_labelName_7871 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 171))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 171)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    var_labelName_7871 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_ (var_instructionLocation_7575, var_grammarComponentName_7809, var_labelName_7871, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                              const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_8619 ;
  nt_expression_ (var_mSourceExpression_8619, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_8649 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 187)) ;
  GALGAS_actualParameterListAST var_actualParameterList_8743 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_8743, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_8913 ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_8913 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 192)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_8913, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_mSourceExpression_8619, var_endOfSourceExpression_8649, var_actualParameterList_8743, var_grammarInstructionSyntaxDirectedTranslationResult_8913  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 197)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  nt_expression_parse (inCompiler) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  nt_expression_indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                              const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_9959 ;
  nt_expression_ (var_sourceExpression_9959, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_9999 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  GALGAS_semanticExpressionAST var_nameExpression_10075 ;
  nt_expression_ (var_nameExpression_10075, inCompiler) ;
  GALGAS_location var_endOfNameExpression_10113 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListAST var_actualParameterList_10206 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_10206, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_10376 ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_10376 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_10376, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_9959, var_endOfSourceExpression_9999, var_nameExpression_10075, var_endOfNameExpression_10113, var_actualParameterList_10206, var_grammarInstructionSyntaxDirectedTranslationResult_10376  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_ (const GALGAS_bool constinArgument_inPrefixedBySelf,
                                                                                                                         GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName_2563 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  GALGAS_lstringlist var_mStructAttributeList_2592 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      GALGAS_lstring var_attributeName_2679 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
      var_mStructAttributeList_2592.addAssign_operation (var_attributeName_2679  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 70)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2563.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2563, var_mStructAttributeList_2592, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 79))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2563.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2563, var_mStructAttributeList_2592, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 88))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 83)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2563.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2563, var_mStructAttributeList_2592, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 97))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 92)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2563.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2563, var_mStructAttributeList_2592, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 106))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  GALGAS_location var_instructionLocation_3826 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3826, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 120))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 118)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3826, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 126))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3826, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 132))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3826, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 138))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_2607 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  GALGAS_ifExpressionList var_testExpression_2664 ;
  nt_if_5F_expression_ (var_testExpression_2664, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_2733 ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList_2733, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_2767 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_2841 ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2841 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList_2841, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    GALGAS_semanticInstructionAST var_instruction_3055 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_3055, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 74)) ;
    temp_0.addAssign_operation (var_instruction_3055  COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
    var_else_5F_instructionList_2841 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_2607, var_testExpression_2664, var_then_5F_instructionList_2733, var_endOf_5F_then_5F_branchLocation_2767, var_else_5F_instructionList_2841, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 82))  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3644 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_3644.readProperty_string ().objectCompare (GALGAS_string ("if"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%if")) ;
        inCompiler->emitSemanticError (var_terminator_3644.readProperty_location (), GALGAS_string ("the terminator attribute should be '%if'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 96)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i38_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i39_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 104)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
      GALGAS_lstring var_constantName_4084 ;
      switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
      case 1: {
        var_constantName_4084 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
        var_constantName_4084 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 115)) ;
      GALGAS_semanticExpressionAST var_expression_4260 ;
      nt_expression_5F_or_ (var_expression_4260, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_4296 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 117)) ;
      switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_4084, var_expression_4260, var_endOfReceiverExpression_4296, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123))  COMMA_SOURCE_FILE ("instruction-if.galgas", 119))  COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 126)) ;
        GALGAS_lstring var_typeName_4598 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_4084, var_expression_4260, var_endOfReceiverExpression_4296, var_typeName_4598  COMMA_SOURCE_FILE ("instruction-if.galgas", 128))  COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_4915 ;
      nt_expression_ (var_receiverExpression_4915, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_4969 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_5048 = GALGAS_optionalMethodActualArgumentList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 140)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_5110 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
          GALGAS_semanticExpressionAST var_expression_5149 ;
          nt_expression_ (var_expression_5149, inCompiler) ;
          var_optionalMethodActualArgumentList_5048.addAssign_operation (var_selector_5110, GALGAS_optionalMethodActualArgument::constructor_actualOutput (var_expression_5149, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 145))  COMMA_SOURCE_FILE ("instruction-if.galgas", 145))  COMMA_SOURCE_FILE ("instruction-if.galgas", 145)) ;
        } break ;
        case 3: {
          GALGAS_lstring var_selector_5305 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
          switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
            GALGAS_lstring var_typeName_5374 ;
            switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
            case 1: {
              var_typeName_5374 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 152)) ;
            } break ;
            case 2: {
              var_typeName_5374 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_5540 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
            var_optionalMethodActualArgumentList_5048.addAssign_operation (var_selector_5305, GALGAS_optionalMethodActualArgument::constructor_actualLetInput (var_typeName_5374, var_constantName_5540  COMMA_SOURCE_FILE ("instruction-if.galgas", 157))  COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
            GALGAS_lstring var_typeName_5730 ;
            switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
            case 1: {
              var_typeName_5730 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 162)) ;
            } break ;
            case 2: {
              var_typeName_5730 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_5895 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
            var_optionalMethodActualArgumentList_5048.addAssign_operation (var_selector_5305, GALGAS_optionalMethodActualArgument::constructor_actualVarInput (var_typeName_5730, var_variableName_5895  COMMA_SOURCE_FILE ("instruction-if.galgas", 167))  COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
            var_optionalMethodActualArgumentList_5048.addAssign_operation (var_selector_5305, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("instruction-if.galgas", 170))  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)) ;
          } break ;
          case 4: {
            GALGAS_lbigint var_repetitionCount_6233 = inCompiler->synthetizedAttribute_bigintValue () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 172)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 173)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsNotEqual, var_selector_5305.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("\?")) ;
                inCompiler->emitSemanticError (var_selector_5305.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 175)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_repetitionCount_6233.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 177)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_6233.readProperty_location (), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
              }
            }
            cEnumerator_range enumerator_6579 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_repetitionCount_6233.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180))), kENUMERATION_UP) ;
            while (enumerator_6579.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_5048.addAssign_operation (var_selector_5305, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 181)), enumerator_6579.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 181))  COMMA_SOURCE_FILE ("instruction-if.galgas", 181)) ;
              enumerator_6579.gotoNextObject () ;
            }
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 185)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_optionalMethodCall (var_receiverExpression_4915, var_optionalMethodName_4969, var_optionalMethodActualArgumentList_5048  COMMA_SOURCE_FILE ("instruction-if.galgas", 186))  COMMA_SOURCE_FILE ("instruction-if.galgas", 186)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_7019 ;
      nt_expression_ (var_expression_7019, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_7019  COMMA_SOURCE_FILE ("instruction-if.galgas", 193))  COMMA_SOURCE_FILE ("instruction-if.galgas", 193)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i39_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
      switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 115)) ;
      nt_expression_5F_or_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 126)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
      nt_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
          nt_expression_parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
          switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
            switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
            switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 172)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 173)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 185)) ;
    } break ;
    case 3: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_i39_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
      switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 115)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 126)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
      nt_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
          nt_expression_indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
          switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
            switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
            switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 172)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 173)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 185)) ;
    } break ;
    case 3: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  GALGAS_lstring var_typeName_1609 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  GALGAS_lstring var_constantName_1644 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_1609.readProperty_location (), var_typeName_1609, var_constantName_1644  COMMA_SOURCE_FILE ("instruction-let.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  GALGAS_lstring var_typeName_2010 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  GALGAS_lstring var_variableName_2045 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2115 ;
  nt_expression_ (var_sourceExpression_2115, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_2010.readProperty_location (), GALGAS_bool (true), var_typeName_2010, var_variableName_2045, var_sourceExpression_2115  COMMA_SOURCE_FILE ("instruction-let.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  GALGAS_lstring var_variableName_2551 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2621 ;
  nt_expression_ (var_sourceExpression_2621, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_2551.readProperty_location (), var_variableName_2551, var_sourceExpression_2621  COMMA_SOURCE_FILE ("instruction-let.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1101 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 27)) ;
  GALGAS_logListAST var_logList_1146 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_1220 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
      var_logList_1146.addAssign_operation (var_loggedVariableName_1220, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_1220  COMMA_SOURCE_FILE ("instruction-log.galgas", 32))  COMMA_SOURCE_FILE ("instruction-log.galgas", 32)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      GALGAS_lstring var_propertyName_1381 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
      var_logList_1146.addAssign_operation (var_propertyName_1381, GALGAS_structPropertyAccessExpressionAST::constructor_new (var_propertyName_1381.readProperty_location (), GALGAS_selfInExpressionAST::constructor_new (var_propertyName_1381.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-log.galgas", 39)), var_propertyName_1381  COMMA_SOURCE_FILE ("instruction-log.galgas", 39))  COMMA_SOURCE_FILE ("instruction-log.galgas", 37)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_1606 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      GALGAS_semanticExpressionAST var_logExpression_1658 ;
      nt_expression_ (var_logExpression_1658, inCompiler) ;
      var_logList_1146.addAssign_operation (var_logMessage_1606, var_logExpression_1658  COMMA_SOURCE_FILE ("instruction-log.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_1101, var_logList_1146  COMMA_SOURCE_FILE ("instruction-log.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1310 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_variantExpression_1413 ;
  nt_expression_ (var_variantExpression_1413, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_1444 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_1559 ;
  nt_semantic_5F_instruction_5F_list_ (var_firstInstructions_1559, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_1597 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  GALGAS_semanticExpressionAST var_loopExpression_1686 ;
  nt_expression_ (var_loopExpression_1686, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_1714 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_1824 ;
  nt_semantic_5F_instruction_5F_list_ (var_secondInstructions_1824, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_1856 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1945 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 46)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_1945.readProperty_string ().objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%loop")) ;
        inCompiler->emitSemanticError (var_terminator_1945.readProperty_location (), GALGAS_string ("the terminator attribute should be '%loop'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 48)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfLoopInstruction_2132 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 51)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithVariantAST::constructor_new (var_instructionLocation_1310, var_variantExpression_1413, var_endOfVariantExpression_1444, var_firstInstructions_1559, var_endOfFirstInstructions_1597, var_loopExpression_1686, var_endOfLoopExpression_1714, var_secondInstructions_1824, var_endOfSecondInstructions_1856, var_endOfLoopInstruction_2132  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  GALGAS_location var_instructionLocation_1211 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 25)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_1311 ;
  nt_semantic_5F_instruction_5F_list_ (var_firstInstructions_1311, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_1349 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_loopExpression_1438 ;
  nt_expression_ (var_loopExpression_1438, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_1466 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_1576 ;
  nt_semantic_5F_instruction_5F_list_ (var_secondInstructions_1576, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_1608 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1697 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 38)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_1697.readProperty_string ().objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%loop")) ;
        inCompiler->emitSemanticError (var_terminator_1697.readProperty_location (), GALGAS_string ("the terminator attribute should be '%loop'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 40)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfLoopInstruction_1884 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 43)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithoutVariantAST::constructor_new (var_instructionLocation_1211, var_firstInstructions_1311, var_endOfFirstInstructions_1349, var_loopExpression_1438, var_endOfLoopExpression_1466, var_secondInstructions_1576, var_endOfSecondInstructions_1608, var_endOfLoopInstruction_1884  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
  switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  GALGAS_location var_instructionLocation_895 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_expression_968 ;
  nt_expression_ (var_expression_968, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation_895, var_expression_968  COMMA_SOURCE_FILE ("instruction-message.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_994 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1076 ;
  nt_expression_ (var_mReceiverExpression_1076, inCompiler) ;
  GALGAS_lstring var_mMethodName_1110 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1187 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1187, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_994, var_mReceiverExpression_1076, var_mMethodName_1110, var_actualParameterList_1187  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_935 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1041 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1041, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_935.readProperty_location (), var_mRoutineName_935, var_actualParameterList_1041  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  GALGAS_location var_instructionLocation_909 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_996 ;
  nt_expression_ (var_sourceExpression_996, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_909, var_sourceExpression_996  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  GALGAS_location var_instructionLocation_1907 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  GALGAS_actualOutputExpressionList var_expressionList_2020 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_2020, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_1907, var_expressionList_2020  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2381 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_expression_2463 ;
  nt_expression_ (var_expression_2463, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2381, var_expression_2463  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2822 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  GALGAS_semanticExpressionAST var_expression_2904 ;
  nt_expression_ (var_expression_2904, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2822, var_expression_2904  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  GALGAS_location var_instructionLocation_3264 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  GALGAS_semanticExpressionAST var_expression_3346 ;
  nt_expression_ (var_expression_3346, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3264, var_expression_3346  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  GALGAS_location var_instructionLocation_3704 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  GALGAS_semanticExpressionAST var_expression_3786 ;
  nt_expression_ (var_expression_3786, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3704, var_expression_3786  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1391 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 31)) ;
  GALGAS_lstring var_selector_1431 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_1431.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_1431.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 34)) ;
    }
  }
  GALGAS_bool var_prefixedBySelf_1567 ;
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_1567 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    var_prefixedBySelf_1567 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_1709 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_1743 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 45)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      GALGAS_lstring var_structAttribute_1832 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
      var_mReceiverStructAttributes_1743.addAssign_operation (var_structAttribute_1832  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 50)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_1928 ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_1928 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 54)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    var_typeNameForCasting_1928 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_2073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2150 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2150, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_1391, var_prefixedBySelf_1567, var_mReceiverName_1709, var_mReceiverStructAttributes_1743, var_typeNameForCasting_1928, var_mSetterName_2073, var_actualParameterList_2150  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  GALGAS_location var_instructionLocation_2627 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  GALGAS_lstring var_selector_2667 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_2667.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_2667.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 80)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  GALGAS_lstring var_mSetterName_2819 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2896 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2896, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_2627, var_mSetterName_2819, var_actualParameterList_2896  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  GALGAS_location var_instructionLocation_1683 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
  GALGAS_semanticExpressionAST var_switchExpression_1739 ;
  nt_expression_ (var_switchExpression_1739, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1769 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
  GALGAS_switchBranchesAST var_switchBranches_1828 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    GALGAS_lstringlist var_constantNameList_1920 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1990 ;
    nt_switch_5F_case_ (var_constantNameList_1920, var_associatedValuesExtraction_1990, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    GALGAS_semanticInstructionListAST var_instructions_2052 ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions_2052, inCompiler) ;
    var_switchBranches_1828.addAssign_operation (var_constantNameList_1920, var_associatedValuesExtraction_1990, var_instructions_2052, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  GALGAS_location var_endOfSwitchInstruction_2211 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 54)) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2290 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_terminator_2290.readProperty_string ().objectCompare (GALGAS_string ("switch"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%switch")) ;
        inCompiler->emitSemanticError (var_terminator_2290.readProperty_location (), GALGAS_string ("the terminator attribute should be '%switch'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-switch.galgas", 59)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1683, var_switchExpression_1739, var_endOfSwitchExpression_1769, var_switchBranches_1828, var_endOfSwitchInstruction_2211  COMMA_SOURCE_FILE ("instruction-switch.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i58_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2982 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2982  COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 84)) ;
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_n_3178 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
        cEnumerator_range enumerator_3226 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_n_3178.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 92)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 92))), kENUMERATION_UP) ;
        while (enumerator_3226.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 93)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 93)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
          enumerator_3226.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 97)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 97)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 97)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_3471 ;
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          var_typeName_3471 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
          var_typeName_3471 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 103)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3624 ;
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3624 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
          var_constantMarkedAsUnused_3624 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3824 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3471, var_constantName_3824, var_constantMarkedAsUnused_3624  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i58_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i58_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 101)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_974 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 21)) ;
  GALGAS_lstring var_mTypeName_1027 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1105 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1182 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1182, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_974, var_mTypeName_1027, var_mMethodName_1105, var_actualParameterList_1182  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  GALGAS_lstring var_variableName_961 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1031 ;
  nt_expression_ (var_sourceExpression_1031, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_961.readProperty_location (), var_variableName_961, var_sourceExpression_1031  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 33)) ;
  GALGAS_lstring var_typeName_1415 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 34)) ;
  GALGAS_lstring var_variableName_1450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 36)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1520 ;
  nt_expression_ (var_sourceExpression_1520, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_1415.readProperty_location (), GALGAS_bool (false), var_typeName_1415, var_variableName_1450, var_sourceExpression_1520  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 36)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 36)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1929 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 50)) ;
  GALGAS_lstring var_variableName_1964 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 52)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2034 ;
  nt_expression_ (var_sourceExpression_2034, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_1929.readProperty_location (), GALGAS_bool (false), var_typeName_1929, var_variableName_1964, var_sourceExpression_2034  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 54)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("var @").add_operation (var_typeName_1929.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 63))) ;
      inCompiler->emitSemanticError (var_typeName_1929.readProperty_location (), GALGAS_string ("old style local variable declaration (due to '--error-old-style-local-var-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 62)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 52)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 52)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  GALGAS_location var_instructionLocation_1002 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1084 ;
  nt_expression_ (var_mReceiverExpression_1084, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_1156 ;
  nt_expression_ (var_mWarningExpression_1156, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_1206 ;
  nt_issue_5F_fixit_ (var_fixitListAST_1206, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_1002, var_mReceiverExpression_1084, var_mWarningExpression_1156, var_fixitListAST_1206  COMMA_SOURCE_FILE ("instruction-warning.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i64_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  GALGAS_location var_instructionLocation_2114 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 45)) ;
  GALGAS_semanticExpressionAST var_keyExpression_2190 ;
  nt_expression_ (var_keyExpression_2190, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_2217 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 47)) ;
  GALGAS_lstring var_withPrefix_2262 ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
    var_withPrefix_2262 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 50))  COMMA_SOURCE_FILE ("instruction-with.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    var_withPrefix_2262 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_2114, var_keyExpression_2190, var_endOfKeyExpression_2217, var_withPrefix_2262, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2577 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 60)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_terminator_2577.readProperty_string ().objectCompare (GALGAS_string ("with"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%with")) ;
        inCompiler->emitSemanticError (var_terminator_2577.readProperty_location (), GALGAS_string ("the terminator attribute should be '%with'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 62)) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i64_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i64_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("instruction-with.galgas", 60)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_3166 ;
  nt_expression_ (var_receiverExpression_3166, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_3198 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 77)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_3266 ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_3266 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
    var_searchMethodNameForErrorSignaling_3266 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_3527 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_3527, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_3555 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 88)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_3632 ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_3632 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 91)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_3266.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_3266.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 95)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_3632, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_3166, var_endOfReceiverExpression_3198, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_3266, var_mDoBranchInstructions_3527, var_endOfDoInstructions_3555, var_mElseBranchInstructions_3632, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 110))  COMMA_SOURCE_FILE ("instruction-with.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 84)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 86)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 93)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4693 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 123)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4693.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4693.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 125)) ;
    }
  }
  GALGAS_lstringlist var_structAttributeList_4828 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 127)) ;
  GALGAS_bool var_targetIsPrefixedBySelf_4883 ;
  GALGAS_lstring var_targetObjectName_4917 ;
  switch (select_galgas_33_InstructionsSyntax_80 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_4883 = GALGAS_bool (false) ;
    var_targetObjectName_4917 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 135)) ;
        GALGAS_lstring var_mStructFieldName_5082 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 136)) ;
        var_structAttributeList_4828.addAssign_operation (var_mStructFieldName_5082  COMMA_SOURCE_FILE ("instruction-with.galgas", 137)) ;
      } break ;
      default:
        repeatFlag_2 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    var_targetIsPrefixedBySelf_4883 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
    switch (select_galgas_33_InstructionsSyntax_82 (inCompiler)) {
    case 1: {
      var_targetObjectName_4917 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
      var_targetObjectName_4917 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 146)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 149)) ;
          GALGAS_lstring var_mStructFieldName_5395 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
          var_structAttributeList_4828.addAssign_operation (var_mStructFieldName_5395  COMMA_SOURCE_FILE ("instruction-with.galgas", 151)) ;
        } break ;
        default:
          repeatFlag_3 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfReceiverExpression_5508 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 155)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_5576 ;
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_5576 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 158)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 160)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 161)) ;
    var_searchMethodNameForErrorSignaling_5576 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 162)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_5837 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_5837, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_5867 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 166)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_5944 ;
  switch (select_galgas_33_InstructionsSyntax_85 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_5944 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 169)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 171)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_5576.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_5576.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 173)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_5944, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_6280 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 177)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_4917, var_targetIsPrefixedBySelf_4883, var_structAttributeList_4828, var_endOfReceiverExpression_5508, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_5576, var_mDoBranchInstructions_5837, var_endOf_5F_do_5F_instructions_5867, var_mElseBranchInstructions_5944, var_endOf_5F_else_5F_instructions_6280  COMMA_SOURCE_FILE ("instruction-with.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 123)) ;
  switch (select_galgas_33_InstructionsSyntax_80 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 135)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 136)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
    switch (select_galgas_33_InstructionsSyntax_82 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 146)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 149)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 160)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 161)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 162)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 171)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 123)) ;
  switch (select_galgas_33_InstructionsSyntax_80 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 135)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 136)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
    switch (select_galgas_33_InstructionsSyntax_82 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 146)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 149)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-with.galgas", 160)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("instruction-with.galgas", 161)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 162)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 171)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 25)) ;
    } break ;
    case 3: {
      nt_declaration_ (ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 25)) ;
    } break ;
    case 3: {
      nt_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 25)) ;
    } break ;
    case 3: {
      nt_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  GALGAS_bool var_isPublic_2527 ;
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
    var_isPublic_2527 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 52)) ;
    var_isPublic_2527 = GALGAS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 55)) ;
    var_isPublic_2527 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isConstant_2683 ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 60)) ;
    var_isConstant_2683 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 63)) ;
    var_isConstant_2683 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeTypeName_2817 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 66)) ;
  GALGAS_bool var_isOptional_2842 ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
    var_isOptional_2842 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_selector_2908 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 71)) ;
    var_isOptional_2842 = GALGAS_bool (true) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_selector_2908.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_selector_2908.readProperty_location (), GALGAS_string ("only '\?' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 74)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeName_3070 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 77)) ;
  GALGAS_lstringlist var_featureList_3090 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 78)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_3174 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 81)) ;
      var_featureList_3090.addAssign_operation (var_featureName_3174  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_propertyInCollectionInitializationAST var_initialization_3278 ;
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
    var_initialization_3278 = GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 86)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 88)) ;
    GALGAS_semanticExpressionAST var_expression_3370 ;
    nt_expression_ (var_expression_3370, inCompiler) ;
    var_initialization_3278 = GALGAS_propertyInCollectionInitializationAST::constructor_some (var_expression_3370  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 90)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_isConstant_2683, var_attributeTypeName_2817, var_isOptional_2842, var_attributeName_3070, var_isPublic_2527, var_featureList_3090, var_initialization_3278  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 52)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 66)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 88)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_public COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 52)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 66)) ;
  switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 81)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 88)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_propertyTypeName_3881 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 105)) ;
  GALGAS_lstring var_propertyName_3916 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 106)) ;
  GALGAS_lstringlist var_featureList_3936 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_4020 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 110)) ;
      var_featureList_3936.addAssign_operation (var_featureName_4020  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 111)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_propertyInCollectionInitializationAST var_initialization_4124 ;
  switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
  case 1: {
    var_initialization_4124 = GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 115)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 117)) ;
    GALGAS_semanticExpressionAST var_expression_4216 ;
    nt_expression_ (var_expression_4216, inCompiler) ;
    var_initialization_4124 = GALGAS_propertyInCollectionInitializationAST::constructor_some (var_expression_4216  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 119)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (GALGAS_bool (false), var_propertyTypeName_3881, GALGAS_bool (false), var_propertyName_3916, GALGAS_bool (true), var_featureList_3936, var_initialization_4124  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 121)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location var_errorLocation_4562 = var_propertyTypeName_3881.readProperty_location ().getter_union (var_propertyName_3916.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 130)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("public let @").add_operation (var_propertyTypeName_3881.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 133)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 133)).add_operation (var_propertyName_3916.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 133))) ;
      inCompiler->emitSemanticError (var_errorLocation_4562, GALGAS_string ("old style property declaration (due to '--error-old-style-property-declaration' option)"), fixItArray2  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 131)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 106)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 110)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 117)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 105)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 106)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 110)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 117)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
  GALGAS_lstring var_mFilewrapperName_5238 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  GALGAS_lstring var_mFilewrapperPath_5324 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_5391 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_5391, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_5462 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_5462, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_5519 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_5519, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 153)), var_mFilewrapperName_5238, var_mFilewrapperPath_5324, var_filewrapperTextFileExtensionList_5391, var_filewrapperBinaryFileExtensionList_5462, var_filewrapperTemplateList_5519  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 150))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 150)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 143)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 144)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 145)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 146)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 165)) ;
  GALGAS_lstring var_mFilewrapperName_6123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 166)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 167)) ;
  GALGAS_lstring var_mFilewrapperPath_6209 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_6276 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_6276, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_6347 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_6347, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_6404 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_6404, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 175)), var_mFilewrapperName_6123, var_mFilewrapperPath_6209, var_filewrapperTextFileExtensionList_6276, var_filewrapperBinaryFileExtensionList_6347, var_filewrapperTemplateList_6404  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 172))  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 165)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 166)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 165)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 166)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 167)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 168)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 187)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 188)) ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_7081 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 192)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_7081  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 193)) ;
      switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 195)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 188)) ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 192)) ;
      switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 195)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 198)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 188)) ;
  switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 192)) ;
      switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 195)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 204)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 205)) ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_7541 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 209)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_7541  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 210)) ;
      switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 212)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 215)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 205)) ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 209)) ;
      switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 212)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 215)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 205)) ;
  switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 209)) ;
      switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 212)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 215)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_ (GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 221)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 222)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 225)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_8002 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 226)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_8049 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_8137 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 228)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_8193 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 231)) ;
          GALGAS_lstring var_typeName_8232 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 232)) ;
          GALGAS_bool var_isUnused_8259 ;
          switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
          case 1: {
            var_isUnused_8259 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 237)) ;
            var_isUnused_8259 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_8408 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 240)) ;
          var_filewrapperTemplateFormalInputParameters_8137.addAssign_operation (var_selector_8193, var_typeName_8232, var_argumentName_8408, var_isUnused_8259  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 241)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_8002, var_mFilewrapperTemplatePath_8049, var_filewrapperTemplateFormalInputParameters_8137  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 243)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 248)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 225)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 226)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 231)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 232)) ;
          switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 237)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 240)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 248)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 221)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 225)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 226)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 227)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 231)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 232)) ;
          switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 237)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 240)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas", 248)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  GALGAS_lstring var_arrayTypeName_1050 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  GALGAS_lstring var_elementListTypeName_1133 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  GALGAS_lbigint var_dimension_1208 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName_1050, var_elementListTypeName_1133, var_dimension_1208  COMMA_SOURCE_FILE ("type-array.galgas", 28))  COMMA_SOURCE_FILE ("type-array.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_array COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("type-array.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  GALGAS_lstring var_boolsetTypeName_1000 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 21)) ;
  GALGAS_lstringlist var_slotList_1064 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_slotName_1113 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 24)) ;
    var_slotList_1064.addAssign_operation (var_slotName_1113  COMMA_SOURCE_FILE ("type-boolset.galgas", 25)) ;
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 29)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool (false), var_boolsetTypeName_1000, var_slotList_1064  COMMA_SOURCE_FILE ("type-boolset.galgas", 30))  COMMA_SOURCE_FILE ("type-boolset.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 24)) ;
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_boolset COMMA_SOURCE_FILE ("type-boolset.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-boolset.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-boolset.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-boolset.galgas", 24)) ;
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-boolset.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-boolset.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  GALGAS_bool var_isAbstract_1331 ;
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
    var_isAbstract_1331 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 31)) ;
    var_isAbstract_1331 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_isReference_1449 ;
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 36)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorClassDeclaration.readProperty_value ()).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 38)), GALGAS_string ("'class' declaration is obsolete, use 'valueclass'"), fixItArray1  COMMA_SOURCE_FILE ("type-class.galgas", 38)) ;
      }
    }
    var_isReference_1449 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 44)) ;
    var_isReference_1449 = GALGAS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    var_isReference_1449 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = var_isReference_1449.operator_not (SOURCE_FILE ("type-class.galgas", 50)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorValueClassDeclaration.readProperty_value ()) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 51)), GALGAS_string ("'value class' is obsolete, use 'refclass'"), fixItArray4  COMMA_SOURCE_FILE ("type-class.galgas", 51)) ;
    }
  }
  GALGAS_lstring var_className_2052 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
  GALGAS_lstring var_superClassName_2109 ;
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
    var_superClassName_2109 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 58)) ;
    var_superClassName_2109 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList_2300 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 61)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName_2389 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 64)) ;
      var_classFeatureList_2300.addAssign_operation (var_classFeatureName_2389  COMMA_SOURCE_FILE ("type-class.galgas", 65)) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 67)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2523 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 69)) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2523, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_6 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 76)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_isAbstract_1331, var_isReference_1449, var_className_2052, var_superClassName_2109, var_classFeatureList_2300, var_propertyList_2523  COMMA_SOURCE_FILE ("type-class.galgas", 77))  COMMA_SOURCE_FILE ("type-class.galgas", 77)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isReference_1449.boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_lstring temp_8 ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_superClassName_2109.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = var_superClassName_2109 ;
      }else if (kBoolFalse == test_9) {
        temp_8 = GALGAS_lstring::constructor_new (var_superClassName_2109.readProperty_string ().add_operation (GALGAS_string ("-weak"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 93)), var_superClassName_2109.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 93)) ;
      }
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool (false), var_className_2052, GALGAS_lstring::constructor_new (var_className_2052.readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 90)), var_className_2052.readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 90)), temp_8, var_classFeatureList_2300, var_propertyList_2523  COMMA_SOURCE_FILE ("type-class.galgas", 87))  COMMA_SOURCE_FILE ("type-class.galgas", 87)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 44)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 58)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 67)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("type-class.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_class COMMA_SOURCE_FILE ("type-class.galgas", 36)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_valueclass COMMA_SOURCE_FILE ("type-class.galgas", 44)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_refclass COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 53)) ;
  switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-class.galgas", 58)) ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-class.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-class.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-class.galgas", 67)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-class.galgas", 74)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-class.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  GALGAS_lstring var_mEnumTypeName_1277 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 29)) ;
  GALGAS_enumConstantList var_mConstantList_1349 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 32)) ;
    GALGAS_lstring var_constantName_1415 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 33)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_1463 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 34)) ;
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_1560 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        GALGAS_lstring var_associatedValueName_1608 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 40)) ;
        var_associatedValueTypeList_1463.addAssign_operation (var_associatedValueType_1560, var_associatedValueName_1608  COMMA_SOURCE_FILE ("type-enum.galgas", 41)) ;
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_1349.addAssign_operation (var_constantName_1415, var_associatedValueTypeList_1463  COMMA_SOURCE_FILE ("type-enum.galgas", 46)) ;
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_defaultConstantName_1852 ;
  switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
  case 1: {
    var_defaultConstantName_1852 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-enum.galgas", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
    var_defaultConstantName_1852 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_1277, var_mConstantList_1349, var_defaultConstantName_1852  COMMA_SOURCE_FILE ("type-enum.galgas", 57))  COMMA_SOURCE_FILE ("type-enum.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 32)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 33)) ;
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 40)) ;
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_enum COMMA_SOURCE_FILE ("type-enum.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-enum.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("type-enum.galgas", 32)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 33)) ;
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-enum.galgas", 37)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 40)) ;
        switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-enum.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-enum.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  GALGAS_lstring var_externTypeName_2700 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  GALGAS_string var_cppPredeclarationCode_2793 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_2793, inCompiler) ;
  GALGAS_string var_cppClassCode_2849 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_2849, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_2918 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 69)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_2975 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 70)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_3031 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 71)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_3087 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (var_externTypeConstructorList_2918, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (var_externTypeGetterList_2975, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (var_externTypeSetterList_3031, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (var_externTypeMethodList_3087, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_2700, var_cppPredeclarationCode_2793, var_cppClassCode_2849, var_externTypeConstructorList_2918, var_externTypeGetterList_2975, var_externTypeSetterList_3031, var_externTypeMethodList_3087  COMMA_SOURCE_FILE ("type-extern.galgas", 84))  COMMA_SOURCE_FILE ("type-extern.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgasScanner * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_3990 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_3990.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_4386 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_4386.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_ (GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  GALGAS_lstring var_constructorName_4746 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_4804 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4854 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      GALGAS_lstring var_argumentTypeName_4899 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      GALGAS_lstring var_argumentName_4945 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
      var_argumentTypeList_4804.addAssign_operation (var_selector_4854, var_argumentTypeName_4899, var_argumentName_4945  COMMA_SOURCE_FILE ("type-extern.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  GALGAS_lstring var_resultTypeName_5071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_4746, var_resultTypeName_5071, var_argumentTypeList_4804  COMMA_SOURCE_FILE ("type-extern.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_constructor COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_ (GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  GALGAS_lstring var_getterName_5415 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_5473 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_5523 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      GALGAS_lstring var_argumentTypeName_5568 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      GALGAS_lstring var_argumentName_5614 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
      var_argumentTypeList_5473.addAssign_operation (var_selector_5523, var_argumentTypeName_5568, var_argumentName_5614  COMMA_SOURCE_FILE ("type-extern.galgas", 151)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  GALGAS_lstring var_resultTypeName_5740 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_5415, var_resultTypeName_5740, var_argumentTypeList_5473  COMMA_SOURCE_FILE ("type-extern.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_ (GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  GALGAS_lstring var_setterName_6074 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6151 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_6151, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_6074, var_formalParameterList_6151  COMMA_SOURCE_FILE ("type-extern.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_ (GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  GALGAS_lstring var_methodName_6472 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6549 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_6549, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_6472, var_formalParameterList_6549, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 173))  COMMA_SOURCE_FILE ("type-extern.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  GALGAS_lstring var_graphTypeName_1302 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  GALGAS_lstring var_associatedListTypeName_1384 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 33)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_1432 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      GALGAS_lstring var_insertName_1542 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 40)) ;
      GALGAS_lstring var_errorMessage_1616 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 41)) ;
      var_graphInsertModifierList_1432.addAssign_operation (var_insertName_1542, var_errorMessage_1616  COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 44)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_1302, var_associatedListTypeName_1384, var_graphInsertModifierList_1432  COMMA_SOURCE_FILE ("type-graph.galgas", 45))  COMMA_SOURCE_FILE ("type-graph.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 40)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 44)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_graph COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-graph.galgas", 32)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-graph.galgas", 33)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-graph.galgas", 40)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-graph.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-graph.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  GALGAS_lstring var_listTypeName_1008 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 21)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1119 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_ (var_propertyList_1119, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 27)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 31)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_1008, var_propertyList_1119  COMMA_SOURCE_FILE ("type-list.galgas", 32))  COMMA_SOURCE_FILE ("type-list.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 27)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_list COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-list.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-list.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-list.galgas", 27)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-list.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  GALGAS_lstring var_mListmapTypeName_1014 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  GALGAS_lstring var_mAssociatedListTypeName_1099 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 24)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_1014, var_mAssociatedListTypeName_1099  COMMA_SOURCE_FILE ("type-listmap.galgas", 25))  COMMA_SOURCE_FILE ("type-listmap.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_listmap COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("type-listmap.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  GALGAS_lstring var_mDictTypeName_1334 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  GALGAS_lstring var_keyTypeName_1449 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  GALGAS_lstringlist var_mapAttributeList_1509 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_1569 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
      var_mapAttributeList_1509.addAssign_operation (var_attribute_1569  COMMA_SOURCE_FILE ("type-dict.galgas", 38)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1665 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 42)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_1665, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool (false), var_mDictTypeName_1334, var_keyTypeName_1449, var_mapAttributeList_1509, var_propertyList_1665  COMMA_SOURCE_FILE ("type-dict.galgas", 50))  COMMA_SOURCE_FILE ("type-dict.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_dict COMMA_SOURCE_FILE ("type-dict.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("type-dict.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-dict.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-dict.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-dict.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("type-dict.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-dict.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 59)) ;
  GALGAS_lstring var_mMapTypeName_2548 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  GALGAS_lstringlist var_mapAttributeList_2660 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2720 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 66)) ;
      var_mapAttributeList_2660.addAssign_operation (var_attribute_2720  COMMA_SOURCE_FILE ("type-map.galgas", 67)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 70)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2816 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 71)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_2876 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 72)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_2952 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 73)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_3007 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 74)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_3089 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 75)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2816, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_2876, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_2952, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_3007, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_3089, inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_ (var_mMapTypeName_2548, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_2548, var_mapAttributeList_2660, var_propertyList_2816, var_mInsertMethodList_2876, var_mSearchMethodList_2952, var_mRemoveMethodList_3007, var_insertOrReplaceDeclarationListAST_3089  COMMA_SOURCE_FILE ("type-map.galgas", 91))  COMMA_SOURCE_FILE ("type-map.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 59)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 66)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 70)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_map COMMA_SOURCE_FILE ("type-map.galgas", 59)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 66)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-map.galgas", 70)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-map.galgas", 90)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 106)) ;
  GALGAS_lstring var_methodName_4060 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 107)) ;
  GALGAS_bool var_locationAttribute_4092 ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    var_locationAttribute_4092 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_attribute_4176 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 112)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_attribute_4176.readProperty_string ().objectCompare (GALGAS_string ("location"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_locationAttribute_4092 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%location")) ;
      inCompiler->emitSemanticError (var_attribute_4176.readProperty_location (), GALGAS_string ("only the %location is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 116)) ;
      var_locationAttribute_4092.drop () ; // Release error dropped variable
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 120)) ;
  GALGAS_lstring var_errorMessage_4464 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_methodName_4060, var_errorMessage_4464, var_locationAttribute_4092  COMMA_SOURCE_FILE ("type-map.galgas", 122)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 106)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 107)) ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_search COMMA_SOURCE_FILE ("type-map.galgas", 106)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 107)) ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_attribute COMMA_SOURCE_FILE ("type-map.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 128)) ;
  GALGAS_lstring var_mMethodName_4805 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  GALGAS_lstring var_mErrorMessage_4874 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_4805, var_mErrorMessage_4874  COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_remove COMMA_SOURCE_FILE ("type-map.galgas", 128)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 129)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 130)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 131)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 142))  COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 139)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_or COMMA_SOURCE_FILE ("type-map.galgas", 140)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_replace COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 148)) ;
  GALGAS_lstring var_mMethodName_5533 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 158)) ;
  GALGAS_lstring var_mErrorMessage_5765 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  GALGAS_lstring var_mShadowErrorMessage_5802 ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5802 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 162))  COMMA_SOURCE_FILE ("type-map.galgas", 162)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 164)) ;
    var_mShadowErrorMessage_5802 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_5533, var_mErrorMessage_5765, var_mShadowErrorMessage_5802  COMMA_SOURCE_FILE ("type-map.galgas", 167)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 148)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 158)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 164)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_insert COMMA_SOURCE_FILE ("type-map.galgas", 148)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-map.galgas", 149)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("type-map.galgas", 157)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_message COMMA_SOURCE_FILE ("type-map.galgas", 158)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 159)) ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-map.galgas", 164)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("type-map.galgas", 165)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i28_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  GALGAS_lstring var_sortedListTypeName_1334 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_1452 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_attributeList_1452, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 38)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_1608 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1608, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_1334, var_attributeList_1452, var_sortDescriptorList_1608  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 46))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_sortedlist COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 38)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_2184 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 57)) ;
  GALGAS_bool var_mAscending_2209 ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
    var_mAscending_2209 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 63)) ;
    var_mAscending_2209 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_2184, var_mAscending_2209  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 57)) ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("type-sorted-list.galgas", 57)) ;
  switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("type-sorted-list.galgas", 63)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i30_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  GALGAS_lstring var_structTypeName_1107 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 22)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_1191 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_1191, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_structTypeName_1107, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_1107, var_propertyList_1191, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 31))  COMMA_SOURCE_FILE ("type-struct.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_struct COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("type-struct.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("type-struct.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("type-struct.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i31_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  GALGAS_lstring var_className_1168 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_mGetterName_1248 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1385 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1385, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  GALGAS_lstring var_mReturnedTypeName_1438 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_1485 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1485.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1168, var_mGetterName_1248, var_mFormalInputParameterList_1385, var_mReturnedTypeName_1438  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i32_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 46)) ;
  GALGAS_lstring var_mGetterName_2064 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2201 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_2201, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)) ;
  GALGAS_lstring var_mReturnedTypeName_2254 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 50)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_2301 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2301.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 54)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_2064, var_mFormalInputParameterList_2201, var_mReturnedTypeName_2254  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 50)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 47)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 50)) ;
  switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i33_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  GALGAS_lstring var_className_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1189 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1309 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1309, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1100, var_mMethodName_1189, var_formalParameterList_1309  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i33_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i34_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  GALGAS_lstring var_mMethodName_1778 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1898 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1898, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_1778, var_formalParameterList_1898  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 40))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 37)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 38)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  GALGAS_lstring var_className_1103 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_setterName_1191 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1311 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1311, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1103, var_setterName_1191, var_formalParameterList_1311  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  GALGAS_lstring var_className_1372 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  GALGAS_lstring var_mMethodName_1453 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1553 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1553, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1606 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1642 ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    var_resultVariableName_1642 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1642 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 35))  COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1854 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1854, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1893 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1372, var_mMethodName_1453, var_mFormalInputParameterList_1553, var_mReturnedTypeName_1606, var_resultVariableName_1642, var_routineInstructionList_1854, var_endOfInstructionList_1893  COMMA_SOURCE_FILE ("extension-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i37_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 57)) ;
  GALGAS_lstring var_mMethodName_2581 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 58)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2681 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_2681, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  GALGAS_lstring var_mReturnedTypeName_2734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 61)) ;
  GALGAS_lstring var_resultVariableName_2770 ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_resultVariableName_2770 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 64)) ;
  } break ;
  case 2: {
    var_resultVariableName_2770 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 66))  COMMA_SOURCE_FILE ("extension-getter.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2982 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2982, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3021 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 70)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2581, var_mFormalInputParameterList_2681, var_mReturnedTypeName_2734, var_resultVariableName_2770, var_routineInstructionList_2982, var_endOfInstructionList_3021  COMMA_SOURCE_FILE ("extension-getter.galgas", 72))  COMMA_SOURCE_FILE ("extension-getter.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 58)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 61)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 64)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-getter.galgas", 57)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 58)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-getter.galgas", 61)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas", 64)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas", 68)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  GALGAS_lstring var_className_1247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  GALGAS_lstring var_mMethodName_1328 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1440 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1440, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1536 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1536, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1564 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1247, var_mMethodName_1328, var_formalParameterList_1440, var_routineInstructionList_1536, var_endOfMethodLocation_1564  COMMA_SOURCE_FILE ("extension-method.galgas", 32))  COMMA_SOURCE_FILE ("extension-method.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-method.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i39_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 46)) ;
  GALGAS_lstring var_mMethodName_2194 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 47)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2306 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2306, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 49)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2402 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2402, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2430 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 52)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2194, var_formalParameterList_2306, var_routineInstructionList_2402, var_endOfMethodLocation_2430  COMMA_SOURCE_FILE ("extension-method.galgas", 53))  COMMA_SOURCE_FILE ("extension-method.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i39_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 49)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 52)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i39_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-method.galgas", 46)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas", 47)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas", 49)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  GALGAS_lstring var_className_1257 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  GALGAS_lstring var_setterName_1337 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1449 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1449, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1545 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1545, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1583 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1257, var_setterName_1337, var_formalParameterList_1449, var_routineInstructionList_1545, var_endOfSetterLocation_1583  COMMA_SOURCE_FILE ("extension-setter.galgas", 31))  COMMA_SOURCE_FILE ("extension-setter.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i41_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
  GALGAS_lstring var_setterName_2211 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2323 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2323, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2419 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2419, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_2457 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 51)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_setterName_2211, var_formalParameterList_2323, var_routineInstructionList_2419, var_endOfSetterLocation_2457  COMMA_SOURCE_FILE ("extension-setter.galgas", 52))  COMMA_SOURCE_FILE ("extension-setter.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i41_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 51)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i41_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-setter.galgas", 45)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas", 46)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas", 48)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_className_1193 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  GALGAS_lstring var_mGetterName_1281 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1426 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1426, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  GALGAS_lstring var_mReturnedTypeName_1479 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_1519 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1519.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1193, var_mGetterName_1281, var_mFormalInputParameterList_1426, var_mReturnedTypeName_1479  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i43_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  GALGAS_lstring var_mGetterName_2130 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 49)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_2275 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_2275, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 51)) ;
  GALGAS_lstring var_mReturnedTypeName_2328 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 52)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_2368 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.appendObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_2368.readProperty_location (), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 55)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mGetterName_2130, var_mFormalInputParameterList_2275, var_mReturnedTypeName_2328  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i43_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 49)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 52)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i43_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 48)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 49)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 52)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_className_1129 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1226 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1354 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1354, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1129, var_mMethodName_1226, var_formalParameterList_1354  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i45_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  GALGAS_lstring var_mMethodName_1848 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1976 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1976, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), constinArgument_inClassName, var_mMethodName_1848, var_formalParameterList_1976  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 42))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i45_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i45_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 39)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 40)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1132 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1228 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1356 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1356, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1132, var_setterName_1228, var_formalParameterList_1356  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i46_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i47_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  GALGAS_lstring var_className_1447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  GALGAS_lstring var_mMethodName_1536 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 28)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_1643 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_1643, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  GALGAS_lstring var_mReturnedTypeName_1696 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 31)) ;
  GALGAS_lstring var_resultVariableName_1732 ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    var_resultVariableName_1732 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 34)) ;
  } break ;
  case 2: {
    var_resultVariableName_1732 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 36))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 36)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 38)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1944 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1944, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1983 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1447, var_mMethodName_1536, var_formalInputParameterList_1643, var_mReturnedTypeName_1696, var_resultVariableName_1732, var_routineInstructionList_1944, var_endOfInstructionList_1983  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i47_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 28)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 31)) ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 34)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i47_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 28)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 31)) ;
  switch (select_galgas_33_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 34)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 38)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i48_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 59)) ;
  GALGAS_lstring var_mMethodName_2695 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 60)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_2802 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_2802, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  GALGAS_lstring var_mReturnedTypeName_2855 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 63)) ;
  GALGAS_lstring var_resultVariableName_2891 ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    var_resultVariableName_2891 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  } break ;
  case 2: {
    var_resultVariableName_2891 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_3103 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_3103, inCompiler) ;
  GALGAS_location var_endOfInstructionList_3142 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2695, var_formalInputParameterList_2802, var_mReturnedTypeName_2855, var_resultVariableName_2891, var_routineInstructionList_3103, var_endOfInstructionList_3142  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 74))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i48_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 59)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 60)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i48_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_getter COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 59)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 60)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 63)) ;
  switch (select_galgas_33_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 66)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 70)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i49_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  GALGAS_lstring var_className_1301 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  GALGAS_lstring var_mMethodName_1400 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 26)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1520 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1520, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1616 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1616, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1654 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1301, var_mMethodName_1400, var_formalParameterList_1520, var_routineInstructionList_1616, var_endOfMethodLocation_1654  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i49_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i49_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 26)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 28)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i50_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                         GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 47)) ;
  GALGAS_lstring var_mMethodName_2309 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 48)) ;
  GALGAS_formalParameterListAST var_formalParameterList_2429 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_2429, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_2525 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_2525, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_2563 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 53)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), constinArgument_inClassName, var_mMethodName_2309, var_formalParameterList_2429, var_routineInstructionList_2525, var_endOfMethodLocation_2563  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i50_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_method_5F_declaration_i50_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_method COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 47)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 48)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i51_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  GALGAS_lstring var_className_1312 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  GALGAS_lstring var_setterName_1451 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1571 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1571, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 29)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1667 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1667, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1705 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 32)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool (false), GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.readProperty_value ()), var_className_1312, var_setterName_1451, var_formalParameterList_1571, var_routineInstructionList_1667, var_endOfSetterLocation_1705  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 33))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i51_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 29)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 32)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i51_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_override COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_setter COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 29)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 19)) ;
  GALGAS_lstring var_typeName_989 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  GALGAS_lstring var_variableName_1024 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_989.readProperty_location (), var_typeName_989, var_variableName_1024  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1348 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
  GALGAS_lstring var_variableName_1383 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_1348.readProperty_location (), var_typeName_1348, var_variableName_1383  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("var @").add_operation (var_typeName_1348.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 33))) ;
      inCompiler->emitSemanticError (var_typeName_1348.readProperty_location (), GALGAS_string ("old style local variable declaration (due to '--error-old-style-local-var-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 32)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
}

