#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "syntax-xml-5Fparsing-5Fsyntax.h"
//--------------------------------------------------------------------------------------------------
//  GRAMMAR xml_parsing_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_xml_5F_parsing_5F_grammar : public cParser_xml_5F_parsing_5F_syntax {
//------------------------------------- 'element' non terminal
//--- 'parse' label
  public: virtual void nt_element_parse (Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_element_indexing (Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_element_ (GGS_xmlNodeList & ioArgument0,
                                    const GGS_bool inArgument1,
                                    const GGS_bool inArgument2,
                                    const GGS_bool inArgument3,
                                    const GGS_string inArgument4,
                                    Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//------------------------------------- 'element_list' non terminal
//--- 'parse' label
  public: virtual void nt_element_5F_list_parse (Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_element_5F_list_indexing (Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_element_5F_list_ (GGS_xmlNodeList & ioArgument0,
                                            const GGS_bool inArgument1,
                                            const GGS_bool inArgument2,
                                            const GGS_bool inArgument3,
                                            const GGS_string inArgument4,
                                            Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_xmlNodeList & outArgument0,
                                            const GGS_bool inArgument1,
                                            const GGS_bool inArgument2,
                                            const GGS_bool inArgument3,
                                            Lexique_xml_5F_parsing_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_xmlNodeList & outArgument0,
                                                  const GGS_bool inArgument1,
                                                  const GGS_bool inArgument2,
                                                  const GGS_bool inArgument3
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_xmlNodeList & outArgument0,
                                                    const GGS_bool inArgument1,
                                                    const GGS_bool inArgument2,
                                                    const GGS_bool inArgument3
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

  public: virtual int32_t select_xml_5F_parsing_5F_syntax_0 (Lexique_xml_5F_parsing_5F_lexique *) ;

  public: virtual int32_t select_xml_5F_parsing_5F_syntax_1 (Lexique_xml_5F_parsing_5F_lexique *) ;

  public: virtual int32_t select_xml_5F_parsing_5F_syntax_2 (Lexique_xml_5F_parsing_5F_lexique *) ;

  public: virtual int32_t select_xml_5F_parsing_5F_syntax_3 (Lexique_xml_5F_parsing_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

