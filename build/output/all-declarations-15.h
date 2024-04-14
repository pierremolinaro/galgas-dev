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
  public: virtual ~ cParser_templateSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                 class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_lstringlist & ioArgument0,
                                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                          class GALGAS_templateExpressionAST & outArgument1,
                                                                          class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (class GALGAS_templateExpressionListAST & outArgument0,
                                                                   class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                         class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_ (class GALGAS_templateInstructionListAST & ioArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (class GALGAS_templateInstructionListAST & outArgument0,
                                                                     class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_templateSyntax_expression_5F_tpl_i0_ (GALGAS_templateExpressionAST & outArgument0,
                                                             Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GALGAS_templateExpressionAST & outArgument0,
                                                                   Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GALGAS_templateExpressionAST & outArgument0,
                                                                     Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GALGAS_templateExpressionAST & outArgument0,
                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_ (GALGAS_templateExpressionAST & outArgument0,
                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_ (GALGAS_templateExpressionAST & outArgument0,
                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GALGAS_templateExpressionListAST & outArgument0,
                                                                                Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                                  Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GALGAS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GALGAS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GALGAS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_ (GALGAS_lstringlist & outArgument0,
                                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_indexing (Lexique_galgasTemplateScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_templateSyntax_0 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_1 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_2 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_3 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_4 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_5 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_6 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_7 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_8 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_9 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_10 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_11 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_12 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_13 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_14 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_15 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_16 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_17 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_18 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_19 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_20 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_21 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_22 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_23 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_24 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_25 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_26 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_27 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_28 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_29 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_30 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_31 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_32 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_33 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_34 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_35 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_36 (Lexique_galgasTemplateScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (class GALGAS_templateInstructionListAST & ioArgument0,
                                      class Compiler * inCompiler
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

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mTemplateString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionStringForGeneration init_21_ (const class GALGAS_string & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionStringForGeneration class_func_new (const class GALGAS_string & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void templateInstructionStringForGeneration_init_21_ (const class GALGAS_string & inOperand0,
                                                                Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mTemplateString ;


//--- Default constructor
  public: cPtr_templateInstructionStringForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionStringForGeneration (const GALGAS_string & in_mTemplateString
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_templateInstructionStringForGeneration bang_templateInstructionStringForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionStringForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionStringForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionStringForGeneration_2D_weak & inOperand) const ;

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
  public: GALGAS_lexiqueComponentAST bang_lexiqueComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueComponentAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueComponentAST_2D_weak & inOperand) const ;

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

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_generateHeader (void) const ;

  public: class GALGAS_string readProperty_implementationCppFileName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticDeclarationWithHeaderForGeneration init_21_generateHeader_21_implementationCppFileName (const class GALGAS_bool & inOperand0,
                                                                                                                        const class GALGAS_string & inOperand1,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationWithHeaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void semanticDeclarationWithHeaderForGeneration_init_21_generateHeader_21_implementationCppFileName (const class GALGAS_bool & inOperand0,
                                                                                                               const class GALGAS_string & inOperand1,
                                                                                                               Compiler * inCompiler) ;


//--- Extension getter getImplementationCppFileName
  public: virtual class GALGAS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GALGAS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_bool mProperty_generateHeader ;
  public: GALGAS_string mProperty_implementationCppFileName ;


//--- Default constructor
  public: cPtr_semanticDeclarationWithHeaderForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_generateHeader,
                                                           const GALGAS_string & in_implementationCppFileName
                                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_semanticDeclarationWithHeaderForGeneration bang_semanticDeclarationWithHeaderForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & inOperand) const ;

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
//Extension getter '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mSelfTypeEntry (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticTypeForGeneration init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void semanticTypeForGeneration_init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                   Compiler * inCompiler) ;


//--- Extension getter appendTypeGenericImplementation
  public: virtual class GALGAS_string getter_appendTypeGenericImplementation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter getImplementationCppFileName
  public: virtual class GALGAS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GALGAS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mSelfTypeEntry ;


//--- Default constructor
  public: cPtr_semanticTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_semanticTypeForGeneration bang_semanticTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticTypeForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticTypeForGeneration_2D_weak & inOperand) const ;

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
// Phase 1: @classTypeForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_classTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_classTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_classTypeForGeneration (const class cPtr_classTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIsAbstract (void) const ;

  public: class GALGAS_bool readProperty_mIsReference (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mAllTypedAttributeList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mCurrentTypedAttributeList (void) const ;

  public: class GALGAS_bool readProperty_generateHeaderInSeparateFile (void) const ;

  public: class GALGAS_bool readProperty_initializerNeedsCompilerVariable (void) const ;

  public: class GALGAS_string readProperty_propertyInitializationCode (void) const ;

  public: class GALGAS_typedPropertyList readProperty_synthetizedInitializerArgumentList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_inheritedSynthetizedInitializerArgumentList (void) const ;

  public: class GALGAS_initializerMap readProperty_initializerMap (void) const ;

  public: class GALGAS_bool readProperty_clonable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_classTypeForGeneration init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                         const class GALGAS_bool & inOperand2,
                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                         const class GALGAS_typedPropertyList & inOperand4,
                                                                                                         const class GALGAS_typedPropertyList & inOperand5,
                                                                                                         const class GALGAS_bool & inOperand6,
                                                                                                         const class GALGAS_bool & inOperand7,
                                                                                                         const class GALGAS_string & inOperand8,
                                                                                                         const class GALGAS_typedPropertyList & inOperand9,
                                                                                                         const class GALGAS_typedPropertyList & inOperand10,
                                                                                                         const class GALGAS_initializerMap & inOperand11,
                                                                                                         const class GALGAS_bool & inOperand12,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_classTypeForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                     const class GALGAS_typedPropertyList & inOperand4,
                                                                     const class GALGAS_typedPropertyList & inOperand5,
                                                                     const class GALGAS_bool & inOperand6,
                                                                     const class GALGAS_bool & inOperand7,
                                                                     const class GALGAS_string & inOperand8,
                                                                     const class GALGAS_typedPropertyList & inOperand9,
                                                                     const class GALGAS_typedPropertyList & inOperand10,
                                                                     const class GALGAS_initializerMap & inOperand11,
                                                                     const class GALGAS_bool & inOperand12
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_classTypeForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void classTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                const class GALGAS_bool & inOperand2,
                                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                const class GALGAS_typedPropertyList & inOperand4,
                                                                                                const class GALGAS_typedPropertyList & inOperand5,
                                                                                                const class GALGAS_bool & inOperand6,
                                                                                                const class GALGAS_bool & inOperand7,
                                                                                                const class GALGAS_string & inOperand8,
                                                                                                const class GALGAS_typedPropertyList & inOperand9,
                                                                                                const class GALGAS_typedPropertyList & inOperand10,
                                                                                                const class GALGAS_initializerMap & inOperand11,
                                                                                                const class GALGAS_bool & inOperand12,
                                                                                                Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GALGAS_string arg_inOutputDirectory,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_bool mProperty_mIsReference ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GALGAS_typedPropertyList mProperty_mAllTypedAttributeList ;
  public: GALGAS_typedPropertyList mProperty_mCurrentTypedAttributeList ;
  public: GALGAS_bool mProperty_generateHeaderInSeparateFile ;
  public: GALGAS_bool mProperty_initializerNeedsCompilerVariable ;
  public: GALGAS_string mProperty_propertyInitializationCode ;
  public: GALGAS_typedPropertyList mProperty_synthetizedInitializerArgumentList ;
  public: GALGAS_typedPropertyList mProperty_inheritedSynthetizedInitializerArgumentList ;
  public: GALGAS_initializerMap mProperty_initializerMap ;
  public: GALGAS_bool mProperty_clonable ;


//--- Default constructor
  public: cPtr_classTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GALGAS_bool & in_mIsAbstract,
                                       const GALGAS_bool & in_mIsReference,
                                       const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                       const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                       const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                       const GALGAS_bool & in_generateHeaderInSeparateFile,
                                       const GALGAS_bool & in_initializerNeedsCompilerVariable,
                                       const GALGAS_string & in_propertyInitializationCode,
                                       const GALGAS_typedPropertyList & in_synthetizedInitializerArgumentList,
                                       const GALGAS_typedPropertyList & in_inheritedSynthetizedInitializerArgumentList,
                                       const GALGAS_initializerMap & in_initializerMap,
                                       const GALGAS_bool & in_clonable
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_classTypeForGeneration bang_classTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_classTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_classTypeForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_classTypeForGeneration_2D_weak & inOperand) const ;

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

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mReferenceClassType (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GALGAS_typedPropertyList readProperty_allTypedPropertyList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_bool readProperty_generateHeaderInSeparateFile (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_weakReferenceTypeForGeneration init_21__21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                     const class GALGAS_typedPropertyList & inOperand3,
                                                                                     const class GALGAS_typedPropertyList & inOperand4,
                                                                                     const class GALGAS_bool & inOperand5,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_weakReferenceTypeForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GALGAS_typedPropertyList & inOperand3,
                                                                             const class GALGAS_typedPropertyList & inOperand4,
                                                                             const class GALGAS_bool & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_weakReferenceTypeForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void weakReferenceTypeForGeneration_init_21__21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GALGAS_typedPropertyList & inOperand3,
                                                                            const class GALGAS_typedPropertyList & inOperand4,
                                                                            const class GALGAS_bool & inOperand5,
                                                                            Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mReferenceClassType ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GALGAS_typedPropertyList mProperty_allTypedPropertyList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_bool mProperty_generateHeaderInSeparateFile ;


//--- Default constructor
  public: cPtr_weakReferenceTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_weakReferenceTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                               const GALGAS_unifiedTypeMapEntry & in_mReferenceClassType,
                                               const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                               const GALGAS_typedPropertyList & in_allTypedPropertyList,
                                               const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                               const GALGAS_bool & in_generateHeaderInSeparateFile
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_weakReferenceTypeForGeneration bang_weakReferenceTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_weakReferenceTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_weakReferenceTypeForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_weakReferenceTypeForGeneration_2D_weak & inOperand) const ;

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

//--------------------------------- Property access
  public: class GALGAS_enumConstantListForGeneration readProperty_mConstantList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_enumTypeForGeneration init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                            const class GALGAS_enumConstantListForGeneration & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumTypeForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GALGAS_enumConstantListForGeneration & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void enumTypeForGeneration_init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                   const class GALGAS_enumConstantListForGeneration & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GALGAS_string arg_inOutputDirectory,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_enumConstantListForGeneration mProperty_mConstantList ;


//--- Default constructor
  public: cPtr_enumTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GALGAS_enumConstantListForGeneration & in_mConstantList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_enumTypeForGeneration bang_enumTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_enumTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_enumTypeForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_enumTypeForGeneration_2D_weak & inOperand) const ;

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
//Extension getter '@typeNameFormalParameterNameList initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_initializerSignature (const class GALGAS_typeNameFormalParameterNameList & inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mExternTypeName (void) const ;

  public: class GALGAS_string readProperty_mCppPreDeclarationCode (void) const ;

  public: class GALGAS_string readProperty_mCppClassCode (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externTypeDeclarationForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeDeclarationForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_string & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void externTypeDeclarationForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mExternTypeName ;
  public: GALGAS_string mProperty_mCppPreDeclarationCode ;
  public: GALGAS_string mProperty_mCppClassCode ;


//--- Default constructor
  public: cPtr_externTypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_externTypeDeclarationForGeneration bang_externTypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externTypeDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externTypeDeclarationForGeneration_2D_weak & inOperand) const ;

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

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListTypeEntry (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListElementTypeEntry (void) const ;

  public: class GALGAS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_graphDeclarationForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GALGAS_graphInsertModifierList & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphDeclarationForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GALGAS_graphInsertModifierList & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void graphDeclarationForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                   const class GALGAS_graphInsertModifierList & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListTypeEntry ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListElementTypeEntry ;
  public: GALGAS_graphInsertModifierList mProperty_mInsertModifierList ;


//--- Default constructor
  public: cPtr_graphDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_graphDeclarationForGeneration bang_graphDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_graphDeclarationForGeneration_2D_weak & inOperand) const ;

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

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mListElementTypeIndex (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_listTypeForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                const class GALGAS_typedPropertyList & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listTypeForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                    const class GALGAS_typedPropertyList & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_listTypeForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void listTypeForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                       const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                       const class GALGAS_typedPropertyList & inOperand2,
                                                       Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mListElementTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;


//--- Default constructor
  public: cPtr_listTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                      const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                      const GALGAS_typedPropertyList & in_mTypedAttributeList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
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
  public: GALGAS_listTypeForGeneration bang_listTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listTypeForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_listTypeForGeneration_2D_weak & inOperand) const ;

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

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListTypeIndex (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mAssociatedListTypedAttributeList (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mAssociatedListMapElementTypeIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_listmapTypeForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                       const class GALGAS_typedPropertyList & inOperand2,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listmapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listmapTypeForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                       const class GALGAS_typedPropertyList & inOperand2,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const ;

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

//--------------------------------- Initializers
  public: void listmapTypeForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                              const class GALGAS_typedPropertyList & inOperand2,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                              Compiler * inCompiler) ;


//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mAssociatedListTypedAttributeList ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mAssociatedListMapElementTypeIndex ;


//--- Default constructor
  public: cPtr_listmapTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Comparison

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

