#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-+s+l+r-5Fexpression-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'SLR_expression_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_SLR_5F_expression_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_SLR_5F_expression_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_Constant_ (class GGS_cExpression & outArgument0,
                                        class GGS_uint & outArgument1,
                                        class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Constant_parse (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Constant_indexing (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Expression_ (class GGS_cExpression & outArgument0,
                                          class GGS_uint & outArgument1,
                                          class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Expression_parse (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Expression_indexing (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Facteur_ (class GGS_cExpression & outArgument0,
                                       class GGS_uint & outArgument1,
                                       class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Facteur_parse (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Facteur_indexing (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_StartSymbol_ (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_StartSymbol_parse (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_StartSymbol_indexing (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Terme_ (class GGS_cExpression & outArgument0,
                                     class GGS_uint & outArgument1,
                                     class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Terme_parse (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Terme_indexing (class Lexique_SLR_5F_expression_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_ (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Constant_i1_ (GGS_cExpression & outArgument0,
                                                                 GGS_uint & outArgument1,
                                                                 Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Constant_i1_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Constant_i1_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Expression_i2_ (GGS_cExpression & outArgument0,
                                                                   GGS_uint & outArgument1,
                                                                   Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Expression_i2_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Expression_i2_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Terme_i3_ (GGS_cExpression & outArgument0,
                                                              GGS_uint & outArgument1,
                                                              Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Terme_i3_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Terme_i3_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Facteur_i4_ (GGS_cExpression & outArgument0,
                                                                GGS_uint & outArgument1,
                                                                Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Facteur_i4_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;

  protected: void rule_SLR_5F_expression_5F_syntax_Facteur_i4_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_SLR_5F_expression_5F_syntax_0 (Lexique_SLR_5F_expression_5F_lexique *) = 0 ;

  protected: virtual int32_t select_SLR_5F_expression_5F_syntax_1 (Lexique_SLR_5F_expression_5F_lexique *) = 0 ;

  protected: virtual int32_t select_SLR_5F_expression_5F_syntax_2 (Lexique_SLR_5F_expression_5F_lexique *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------

