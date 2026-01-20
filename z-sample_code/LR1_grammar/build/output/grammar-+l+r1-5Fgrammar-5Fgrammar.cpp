#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-+l+r1-5Fgrammar-5Fgrammar.h"

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

static const char * gNonTerminalNames_LR1_grammar_grammar [3] = {
  "<S>",// Index 0
  "<C>",// Index 1
  "<>"// Index 2
} ;

//--------------------------------------------------------------------------------------------------
//
//                    L R ( 1 )    A N A L Y Z E R    A C T I O N    T A B L E                      
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

static const int32_t gActionTable_LR1_grammar_grammar [] = {
// State S0 (index = 0)
  Lexique_LR_31__5F_grammar_5F_lexique::kToken_c, BOTTOM_UP_SHIFT (1)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_d, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S1 (index = 5)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_c, BOTTOM_UP_SHIFT (1)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_d, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S2 (index = 10)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_c, BOTTOM_UP_REDUCE (2)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_d, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S3 (index = 15)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S4 (index = 18)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_c, BOTTOM_UP_SHIFT (6)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_d, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S5 (index = 23)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_c, BOTTOM_UP_REDUCE (1)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_d, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S6 (index = 28)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_c, BOTTOM_UP_SHIFT (6)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_d, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S7 (index = 33)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S8 (index = 36)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S9 (index = 39)
, Lexique_LR_31__5F_grammar_5F_lexique::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_LR1_grammar_grammar [10] = {
  0  // S0
, 5  // S1
, 10  // S2
, 15  // S3
, 18  // S4
, 23  // S5
, 28  // S6
, 33  // S7
, 36  // S8
, 39  // S9
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_LR1_grammar_grammar_0 [5] = {0, 3,
  1, 4, -1} ;

static const int32_t gSuccessorTable_LR1_grammar_grammar_1 [3] = {1, 5, -1} ;

static const int32_t gSuccessorTable_LR1_grammar_grammar_4 [3] = {1, 8, -1} ;

static const int32_t gSuccessorTable_LR1_grammar_grammar_6 [3] = {1, 9, -1} ;

static const int32_t * gSuccessorTable_LR1_grammar_grammar [10] = {
gSuccessorTable_LR1_grammar_grammar_0, gSuccessorTable_LR1_grammar_grammar_1, nullptr, nullptr, 
  gSuccessorTable_LR1_grammar_grammar_4, nullptr, gSuccessorTable_LR1_grammar_grammar_6, nullptr, 
  nullptr, nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_LR1_grammar_grammar [4 * 2] = {
  0, 2,
  1, 2,
  1, 1,
  2, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                                'S' non terminal implementation                                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LR_31__5F_grammar_5F_grammar::nt_S_parse (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_LR_31__5F_grammar_5F_syntax_S_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_LR_31__5F_grammar_5F_grammar::nt_S_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_LR_31__5F_grammar_5F_syntax_S_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_LR_31__5F_grammar_5F_grammar::nt_S_ (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_LR_31__5F_grammar_5F_syntax_S_i0_(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_LR_31__5F_grammar_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_LR_31__5F_grammar_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_LR_31__5F_grammar_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_LR1_grammar_grammar, gNonTerminalNames_LR1_grammar_grammar,
                                                     gActionTableIndex_LR1_grammar_grammar, gSuccessorTable_LR1_grammar_grammar,
                                                     gProductionsTable_LR1_grammar_grammar) ;
    if (ok) {
      cGrammar_LR_31__5F_grammar_5F_grammar grammar ;
      grammar.nt_S_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_LR_31__5F_grammar_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_LR_31__5F_grammar_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_LR_31__5F_grammar_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_LR_31__5F_grammar_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_LR_31__5F_grammar_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_LR_31__5F_grammar_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_LR1_grammar_grammar, gNonTerminalNames_LR1_grammar_grammar,
                                     gActionTableIndex_LR1_grammar_grammar, gSuccessorTable_LR1_grammar_grammar,
                                     gProductionsTable_LR1_grammar_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

void cGrammar_LR_31__5F_grammar_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_LR_31__5F_grammar_5F_lexique * scanner = nullptr ;
      macroMyNew (scanner, Lexique_LR_31__5F_grammar_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_LR1_grammar_grammar, gNonTerminalNames_LR1_grammar_grammar,
                                                         gActionTableIndex_LR1_grammar_grammar, gSuccessorTable_LR1_grammar_grammar,
                                                         gProductionsTable_LR1_grammar_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_LR_31__5F_grammar_5F_grammar grammar ;
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

void cGrammar_LR_31__5F_grammar_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_LR_31__5F_grammar_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_LR_31__5F_grammar_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performBottomUpParsing (gActionTable_LR1_grammar_grammar, gNonTerminalNames_LR1_grammar_grammar,
                                                     gActionTableIndex_LR1_grammar_grammar, gSuccessorTable_LR1_grammar_grammar,
                                                     gProductionsTable_LR1_grammar_grammar) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_LR_31__5F_grammar_5F_grammar grammar ;
      grammar.nt_S_ (scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                                'C' non terminal implementation                                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LR_31__5F_grammar_5F_grammar::nt_C_parse (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_LR_31__5F_grammar_5F_syntax_C_i1_parse(inLexique) ;
    break ;
  case 2 :
      rule_LR_31__5F_grammar_5F_syntax_C_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_LR_31__5F_grammar_5F_grammar::nt_C_indexing (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_LR_31__5F_grammar_5F_syntax_C_i1_indexing(inLexique) ;
    break ;
  case 2 :
      rule_LR_31__5F_grammar_5F_syntax_C_i2_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_LR_31__5F_grammar_5F_grammar::nt_C_ (Lexique_LR_31__5F_grammar_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_LR_31__5F_grammar_5F_syntax_C_i1_(inLexique) ;
    break ;
  case 2 :
      rule_LR_31__5F_grammar_5F_syntax_C_i2_(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

