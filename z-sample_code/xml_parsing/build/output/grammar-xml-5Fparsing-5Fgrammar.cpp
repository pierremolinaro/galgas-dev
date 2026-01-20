#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-xml-5Fparsing-5Fgrammar.h"

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

static const int32_t gProductions_xml_parsing_grammar [] = {
// At index 0 : <start_symbol>, in file 'xml_parsing_syntax.ggs', line 26
  TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__3F_) // $<?$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_name) // $name$
, TOP_DOWN_NONTERMINAL (3) // <select_xml_5F_parsing_5F_syntax_0>
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3F__3E_) // $?>$
, TOP_DOWN_NONTERMINAL (1) // <element_list>
, TOP_DOWN_END_PRODUCTION ()
// At index 6 : <element_list>, in file 'xml_parsing_syntax.ggs', line 57
, TOP_DOWN_NONTERMINAL (4) // <select_xml_5F_parsing_5F_syntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 8 : <element>, in file 'xml_parsing_syntax.ggs', line 82
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_comment) // $comment$
, TOP_DOWN_END_PRODUCTION ()
// At index 10 : <element>, in file 'xml_parsing_syntax.ggs', line 115
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3C_) // $<$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_name) // $name$
, TOP_DOWN_NONTERMINAL (5) // <select_xml_5F_parsing_5F_syntax_2>
, TOP_DOWN_NONTERMINAL (6) // <select_xml_5F_parsing_5F_syntax_3>
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 15 : <select_xml_5F_parsing_5F_syntax_0>, in file 'xml_parsing_syntax.ggs', line 38
, TOP_DOWN_END_PRODUCTION ()
// At index 16 : <select_xml_5F_parsing_5F_syntax_0>, in file 'xml_parsing_syntax.ggs', line 38
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_name) // $name$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_) // $=$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_value) // $value$
, TOP_DOWN_NONTERMINAL (3) // <select_xml_5F_parsing_5F_syntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 21 : <select_xml_5F_parsing_5F_syntax_1>, in file 'xml_parsing_syntax.ggs', line 63
, TOP_DOWN_END_PRODUCTION ()
// At index 22 : <select_xml_5F_parsing_5F_syntax_1>, in file 'xml_parsing_syntax.ggs', line 63
, TOP_DOWN_NONTERMINAL (2) // <element>
, TOP_DOWN_NONTERMINAL (4) // <select_xml_5F_parsing_5F_syntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 25 : <select_xml_5F_parsing_5F_syntax_2>, in file 'xml_parsing_syntax.ggs', line 124
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_xml_5F_parsing_5F_syntax_2>, in file 'xml_parsing_syntax.ggs', line 124
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_name) // $name$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_) // $=$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_value) // $value$
, TOP_DOWN_NONTERMINAL (5) // <select_xml_5F_parsing_5F_syntax_2>
, TOP_DOWN_END_PRODUCTION ()
// At index 31 : <select_xml_5F_parsing_5F_syntax_3>, in file 'xml_parsing_syntax.ggs', line 154
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__2F__3E_) // $/>$
, TOP_DOWN_END_PRODUCTION ()
// At index 33 : <select_xml_5F_parsing_5F_syntax_3>, in file 'xml_parsing_syntax.ggs', line 154
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_) // $>$
, TOP_DOWN_NONTERMINAL (1) // <element_list>
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__2F_) // $</$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken_name) // $name$
, TOP_DOWN_TERMINAL (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_) // $>$
, TOP_DOWN_END_PRODUCTION ()
// At index 39 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_xml_parsing_grammar [13] = {
 {"<start_symbol>", "xml_parsing_syntax", 0}, // at index 0
 {"<element_list>", "xml_parsing_syntax", 6}, // at index 1
 {"<element>", "xml_parsing_syntax", 8}, // at index 2
 {"<element>", "xml_parsing_syntax", 10}, // at index 3
 {"<select_xml_5F_parsing_5F_syntax_0>", "xml_parsing_syntax", 15}, // at index 4
 {"<select_xml_5F_parsing_5F_syntax_0>", "xml_parsing_syntax", 16}, // at index 5
 {"<select_xml_5F_parsing_5F_syntax_1>", "xml_parsing_syntax", 21}, // at index 6
 {"<select_xml_5F_parsing_5F_syntax_1>", "xml_parsing_syntax", 22}, // at index 7
 {"<select_xml_5F_parsing_5F_syntax_2>", "xml_parsing_syntax", 25}, // at index 8
 {"<select_xml_5F_parsing_5F_syntax_2>", "xml_parsing_syntax", 26}, // at index 9
 {"<select_xml_5F_parsing_5F_syntax_3>", "xml_parsing_syntax", 31}, // at index 10
 {"<select_xml_5F_parsing_5F_syntax_3>", "xml_parsing_syntax", 33}, // at index 11
 {"<>", "", 39} // at index 12
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_xml_parsing_grammar [13] = {
0, // index 0 : <start_symbol>, in file 'xml_parsing_syntax.ggs', line 26
6, // index 1 : <element_list>, in file 'xml_parsing_syntax.ggs', line 57
8, // index 2 : <element>, in file 'xml_parsing_syntax.ggs', line 82
10, // index 3 : <element>, in file 'xml_parsing_syntax.ggs', line 115
15, // index 4 : <select_xml_5F_parsing_5F_syntax_0>, in file 'xml_parsing_syntax.ggs', line 38
16, // index 5 : <select_xml_5F_parsing_5F_syntax_0>, in file 'xml_parsing_syntax.ggs', line 38
21, // index 6 : <select_xml_5F_parsing_5F_syntax_1>, in file 'xml_parsing_syntax.ggs', line 63
22, // index 7 : <select_xml_5F_parsing_5F_syntax_1>, in file 'xml_parsing_syntax.ggs', line 63
25, // index 8 : <select_xml_5F_parsing_5F_syntax_2>, in file 'xml_parsing_syntax.ggs', line 124
26, // index 9 : <select_xml_5F_parsing_5F_syntax_2>, in file 'xml_parsing_syntax.ggs', line 124
31, // index 10 : <select_xml_5F_parsing_5F_syntax_3>, in file 'xml_parsing_syntax.ggs', line 154
33, // index 11 : <select_xml_5F_parsing_5F_syntax_3>, in file 'xml_parsing_syntax.ggs', line 154
39 // index 12 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_xml_parsing_grammar [9] = {
0, // at 0 : <start_symbol>
1, // at 1 : <element_list>
2, // at 2 : <element>
4, // at 3 : <select_xml_5F_parsing_5F_syntax_0>
6, // at 4 : <select_xml_5F_parsing_5F_syntax_1>
8, // at 5 : <select_xml_5F_parsing_5F_syntax_2>
10, // at 6 : <select_xml_5F_parsing_5F_syntax_3>
12, // at 7 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_xml_parsing_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
// At index 1 : <element_list> only one production, no choice
  -1,
// At index 2 : <element>
Lexique_xml_5F_parsing_5F_lexique::kToken_comment, -1, // Choice 1
Lexique_xml_5F_parsing_5F_lexique::kToken__3C_, -1, // Choice 2
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 7 : <select_xml_5F_parsing_5F_syntax_0>
Lexique_xml_5F_parsing_5F_lexique::kToken__3F__3E_, -1, // Choice 1
Lexique_xml_5F_parsing_5F_lexique::kToken_name, -1, // Choice 2
  -1,
// At index 12 : <select_xml_5F_parsing_5F_syntax_1>
Lexique_xml_5F_parsing_5F_lexique::kToken__3C__2F_, Lexique_xml_5F_parsing_5F_lexique::kToken_, -1, // Choice 1
Lexique_xml_5F_parsing_5F_lexique::kToken_comment, Lexique_xml_5F_parsing_5F_lexique::kToken__3C_, -1, // Choice 2
  -1,
// At index 19 : <select_xml_5F_parsing_5F_syntax_2>
Lexique_xml_5F_parsing_5F_lexique::kToken__2F__3E_, Lexique_xml_5F_parsing_5F_lexique::kToken__3E_, -1, // Choice 1
Lexique_xml_5F_parsing_5F_lexique::kToken_name, -1, // Choice 2
  -1,
// At index 25 : <select_xml_5F_parsing_5F_syntax_3>
Lexique_xml_5F_parsing_5F_lexique::kToken__2F__3E_, -1, // Choice 1
Lexique_xml_5F_parsing_5F_lexique::kToken__3E_, -1, // Choice 2
  -1,
// At index 30 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_xml_parsing_grammar [9] = {
0, // at 0 : <start_symbol>
1, // at 1 : <element_list>
2, // at 2 : <element>
7, // at 3 : <select_xml_5F_parsing_5F_syntax_0>
12, // at 4 : <select_xml_5F_parsing_5F_syntax_1>
19, // at 5 : <select_xml_5F_parsing_5F_syntax_2>
25, // at 6 : <select_xml_5F_parsing_5F_syntax_3>
30, // at 7 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_xml_5F_parsing_5F_grammar::nt_start_5F_symbol_parse (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_xml_5F_parsing_5F_grammar::nt_start_5F_symbol_indexing (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_xml_5F_parsing_5F_grammar::nt_start_5F_symbol_ (GGS_xmlNodeList & parameter_1,
                                const GGS_bool parameter_2,
                                const GGS_bool parameter_3,
                                const GGS_bool parameter_4,
                                Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

void cGrammar_xml_5F_parsing_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_xml_5F_parsing_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_xml_5F_parsing_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_xml_parsing_grammar, gProductionNames_xml_parsing_grammar, gProductionIndexes_xml_parsing_grammar,
                                                    gFirstProductionIndexes_xml_parsing_grammar, gDecision_xml_parsing_grammar, gDecisionIndexes_xml_parsing_grammar, 39) ;
    if (ok) {
      cGrammar_xml_5F_parsing_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_xml_5F_parsing_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_xml_5F_parsing_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_xml_5F_parsing_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_xml_5F_parsing_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_xml_5F_parsing_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_xml_5F_parsing_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_xml_parsing_grammar, gProductionNames_xml_parsing_grammar, gProductionIndexes_xml_parsing_grammar,
                                    gFirstProductionIndexes_xml_parsing_grammar, gDecision_xml_parsing_grammar, gDecisionIndexes_xml_parsing_grammar, 39) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_xml_5F_parsing_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_xmlNodeList &  parameter_1,
                                const GGS_bool  parameter_2,
                                const GGS_bool  parameter_3,
                                const GGS_bool  parameter_4
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_xml_5F_parsing_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_xml_5F_parsing_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_xml_parsing_grammar, gProductionNames_xml_parsing_grammar, gProductionIndexes_xml_parsing_grammar,
                                                      gFirstProductionIndexes_xml_parsing_grammar, gDecision_xml_parsing_grammar, gDecisionIndexes_xml_parsing_grammar, 39) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_xml_5F_parsing_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, parameter_4, scanner) ;
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

