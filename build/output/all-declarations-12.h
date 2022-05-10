#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ExpressionSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ExpressionSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ExpressionSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_collection_5F_value_5F_element_ (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_collection_5F_value_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_and_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_ (class GALGAS_lstring & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_type_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GALGAS_semanticExpressionAST & outArgument0,
                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GALGAS_semanticExpressionAST & outArgument0,
                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument0,
                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_i18_ (GALGAS_semanticExpressionAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_term_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_i19_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i24_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_i25_ (GALGAS_lstring & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_optional_5F_type_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i30_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i32_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i33_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i34_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i36_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i37_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_primary_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i38_ (GALGAS_semanticExpressionAST & outArgument0,
                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_factor_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_i39_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_or_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_i40_ (GALGAS_semanticExpressionAST & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ExpressionSyntax_expression_5F_and_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_gmp ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorClassDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorValueClassDeclaration ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ;

extern C_BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

extern C_UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ;

extern C_StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ;

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3ParameterArgumentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_ParameterArgumentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_ParameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3InstructionsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_InstructionsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_InstructionsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_ (class GALGAS_actualInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_else_5F_or_5F_default_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_ (class GALGAS_castInstructionBranchListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_cast_5F_instruction_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                              class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_ (class GALGAS_semanticExpressionAST & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_or_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                              const class GALGAS_actualParameterListAST constinArgument1,
                                                              const class GALGAS_lstring constinArgument2,
                                                              const class GALGAS_lstring constinArgument3,
                                                              class GALGAS_semanticInstructionAST & outArgument4,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_ (const class GALGAS_location constinArgument0,
                                                                          const class GALGAS_lstring constinArgument1,
                                                                          const class GALGAS_lstring constinArgument2,
                                                                          class GALGAS_semanticInstructionAST & outArgument3,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_ (class GALGAS_ifExpressionList & outArgument0,
                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_ (class GALGAS_fixitListAST & outArgument0,
                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_issue_5F_fixit_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (class GALGAS_actualOutputExpressionList & outArgument0,
                                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (const class GALGAS_bool constinArgument0,
                                                                                          class GALGAS_semanticInstructionAST & outArgument1,
                                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_ (const class GALGAS_bool constinArgument0,
                                                                     class GALGAS_semanticInstructionAST & outArgument1,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_ (const class GALGAS_location constinArgument0,
                                                           const class GALGAS_semanticExpressionAST constinArgument1,
                                                           const class GALGAS_location constinArgument2,
                                                           const class GALGAS_lstring constinArgument3,
                                                           class GALGAS_semanticInstructionAST & outArgument4,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_with_5F_instruction_5F_core_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_ (const GALGAS_bool constinArgument0,
                                                                                                                     GALGAS_semanticInstructionAST & outArgument1,
                                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_ (GALGAS_fixitListAST & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument0,
                                                                                         const GALGAS_actualParameterListAST constinArgument1,
                                                                                         const GALGAS_lstring constinArgument2,
                                                                                         const GALGAS_lstring constinArgument3,
                                                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i30_ (const GALGAS_location constinArgument0,
                                                                                                     const GALGAS_lstring constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     GALGAS_semanticInstructionAST & outArgument3,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_ (const GALGAS_location constinArgument0,
                                                                                                     const GALGAS_lstring constinArgument1,
                                                                                                     const GALGAS_lstring constinArgument2,
                                                                                                     GALGAS_semanticInstructionAST & outArgument3,
                                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_ (const GALGAS_bool constinArgument0,
                                                                                                GALGAS_semanticInstructionAST & outArgument1,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_ (GALGAS_ifExpressionList & outArgument0,
                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_if_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i54_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_ (GALGAS_lstringlist & outArgument0,
                                                                         GALGAS_switchExtractedValuesListAST & outArgument1,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i59_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i60_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i61_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i62_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i63_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i64_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_ (const GALGAS_location constinArgument0,
                                                                                      const GALGAS_semanticExpressionAST constinArgument1,
                                                                                      const GALGAS_location constinArgument2,
                                                                                      const GALGAS_lstring constinArgument3,
                                                                                      GALGAS_semanticInstructionAST & outArgument4,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i65_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_68 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_69 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_70 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_71 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_72 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_73 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_74 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_75 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_76 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_77 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_78 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_79 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_80 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_81 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_InstructionsSyntax_82 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3DeclarationsSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_DeclarationsSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_DeclarationsSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_ (const class GALGAS_bool constinArgument0,
                                                              class GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_with_5F_private_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_ (class GALGAS_externTypeConstructorList & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_constructor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (class GALGAS_string & outArgument0,
                                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_ (class GALGAS_string & outArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_ (class GALGAS_externTypeGetterList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_getter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_ (class GALGAS_externTypeMethodList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_method_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_ (class GALGAS_externTypeSetterList & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_externtype_5F_setter_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_binary_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_ (class GALGAS_filewrapperTemplateListAST & outArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_templates_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_ (class GALGAS_lstringlist & outArgument0,
                                                            class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_filewrapper_5F_text_5F_files_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (class GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (class GALGAS_insertMethodListAST & ioArgument0,
                                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_ (class GALGAS_propertyInCollectionListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_property_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_ (class GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_remove_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_search_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_ (class GALGAS_semanticInstructionAST & outArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_ (class GALGAS_semanticInstructionListAST & outArgument0,
                                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_semantic_5F_instruction_5F_list_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_ (class GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_shared_5F_map_5F_search_5F_method_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_ (class GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument0,
                                                                                        GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_ (GALGAS_lstringlist & outArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_ (GALGAS_lstringlist & outArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_ (GALGAS_string & outArgument0,
                                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_ (GALGAS_string & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_ (GALGAS_externTypeGetterList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_ (GALGAS_externTypeSetterList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_ (GALGAS_externTypeMethodList & ioArgument0,
                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i28_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_shared_5F_map_5F_search_5F_method_5F_declaration_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i29_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i30_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                                                           C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i31_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i32_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i34_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument0,
                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_43 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_44 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_DeclarationsSyntax_45 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_weakSuffix (class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'galgas3LexiqueComponentSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_galgas_33_LexiqueComponentSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_galgas_33_LexiqueComponentSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_declaration_ (class GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_ (class GALGAS_externFunctionListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_function_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_ (class GALGAS_externRoutineListAST & ioArgument0,
                                                                class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_extern_5F_routine_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_ (class GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                   class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_attribute_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_explicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_ (class GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_expression_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                             class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_factor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_ (class GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_function_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_ (class GALGAS_lexicalRuleListAST & ioArgument0,
                                                           class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_implicit_5F_rule_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_ (class GALGAS_indexingListAST & ioArgument0,
                                                                  class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_indexing_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_ (class GALGAS_lexicalInstructionListAST & ioArgument0,
                                                      class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_ (class GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_ (class GALGAS_lexicalListEntryListAST & ioArgument0,
                                                        class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_list_5F_entry_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_ (class GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                 class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_message_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                          class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_ (class GALGAS_lexicalInstructionAST & outArgument0,
                                                              class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_send_5F_instruction_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_ (class GALGAS_lexicalExpressionAST & outArgument0,
                                               class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_lexical_5F_term_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_ (class GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                         class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_repeat_5F_while_5F_branch_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_ (class GALGAS_lexicalStyleListAST & ioArgument0,
                                                    class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_style_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_ (class GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                     class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_delimitor_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_ (class GALGAS_templateReplacementListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_replacement_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_ (class GALGAS_terminalDeclarationListAST & ioArgument0,
                                                       class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_parse (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;

  protected: virtual void nt_terminal_5F_declaration_indexing (class C_Lexique_galgas_33_Scanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                                                        C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                                                         C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                                                     C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                    C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                              C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                                                             C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                                                       C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                                                  C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                                                      C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                                                   C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_ (GALGAS_externRoutineListAST & ioArgument0,
                                                                                               C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_ (GALGAS_externFunctionListAST & ioArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_ (GALGAS_lexicalFunctionListAST & ioArgument0,
                                                                                                 C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                                C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_expression_i38_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                          C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_term_i39_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i40_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_ (GALGAS_lexicalFunctionExpressionAST & outArgument0,
                                                                                            C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_parse (C_Lexique_galgas_33_Scanner * inLexique) ;

  protected: void rule_galgas_33_LexiqueComponentSyntax_lexical_5F_function_5F_factor_i41_indexing (C_Lexique_galgas_33_Scanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_33 (C_Lexique_galgas_33_Scanner *) = 0 ;

  protected: virtual int32_t select_galgas_33_LexiqueComponentSyntax_34 (C_Lexique_galgas_33_Scanner *) = 0 ;


} ;

