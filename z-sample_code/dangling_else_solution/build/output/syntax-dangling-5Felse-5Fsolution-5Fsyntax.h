#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-dangling-5Felse-5Fsolution-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'dangling_else_solution_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_dangling_5F_else_5F_solution_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_dangling_5F_else_5F_solution_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_S_ (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_S_parse (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_S_indexing (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_closed_5F_instruction_ (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_closed_5F_instruction_parse (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_closed_5F_instruction_indexing (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_non_5F_closed_5F_instruction_ (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_non_5F_closed_5F_instruction_parse (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_non_5F_closed_5F_instruction_indexing (class Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;

  protected: void rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) ;



//--- Select methods

} ;


//----------------------------------------------------------------------------------------------------------------------

