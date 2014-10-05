#ifndef syntax_2D_grammarModelBuilder_1_DEFINED
#define syntax_2D_grammarModelBuilder_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "lexique-galgas_scanner.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Parser class 'grammarModelBuilder' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_grammarModelBuilder {
//--- Virtual destructor
  public : virtual ~ cParser_grammarModelBuilder (void) {}

//--- Non terminal declarations
  protected : virtual void nt_grammar_5F_component_5F_start_5F_symbol_ (class GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0,
                                                                        class C_String & ioSyntaxDirectedTranslationResult,
                                                                        class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_component_5F_start_5F_symbol_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_component_5F_start_5F_symbol_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                    class C_String & ioSyntaxDirectedTranslationResult,
                                                                    class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                         class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_label_5F_formal_5F_parameter_ (class GALGAS_lstring & outArgument0,
                                                             class GALGAS_formalParameterListAST & ioArgument1,
                                                             class C_String & ioSyntaxDirectedTranslationResult,
                                                             class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_label_5F_formal_5F_parameter_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                  class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_label_5F_formal_5F_parameter_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_grammarModelBuilder_grammar_5F_component_5F_start_5F_symbol_i0_ (GALGAS_galgas_33_GrammarComponentListAST_2D_element & outArgument0,
                                                                                         C_String & ioSyntaxDirectedTranslationResult,
                                                                                         C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_component_5F_start_5F_symbol_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_component_5F_start_5F_symbol_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_start_5F_symbol_5F_label_i1_ (const GALGAS_lstring constinArgument0,
                                                                                     GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                                     C_String & ioSyntaxDirectedTranslationResult,
                                                                                     C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_start_5F_symbol_5F_label_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                          C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_grammar_5F_start_5F_symbol_5F_label_i1_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i2_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i2_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i3_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i3_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i3_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i4_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i4_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i4_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i5_ (GALGAS_lstring & outArgument0,
                                                                              GALGAS_formalParameterListAST & ioArgument1,
                                                                              C_String & ioSyntaxDirectedTranslationResult,
                                                                              C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i5_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                   C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_grammarModelBuilder_label_5F_formal_5F_parameter_i5_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_grammarModelBuilder_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_2 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_3 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_4 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_5 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_6 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_7 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_8 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_grammarModelBuilder_9 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

