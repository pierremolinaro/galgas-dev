#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//----------------------------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasTemplateScanner
//
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class cTokenFor_galgasTemplateScanner : public cToken {
  public: C_BigInt mLexicalAttribute_bigintValue ;
  public: utf32 mLexicalAttribute_charValue ;
  public: double mLexicalAttribute_floatValue ;
  public: C_String mLexicalAttribute_identifierString ;
  public: int32_t mLexicalAttribute_sint_33__32_value ;
  public: int64_t mLexicalAttribute_sint_36__34_value ;
  public: C_String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;
  public: uint64_t mLexicalAttribute_uint_36__34_value ;

  public: cTokenFor_galgasTemplateScanner (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_galgasTemplateScanner : public C_Lexique_galgasScanner {
//--- Constructors
  public: C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: C_Lexique_galgasTemplateScanner (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ C_Lexique_galgasTemplateScanner (void) {}
  #endif

//--- Scanner mode for template scanner
  private: int32_t mMatchedTemplateDelimiterIndex ;



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier,
   kToken_double_2E_xxx,
   kToken_uint_33__32_,
   kToken_sint_33__32__5F_S,
   kToken_uint_36__34__5F_L,
   kToken_sint_36__34__5F_LS,
   kToken_bigint_5F_G,
   kToken__2E_,
   kToken__2E__2E__2E_,
   kToken__2E__2E__3C_,
   kToken__40_type,
   kToken__25_attribute,
   kToken__27_char_27_,
   kToken__24_terminal_24_,
   kToken__3F_,
   kToken__3F__21_,
   kToken__21_,
   kToken__21__3F_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3C__3C_,
   kToken__3C_non_5F_terminal_3E_,
   kToken__22_string_22_,
   kToken_comment,
   kToken_commentMark,
   kToken_abstract,
   kToken_after,
   kToken_array,
   kToken_as,
   kToken_before,
   kToken_between,
   kToken_block,
   kToken_boolset,
   kToken_cast,
   kToken_case,
   kToken_class,
   kToken_constructor,
   kToken_default,
   kToken_dict,
   kToken_do,
   kToken_drop,
   kToken_else,
   kToken_elsif,
   kToken_end,
   kToken_enum,
   kToken_error,
   kToken_extension,
   kToken_extern,
   kToken_false,
   kToken_filewrapper,
   kToken_for,
   kToken_fixit,
   kToken_func,
   kToken_getter,
   kToken_grammar,
   kToken_graph,
   kToken_gui,
   kToken_if,
   kToken_in,
   kToken_indexing,
   kToken_insert,
   kToken_is,
   kToken_label,
   kToken_let,
   kToken_lexique,
   kToken_list,
   kToken_listmap,
   kToken_log,
   kToken_loop,
   kToken_map,
   kToken_message,
   kToken_method,
   kToken_mod,
   kToken_mutating,
   kToken_not,
   kToken_on,
   kToken_operator,
   kToken_option,
   kToken_or,
   kToken_override,
   kToken_parse,
   kToken_public,
   kToken_private,
   kToken_proc,
   kToken_project,
   kToken_refclass,
   kToken_remove,
   kToken_replace,
   kToken_repeat,
   kToken_rewind,
   kToken_rule,
   kToken_search,
   kToken_select,
   kToken_self,
   kToken_send,
   kToken_setter,
   kToken_sortedlist,
   kToken_struct,
   kToken_style,
   kToken_switch,
   kToken_syntax,
   kToken_tag,
   kToken_template,
   kToken_then,
   kToken_true,
   kToken_unused,
   kToken_var,
   kToken_valueclass,
   kToken_warning,
   kToken_while,
   kToken_with,
   kToken__2A_,
   kToken__2C_,
   kToken__2B_,
   kToken__26__2B_,
   kToken__26__2D_,
   kToken__26__2A_,
   kToken__26__2F_,
   kToken__3E_,
   kToken__3B_,
   kToken__3A_,
   kToken__3A__3E_,
   kToken__2D_,
   kToken__28_,
   kToken__29_,
   kToken__2D__3E_,
   kToken__3D__3D_,
   kToken__3D_,
   kToken__26__26_,
   kToken__5B_,
   kToken__5D_,
   kToken__2B__3D_,
   kToken__2D__3D_,
   kToken__2A__3D_,
   kToken__2F__3D_,
   kToken__2F_,
   kToken__21__3D_,
   kToken__3E__3D_,
   kToken__26_,
   kToken__7B_,
   kToken__7D_,
   kToken__60_,
   kToken__7C__7C_,
   kToken__7C_,
   kToken__5E_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__2D__2D_,
   kToken__2B__2B_,
   kToken__26__2D__2D_,
   kToken__26__2B__2B_,
   kToken__B0_,
   kToken__3D__3D__3D_,
   kToken__21__3D__3D_,
   kToken__3F__5E_,
   kToken__21__5E_} ;

//--- Key words table 'galgasKeyWordList'
  public: static int16_t search_into_galgasKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public: static int16_t search_into_galgasDelimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_lbigint synthetizedAttribute_bigintValue (void) const ;
  public: GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public: GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public: GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GALGAS_lsint synthetizedAttribute_sint_33__32_value (void) const ;
  public: GALGAS_lsint_36__34_ synthetizedAttribute_sint_36__34_value (void) const ;
  public: GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;
  public: GALGAS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


//--- Attribute access
  public: C_BigInt attributeValue_bigintValue (void) const ;
  public: utf32 attributeValue_charValue (void) const ;
  public: double attributeValue_floatValue (void) const ;
  public: C_String attributeValue_identifierString (void) const ;
  public: int32_t attributeValue_sint_33__32_value (void) const ;
  public: int64_t attributeValue_sint_36__34_value (void) const ;
  public: C_String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;
  public: uint64_t attributeValue_uint_36__34_value (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected: virtual C_String indexingDirectory (void) const override  ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_galgasTemplateScanner & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int16_t terminalVocabularyCount (void) const override { return 156 ; }

//--- Get Token String
  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_galgasTemplateScanner & ioToken) ;

//--- Style name for Latex
  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'templateSyntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_templateSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_templateSyntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_expression_ (class GALGAS_templateExpressionAST & outArgument0,
                                          class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GALGAS_templateExpressionAST & outArgument0,
                                      class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_lstringlist & ioArgument0,
                                                             class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                          class GALGAS_templateExpressionAST & outArgument1,
                                                                          class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_ (class GALGAS_templateExpressionListAST & outArgument0,
                                                            class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GALGAS_templateExpressionAST & outArgument0,
                                       class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_ (class GALGAS_templateExpressionAST & outArgument0,
                                                  class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_ (class GALGAS_templateExpressionAST & outArgument0,
                                                class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_ (class GALGAS_templateExpressionAST & outArgument0,
                                                    class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

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

  protected: virtual void nt_term_ (class GALGAS_templateExpressionAST & outArgument0,
                                    class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_parse (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class C_Lexique_galgasTemplateScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_templateSyntax_expression_i0_ (GALGAS_templateExpressionAST & outArgument0,
                                                      C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_i0_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_i0_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_i1_ (GALGAS_templateExpressionAST & outArgument0,
                                                            C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_i1_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_i1_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_i2_ (GALGAS_templateExpressionAST & outArgument0,
                                                              C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_i2_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_i2_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_i3_ (GALGAS_templateExpressionAST & outArgument0,
                                                                C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_i3_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_i3_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_i4_ (GALGAS_templateExpressionAST & outArgument0,
                                                C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_i4_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_i4_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i5_ (GALGAS_templateExpressionAST & outArgument0,
                                                  C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i5_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i5_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i6_ (GALGAS_templateExpressionAST & outArgument0,
                                                  C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i6_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i6_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i7_ (GALGAS_templateExpressionAST & outArgument0,
                                                  C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i7_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i7_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i8_ (GALGAS_templateExpressionAST & outArgument0,
                                                  C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i8_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_i8_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i9_ (GALGAS_templateExpressionAST & outArgument0,
                                                   C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i9_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i9_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i10_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i10_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i10_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i11_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i11_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i11_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i12_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i12_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i12_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i13_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i13_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i13_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i14_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i14_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i14_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i15_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i15_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i15_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i16_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i16_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i16_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i17_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i17_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i17_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i18_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i18_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i18_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i19_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i19_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i19_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i20_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i20_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i20_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i21_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i21_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i21_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i22_ (GALGAS_templateExpressionAST & outArgument0,
                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i22_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_i22_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_i23_ (GALGAS_templateExpressionListAST & outArgument0,
                                                                         C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_i23_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_i23_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i26_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i26_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i26_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i27_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i27_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i27_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i28_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i28_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i28_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i29_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                                  C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i29_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i29_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i30_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i30_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i30_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i31_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i31_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i31_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i32_ (GALGAS_lstringlist & ioArgument0,
                                                                          C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i32_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i32_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i33_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i34_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i35_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i35_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i35_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i36_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i36_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i36_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i37_ (GALGAS_lstringlist & outArgument0,
                                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                                           C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i37_parse (C_Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i37_indexing (C_Lexique_galgasTemplateScanner * inLexique) ;



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

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterTemplateString (class GALGAS_templateInstructionListAST & ioArgument0,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionStringForGeneration (const class cPtr_templateInstructionStringForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mTemplateString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionStringForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionStringForGeneration : public cPtr_templateInstructionForGeneration {

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

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionStringForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionStringForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionStringForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionStringForGeneration_2D_weak (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

  public: GALGAS_templateInstructionStringForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionStringForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionStringForGeneration bang_templateInstructionStringForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionStringForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionStringForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueComponentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueComponentAST_2D_weak (const class GALGAS_lexiqueComponentAST & inSource) ;

  public: GALGAS_lexiqueComponentAST_2D_weak & operator = (const class GALGAS_lexiqueComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueComponentAST bang_lexiqueComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueComponentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ;

