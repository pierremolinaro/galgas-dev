#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-testsuite-5Fgrammar.h"

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

static const int32_t gProductions_testsuite_grammar [] = {
// At index 0 : <start_symbol>, in file 'testsuite_syntax.ggs', line 7
  TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 1 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_testsuite_grammar [2] = {
 {"<start_symbol>", "testsuite_syntax", 0}, // at index 0
 {"<>", "", 1} // at index 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_testsuite_grammar [2] = {
0, // index 0 : <start_symbol>, in file 'testsuite_syntax.ggs', line 7
1 // index 1 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_testsuite_grammar [3] = {
0, // at 0 : <start_symbol>
1, // at 1 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_testsuite_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 1 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_testsuite_grammar [3] = {
0, // at 0 : <start_symbol>
1, // at 1 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_testsuite_5F_grammar::nt_start_5F_symbol_parse (Lexique_testsuite_5F_lexique * inLexique) {
  rule_testsuite_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_testsuite_5F_grammar::nt_start_5F_symbol_indexing (Lexique_testsuite_5F_lexique * inLexique) {
  rule_testsuite_5F_syntax_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_testsuite_5F_grammar::nt_start_5F_symbol_ (Lexique_testsuite_5F_lexique * inLexique) {
  rule_testsuite_5F_syntax_start_5F_symbol_i0_(inLexique) ;
}

void cGrammar_testsuite_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_testsuite_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_testsuite_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_testsuite_grammar, gProductionNames_testsuite_grammar, gProductionIndexes_testsuite_grammar,
                                                    gFirstProductionIndexes_testsuite_grammar, gDecision_testsuite_grammar, gDecisionIndexes_testsuite_grammar, 1) ;
    if (ok) {
      cGrammar_testsuite_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_testsuite_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_testsuite_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_testsuite_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_testsuite_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_testsuite_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_testsuite_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_testsuite_grammar, gProductionNames_testsuite_grammar, gProductionIndexes_testsuite_grammar,
                                    gFirstProductionIndexes_testsuite_grammar, gDecision_testsuite_grammar, gDecisionIndexes_testsuite_grammar, 1) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_testsuite_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_testsuite_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_testsuite_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_testsuite_grammar, gProductionNames_testsuite_grammar, gProductionIndexes_testsuite_grammar,
                                                      gFirstProductionIndexes_testsuite_grammar, gDecision_testsuite_grammar, gDecisionIndexes_testsuite_grammar, 1) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_testsuite_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (scanner) ;
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

void cGrammar_testsuite_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_testsuite_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_testsuite_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_testsuite_grammar, gProductionNames_testsuite_grammar, gProductionIndexes_testsuite_grammar,
                                                    gFirstProductionIndexes_testsuite_grammar, gDecision_testsuite_grammar, gDecisionIndexes_testsuite_grammar, 1) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_testsuite_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------