void cGrammar_xml_5F_parsing_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_xmlNodeList &  parameter_1,
                                const GGS_bool  parameter_2,
                                const GGS_bool  parameter_3,
                                const GGS_bool  parameter_4
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_xml_5F_parsing_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_xml_5F_parsing_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_xml_parsing_grammar, gProductionNames_xml_parsing_grammar, gProductionIndexes_xml_parsing_grammar,
                                                    gFirstProductionIndexes_xml_parsing_grammar, gDecision_xml_parsing_grammar, gDecisionIndexes_xml_parsing_grammar, 39) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_xml_5F_parsing_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, parameter_4, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                           'element_list' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_xml_5F_parsing_5F_grammar::nt_element_5F_list_parse (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_parse(inLexique) ;
}

void cGrammar_xml_5F_parsing_5F_grammar::nt_element_5F_list_indexing (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_indexing(inLexique) ;
}

void cGrammar_xml_5F_parsing_5F_grammar::nt_element_5F_list_ (GGS_xmlNodeList & parameter_1,
                                const GGS_bool parameter_2,
                                const GGS_bool parameter_3,
                                const GGS_bool parameter_4,
                                const GGS_string parameter_5,
                                Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_(parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                             'element' non terminal implementation                                
//
//--------------------------------------------------------------------------------------------------

void cGrammar_xml_5F_parsing_5F_grammar::nt_element_parse (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_xml_5F_parsing_5F_syntax_element_i2_parse(inLexique) ;
    break ;
  case 2 :
    rule_xml_5F_parsing_5F_syntax_element_i3_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_xml_5F_parsing_5F_grammar::nt_element_indexing (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_xml_5F_parsing_5F_syntax_element_i2_indexing(inLexique) ;
    break ;
  case 2 :
    rule_xml_5F_parsing_5F_syntax_element_i3_indexing(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_xml_5F_parsing_5F_grammar::nt_element_ (GGS_xmlNodeList & parameter_1,
                                const GGS_bool parameter_2,
                                const GGS_bool parameter_3,
                                const GGS_bool parameter_4,
                                const GGS_string parameter_5,
                                Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_xml_5F_parsing_5F_syntax_element_i2_(parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, inLexique) ;
    break ;
  case 2 :
    rule_xml_5F_parsing_5F_syntax_element_i3_(parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, inLexique) ;
    break ;
  default :
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//             'select_xml_5F_parsing_5F_syntax_0' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_xml_5F_parsing_5F_grammar::select_xml_5F_parsing_5F_syntax_0 (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_xml_5F_parsing_5F_syntax_1' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_xml_5F_parsing_5F_grammar::select_xml_5F_parsing_5F_syntax_1 (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_xml_5F_parsing_5F_syntax_2' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_xml_5F_parsing_5F_grammar::select_xml_5F_parsing_5F_syntax_2 (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_xml_5F_parsing_5F_syntax_3' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_xml_5F_parsing_5F_grammar::select_xml_5F_parsing_5F_syntax_3 (Lexique_xml_5F_parsing_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

