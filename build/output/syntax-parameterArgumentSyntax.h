#ifndef syntax_2D_parameterArgumentSyntax_1_DEFINED
#define syntax_2D_parameterArgumentSyntax_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "lexique-galgas_scanner.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Parser class 'parameterArgumentSyntax' declaration                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_parameterArgumentSyntax {
//--- Virtual destructor
  public : virtual ~ cParser_parameterArgumentSyntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_actual_5F_parameter_5F_list_ (class GALGAS_actualParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_actual_5F_parameter_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_semanticExpressionAST & outArgument0,
                                           class C_String & ioSyntaxDirectedTranslationResult,
                                           class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_expression_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (class GALGAS_formalInputParameterListAST & outArgument0,
                                                                     class C_String & ioSyntaxDirectedTranslationResult,
                                                                     class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                          class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_ (class GALGAS_formalParameterListAST & outArgument0,
                                                            class C_String & ioSyntaxDirectedTranslationResult,
                                                            class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_parse (class C_String & ioSyntaxDirectedTranslationResult,
                                                                 class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;

  protected : virtual void nt_formal_5F_parameter_5F_list_indexing (class C_Lexique_galgas_5F_scanner * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_parameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument0,
                                                                                 C_String & ioSyntaxDirectedTranslationResult,
                                                                                 C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                      C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument0,
                                                                                          C_String & ioSyntaxDirectedTranslationResult,
                                                                                          C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_String & ioSyntaxDirectedTranslationResult,
                                                                                               C_Lexique_galgas_5F_scanner * inLexique) ;

  protected : void rule_parameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_5F_scanner * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_parameterArgumentSyntax_0 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_1 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_2 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_3 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_4 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_5 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_6 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_7 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_8 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_9 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_10 (C_Lexique_galgas_5F_scanner *) = 0 ;

  protected : virtual int32_t select_parameterArgumentSyntax_11 (C_Lexique_galgas_5F_scanner *) = 0 ;


} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

