#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-+l+l1-5Fexpression-5Fgrammar.h"

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

static const int32_t gProductions_LL1_expression_grammar [] = {
// At index 0 : <StartSymbol>, in file 'LL1_expression_syntax.ggs', line 3
  TOP_DOWN_NONTERMINAL (2) // <Expression>
, TOP_DOWN_END_PRODUCTION ()
// At index 2 : <Constant>, in file 'LL1_expression_syntax.ggs', line 8
, TOP_DOWN_TERMINAL (Lexique_LL_31__5F_expression_5F_lexique::kToken_number) // $number$
, TOP_DOWN_END_PRODUCTION ()
// At index 4 : <Expression>, in file 'LL1_expression_syntax.ggs', line 17
, TOP_DOWN_NONTERMINAL (3) // <Terme>
, TOP_DOWN_NONTERMINAL (5) // <select_LL_31__5F_expression_5F_syntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 7 : <Terme>, in file 'LL1_expression_syntax.ggs', line 32
, TOP_DOWN_NONTERMINAL (4) // <Facteur>
, TOP_DOWN_NONTERMINAL (6) // <select_LL_31__5F_expression_5F_syntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 10 : <Facteur>, in file 'LL1_expression_syntax.ggs', line 47
, TOP_DOWN_NONTERMINAL (7) // <select_LL_31__5F_expression_5F_syntax_2>
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 12 : <select_LL_31__5F_expression_5F_syntax_0>, in file 'LL1_expression_syntax.ggs', line 21
, TOP_DOWN_END_PRODUCTION ()
// At index 13 : <select_LL_31__5F_expression_5F_syntax_0>, in file 'LL1_expression_syntax.ggs', line 21
, TOP_DOWN_TERMINAL (Lexique_LL_31__5F_expression_5F_lexique::kToken__2B_) // $+$
, TOP_DOWN_NONTERMINAL (3) // <Terme>
, TOP_DOWN_NONTERMINAL (5) // <select_LL_31__5F_expression_5F_syntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 17 : <select_LL_31__5F_expression_5F_syntax_1>, in file 'LL1_expression_syntax.ggs', line 36
, TOP_DOWN_END_PRODUCTION ()
// At index 18 : <select_LL_31__5F_expression_5F_syntax_1>, in file 'LL1_expression_syntax.ggs', line 36
, TOP_DOWN_TERMINAL (Lexique_LL_31__5F_expression_5F_lexique::kToken__2A_) // $*$
, TOP_DOWN_NONTERMINAL (4) // <Facteur>
, TOP_DOWN_NONTERMINAL (6) // <select_LL_31__5F_expression_5F_syntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 22 : <select_LL_31__5F_expression_5F_syntax_2>, in file 'LL1_expression_syntax.ggs', line 50
, TOP_DOWN_TERMINAL (Lexique_LL_31__5F_expression_5F_lexique::kToken__28_) // $($
, TOP_DOWN_NONTERMINAL (2) // <Expression>
, TOP_DOWN_TERMINAL (Lexique_LL_31__5F_expression_5F_lexique::kToken__29_) // $)$
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_LL_31__5F_expression_5F_syntax_2>, in file 'LL1_expression_syntax.ggs', line 50
, TOP_DOWN_NONTERMINAL (1) // <Constant>
, TOP_DOWN_END_PRODUCTION ()
// At index 28 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <StartSymbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_LL1_expression_grammar [12] = {
 {"<StartSymbol>", "LL1_expression_syntax", 0}, // at index 0
 {"<Constant>", "LL1_expression_syntax", 2}, // at index 1
 {"<Expression>", "LL1_expression_syntax", 4}, // at index 2
 {"<Terme>", "LL1_expression_syntax", 7}, // at index 3
 {"<Facteur>", "LL1_expression_syntax", 10}, // at index 4
 {"<select_LL_31__5F_expression_5F_syntax_0>", "LL1_expression_syntax", 12}, // at index 5
 {"<select_LL_31__5F_expression_5F_syntax_0>", "LL1_expression_syntax", 13}, // at index 6
 {"<select_LL_31__5F_expression_5F_syntax_1>", "LL1_expression_syntax", 17}, // at index 7
 {"<select_LL_31__5F_expression_5F_syntax_1>", "LL1_expression_syntax", 18}, // at index 8
 {"<select_LL_31__5F_expression_5F_syntax_2>", "LL1_expression_syntax", 22}, // at index 9
 {"<select_LL_31__5F_expression_5F_syntax_2>", "LL1_expression_syntax", 26}, // at index 10
 {"<>", "", 28} // at index 11
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_LL1_expression_grammar [12] = {
0, // index 0 : <StartSymbol>, in file 'LL1_expression_syntax.ggs', line 3
2, // index 1 : <Constant>, in file 'LL1_expression_syntax.ggs', line 8
4, // index 2 : <Expression>, in file 'LL1_expression_syntax.ggs', line 17
7, // index 3 : <Terme>, in file 'LL1_expression_syntax.ggs', line 32
10, // index 4 : <Facteur>, in file 'LL1_expression_syntax.ggs', line 47
12, // index 5 : <select_LL_31__5F_expression_5F_syntax_0>, in file 'LL1_expression_syntax.ggs', line 21
13, // index 6 : <select_LL_31__5F_expression_5F_syntax_0>, in file 'LL1_expression_syntax.ggs', line 21
17, // index 7 : <select_LL_31__5F_expression_5F_syntax_1>, in file 'LL1_expression_syntax.ggs', line 36
18, // index 8 : <select_LL_31__5F_expression_5F_syntax_1>, in file 'LL1_expression_syntax.ggs', line 36
22, // index 9 : <select_LL_31__5F_expression_5F_syntax_2>, in file 'LL1_expression_syntax.ggs', line 50
26, // index 10 : <select_LL_31__5F_expression_5F_syntax_2>, in file 'LL1_expression_syntax.ggs', line 50
28 // index 11 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_LL1_expression_grammar [10] = {
0, // at 0 : <StartSymbol>
1, // at 1 : <Constant>
2, // at 2 : <Expression>
3, // at 3 : <Terme>
4, // at 4 : <Facteur>
5, // at 5 : <select_LL_31__5F_expression_5F_syntax_0>
7, // at 6 : <select_LL_31__5F_expression_5F_syntax_1>
9, // at 7 : <select_LL_31__5F_expression_5F_syntax_2>
11, // at 8 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_LL1_expression_grammar [] = {
// At index 0 : <StartSymbol> only one production, no choice
  -1,
// At index 1 : <Constant> only one production, no choice
  -1,
// At index 2 : <Expression> only one production, no choice
  -1,
// At index 3 : <Terme> only one production, no choice
  -1,
// At index 4 : <Facteur> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 5 : <select_LL_31__5F_expression_5F_syntax_0>
Lexique_LL_31__5F_expression_5F_lexique::kToken__29_, Lexique_LL_31__5F_expression_5F_lexique::kToken_, -1, // Choice 1
Lexique_LL_31__5F_expression_5F_lexique::kToken__2B_, -1, // Choice 2
  -1,
// At index 11 : <select_LL_31__5F_expression_5F_syntax_1>
Lexique_LL_31__5F_expression_5F_lexique::kToken__2B_, Lexique_LL_31__5F_expression_5F_lexique::kToken__29_, Lexique_LL_31__5F_expression_5F_lexique::kToken_, -1, // Choice 1
Lexique_LL_31__5F_expression_5F_lexique::kToken__2A_, -1, // Choice 2
  -1,
// At index 18 : <select_LL_31__5F_expression_5F_syntax_2>
Lexique_LL_31__5F_expression_5F_lexique::kToken__28_, -1, // Choice 1
Lexique_LL_31__5F_expression_5F_lexique::kToken_number, -1, // Choice 2
  -1,
// At index 23 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_LL1_expression_grammar [10] = {
0, // at 0 : <StartSymbol>
1, // at 1 : <Constant>
2, // at 2 : <Expression>
3, // at 3 : <Terme>
4, // at 4 : <Facteur>
5, // at 5 : <select_LL_31__5F_expression_5F_syntax_0>
11, // at 6 : <select_LL_31__5F_expression_5F_syntax_1>
18, // at 7 : <select_LL_31__5F_expression_5F_syntax_2>
23, // at 8 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                           'StartSymbol' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LL_31__5F_expression_5F_grammar::nt_StartSymbol_parse (String & ioSyntaxDirectedTranslationResult, Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_parse(ioSyntaxDirectedTranslationResult, inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_StartSymbol_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_indexing(inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_StartSymbol_ (String & ioSyntaxDirectedTranslationResult,
                                Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_StartSymbol_i0_(ioSyntaxDirectedTranslationResult, inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_LL_31__5F_expression_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_LL_31__5F_expression_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_LL1_expression_grammar, gProductionNames_LL1_expression_grammar, gProductionIndexes_LL1_expression_grammar,
                                                    gFirstProductionIndexes_LL1_expression_grammar, gDecision_LL1_expression_grammar, gDecisionIndexes_LL1_expression_grammar, 28) ;
    if (ok) {
      cGrammar_LL_31__5F_expression_5F_grammar grammar ;
      grammar.nt_StartSymbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_LL_31__5F_expression_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_LL_31__5F_expression_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_LL_31__5F_expression_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_LL_31__5F_expression_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_LL1_expression_grammar, gProductionNames_LL1_expression_grammar, gProductionIndexes_LL1_expression_grammar,
                                    gFirstProductionIndexes_LL1_expression_grammar, gDecision_LL1_expression_grammar, gDecisionIndexes_LL1_expression_grammar, 28) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LL_31__5F_expression_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                String & ioSyntaxDirectedTranslationResult,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_LL_31__5F_expression_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_LL_31__5F_expression_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_LL1_expression_grammar, gProductionNames_LL1_expression_grammar, gProductionIndexes_LL1_expression_grammar,
                                                      gFirstProductionIndexes_LL1_expression_grammar, gDecision_LL1_expression_grammar, gDecisionIndexes_LL1_expression_grammar, 28) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_LL_31__5F_expression_5F_grammar grammar ;
        grammar.nt_StartSymbol_ (ioSyntaxDirectedTranslationResult, scanner) ;
          scanner->appendLastSeparatorTo (ioSyntaxDirectedTranslationResult) ;
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

void cGrammar_LL_31__5F_expression_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                String & ioSyntaxDirectedTranslationResult,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_LL_31__5F_expression_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_LL_31__5F_expression_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_LL1_expression_grammar, gProductionNames_LL1_expression_grammar, gProductionIndexes_LL1_expression_grammar,
                                                    gFirstProductionIndexes_LL1_expression_grammar, gDecision_LL1_expression_grammar, gDecisionIndexes_LL1_expression_grammar, 28) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_LL_31__5F_expression_5F_grammar grammar ;
      grammar.nt_StartSymbol_ (ioSyntaxDirectedTranslationResult, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                             'Constant' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Constant_parse (String & ioSyntaxDirectedTranslationResult, Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Constant_i1_parse(ioSyntaxDirectedTranslationResult, inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Constant_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Constant_i1_indexing(inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Constant_ (GGS_cExpression & parameter_1,
                                GGS_uint & parameter_2,
                                String & ioSyntaxDirectedTranslationResult,
                                Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Constant_i1_(parameter_1, parameter_2, ioSyntaxDirectedTranslationResult, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                            'Expression' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Expression_parse (String & ioSyntaxDirectedTranslationResult, Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Expression_i2_parse(ioSyntaxDirectedTranslationResult, inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Expression_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Expression_i2_indexing(inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Expression_ (GGS_cExpression & parameter_1,
                                GGS_uint & parameter_2,
                                String & ioSyntaxDirectedTranslationResult,
                                Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Expression_i2_(parameter_1, parameter_2, ioSyntaxDirectedTranslationResult, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              'Terme' non terminal implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Terme_parse (String & ioSyntaxDirectedTranslationResult, Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Terme_i3_parse(ioSyntaxDirectedTranslationResult, inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Terme_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Terme_i3_indexing(inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Terme_ (GGS_cExpression & parameter_1,
                                GGS_uint & parameter_2,
                                String & ioSyntaxDirectedTranslationResult,
                                Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Terme_i3_(parameter_1, parameter_2, ioSyntaxDirectedTranslationResult, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                             'Facteur' non terminal implementation                                
//
//--------------------------------------------------------------------------------------------------

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Facteur_parse (String & ioSyntaxDirectedTranslationResult, Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Facteur_i4_parse(ioSyntaxDirectedTranslationResult, inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Facteur_indexing (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Facteur_i4_indexing(inLexique) ;
}

void cGrammar_LL_31__5F_expression_5F_grammar::nt_Facteur_ (GGS_cExpression & parameter_1,
                                GGS_uint & parameter_2,
                                String & ioSyntaxDirectedTranslationResult,
                                Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  rule_LL_31__5F_expression_5F_syntax_Facteur_i4_(parameter_1, parameter_2, ioSyntaxDirectedTranslationResult, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//          'select_LL_31__5F_expression_5F_syntax_0' added non terminal implementation             
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_LL_31__5F_expression_5F_grammar::select_LL_31__5F_expression_5F_syntax_0 (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//          'select_LL_31__5F_expression_5F_syntax_1' added non terminal implementation             
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_LL_31__5F_expression_5F_grammar::select_LL_31__5F_expression_5F_syntax_1 (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//          'select_LL_31__5F_expression_5F_syntax_2' added non terminal implementation             
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_LL_31__5F_expression_5F_grammar::select_LL_31__5F_expression_5F_syntax_2 (Lexique_LL_31__5F_expression_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

