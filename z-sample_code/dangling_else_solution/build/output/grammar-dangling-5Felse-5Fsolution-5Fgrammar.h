#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "syntax-dangling-5Felse-5Fsolution-5Fsyntax.h"
//--------------------------------------------------------------------------------------------------
//  GRAMMAR dangling_else_solution_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_dangling_5F_else_5F_solution_5F_grammar : public cParser_dangling_5F_else_5F_solution_5F_syntax {
//------------------------------------- 'S' non terminal
//--- 'parse' label
  public: virtual void nt_S_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_S_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_S_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

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

//------------------------------------- 'closed_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_closed_5F_instruction_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_closed_5F_instruction_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_closed_5F_instruction_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

//------------------------------------- 'non_closed_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_non_5F_closed_5F_instruction_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_non_5F_closed_5F_instruction_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_non_5F_closed_5F_instruction_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inCompiler) ;

} ;

//--------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

