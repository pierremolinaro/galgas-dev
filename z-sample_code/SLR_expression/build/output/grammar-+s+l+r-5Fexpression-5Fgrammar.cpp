#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-+s+l+r-5Fexpression-5Fgrammar.h"

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

static const char * gNonTerminalNames_SLR_expression_grammar [9] = {
  "<StartSymbol>",// Index 0
  "<Expression>",// Index 1
  "<Terme>",// Index 2
  "<Facteur>",// Index 3
  "<Constant>",// Index 4
  "<select_SLR_5F_expression_5F_syntax_0>",// Index 5
  "<select_SLR_5F_expression_5F_syntax_1>",// Index 6
  "<select_SLR_5F_expression_5F_syntax_2>",// Index 7
  "<>"// Index 8
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

static const int32_t gActionTable_SLR_expression_grammar [] = {
// State S0 (index = 0)
  Lexique_SLR_5F_expression_5F_lexique::kToken_number, BOTTOM_UP_SHIFT (1)
, Lexique_SLR_5F_expression_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S1 (index = 5)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (1)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (1)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (1)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S2 (index = 14)
, Lexique_SLR_5F_expression_5F_lexique::kToken_number, BOTTOM_UP_SHIFT (1)
, Lexique_SLR_5F_expression_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S3 (index = 19)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S4 (index = 22)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_SHIFT (12)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S5 (index = 27)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (5)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_SHIFT (13)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (5)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S6 (index = 36)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (7)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (7)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (7)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S7 (index = 45)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (10)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (10)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (10)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END
// State S8 (index = 54)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (2)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (2)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S9 (index = 61)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (3)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (3)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (3)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S10 (index = 70)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (4)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (4)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (4)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S11 (index = 79)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_SHIFT (12)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (14)
, BOTTOM_UP_END
// State S12 (index = 84)
, Lexique_SLR_5F_expression_5F_lexique::kToken_number, BOTTOM_UP_SHIFT (1)
, Lexique_SLR_5F_expression_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S13 (index = 89)
, Lexique_SLR_5F_expression_5F_lexique::kToken_number, BOTTOM_UP_SHIFT (1)
, Lexique_SLR_5F_expression_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (2)
, BOTTOM_UP_END
// State S14 (index = 94)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (9)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (9)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (9)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S15 (index = 103)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (6)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_SHIFT (13)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (6)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S16 (index = 112)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (8)
, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (8)
, Lexique_SLR_5F_expression_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (8)
, Lexique_SLR_5F_expression_5F_lexique::kToken_, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_SLR_expression_grammar [17] = {
  0  // S0
, 5  // S1
, 14  // S2
, 19  // S3
, 22  // S4
, 27  // S5
, 36  // S6
, 45  // S7
, 54  // S8
, 61  // S9
, 70  // S10
, 79  // S11
, 84  // S12
, 89  // S13
, 94  // S14
, 103  // S15
, 112  // S16
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_SLR_expression_grammar_0 [17] = {0, 3,
  1, 4,
  2, 5,
  3, 6,
  4, 7,
  5, 8,
  6, 9,
  7, 10, -1} ;

static const int32_t gSuccessorTable_SLR_expression_grammar_2 [15] = {1, 11,
  2, 5,
  3, 6,
  4, 7,
  5, 8,
  6, 9,
  7, 10, -1} ;

static const int32_t gSuccessorTable_SLR_expression_grammar_12 [11] = {2, 15,
  3, 6,
  4, 7,
  6, 9,
  7, 10, -1} ;

static const int32_t gSuccessorTable_SLR_expression_grammar_13 [7] = {3, 16,
  4, 7,
  7, 10, -1} ;

static const int32_t * gSuccessorTable_SLR_expression_grammar [17] = {
gSuccessorTable_SLR_expression_grammar_0, nullptr, gSuccessorTable_SLR_expression_grammar_2, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_SLR_expression_grammar_12, gSuccessorTable_SLR_expression_grammar_13, nullptr, nullptr, 
  nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_SLR_expression_grammar [12 * 2] = {
  0, 1,
  4, 1,
  1, 1,
  2, 1,
  3, 1,
  5, 1,
  5, 3,
  6, 1,
  6, 3,
  7, 3,
  7, 1,
  8, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                           'StartSymbol' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_SLR_5F_expression_5F_grammar::nt_StartSymbol_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_StartSymbol_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_StartSymbol_ (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_SLR_5F_expression_5F_syntax_StartSymbol_i0_(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_SLR_5F_expression_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_SLR_5F_expression_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_SLR_expression_grammar, gNonTerminalNames_SLR_expression_grammar,
                                                     gActionTableIndex_SLR_expression_grammar, gSuccessorTable_SLR_expression_grammar,
                                                     gProductionsTable_SLR_expression_grammar) ;
    if (ok) {
      cGrammar_SLR_5F_expression_5F_grammar grammar ;
      grammar.nt_StartSymbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_SLR_5F_expression_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_SLR_5F_expression_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_SLR_5F_expression_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_SLR_5F_expression_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_SLR_5F_expression_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_SLR_5F_expression_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_SLR_expression_grammar, gNonTerminalNames_SLR_expression_grammar,
                                     gActionTableIndex_SLR_expression_grammar, gSuccessorTable_SLR_expression_grammar,
                                     gProductionsTable_SLR_expression_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_SLR_5F_expression_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_SLR_5F_expression_5F_lexique * scanner = nullptr ;
      macroMyNew (scanner, Lexique_SLR_5F_expression_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_SLR_expression_grammar, gNonTerminalNames_SLR_expression_grammar,
                                                         gActionTableIndex_SLR_expression_grammar, gSuccessorTable_SLR_expression_grammar,
                                                         gProductionsTable_SLR_expression_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_SLR_5F_expression_5F_grammar grammar ;
          grammar.nt_StartSymbol_ (scanner) ;
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

void cGrammar_SLR_5F_expression_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_SLR_5F_expression_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_SLR_5F_expression_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_SLR_expression_grammar, gNonTerminalNames_SLR_expression_grammar,
                                                       gActionTableIndex_SLR_expression_grammar, gSuccessorTable_SLR_expression_grammar,
                                                       gProductionsTable_SLR_expression_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_SLR_5F_expression_5F_grammar grammar ;
        grammar.nt_StartSymbol_ (scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'Expression' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_SLR_5F_expression_5F_grammar::nt_Expression_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_SLR_5F_expression_5F_syntax_Expression_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Expression_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_SLR_5F_expression_5F_syntax_Expression_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Expression_ (GGS_cExpression &  parameter_1,
                                GGS_uint &  parameter_2,
                                Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_SLR_5F_expression_5F_syntax_Expression_i2_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                              'Terme' non terminal implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_SLR_5F_expression_5F_grammar::nt_Terme_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_SLR_5F_expression_5F_syntax_Terme_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Terme_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_SLR_5F_expression_5F_syntax_Terme_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Terme_ (GGS_cExpression &  parameter_1,
                                GGS_uint &  parameter_2,
                                Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_SLR_5F_expression_5F_syntax_Terme_i3_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                             'Facteur' non terminal implementation                                
//
//--------------------------------------------------------------------------------------------------

void cGrammar_SLR_5F_expression_5F_grammar::nt_Facteur_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_SLR_5F_expression_5F_syntax_Facteur_i4_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Facteur_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_SLR_5F_expression_5F_syntax_Facteur_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Facteur_ (GGS_cExpression &  parameter_1,
                                GGS_uint &  parameter_2,
                                Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_SLR_5F_expression_5F_syntax_Facteur_i4_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                             'Constant' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_SLR_5F_expression_5F_grammar::nt_Constant_parse (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_SLR_5F_expression_5F_syntax_Constant_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Constant_indexing (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_SLR_5F_expression_5F_syntax_Constant_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_SLR_5F_expression_5F_grammar::nt_Constant_ (GGS_cExpression &  parameter_1,
                                GGS_uint &  parameter_2,
                                Lexique_SLR_5F_expression_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_SLR_5F_expression_5F_syntax_Constant_i1_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//               'select_SLR_5F_expression_5F_syntax_0' non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_SLR_5F_expression_5F_grammar::select_SLR_5F_expression_5F_syntax_0 (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
// Productions numbers:  5 6
  return inLexique->nextProductionIndex () - 4 ;
}

//--------------------------------------------------------------------------------------------------
//
//               'select_SLR_5F_expression_5F_syntax_1' non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_SLR_5F_expression_5F_grammar::select_SLR_5F_expression_5F_syntax_1 (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
// Productions numbers:  7 8
  return inLexique->nextProductionIndex () - 6 ;
}

//--------------------------------------------------------------------------------------------------
//
//               'select_SLR_5F_expression_5F_syntax_2' non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_SLR_5F_expression_5F_grammar::select_SLR_5F_expression_5F_syntax_2 (Lexique_SLR_5F_expression_5F_lexique * inLexique) {
// Productions numbers:  9 10
  return inLexique->nextProductionIndex () - 8 ;
}

//--------------------------------------------------------------------------------------------------

