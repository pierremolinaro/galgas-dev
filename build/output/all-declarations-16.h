#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasTemplateScanner
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

typedef cTokenFor_galgasScanner_33_ cTokenFor_galgasTemplateScanner ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_galgasTemplateScanner : public Lexique_galgasScanner_33_ {
//--- Constructors
  public: Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_galgasTemplateScanner (void) { }
  #endif
//--- Scanner mode for template scanner
  private: int32_t mMatchedTemplateDelimiterIndex ;

//--- Parse lexical token
  protected: virtual bool parseLexicalToken (void) override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'templateSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_templateSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_templateSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                 class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GGS_lstringlist & ioArgument0,
                                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GGS_templateInstructionForEnumerationAST & outArgument0,
                                                                          class GGS_templateExpressionAST & outArgument1,
                                                                          class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (class GGS_templateExpressionListAST & outArgument0,
                                                                   class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                         class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GGS__5B_lstring_5D_ & outArgument0,
                                              class GGS_switchExtractedValuesListAST & outArgument1,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_ (class GGS_templateInstructionListAST & ioArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (class GGS_templateInstructionListAST & outArgument0,
                                                                     class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_ (class GGS_templateExpressionAST & outArgument0,
                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_templateSyntax_expression_5F_tpl_i0_ (GGS_templateExpressionAST & outArgument0,
                                                             Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GGS_templateExpressionAST & outArgument0,
                                                                   Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GGS_templateExpressionAST & outArgument0,
                                                                     Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GGS_templateExpressionAST & outArgument0,
                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_ (GGS_templateExpressionAST & outArgument0,
                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_ (GGS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_ (GGS_templateExpressionAST & outArgument0,
                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_ (GGS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GGS_templateExpressionListAST & outArgument0,
                                                                                Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GGS_templateInstructionListAST & outArgument0,
                                                                                  Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GGS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GGS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GGS_templateExpressionAST & outArgument1,
                                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GGS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GGS_templateExpressionAST & outArgument1,
                                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_ (GGS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_ (GGS__5B_lstring_5D_ & outArgument0,
                                                           GGS_switchExtractedValuesListAST & outArgument1,
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

void routine_enterTemplateString_26_ (class GGS_templateInstructionListAST & ioArgument0,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionStringForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringForGeneration : public GGS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionStringForGeneration (const class cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mTemplateString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionStringForGeneration init_21_ (const class GGS_string & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionStringForGeneration extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionStringForGeneration class_func_new (const class GGS_string & inOperand0,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionStringForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionStringForGeneration_init_21_ (const class GGS_string & inOperand0,
                                                                Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mTemplateString ;


//--- Default constructor
  public: cPtr_templateInstructionStringForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionStringForGeneration (const GGS_string & in_mTemplateString,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionStringForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionStringForGeneration_2E_weak : public GGS_templateInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_templateInstructionStringForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_templateInstructionStringForGeneration_2E_weak (const class GGS_templateInstructionStringForGeneration & inSource) ;

  public: GGS_templateInstructionStringForGeneration_2E_weak & operator = (const class GGS_templateInstructionStringForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_templateInstructionStringForGeneration_2E_weak init_nil (void) {
    GGS_templateInstructionStringForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_templateInstructionStringForGeneration bang_templateInstructionStringForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_templateInstructionStringForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_templateInstructionStringForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_templateInstructionStringForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionStringForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexiqueComponentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexiqueComponentAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexiqueComponentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexiqueComponentAST_2E_weak (const class GGS_lexiqueComponentAST & inSource) ;

  public: GGS_lexiqueComponentAST_2E_weak & operator = (const class GGS_lexiqueComponentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexiqueComponentAST_2E_weak init_nil (void) {
    GGS_lexiqueComponentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexiqueComponentAST bang_lexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexiqueComponentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lexiqueComponentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lexiqueComponentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexiqueComponentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST_2E_weak ;

