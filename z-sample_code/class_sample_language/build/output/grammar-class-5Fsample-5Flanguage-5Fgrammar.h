#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "syntax-class-5Fsample-5Flanguage-5Fsyntax.h"
//--------------------------------------------------------------------------------------------------
//  GRAMMAR class_sample_language_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_class_5F_sample_5F_language_5F_grammar : public cParser_class_5F_sample_5F_language_5F_syntax {
//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_class_5F_sample_5F_language_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_class_5F_sample_5F_language_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_declarationListAST & outArgument0,
                                            Lexique_class_5F_sample_5F_language_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_declarationListAST & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_declarationListAST & outArgument0
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

  public: virtual int32_t select_class_5F_sample_5F_language_5F_syntax_0 (Lexique_class_5F_sample_5F_language_5F_lexique *) ;

  public: virtual int32_t select_class_5F_sample_5F_language_5F_syntax_1 (Lexique_class_5F_sample_5F_language_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

