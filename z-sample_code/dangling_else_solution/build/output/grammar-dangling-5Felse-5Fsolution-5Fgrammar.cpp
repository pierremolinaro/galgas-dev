#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-dangling-5Felse-5Fsolution-5Fgrammar.h"

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

static const char * gNonTerminalNames_dangling_else_solution_grammar [4] = {
  "<S>",// Index 0
  "<non_closed_instruction>",// Index 1
  "<closed_instruction>",// Index 2
  "<>"// Index 3
} ;

//--------------------------------------------------------------------------------------------------
//
//                      S L R    A N A L Y Z E R    A C T I O N    T A B L E                        
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions:
//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;
//  - the accept action is (terminal_symbol, ACCEPT);
//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.

static const int32_t gActionTable_dangling_else_solution_grammar [] = {
// State S0 (index = 0)
  Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_O, BOTTOM_UP_SHIFT (1)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S1 (index = 5)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E, BOTTOM_UP_REDUCE (2)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S2 (index = 10)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_O, BOTTOM_UP_SHIFT (1)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S3 (index = 15)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S4 (index = 18)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S5 (index = 21)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S6 (index = 24)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S7 (index = 27)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E, BOTTOM_UP_SHIFT (8)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S8 (index = 32)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_O, BOTTOM_UP_SHIFT (1)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S9 (index = 37)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S10 (index = 40)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E, BOTTOM_UP_REDUCE (3)
, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_dangling_else_solution_grammar [11] = {
  0  // S0
, 5  // S1
, 10  // S2
, 15  // S3
, 18  // S4
, 21  // S5
, 24  // S6
, 27  // S7
, 32  // S8
, 37  // S9
, 40  // S10
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_dangling_else_solution_grammar_0 [7] = {0, 3,
  1, 4,
  2, 5, -1} ;

static const int32_t gSuccessorTable_dangling_else_solution_grammar_2 [7] = {0, 6,
  1, 4,
  2, 7, -1} ;

static const int32_t gSuccessorTable_dangling_else_solution_grammar_8 [5] = {1, 9,
  2, 10, -1} ;

static const int32_t * gSuccessorTable_dangling_else_solution_grammar [11] = {
gSuccessorTable_dangling_else_solution_grammar_0, nullptr, gSuccessorTable_dangling_else_solution_grammar_2, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_dangling_else_solution_grammar_8, nullptr, nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_dangling_else_solution_grammar [7 * 2] = {
  0, 1,
  0, 1,
  2, 1,
  2, 4,
  1, 2,
  1, 4,
  3, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                                'S' non terminal implementation                                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_S_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_parse(inLexique) ;
    break ;
  case 1 :
      rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_S_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_indexing(inLexique) ;
    break ;
  case 1 :
      rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_S_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_dangling_5F_else_5F_solution_5F_syntax_S_i0_(inLexique) ;
    break ;
  case 1 :
      rule_dangling_5F_else_5F_solution_5F_syntax_S_i1_(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_dangling_5F_else_5F_solution_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_dangling_5F_else_5F_solution_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_dangling_else_solution_grammar, gNonTerminalNames_dangling_else_solution_grammar,
                                                     gActionTableIndex_dangling_else_solution_grammar, gSuccessorTable_dangling_else_solution_grammar,
                                                     gProductionsTable_dangling_else_solution_grammar) ;
    if (ok) {
      cGrammar_dangling_5F_else_5F_solution_5F_grammar grammar ;
      grammar.nt_S_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_dangling_5F_else_5F_solution_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_dangling_5F_else_5F_solution_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_dangling_5F_else_5F_solution_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_dangling_5F_else_5F_solution_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_dangling_else_solution_grammar, gNonTerminalNames_dangling_else_solution_grammar,
                                     gActionTableIndex_dangling_else_solution_grammar, gSuccessorTable_dangling_else_solution_grammar,
                                     gProductionsTable_dangling_else_solution_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_dangling_5F_else_5F_solution_5F_lexique * scanner = nullptr ;
      macroMyNew (scanner, Lexique_dangling_5F_else_5F_solution_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_dangling_else_solution_grammar, gNonTerminalNames_dangling_else_solution_grammar,
                                                         gActionTableIndex_dangling_else_solution_grammar, gSuccessorTable_dangling_else_solution_grammar,
                                                         gProductionsTable_dangling_else_solution_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_dangling_5F_else_5F_solution_5F_grammar grammar ;
          grammar.nt_S_ (scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_dangling_5F_else_5F_solution_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_dangling_5F_else_5F_solution_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_dangling_else_solution_grammar, gNonTerminalNames_dangling_else_solution_grammar,
                                                       gActionTableIndex_dangling_else_solution_grammar, gSuccessorTable_dangling_else_solution_grammar,
                                                       gProductionsTable_dangling_else_solution_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_dangling_5F_else_5F_solution_5F_grammar grammar ;
        grammar.nt_S_ (scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'non_closed_instruction' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_non_5F_closed_5F_instruction_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_parse(inLexique) ;
    break ;
  case 5 :
      rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_non_5F_closed_5F_instruction_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_indexing(inLexique) ;
    break ;
  case 5 :
      rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_non_5F_closed_5F_instruction_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i4_(inLexique) ;
    break ;
  case 5 :
      rule_dangling_5F_else_5F_solution_5F_syntax_non_5F_closed_5F_instruction_i5_(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'closed_instruction' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_closed_5F_instruction_parse (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_parse(inLexique) ;
    break ;
  case 3 :
      rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_closed_5F_instruction_indexing (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_indexing(inLexique) ;
    break ;
  case 3 :
      rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_dangling_5F_else_5F_solution_5F_grammar::nt_closed_5F_instruction_ (Lexique_dangling_5F_else_5F_solution_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i2_(inLexique) ;
    break ;
  case 3 :
      rule_dangling_5F_else_5F_solution_5F_syntax_closed_5F_instruction_i3_(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

