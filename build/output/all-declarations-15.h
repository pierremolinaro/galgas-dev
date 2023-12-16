#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'templateSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_templateSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_templateSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                 class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                             class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_lstringlist & ioArgument0,
                                                             class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                          class GALGAS_templateExpressionAST & outArgument1,
                                                                          class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (class GALGAS_templateExpressionListAST & outArgument0,
                                                                   class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                              class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                         class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                       class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                           class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_ (class GALGAS_templateInstructionListAST & ioArgument0,
                                                       class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (class GALGAS_templateInstructionListAST & outArgument0,
                                                                     class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                           class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_templateSyntax_expression_5F_tpl_i0_ (GALGAS_templateExpressionAST & outArgument0,
                                                             C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GALGAS_templateExpressionAST & outArgument0,
                                                                   C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GALGAS_templateExpressionAST & outArgument0,
                                                                     C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GALGAS_templateExpressionAST & outArgument0,
                                                                       C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_ (GALGAS_templateExpressionAST & outArgument0,
                                                       C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_ (GALGAS_templateExpressionAST & outArgument0,
                                                         C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_ (GALGAS_templateExpressionAST & outArgument0,
                                                         C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_ (GALGAS_templateExpressionAST & outArgument0,
                                                         C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_ (GALGAS_templateExpressionAST & outArgument0,
                                                         C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_ (GALGAS_templateExpressionAST & outArgument0,
                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_ (GALGAS_templateExpressionAST & outArgument0,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GALGAS_templateExpressionListAST & outArgument0,
                                                                                C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                                  C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_ (GALGAS_lstringlist & outArgument0,
                                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_templateSyntax_0 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_1 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_2 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_3 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_4 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_5 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_6 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_7 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_8 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_9 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_10 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_11 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_12 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_13 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_14 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_15 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_16 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_17 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_18 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_19 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_20 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_21 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_22 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_23 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_24 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_25 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_26 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_27 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_28 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_29 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_30 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_31 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_32 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_33 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_34 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_35 (C_Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_36 (C_Lexique_galgasTemplateScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString (class GALGAS_templateInstructionListAST & ioArgument0,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringForGeneration (const class cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mTemplateString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringForGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionStringForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & ioGeneratedCode,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_uint & ioTemporaryVariableIndex,
           class GALGAS_stringset & ioUnusedVariableCppNameSet,
           class GALGAS_bool & ioUseColumnMarker,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mTemplateString ;

//--- Constructor
  public: cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

  public: GALGAS_templateInstructionStringForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionStringForGeneration bang_templateInstructionStringForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionStringForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueComponentAST_2D_weak (const class GALGAS_lexiqueComponentAST & inSource) ;

  public: GALGAS_lexiqueComponentAST_2D_weak & operator = (const class GALGAS_lexiqueComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueComponentAST bang_lexiqueComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueComponentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueComponentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueComponentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationWithHeaderForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationWithHeaderForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationWithHeaderForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticDeclarationWithHeaderForGeneration (const class cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mHasHeader (void) const ;

  public: class GALGAS_string readProperty_mImplementationCppFileName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationWithHeaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationWithHeaderForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticDeclarationWithHeaderForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationWithHeaderForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter hasCppHeaderFile
  public: virtual class GALGAS_bool getter_hasCppHeaderFile (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter implementationCppFileName
  public: virtual class GALGAS_string getter_implementationCppFileName (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_bool mProperty_mHasHeader ;
  public: GALGAS_string mProperty_mImplementationCppFileName ;

//--- Constructor
  public: cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                           const GALGAS_string & in_mImplementationCppFileName
                                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationWithHeaderForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak : public GALGAS_semanticDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (const class GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) ;

  public: GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & operator = (const class GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticDeclarationWithHeaderForGeneration bang_semanticDeclarationWithHeaderForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticTypeForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_semanticTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticTypeForGeneration (const class cPtr_semanticTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mSelfTypeEntry (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticTypeForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter appendTypeGenericImplementation
  public: virtual class GALGAS_string getter_appendTypeGenericImplementation (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GALGAS_bool getter_hasCppHeaderFile (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter implementationCppFileName
  public: virtual class GALGAS_string getter_implementationCppFileName (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (C_Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mSelfTypeEntry ;

//--- Constructor
  public: cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticTypeForGeneration_2D_weak : public GALGAS_semanticDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_semanticTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticTypeForGeneration_2D_weak (const class GALGAS_semanticTypeForGeneration & inSource) ;

  public: GALGAS_semanticTypeForGeneration_2D_weak & operator = (const class GALGAS_semanticTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticTypeForGeneration bang_semanticTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolsetTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolsetTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_boolsetTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolsetTypeForGeneration (const class cPtr_boolsetTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstringlist readProperty_mFlagList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolsetTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolsetTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GALGAS_lstringlist & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolsetTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolsetTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_boolsetTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstringlist mProperty_mFlagList ;

//--- Constructor
  public: cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                         const GALGAS_lstringlist & in_mFlagList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolsetTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolsetTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolsetTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolsetTypeForGeneration_2D_weak (const class GALGAS_boolsetTypeForGeneration & inSource) ;

  public: GALGAS_boolsetTypeForGeneration_2D_weak & operator = (const class GALGAS_boolsetTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolsetTypeForGeneration bang_boolsetTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolsetTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolsetTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolsetTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolsetTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_classTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_classTypeForGeneration (const class cPtr_classTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_bool readProperty_mIsReference (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mAllTypedAttributeList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mCurrentTypedAttributeList (void) const ;

  public: class GALGAS_bool readProperty_mGenerateHeaderInSeparateFile (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GALGAS_bool & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                      const class GALGAS_typedPropertyList & inOperand4,
                                                                      const class GALGAS_typedPropertyList & inOperand5,
                                                                      const class GALGAS_bool & inOperand6
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_classTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @classTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_classTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GALGAS_string inOutputDirectory,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_bool mProperty_mIsReference ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GALGAS_typedPropertyList mProperty_mAllTypedAttributeList ;
  public: GALGAS_typedPropertyList mProperty_mCurrentTypedAttributeList ;
  public: GALGAS_bool mProperty_mGenerateHeaderInSeparateFile ;

//--- Constructor
  public: cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GALGAS_bool & in_mIsAbstract,
                                       const GALGAS_bool & in_mIsReference,
                                       const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                       const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                       const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                       const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_classTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_classTypeForGeneration_2D_weak (const class GALGAS_classTypeForGeneration & inSource) ;

  public: GALGAS_classTypeForGeneration_2D_weak & operator = (const class GALGAS_classTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_classTypeForGeneration bang_classTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_classTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @weakReferenceTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_weakReferenceTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_weakReferenceTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_weakReferenceTypeForGeneration (const class cPtr_weakReferenceTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReferenceClassType (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mAllTypedPropertyList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_bool readProperty_mGenerateHeaderInSeparateFile (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_weakReferenceTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GALGAS_typedPropertyList & inOperand3,
                                                                              const class GALGAS_typedPropertyList & inOperand4,
                                                                              const class GALGAS_bool & inOperand5
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_weakReferenceTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_weakReferenceTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @weakReferenceTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_weakReferenceTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mReferenceClassType ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GALGAS_typedPropertyList mProperty_mAllTypedPropertyList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_bool mProperty_mGenerateHeaderInSeparateFile ;

//--- Constructor
  public: cPtr_weakReferenceTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                               const GALGAS_unifiedTypeMapEntry & in_mReferenceClassType,
                                               const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                               const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                               const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                               const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @weakReferenceTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_weakReferenceTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_weakReferenceTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_weakReferenceTypeForGeneration_2D_weak (const class GALGAS_weakReferenceTypeForGeneration & inSource) ;

  public: GALGAS_weakReferenceTypeForGeneration_2D_weak & operator = (const class GALGAS_weakReferenceTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_weakReferenceTypeForGeneration bang_weakReferenceTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_weakReferenceTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_weakReferenceTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_weakReferenceTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_enumTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_enumTypeForGeneration (const class cPtr_enumTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_enumConstantListForGeneration readProperty_mConstantList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GALGAS_enumConstantListForGeneration & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_enumTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GALGAS_string inOutputDirectory,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_enumConstantListForGeneration mProperty_mConstantList ;

//--- Constructor
  public: cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GALGAS_enumConstantListForGeneration & in_mConstantList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_enumTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumTypeForGeneration_2D_weak (const class GALGAS_enumTypeForGeneration & inSource) ;

  public: GALGAS_enumTypeForGeneration_2D_weak & operator = (const class GALGAS_enumTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumTypeForGeneration bang_enumTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_enumTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeDeclarationForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_externTypeDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_externTypeDeclarationForGeneration (const class cPtr_externTypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mExternTypeName (void) const ;

  public: class GALGAS_string readProperty_mCppPreDeclarationCode (void) const ;

  public: class GALGAS_string readProperty_mCppClassCode (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_string & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externTypeDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mExternTypeName ;
  public: GALGAS_string mProperty_mCppPreDeclarationCode ;
  public: GALGAS_string mProperty_mCppClassCode ;

//--- Constructor
  public: cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                   const GALGAS_string & in_mExternTypeName,
                                                   const GALGAS_string & in_mCppPreDeclarationCode,
                                                   const GALGAS_string & in_mCppClassCode
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externTypeDeclarationForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_externTypeDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_externTypeDeclarationForGeneration_2D_weak (const class GALGAS_externTypeDeclarationForGeneration & inSource) ;

  public: GALGAS_externTypeDeclarationForGeneration_2D_weak & operator = (const class GALGAS_externTypeDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_externTypeDeclarationForGeneration bang_externTypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externTypeDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphDeclarationForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_graphDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_graphDeclarationForGeneration (const class cPtr_graphDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListTypeEntry (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListElementTypeEntry (void) const ;

  public: class GALGAS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GALGAS_graphInsertModifierList & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_graphDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @graphDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListTypeEntry ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListElementTypeEntry ;
  public: GALGAS_graphInsertModifierList mProperty_mInsertModifierList ;

//--- Constructor
  public: cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                              const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                              const GALGAS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                              const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphDeclarationForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_graphDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_graphDeclarationForGeneration_2D_weak (const class GALGAS_graphDeclarationForGeneration & inSource) ;

  public: GALGAS_graphDeclarationForGeneration_2D_weak & operator = (const class GALGAS_graphDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_graphDeclarationForGeneration bang_graphDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_graphDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_graphDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_listTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_listTypeForGeneration (const class cPtr_listTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mListElementTypeIndex (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                     const class GALGAS_typedPropertyList & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_listTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_listTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mListElementTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;

//--- Constructor
  public: cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                      const GALGAS_typedPropertyList & in_mTypedAttributeList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_listTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_listTypeForGeneration_2D_weak (const class GALGAS_listTypeForGeneration & inSource) ;

  public: GALGAS_listTypeForGeneration_2D_weak & operator = (const class GALGAS_listTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_listTypeForGeneration bang_listTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_listTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listmapTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listmapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_listmapTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_listmapTypeForGeneration (const class cPtr_listmapTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListTypeIndex (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mAssociatedListTypedAttributeList (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListMapElementTypeIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listmapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listmapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GALGAS_typedPropertyList & inOperand2,
                                                                        const class GALGAS_unifiedTypeMapEntry & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_listmapTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listmapTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_listmapTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mAssociatedListTypedAttributeList ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListMapElementTypeIndex ;

//--- Constructor
  public: cPtr_listmapTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                         const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeIndex,
                                         const GALGAS_typedPropertyList & in_mAssociatedListTypedAttributeList,
                                         const GALGAS_unifiedTypeMapEntry & in_mAssociatedListMapElementTypeIndex
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listmapTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listmapTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_listmapTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_listmapTypeForGeneration_2D_weak (const class GALGAS_listmapTypeForGeneration & inSource) ;

  public: GALGAS_listmapTypeForGeneration_2D_weak & operator = (const class GALGAS_listmapTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_listmapTypeForGeneration bang_listmapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listmapTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listmapTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listmapTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_listmapTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dictTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dictTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_dictTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dictTypeForGeneration (const class cPtr_dictTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mElementTypeEntry (void) const ;

  public: class GALGAS_lstring readProperty_mDictTypeName (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_lstring readProperty_mKeyTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dictTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dictTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_typedPropertyList & inOperand3,
                                                                     const class GALGAS_lstring & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dictTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dictTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dictTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dictTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mElementTypeEntry ;
  public: GALGAS_lstring mProperty_mDictTypeName ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_lstring mProperty_mKeyTypeName ;

//--- Constructor
  public: cPtr_dictTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                      const GALGAS_lstring & in_mDictTypeName,
                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                      const GALGAS_lstring & in_mKeyTypeName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dictTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dictTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dictTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dictTypeForGeneration_2D_weak (const class GALGAS_dictTypeForGeneration & inSource) ;

  public: GALGAS_dictTypeForGeneration_2D_weak & operator = (const class GALGAS_dictTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dictTypeForGeneration bang_dictTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dictTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dictTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dictTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dictTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_mapTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_mapTypeForGeneration (const class cPtr_mapTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mElementTypeEntry (void) const ;

  public: class GALGAS_lstring readProperty_mMapTypeName (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_insertMethodListAST readProperty_mInsertMethodList (void) const ;

  public: class GALGAS_mapSearchMethodListAST readProperty_mSearchMethodList (void) const ;

  public: class GALGAS_mapRemoveMethodListAST readProperty_mRemoveMethodList (void) const ;

  public: class GALGAS_bool readProperty_mHasInsertOrReplaceModifier (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_typedPropertyList & inOperand3,
                                                                    const class GALGAS_insertMethodListAST & inOperand4,
                                                                    const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                                    const class GALGAS_mapRemoveMethodListAST & inOperand6,
                                                                    const class GALGAS_bool & inOperand7
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mapTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_mapTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GALGAS_string inOutputDirectory,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mElementTypeEntry ;
  public: GALGAS_lstring mProperty_mMapTypeName ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapRemoveMethodListAST mProperty_mRemoveMethodList ;
  public: GALGAS_bool mProperty_mHasInsertOrReplaceModifier ;

//--- Constructor
  public: cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                     const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                     const GALGAS_lstring & in_mMapTypeName,
                                     const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                     const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                     const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                     const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                     const GALGAS_bool & in_mHasInsertOrReplaceModifier
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_mapTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_mapTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_mapTypeForGeneration_2D_weak (const class GALGAS_mapTypeForGeneration & inSource) ;

  public: GALGAS_mapTypeForGeneration_2D_weak & operator = (const class GALGAS_mapTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_mapTypeForGeneration bang_mapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_mapTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_mapTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapTypeForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedListTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_sortedListTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_sortedListTypeForGeneration (const class cPtr_sortedListTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mListElementTypeIndex (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_sortDescriptorListForGeneration readProperty_mSortDescriptorList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedListTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                           const class GALGAS_typedPropertyList & inOperand2,
                                                                           const class GALGAS_sortDescriptorListForGeneration & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sortedListTypeForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sortedListTypeForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sortedListTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outHeader,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap inUnifiedTypeMap,
           class GALGAS_stringset & ioInclusionSet,
           class GALGAS_string & outImplementation,
           C_Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mListElementTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_sortDescriptorListForGeneration mProperty_mSortDescriptorList ;

//--- Constructor
  public: cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                            const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                            const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                            const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListTypeForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedListTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sortedListTypeForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sortedListTypeForGeneration_2D_weak (const class GALGAS_sortedListTypeForGeneration & inSource) ;

  public: GALGAS_sortedListTypeForGeneration_2D_weak & operator = (const class GALGAS_sortedListTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sortedListTypeForGeneration bang_sortedListTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedListTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedListTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sortedListTypeForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ;

