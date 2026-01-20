#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "syntax-+l+r1-5Fgrammar-5Fsyntax.h"
//--------------------------------------------------------------------------------------------------
//  GRAMMAR LR1_grammar_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_LR_31__5F_grammar_5F_grammar : public cParser_LR_31__5F_grammar_5F_syntax {
//------------------------------------- 'C' non terminal
//--- 'parse' label
  public: virtual void nt_C_parse (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_C_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_C_ (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) ;

//------------------------------------- 'S' non terminal
//--- 'parse' label
  public: virtual void nt_S_parse (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_S_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_S_ (Lexique_LR_31__5F_grammar_5F_lexique * inCompiler) ;

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

} ;

//--------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

