#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "syntax-+l+r1-5Fgrammar-5Fsyntax.h"



//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_S_i0_ (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  nt_C_ (inCompiler) ;
  nt_C_ (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_S_i0_parse (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  nt_C_parse (inCompiler) ;
  nt_C_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_S_i0_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  nt_C_indexing (inCompiler) ;
  nt_C_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_C_i1_ (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_LR_31__5F_grammar_5F_lexique::kToken_c COMMA_SOURCE_FILE ("LR1_grammar_syntax.galgas", 9)) ;
  nt_C_ (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_C_i1_parse (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_LR_31__5F_grammar_5F_lexique::kToken_c COMMA_SOURCE_FILE ("LR1_grammar_syntax.galgas", 9)) ;
  nt_C_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_C_i1_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_LR_31__5F_grammar_5F_lexique::kToken_c COMMA_SOURCE_FILE ("LR1_grammar_syntax.galgas", 9)) ;
  nt_C_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_C_i2_ (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_LR_31__5F_grammar_5F_lexique::kToken_d COMMA_SOURCE_FILE ("LR1_grammar_syntax.galgas", 12)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_C_i2_parse (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_LR_31__5F_grammar_5F_lexique::kToken_d COMMA_SOURCE_FILE ("LR1_grammar_syntax.galgas", 12)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_LR_31__5F_grammar_5F_syntax::rule_LR_31__5F_grammar_5F_syntax_C_i2_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_LR_31__5F_grammar_5F_lexique::kToken_d COMMA_SOURCE_FILE ("LR1_grammar_syntax.galgas", 12)) ;
}

