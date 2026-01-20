#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-class-5Fsample-5Flanguage-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'class_sample_language_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_class_5F_sample_5F_language_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_class_5F_sample_5F_language_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_start_5F_symbol_ (class GGS_declarationListAST & outArgument0,
                                               class Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_ (GGS_declarationListAST & outArgument0,
                                                                                  Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) ;

  protected: void rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_parse (Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) ;

  protected: void rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_indexing (Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_class_5F_sample_5F_language_5F_syntax_0 (Lexique_class_5F_sample_5F_language_5F_lexique *) = 0 ;

  protected: virtual int32_t select_class_5F_sample_5F_language_5F_syntax_1 (Lexique_class_5F_sample_5F_language_5F_lexique *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------

