#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-testsuite-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'testsuite_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_testsuite_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_testsuite_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_start_5F_symbol_ (class Lexique_testsuite_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_testsuite_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_testsuite_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_testsuite_5F_syntax_start_5F_symbol_i0_ (Lexique_testsuite_5F_lexique * inLexique) ;

  protected: void rule_testsuite_5F_syntax_start_5F_symbol_i0_parse (Lexique_testsuite_5F_lexique * inLexique) ;

  protected: void rule_testsuite_5F_syntax_start_5F_symbol_i0_indexing (Lexique_testsuite_5F_lexique * inLexique) ;



//--- Select methods

} ;


//----------------------------------------------------------------------------------------------------------------------

