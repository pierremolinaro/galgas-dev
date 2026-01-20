#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-+l+l1-5Fexpression-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'LL1_expression_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_LL_31__5F_expression_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_LL_31__5F_expression_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_Constant_ (class GGS_cExpression & outArgument0,
                                        class GGS_uint & outArgument1,
                                        class String & ioSyntaxDirectedTranslationResult,
                                        class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Constant_parse (class String & ioSyntaxDirectedTranslationResult,
                                             class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Constant_indexing (class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Expression_ (class GGS_cExpression & outArgument0,
                                          class GGS_uint & outArgument1,
                                          class String & ioSyntaxDirectedTranslationResult,
                                          class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Expression_parse (class String & ioSyntaxDirectedTranslationResult,
                                               class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Expression_indexing (class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Facteur_ (class GGS_cExpression & outArgument0,
                                       class GGS_uint & outArgument1,
                                       class String & ioSyntaxDirectedTranslationResult,
                                       class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Facteur_parse (class String & ioSyntaxDirectedTranslationResult,
                                            class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Facteur_indexing (class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_StartSymbol_ (class String & ioSyntaxDirectedTranslationResult,
                                           class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_StartSymbol_parse (class String & ioSyntaxDirectedTranslationResult,
                                                class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_StartSymbol_indexing (class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Terme_ (class GGS_cExpression & outArgument0,
                                     class GGS_uint & outArgument1,
                                     class String & ioSyntaxDirectedTranslationResult,
                                     class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Terme_parse (class String & ioSyntaxDirectedTranslationResult,
                                          class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_Terme_indexing (class Lexique_LL_31__5F_expression_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_ (String & ioSyntaxDirectedTranslationResult,
                                                                       Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_parse (String & ioSyntaxDirectedTranslationResult,
                                                                            Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Constant_i1_ (GGS_cExpression & outArgument0,
                                                                    GGS_uint & outArgument1,
                                                                    String & ioSyntaxDirectedTranslationResult,
                                                                    Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Constant_i1_parse (String & ioSyntaxDirectedTranslationResult,
                                                                         Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Constant_i1_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Expression_i2_ (GGS_cExpression & outArgument0,
                                                                      GGS_uint & outArgument1,
                                                                      String & ioSyntaxDirectedTranslationResult,
                                                                      Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Expression_i2_parse (String & ioSyntaxDirectedTranslationResult,
                                                                           Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Expression_i2_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Terme_i3_ (GGS_cExpression & outArgument0,
                                                                 GGS_uint & outArgument1,
                                                                 String & ioSyntaxDirectedTranslationResult,
                                                                 Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Terme_i3_parse (String & ioSyntaxDirectedTranslationResult,
                                                                      Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Terme_i3_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Facteur_i4_ (GGS_cExpression & outArgument0,
                                                                   GGS_uint & outArgument1,
                                                                   String & ioSyntaxDirectedTranslationResult,
                                                                   Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Facteur_i4_parse (String & ioSyntaxDirectedTranslationResult,
                                                                        Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;

  protected: void rule_LL_31__5F_expression_5F_syntax_Facteur_i4_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_LL_31__5F_expression_5F_syntax_0 (Lexique_LL_31__5F_expression_5F_lexique *) = 0 ;

  protected: virtual int32_t select_LL_31__5F_expression_5F_syntax_1 (Lexique_LL_31__5F_expression_5F_lexique *) = 0 ;

  protected: virtual int32_t select_LL_31__5F_expression_5F_syntax_2 (Lexique_LL_31__5F_expression_5F_lexique *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------

