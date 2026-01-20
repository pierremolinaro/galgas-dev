#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-class-5Fsample-5Flanguage-5Fgrammar.h"

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_class_sample_language_grammar [] = {
// At index 0 : <start_symbol>, in file 'class_sample_language_syntax.ggs', line 5
  TOP_DOWN_NONTERMINAL (1) // <select_class_5F_sample_5F_language_5F_syntax_0>
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 2 : <select_class_5F_sample_5F_language_5F_syntax_0>, in file 'class_sample_language_syntax.ggs', line 7
, TOP_DOWN_END_PRODUCTION ()
// At index 3 : <select_class_5F_sample_5F_language_5F_syntax_0>, in file 'class_sample_language_syntax.ggs', line 7
, TOP_DOWN_TERMINAL (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_class) // $class$
, TOP_DOWN_TERMINAL (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (2) // <select_class_5F_sample_5F_language_5F_syntax_1>
, TOP_DOWN_TERMINAL (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (1) // <select_class_5F_sample_5F_language_5F_syntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 9 : <select_class_5F_sample_5F_language_5F_syntax_1>, in file 'class_sample_language_syntax.ggs', line 11
, TOP_DOWN_END_PRODUCTION ()
// At index 10 : <select_class_5F_sample_5F_language_5F_syntax_1>, in file 'class_sample_language_syntax.ggs', line 11
, TOP_DOWN_TERMINAL (Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_class_5F_sample_5F_language_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_END_PRODUCTION ()
// At index 13 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_class_sample_language_grammar [6] = {
 {"<start_symbol>", "class_sample_language_syntax", 0}, // at index 0
 {"<select_class_5F_sample_5F_language_5F_syntax_0>", "class_sample_language_syntax", 2}, // at index 1
 {"<select_class_5F_sample_5F_language_5F_syntax_0>", "class_sample_language_syntax", 3}, // at index 2
 {"<select_class_5F_sample_5F_language_5F_syntax_1>", "class_sample_language_syntax", 9}, // at index 3
 {"<select_class_5F_sample_5F_language_5F_syntax_1>", "class_sample_language_syntax", 10}, // at index 4
 {"<>", "", 13} // at index 5
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_class_sample_language_grammar [6] = {
0, // index 0 : <start_symbol>, in file 'class_sample_language_syntax.ggs', line 5
2, // index 1 : <select_class_5F_sample_5F_language_5F_syntax_0>, in file 'class_sample_language_syntax.ggs', line 7
3, // index 2 : <select_class_5F_sample_5F_language_5F_syntax_0>, in file 'class_sample_language_syntax.ggs', line 7
9, // index 3 : <select_class_5F_sample_5F_language_5F_syntax_1>, in file 'class_sample_language_syntax.ggs', line 11
10, // index 4 : <select_class_5F_sample_5F_language_5F_syntax_1>, in file 'class_sample_language_syntax.ggs', line 11
13 // index 5 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_class_sample_language_grammar [5] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_class_5F_sample_5F_language_5F_syntax_0>
3, // at 2 : <select_class_5F_sample_5F_language_5F_syntax_1>
5, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_class_sample_language_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 1 : <select_class_5F_sample_5F_language_5F_syntax_0>
Lexique_class_5F_sample_5F_language_5F_lexique::kToken_, -1, // Choice 1
Lexique_class_5F_sample_5F_language_5F_lexique::kToken_class, -1, // Choice 2
  -1,
// At index 6 : <select_class_5F_sample_5F_language_5F_syntax_1>
Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3B_, -1, // Choice 1
Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3A_, -1, // Choice 2
  -1,
// At index 11 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_class_sample_language_grammar [5] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_class_5F_sample_5F_language_5F_syntax_0>
6, // at 2 : <select_class_5F_sample_5F_language_5F_syntax_1>
11, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_class_5F_sample_5F_language_5F_grammar::nt_start_5F_symbol_parse (Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) {
  rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_class_5F_sample_5F_language_5F_grammar::nt_start_5F_symbol_indexing (Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) {
  rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_class_5F_sample_5F_language_5F_grammar::nt_start_5F_symbol_ (GGS_declarationListAST & parameter_1,
                                Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) {
  rule_class_5F_sample_5F_language_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
}

void cGrammar_class_5F_sample_5F_language_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_class_5F_sample_5F_language_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_class_5F_sample_5F_language_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_class_sample_language_grammar, gProductionNames_class_sample_language_grammar, gProductionIndexes_class_sample_language_grammar,
                                                    gFirstProductionIndexes_class_sample_language_grammar, gDecision_class_sample_language_grammar, gDecisionIndexes_class_sample_language_grammar, 13) ;
    if (ok) {
      cGrammar_class_5F_sample_5F_language_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_class_5F_sample_5F_language_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_class_5F_sample_5F_language_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_class_5F_sample_5F_language_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_class_5F_sample_5F_language_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_class_5F_sample_5F_language_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_class_5F_sample_5F_language_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_class_sample_language_grammar, gProductionNames_class_sample_language_grammar, gProductionIndexes_class_sample_language_grammar,
                                    gFirstProductionIndexes_class_sample_language_grammar, gDecision_class_sample_language_grammar, gDecisionIndexes_class_sample_language_grammar, 13) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_class_5F_sample_5F_language_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_declarationListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_class_5F_sample_5F_language_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_class_5F_sample_5F_language_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_class_sample_language_grammar, gProductionNames_class_sample_language_grammar, gProductionIndexes_class_sample_language_grammar,
                                                      gFirstProductionIndexes_class_sample_language_grammar, gDecision_class_sample_language_grammar, gDecisionIndexes_class_sample_language_grammar, 13) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_class_5F_sample_5F_language_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
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

void cGrammar_class_5F_sample_5F_language_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_declarationListAST &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_class_5F_sample_5F_language_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_class_5F_sample_5F_language_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_class_sample_language_grammar, gProductionNames_class_sample_language_grammar, gProductionIndexes_class_sample_language_grammar,
                                                    gFirstProductionIndexes_class_sample_language_grammar, gDecision_class_sample_language_grammar, gDecisionIndexes_class_sample_language_grammar, 13) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_class_5F_sample_5F_language_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//       'select_class_5F_sample_5F_language_5F_syntax_0' added non terminal implementation         
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_class_5F_sample_5F_language_5F_grammar::select_class_5F_sample_5F_language_5F_syntax_0 (Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//       'select_class_5F_sample_5F_language_5F_syntax_1' added non terminal implementation         
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_class_5F_sample_5F_language_5F_grammar::select_class_5F_sample_5F_language_5F_syntax_1 (Lexique_class_5F_sample_5F_language_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

