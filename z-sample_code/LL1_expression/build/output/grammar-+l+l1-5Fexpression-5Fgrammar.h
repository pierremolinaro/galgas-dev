#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "syntax-+l+l1-5Fexpression-5Fsyntax.h"
//--------------------------------------------------------------------------------------------------
//  GRAMMAR LL1_expression_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_LL_31__5F_expression_5F_grammar : public cParser_LL_31__5F_expression_5F_syntax {
//------------------------------------- 'Constant' non terminal
//--- 'parse' label
  public: virtual void nt_Constant_parse (String & ioSyntaxDirectedTranslationResult,
                                          Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Constant_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Constant_ (GGS_cExpression & outArgument0,
                                     GGS_uint & outArgument1,
                                     String & ioSyntaxDirectedTranslationResult,
                                     Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//------------------------------------- 'Expression' non terminal
//--- 'parse' label
  public: virtual void nt_Expression_parse (String & ioSyntaxDirectedTranslationResult,
                                            Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Expression_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Expression_ (GGS_cExpression & outArgument0,
                                       GGS_uint & outArgument1,
                                       String & ioSyntaxDirectedTranslationResult,
                                       Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//------------------------------------- 'Facteur' non terminal
//--- 'parse' label
  public: virtual void nt_Facteur_parse (String & ioSyntaxDirectedTranslationResult,
                                         Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Facteur_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Facteur_ (GGS_cExpression & outArgument0,
                                    GGS_uint & outArgument1,
                                    String & ioSyntaxDirectedTranslationResult,
                                    Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//------------------------------------- 'StartSymbol' non terminal
//--- 'parse' label
  public: virtual void nt_StartSymbol_parse (String & ioSyntaxDirectedTranslationResult,
                                             Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_StartSymbol_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_StartSymbol_ (String & ioSyntaxDirectedTranslationResult,
                                        Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  String & ioSyntaxDirectedTranslationResult,
                                                  GGS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    String & ioSyntaxDirectedTranslationResult,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'Terme' non terminal
//--- 'parse' label
  public: virtual void nt_Terme_parse (String & ioSyntaxDirectedTranslationResult,
                                       Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Terme_indexing (Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Terme_ (GGS_cExpression & outArgument0,
                                  GGS_uint & outArgument1,
                                  String & ioSyntaxDirectedTranslationResult,
                                  Lexique_LL_31__5F_expression_5F_lexique * inCompiler) ;

  public: virtual int32_t select_LL_31__5F_expression_5F_syntax_0 (Lexique_LL_31__5F_expression_5F_lexique *) ;

  public: virtual int32_t select_LL_31__5F_expression_5F_syntax_1 (Lexique_LL_31__5F_expression_5F_lexique *) ;

  public: virtual int32_t select_LL_31__5F_expression_5F_syntax_2 (Lexique_LL_31__5F_expression_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

