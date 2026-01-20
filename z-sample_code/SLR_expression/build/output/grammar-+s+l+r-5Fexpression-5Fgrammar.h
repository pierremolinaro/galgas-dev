#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "syntax-+s+l+r-5Fexpression-5Fsyntax.h"
//--------------------------------------------------------------------------------------------------
//  GRAMMAR SLR_expression_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_SLR_5F_expression_5F_grammar : public cParser_SLR_5F_expression_5F_syntax {
//------------------------------------- 'Constant' non terminal
//--- 'parse' label
  public: virtual void nt_Constant_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Constant_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Constant_ (GGS_cExpression & outArgument0,
                                     GGS_uint & outArgument1,
                                     Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//------------------------------------- 'Expression' non terminal
//--- 'parse' label
  public: virtual void nt_Expression_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Expression_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Expression_ (GGS_cExpression & outArgument0,
                                       GGS_uint & outArgument1,
                                       Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//------------------------------------- 'Facteur' non terminal
//--- 'parse' label
  public: virtual void nt_Facteur_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Facteur_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Facteur_ (GGS_cExpression & outArgument0,
                                    GGS_uint & outArgument1,
                                    Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//------------------------------------- 'StartSymbol' non terminal
//--- 'parse' label
  public: virtual void nt_StartSymbol_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_StartSymbol_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_StartSymbol_ (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
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
  public: virtual void nt_Terme_parse (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_Terme_indexing (Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_Terme_ (GGS_cExpression & outArgument0,
                                  GGS_uint & outArgument1,
                                  Lexique_SLR_5F_expression_5F_lexique * inCompiler) ;

  public: virtual int32_t select_SLR_5F_expression_5F_syntax_0 (Lexique_SLR_5F_expression_5F_lexique *) ;

  public: virtual int32_t select_SLR_5F_expression_5F_syntax_1 (Lexique_SLR_5F_expression_5F_lexique *) ;

  public: virtual int32_t select_SLR_5F_expression_5F_syntax_2 (Lexique_SLR_5F_expression_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

