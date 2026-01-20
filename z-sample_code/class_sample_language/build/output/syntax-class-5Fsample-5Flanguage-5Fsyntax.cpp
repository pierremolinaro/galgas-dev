#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-class+with+super+class+a+s+t.h"
#include "class-class+without+super+class+a+s+t.h"
#include "list-declaration+list+a+s+t.h"
#include "syntax-class-5Fsample-5Flanguage-5Fsyntax.h"



//------------------------------------------------------------------------------------------------

void cParser_class_5F_sample_5F_language_5F_syntax::rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_ (GGS_declarationListAST & outArgument_outDeclarationListAST,
                                                                                                                    Lexique_class_5F_sample_5F_language_5F_lexique * inCompiler) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  outArgument_outDeclarationListAST = GGS_declarationListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_class_5F_sample_5F_language_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_class COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 9)) ;
      GGS_lstring var_className_290 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_class_5F_sample_5F_language_5F_lexique::kIndexing_classDefinition, "") ;
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 10)) ;
      switch (select_class_5F_sample_5F_language_5F_syntax_1 (inCompiler)) {
      case 1: {
        outArgument_outDeclarationListAST.addAssignOperation (GGS_classWithoutSuperClassAST::init_21_ (var_className_290, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 12)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 14)) ;
        GGS_lstring var_superClassName_459 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->enterIndexing (Lexique_class_5F_sample_5F_language_5F_lexique::kIndexing_superClassReference, "") ;
        inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 15)) ;
        outArgument_outDeclarationListAST.addAssignOperation (GGS_classWithSuperClassAST::init_21__21_ (var_className_290, var_superClassName_459, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 16)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_class_5F_sample_5F_language_5F_syntax::rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_parse (Lexique_class_5F_sample_5F_language_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_class_5F_sample_5F_language_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_class COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 9)) ;
      inCompiler->enterIndexing (Lexique_class_5F_sample_5F_language_5F_lexique::kIndexing_classDefinition, "") ;
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 10)) ;
      switch (select_class_5F_sample_5F_language_5F_syntax_1 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 14)) ;
        inCompiler->enterIndexing (Lexique_class_5F_sample_5F_language_5F_lexique::kIndexing_superClassReference, "") ;
        inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 15)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_class_5F_sample_5F_language_5F_syntax::rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_indexing (Lexique_class_5F_sample_5F_language_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_class_5F_sample_5F_language_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_class COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 9)) ;
      inCompiler->enterIndexing (Lexique_class_5F_sample_5F_language_5F_lexique::kIndexing_classDefinition, "") ;
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 10)) ;
      switch (select_class_5F_sample_5F_language_5F_syntax_1 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 14)) ;
        inCompiler->enterIndexing (Lexique_class_5F_sample_5F_language_5F_lexique::kIndexing_superClassReference, "") ;
        inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 15)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("class_sample_language_syntax.galgas", 18)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

