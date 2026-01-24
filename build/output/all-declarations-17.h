#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ExpressionSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ExpressionSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                    class GGS_actualParameterListAST & outArgument1,
                                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                 class GGS_semanticExpressionAST & outArgument1,
                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                class GGS_semanticExpressionAST & outArgument1,
                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GGS_galgasDeclarationAST & ioArgument0,
                                      class GGS_semanticExpressionAST & outArgument1,
                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                            class GGS_actualOutputArgumentList & outArgument1,
                                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_actualOutputArgumentList & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GGS_galgasDeclarationAST & ioArgument0,
                                       class GGS_semanticExpressionAST & outArgument1,
                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_dot_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                 class GGS_semanticExpressionAST & outArgument1,
                                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_dot_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_ (const class GGS_lstring constinArgument0,
                                                                  class GGS_galgasDeclarationAST & ioArgument1,
                                                                  class GGS_semanticExpressionAST & outArgument2,
                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (const class GGS_lstring constinArgument0,
                                                                                 const class GGS_lstring constinArgument1,
                                                                                 class GGS_galgasDeclarationAST & ioArgument2,
                                                                                 class GGS_semanticExpressionAST & outArgument3,
                                                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_semanticExpressionAST & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_semanticExpressionAST & outArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (const class GGS_lstring constinArgument0,
                                                                               class GGS_galgasDeclarationAST & ioArgument1,
                                                                               class GGS_semanticExpressionAST & outArgument2,
                                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GGS_galgasDeclarationAST & ioArgument0,
                                    class GGS_semanticExpressionAST & outArgument1,
                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                            GGS_semanticExpressionAST & outArgument1,
                                                                            Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_expression_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                              GGS_semanticExpressionAST & outArgument1,
                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                              GGS_semanticExpressionAST & outArgument1,
                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        GGS_semanticExpressionAST & outArgument1,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_or_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i12_ (const GGS_lstring constinArgument0,
                                                                                                          const GGS_lstring constinArgument1,
                                                                                                          GGS_galgasDeclarationAST & ioArgument2,
                                                                                                          GGS_semanticExpressionAST & outArgument3,
                                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i12_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i13_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i16_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_term_i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                             GGS_semanticExpressionAST & outArgument1,
                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_term_i17_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_term_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          GGS_semanticExpressionAST & outArgument1,
                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i18_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_expression_5F_and_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i19_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                           GGS_semanticExpressionAST & outArgument1,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i21_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_relation_5F_factor_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_expression_i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                   GGS_semanticExpressionAST & outArgument1,
                                                                   Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_expression_i22_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_expression_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i25_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i26_ (const GGS_lstring constinArgument0,
                                                                                                        GGS_galgasDeclarationAST & ioArgument1,
                                                                                                        GGS_semanticExpressionAST & outArgument2,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i26_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i28_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i29_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           GGS_semanticExpressionAST & outArgument2,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i29_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i31_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i32_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i33_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i36_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i36_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                GGS_semanticExpressionAST & outArgument1,
                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_i37_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i38_ (const GGS_lstring constinArgument0,
                                                                                           GGS_galgasDeclarationAST & ioArgument1,
                                                                                           GGS_semanticExpressionAST & outArgument2,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i38_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i38_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_factor_i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                               GGS_semanticExpressionAST & outArgument1,
                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_factor_i39_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_factor_i39_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                     GGS_actualOutputArgumentList & outArgument1,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i40_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i40_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_actualOutputArgumentList & outArgument1,
                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i41_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i41_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ExpressionSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ExpressionSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4ParameterArgumentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_ParameterArgumentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                   class GGS_actualParameterListAST & ioArgument1,
                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                    class GGS_actualParameterListAST & outArgument1,
                                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_formalInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_formalParameterListAST & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_ (class GGS_lstringlist & outArgument0,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_poisoned_5F_var_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_formalParameterListAST & outArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                   GGS_actualParameterListAST & outArgument1,
                                                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_actualParameterListAST & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_actualParameterListAST & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_actualParameterListAST & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_actualParameterListAST & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                   GGS_formalInputParameterListAST & outArgument1,
                                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GGS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_ (GGS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_ParameterArgumentSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4InstructionsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_InstructionsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_actualInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                    class GGS_actualParameterListAST & outArgument1,
                                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                class GGS_CommaSeparatedExpressionList & outArgument1,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_comma_5F_separated_5F_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                class GGS_semanticExpressionAST & outArgument1,
                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                          class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_formalInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_formalParameterListAST & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                              const class GGS_location constinArgument1,
                                                              const class GGS_actualParameterListAST constinArgument2,
                                                              const class GGS_lstring constinArgument3,
                                                              const class GGS_lstring constinArgument4,
                                                              class GGS_semanticInstructionAST & outArgument5,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS_semanticInstructionAST & outArgument1,
                                                         class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS_fixitListAST & outArgument1,
                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                            class GGS_actualOutputArgumentList & outArgument1,
                                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_actualOutputArgumentList & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS_semanticInstructionAST & outArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                          const class GGS_bool constinArgument1,
                                                                                          class GGS_semanticInstructionAST & outArgument2,
                                                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticInstructionListAST & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GGS_galgasDeclarationAST & ioArgument0,
                                              class GGS__5B_lstring_5D_ & outArgument1,
                                              class GGS_switchExtractedValuesListAST & outArgument2,
                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         GGS_semanticInstructionListAST & outArgument1,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                              GGS_actualInputParameterListAST & outArgument1,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_semanticInstructionAST & outArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_semanticInstructionAST & outArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_semanticInstructionAST & outArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                 GGS_semanticInstructionAST & outArgument1,
                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_semanticInstructionAST & outArgument1,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i16_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS__5B_lstring_5D_ & outArgument1,
                                                                         GGS_switchExtractedValuesListAST & outArgument2,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i16_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_switch_5F_case_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i19_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i20_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         GGS_fixitListAST & outArgument1,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i20_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i24_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                           GGS_CommaSeparatedExpressionList & outArgument1,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i24_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i25_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i26_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i26_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                         const GGS_location constinArgument1,
                                                                                         const GGS_actualParameterListAST constinArgument2,
                                                                                         const GGS_lstring constinArgument3,
                                                                                         const GGS_lstring constinArgument4,
                                                                                         GGS_semanticInstructionAST & outArgument5,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i31_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i31_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i32_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                        GGS_forInstructionEnumeratedObjectElementListAST & ioArgument1,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i32_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                     GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                                                     const GGS_bool constinArgument1,
                                                                                                                     GGS_semanticInstructionAST & outArgument2,
                                                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i39_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i39_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_semanticInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i44_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i45_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_InstructionsSyntax_declaration_i46_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_InstructionsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_InstructionsSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_26 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_27 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_28 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_29 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_30 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_31 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_32 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_33 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_34 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_35 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_36 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_37 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_38 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_39 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_40 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_41 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_42 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_43 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_44 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_45 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_46 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_47 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_48 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_49 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_50 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_51 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_52 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_53 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_54 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_55 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_56 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_57 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_58 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_59 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_60 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_61 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_62 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_63 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_64 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_InstructionsSyntax_65 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4DeclarationsSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_DeclarationsSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_acces_5F_control_ (class GGS_AccessControlAST & outArgument0,
                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_acces_5F_control_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                         class GGS_externTypeConstructorList & ioArgument1,
                                                         class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GGS_string & outArgument0,
                                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GGS_string & outArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_externTypeGetterList & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_externTypeMethodList & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                    class GGS_externTypeSetterList & ioArgument1,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GGS_lstringlist & outArgument0,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                        class GGS_filewrapperTemplateListAST & outArgument1,
                                                        class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GGS_lstringlist & outArgument0,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_formalInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_formalParameterListAST & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GGS_insertSetterListAST & ioArgument0,
                                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_ (const class GGS_lstring constinArgument0,
                                                     class GGS_galgasDeclarationAST & ioArgument1,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_method_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS_propertyInCollectionListAST & ioArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_replace_5F_setter_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_method_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_ (class GGS_mapAccessorListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_search_5F_subscript_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                               class GGS_semanticInstructionListAST & outArgument1,
                                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                            class GGS_lstring & outArgument1,
                                                            class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_galgasDeclarationAST & ioArgument0,
                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument0,
                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_filewrapperTemplateListAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_ (const GGS_lstring constinArgument0,
                                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i9_ (const GGS_lstring constinArgument0,
                                                                               GGS_galgasDeclarationAST & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i10_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i11_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i12_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i12_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i13_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i13_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i14_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i14_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i15_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i15_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i16_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i16_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i17_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i17_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i20_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i20_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i22_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i22_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i24_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i24_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i25_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i25_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i26_ (const GGS_lstring constinArgument0,
                                                                                GGS_galgasDeclarationAST & ioArgument1,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i26_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i27_ (GGS_AccessControlAST & outArgument0,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i27_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_acces_5F_control_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i28_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i29_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i29_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i30_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i30_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_ (GGS_mapAccessorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_ (GGS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_ (GGS_insertSetterListAST & ioArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i35_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_propertyInCollectionListAST & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i35_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i36_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_propertyInCollectionListAST & ioArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i36_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i36_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i37_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i37_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i37_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i39_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i39_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i39_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i40_ (GGS_string & outArgument0,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i40_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i40_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i41_ (GGS_string & outArgument0,
                                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i41_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i41_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i42_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    GGS_externTypeConstructorList & ioArgument1,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i42_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i42_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i43_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS_externTypeGetterList & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i43_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i43_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i44_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS_externTypeSetterList & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i44_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i44_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i45_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                               GGS_externTypeMethodList & ioArgument1,
                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i45_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i45_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i47_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i47_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i47_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i48_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                             GGS_lstring & outArgument1,
                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i48_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_type_5F_definition_i48_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i49_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i49_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i49_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i50_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i50_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i50_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i51_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_lstring & outArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i51_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i51_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i52_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i52_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i52_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i53_ (GGS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i53_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i53_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i54_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i54_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i54_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i55_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i55_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i55_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i56_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i56_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_DeclarationsSyntax_declaration_i56_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_26 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_27 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_28 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_29 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_30 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_31 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_32 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_33 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_34 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_35 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_36 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_37 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_38 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_39 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_40 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_41 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_42 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_43 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_44 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_45 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_46 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_47 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_48 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_49 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_50 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_51 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_52 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_53 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_54 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_55 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_56 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_57 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_58 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_59 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_60 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_61 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_62 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_63 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_64 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_65 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_66 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_67 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_68 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_69 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_70 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_71 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_DeclarationsSyntax_72 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4LexiqueComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_LexiqueComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_ (class GGS_lexicalAttributeListAST & ioArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_ (class GGS_lexicalRuleListAST & ioArgument0,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GGS_lexicalExpressionAST & outArgument0,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GGS_lexicalExpressionAST & outArgument0,
                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_ (class GGS_lexicalRuleListAST & ioArgument0,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_ (class GGS_indexingListAST & ioArgument0,
                                                                  class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GGS_lexicalInstructionListAST & ioArgument0,
                                                      class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_ (class GGS_lexicalListDeclarationListAST & ioArgument0,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GGS_lexicalListEntryListAST & ioArgument0,
                                                        class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_ (class GGS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GGS_lexicalInstructionAST & outArgument0,
                                                              class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GGS_lexicalExpressionAST & outArgument0,
                                               class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GGS_lexicalWhileBranchListAST & ioArgument0,
                                                         class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_ (class GGS_lexicalStyleListAST & ioArgument0,
                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_ (class GGS_templateDelimitorListAST & ioArgument0,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_ (class GGS_templateReplacementListAST & ioArgument0,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_ (class GGS_terminalDeclarationListAST & ioArgument0,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS_indexingListAST & ioArgument0,
                                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS_lexicalRuleListAST & ioArgument0,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS_lexicalRuleListAST & ioArgument0,
                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS_lexicalWhileBranchListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_ (GGS_lexicalExpressionAST & outArgument0,
                                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument0,
                                                                                Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS_lexicalListDeclarationListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS_lexicalListEntryListAST & ioArgument0,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GGS_lexicalAttributeListAST & ioArgument0,
                                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS_terminalDeclarationListAST & ioArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GGS_lexicalStyleListAST & ioArgument0,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i30_ (GGS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i30_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument0,
                                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i32_ (GGS_lexicalInstructionAST & outArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i32_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i33_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i33_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_declaration_i33_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_ (GGS_templateDelimitorListAST & ioArgument0,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_ (GGS_templateReplacementListAST & ioArgument0,
                                                                                      Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_17 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_18 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_19 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_20 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_21 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_22 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_23 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_24 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_25 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_LexiqueComponentSyntax_26 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4OptionComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_OptionComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_OptionComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__ (class GGS_commandLineOptionListAST & ioArgument0,
                                                                class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_option_5F_declaration_5F_ggs_33__indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument0,
                                                                                             Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_OptionComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4GuiComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_GuiComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_GuiComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_ (class GGS_guiSimpleAttributeListAST & ioArgument0,
                                                 class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_attributes_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (class GGS_withLexiqueListAST & ioArgument0,
                                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_ (class GGS_lstringlist & ioArgument0,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                     Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument0,
                                                                                               Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument0,
                                                                                              Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument0,
                                                                           Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_GuiComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'galgas4SyntaxComponentSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_galgas_34_SyntaxComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_34_SyntaxComponentSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                    class GGS_actualInputParameterListAST & outArgument1,
                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                                    class GGS_actualParameterListAST & outArgument1,
                                                                                    class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_5F_within_5F_parenthesis_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_galgasDeclarationAST & ioArgument0,
                                          class GGS_semanticExpressionAST & outArgument1,
                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                           class GGS_formalParameterListAST & outArgument1,
                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                          class GGS_nonterminalDeclarationListAST & ioArgument1,
                                                          class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_nonterminal_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       class GGS_semanticInstructionAST & outArgument1,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                                           class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument1,
                                                                           class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                     class GGS_syntaxInstructionAST & outArgument1,
                                                     class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxInstructionList & outArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_instruction_5F_list_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                             class GGS_syntaxRuleListAST & ioArgument1,
                                                             class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_declaration_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_ (class GGS_galgasDeclarationAST & ioArgument0,
                                                       const class GGS_lstring constinArgument1,
                                                       class GGS_syntaxRuleLabelListAST & ioArgument2,
                                                       class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_rule_5F_label_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_ (class GGS__32_lstringlist & outArgument0,
                                                                   class Lexique_galgasScanner_34_ * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_instruction_5F_indexing_indexing (class Lexique_galgasScanner_34_ * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                        Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                       GGS_nonterminalDeclarationListAST & ioArgument1,
                                                                                       Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                    const GGS_lstring constinArgument1,
                                                                                    GGS_syntaxRuleLabelListAST & ioArgument2,
                                                                                    Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxRuleListAST & ioArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                          GGS_syntaxInstructionList & outArgument1,
                                                                                          Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                  GGS_syntaxInstructionAST & outArgument1,
                                                                                  Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_ (GGS__32_lstringlist & outArgument0,
                                                                                                 Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i10_indexing (Lexique_galgasScanner_34_ * inLexique) ;

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument0,
                                                                                   GGS_syntaxInstructionAST & outArgument1,
                                                                                   Lexique_galgasScanner_34_ * inLexique) ;

/*  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_parse (Lexique_galgasScanner_34_ * inLexique) ; */

  protected: void rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_0 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_1 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_2 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_3 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_4 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_5 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_6 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_7 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_8 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_9 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_10 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_11 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_12 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_13 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_14 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_15 (Lexique_galgasScanner_34_ *) = 0 ;

  protected: virtual int32_t select_galgas_34_SyntaxComponentSyntax_16 (Lexique_galgasScanner_34_ *) = 0 ;


} ;

