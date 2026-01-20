#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-logo-5Fgrammar.h"

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

static const int32_t gProductions_logo_grammar [] = {
// At index 0 : <pen_direction>, in file 'logo_syntax.ggs', line 5
  TOP_DOWN_NONTERMINAL (5) // <select_logo_5F_syntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 2 : <instruction>, in file 'logo_syntax.ggs', line 19
, TOP_DOWN_NONTERMINAL (6) // <select_logo_5F_syntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 4 : <instruction_list>, in file 'logo_syntax.ggs', line 49
, TOP_DOWN_NONTERMINAL (7) // <select_logo_5F_syntax_2>
, TOP_DOWN_END_PRODUCTION ()
// At index 6 : <routine_definition>, in file 'logo_syntax.ggs', line 58
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_ROUTINE) // $ROUTINE$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_BEGIN) // $BEGIN$
, TOP_DOWN_NONTERMINAL (2) // <instruction_list>
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_END) // $END$
, TOP_DOWN_END_PRODUCTION ()
// At index 12 : <start_symbol>, in file 'logo_syntax.ggs', line 71
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_PROGRAM) // $PROGRAM$
, TOP_DOWN_NONTERMINAL (8) // <select_logo_5F_syntax_3>
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_BEGIN) // $BEGIN$
, TOP_DOWN_NONTERMINAL (2) // <instruction_list>
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_END) // $END$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken__2E_) // $.$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 19 : <select_logo_5F_syntax_0>, in file 'logo_syntax.ggs', line 6
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_UP) // $UP$
, TOP_DOWN_END_PRODUCTION ()
// At index 21 : <select_logo_5F_syntax_0>, in file 'logo_syntax.ggs', line 6
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_DOWN) // $DOWN$
, TOP_DOWN_END_PRODUCTION ()
// At index 23 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_FORWARD) // $FORWARD$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 27 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_ROTATE) // $ROTATE$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 31 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_PEN) // $PEN$
, TOP_DOWN_NONTERMINAL (0) // <pen_direction>
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 35 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_CALL) // $CALL$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_logo_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 39 : <select_logo_5F_syntax_2>, in file 'logo_syntax.ggs', line 50
, TOP_DOWN_END_PRODUCTION ()
// At index 40 : <select_logo_5F_syntax_2>, in file 'logo_syntax.ggs', line 50
, TOP_DOWN_NONTERMINAL (1) // <instruction>
, TOP_DOWN_NONTERMINAL (7) // <select_logo_5F_syntax_2>
, TOP_DOWN_END_PRODUCTION ()
// At index 43 : <select_logo_5F_syntax_3>, in file 'logo_syntax.ggs', line 76
, TOP_DOWN_END_PRODUCTION ()
// At index 44 : <select_logo_5F_syntax_3>, in file 'logo_syntax.ggs', line 76
, TOP_DOWN_NONTERMINAL (3) // <routine_definition>
, TOP_DOWN_NONTERMINAL (8) // <select_logo_5F_syntax_3>
, TOP_DOWN_END_PRODUCTION ()
// At index 47 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (4) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_logo_grammar [16] = {
 {"<pen_direction>", "logo_syntax", 0}, // at index 0
 {"<instruction>", "logo_syntax", 2}, // at index 1
 {"<instruction_list>", "logo_syntax", 4}, // at index 2
 {"<routine_definition>", "logo_syntax", 6}, // at index 3
 {"<start_symbol>", "logo_syntax", 12}, // at index 4
 {"<select_logo_5F_syntax_0>", "logo_syntax", 19}, // at index 5
 {"<select_logo_5F_syntax_0>", "logo_syntax", 21}, // at index 6
 {"<select_logo_5F_syntax_1>", "logo_syntax", 23}, // at index 7
 {"<select_logo_5F_syntax_1>", "logo_syntax", 27}, // at index 8
 {"<select_logo_5F_syntax_1>", "logo_syntax", 31}, // at index 9
 {"<select_logo_5F_syntax_1>", "logo_syntax", 35}, // at index 10
 {"<select_logo_5F_syntax_2>", "logo_syntax", 39}, // at index 11
 {"<select_logo_5F_syntax_2>", "logo_syntax", 40}, // at index 12
 {"<select_logo_5F_syntax_3>", "logo_syntax", 43}, // at index 13
 {"<select_logo_5F_syntax_3>", "logo_syntax", 44}, // at index 14
 {"<>", "", 47} // at index 15
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_logo_grammar [16] = {
0, // index 0 : <pen_direction>, in file 'logo_syntax.ggs', line 5
2, // index 1 : <instruction>, in file 'logo_syntax.ggs', line 19
4, // index 2 : <instruction_list>, in file 'logo_syntax.ggs', line 49
6, // index 3 : <routine_definition>, in file 'logo_syntax.ggs', line 58
12, // index 4 : <start_symbol>, in file 'logo_syntax.ggs', line 71
19, // index 5 : <select_logo_5F_syntax_0>, in file 'logo_syntax.ggs', line 6
21, // index 6 : <select_logo_5F_syntax_0>, in file 'logo_syntax.ggs', line 6
23, // index 7 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
27, // index 8 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
31, // index 9 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
35, // index 10 : <select_logo_5F_syntax_1>, in file 'logo_syntax.ggs', line 20
39, // index 11 : <select_logo_5F_syntax_2>, in file 'logo_syntax.ggs', line 50
40, // index 12 : <select_logo_5F_syntax_2>, in file 'logo_syntax.ggs', line 50
43, // index 13 : <select_logo_5F_syntax_3>, in file 'logo_syntax.ggs', line 76
44, // index 14 : <select_logo_5F_syntax_3>, in file 'logo_syntax.ggs', line 76
47 // index 15 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_logo_grammar [11] = {
0, // at 0 : <pen_direction>
1, // at 1 : <instruction>
2, // at 2 : <instruction_list>
3, // at 3 : <routine_definition>
4, // at 4 : <start_symbol>
5, // at 5 : <select_logo_5F_syntax_0>
7, // at 6 : <select_logo_5F_syntax_1>
11, // at 7 : <select_logo_5F_syntax_2>
13, // at 8 : <select_logo_5F_syntax_3>
15, // at 9 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_logo_grammar [] = {
// At index 0 : <pen_direction> only one production, no choice
  -1,
// At index 1 : <instruction> only one production, no choice
  -1,
// At index 2 : <instruction_list> only one production, no choice
  -1,
// At index 3 : <routine_definition> only one production, no choice
  -1,
// At index 4 : <start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 5 : <select_logo_5F_syntax_0>
Lexique_logo_5F_lexique::kToken_UP, -1, // Choice 1
Lexique_logo_5F_lexique::kToken_DOWN, -1, // Choice 2
  -1,
// At index 10 : <select_logo_5F_syntax_1>
Lexique_logo_5F_lexique::kToken_FORWARD, -1, // Choice 1
Lexique_logo_5F_lexique::kToken_ROTATE, -1, // Choice 2
Lexique_logo_5F_lexique::kToken_PEN, -1, // Choice 3
Lexique_logo_5F_lexique::kToken_CALL, -1, // Choice 4
  -1,
// At index 19 : <select_logo_5F_syntax_2>
Lexique_logo_5F_lexique::kToken_END, -1, // Choice 1
Lexique_logo_5F_lexique::kToken_FORWARD, Lexique_logo_5F_lexique::kToken_ROTATE, Lexique_logo_5F_lexique::kToken_PEN, Lexique_logo_5F_lexique::kToken_CALL, -1, // Choice 2
  -1,
// At index 27 : <select_logo_5F_syntax_3>
Lexique_logo_5F_lexique::kToken_BEGIN, -1, // Choice 1
Lexique_logo_5F_lexique::kToken_ROUTINE, -1, // Choice 2
  -1,
// At index 32 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_logo_grammar [11] = {
0, // at 0 : <pen_direction>
1, // at 1 : <instruction>
2, // at 2 : <instruction_list>
3, // at 3 : <routine_definition>
4, // at 4 : <start_symbol>
5, // at 5 : <select_logo_5F_syntax_0>
10, // at 6 : <select_logo_5F_syntax_1>
19, // at 7 : <select_logo_5F_syntax_2>
27, // at 8 : <select_logo_5F_syntax_3>
32, // at 9 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          'pen_direction' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_logo_5F_grammar::nt_pen_5F_direction_parse (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_pen_5F_direction_i0_parse(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_pen_5F_direction_indexing (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_pen_5F_direction_i0_indexing(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_pen_5F_direction_ (GGS_instructionList & parameter_1,
                                Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_pen_5F_direction_i0_(parameter_1, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                           'instruction' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_logo_5F_grammar::nt_instruction_parse (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_instruction_i1_parse(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_instruction_indexing (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_instruction_i1_indexing(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_instruction_ (GGS_routineMap & parameter_1,
                                GGS_instructionList & parameter_2,
                                Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_instruction_i1_(parameter_1, parameter_2, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'instruction_list' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_logo_5F_grammar::nt_instruction_5F_list_parse (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_instruction_5F_list_i2_parse(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_instruction_5F_list_indexing (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_instruction_5F_list_i2_indexing(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_instruction_5F_list_ (GGS_routineMap & parameter_1,
                                GGS_instructionList & parameter_2,
                                Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_instruction_5F_list_i2_(parameter_1, parameter_2, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'routine_definition' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_logo_5F_grammar::nt_routine_5F_definition_parse (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_routine_5F_definition_i3_parse(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_routine_5F_definition_indexing (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_routine_5F_definition_i3_indexing(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_routine_5F_definition_ (GGS_routineMap & parameter_1,
                                Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_routine_5F_definition_i3_(parameter_1, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_logo_5F_grammar::nt_start_5F_symbol_parse (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_start_5F_symbol_i4_parse(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_start_5F_symbol_indexing (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_start_5F_symbol_i4_indexing(inLexique) ;
}

void cGrammar_logo_5F_grammar::nt_start_5F_symbol_ (Lexique_logo_5F_lexique * inLexique) {
  rule_logo_5F_syntax_start_5F_symbol_i4_(inLexique) ;
}

void cGrammar_logo_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_logo_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_logo_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_logo_grammar, gProductionNames_logo_grammar, gProductionIndexes_logo_grammar,
                                                    gFirstProductionIndexes_logo_grammar, gDecision_logo_grammar, gDecisionIndexes_logo_grammar, 47) ;
    if (ok) {
      cGrammar_logo_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_logo_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_logo_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_logo_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_logo_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_logo_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_logo_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_logo_grammar, gProductionNames_logo_grammar, gProductionIndexes_logo_grammar,
                                    gFirstProductionIndexes_logo_grammar, gDecision_logo_grammar, gDecisionIndexes_logo_grammar, 47) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_logo_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_logo_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_logo_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_logo_grammar, gProductionNames_logo_grammar, gProductionIndexes_logo_grammar,
                                                      gFirstProductionIndexes_logo_grammar, gDecision_logo_grammar, gDecisionIndexes_logo_grammar, 47) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_logo_5F_grammar grammar ;
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

void cGrammar_logo_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_logo_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_logo_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_logo_grammar, gProductionNames_logo_grammar, gProductionIndexes_logo_grammar,
                                                    gFirstProductionIndexes_logo_grammar, gDecision_logo_grammar, gDecisionIndexes_logo_grammar, 47) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_logo_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_logo_5F_syntax_0' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_logo_5F_grammar::select_logo_5F_syntax_0 (Lexique_logo_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_logo_5F_syntax_1' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_logo_5F_grammar::select_logo_5F_syntax_1 (Lexique_logo_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_logo_5F_syntax_2' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_logo_5F_grammar::select_logo_5F_syntax_2 (Lexique_logo_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'select_logo_5F_syntax_3' added non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_logo_5F_grammar::select_logo_5F_syntax_3 (Lexique_logo_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

