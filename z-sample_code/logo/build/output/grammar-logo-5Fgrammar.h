#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "syntax-logo-5Fsyntax.h"
//--------------------------------------------------------------------------------------------------
//  GRAMMAR logo_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_logo_5F_grammar : public cParser_logo_5F_syntax {
//------------------------------------- 'instruction' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_parse (Lexique_logo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_indexing (Lexique_logo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_ (GGS_routineMap & ioArgument0,
                                        GGS_instructionList & ioArgument1,
                                        Lexique_logo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (Lexique_logo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (Lexique_logo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GGS_routineMap & ioArgument0,
                                                GGS_instructionList & ioArgument1,
                                                Lexique_logo_5F_lexique * inCompiler) ;

//------------------------------------- 'pen_direction' non terminal
//--- 'parse' label
  public: virtual void nt_pen_5F_direction_parse (Lexique_logo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_pen_5F_direction_indexing (Lexique_logo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_pen_5F_direction_ (GGS_instructionList & ioArgument0,
                                             Lexique_logo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (Lexique_logo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (Lexique_logo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GGS_routineMap & ioArgument0,
                                                  Lexique_logo_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_logo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_logo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (Lexique_logo_5F_lexique * inCompiler) ;

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

  public: virtual int32_t select_logo_5F_syntax_0 (Lexique_logo_5F_lexique *) ;

  public: virtual int32_t select_logo_5F_syntax_1 (Lexique_logo_5F_lexique *) ;

  public: virtual int32_t select_logo_5F_syntax_2 (Lexique_logo_5F_lexique *) ;

  public: virtual int32_t select_logo_5F_syntax_3 (Lexique_logo_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

