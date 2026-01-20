#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "syntax-dangling-5Felse-5Fsolution-5Fsyntax.h"



//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  nt_non_5F_closed_5F_instruction_ (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  nt_non_5F_closed_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  nt_non_5F_closed_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  nt_closed_5F_instruction_ (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  nt_closed_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  nt_closed_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_O COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 16)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_O COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 16)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_O COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 16)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 20)) ;
  nt_closed_5F_instruction_ (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 22)) ;
  nt_closed_5F_instruction_ (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 20)) ;
  nt_closed_5F_instruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 22)) ;
  nt_closed_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 20)) ;
  nt_closed_5F_instruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 22)) ;
  nt_closed_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 27)) ;
  nt_S_ (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 27)) ;
  nt_S_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 27)) ;
  nt_S_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 32)) ;
  nt_closed_5F_instruction_ (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 34)) ;
  nt_non_5F_closed_5F_instruction_ (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 32)) ;
  nt_closed_5F_instruction_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 34)) ;
  nt_non_5F_closed_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_dangling_5F_else_5F_solution_5F_syntax::rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 32)) ;
  nt_closed_5F_instruction_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E COMMA_SOURCE_FILE ("dangling_else_solution_syntax.galgas", 34)) ;
  nt_non_5F_closed_5F_instruction_indexing (inCompiler) ;
}

