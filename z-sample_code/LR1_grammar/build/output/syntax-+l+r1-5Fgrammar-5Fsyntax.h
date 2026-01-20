#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-+l+r1-5Fgrammar-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'LR1_grammar_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_LR_31__5F_grammar_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_LR_31__5F_grammar_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_C_ (class Lexique_LR_31__5F_grammar_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_C_parse (class Lexique_LR_31__5F_grammar_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_C_indexing (class Lexique_LR_31__5F_grammar_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_S_ (class Lexique_LR_31__5F_grammar_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_S_parse (class Lexique_LR_31__5F_grammar_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_S_indexing (class Lexique_LR_31__5F_grammar_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_LR_31__5F_grammar_5F_syntax_S_i0_ (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_S_i0_parse (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_S_i0_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_C_i1_ (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_C_i1_parse (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_C_i1_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_C_i2_ (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_C_i2_parse (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;

  protected: void rule_LR_31__5F_grammar_5F_syntax_C_i2_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) ;



//--- Select methods

} ;


//----------------------------------------------------------------------------------------------------------------------

