#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "lexique-xml-5Fparsing-5Flexique.h"
//--------------------------------------------------------------------------------------------------
//
//Parser class 'xml_parsing_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_xml_5F_parsing_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_xml_5F_parsing_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_element_ (class GGS_xmlNodeList & ioArgument0,
                                       const class GGS_bool constinArgument1,
                                       const class GGS_bool constinArgument2,
                                       const class GGS_bool constinArgument3,
                                       const class GGS_string constinArgument4,
                                       class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_element_parse (class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_element_indexing (class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_element_5F_list_ (class GGS_xmlNodeList & ioArgument0,
                                               const class GGS_bool constinArgument1,
                                               const class GGS_bool constinArgument2,
                                               const class GGS_bool constinArgument3,
                                               const class GGS_string constinArgument4,
                                               class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_element_5F_list_parse (class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_element_5F_list_indexing (class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_xmlNodeList & outArgument0,
                                               const class GGS_bool constinArgument1,
                                               const class GGS_bool constinArgument2,
                                               const class GGS_bool constinArgument3,
                                               class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_xml_5F_parsing_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_ (GGS_xmlNodeList & outArgument0,
                                                                     const GGS_bool constinArgument1,
                                                                     const GGS_bool constinArgument2,
                                                                     const GGS_bool constinArgument3,
                                                                     Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_parse (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_indexing (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_ (GGS_xmlNodeList & ioArgument0,
                                                                     const GGS_bool constinArgument1,
                                                                     const GGS_bool constinArgument2,
                                                                     const GGS_bool constinArgument3,
                                                                     const GGS_string constinArgument4,
                                                                     Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_parse (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_indexing (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_i2_ (GGS_xmlNodeList & ioArgument0,
                                                             const GGS_bool constinArgument1,
                                                             const GGS_bool constinArgument2,
                                                             const GGS_bool constinArgument3,
                                                             const GGS_string constinArgument4,
                                                             Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_i2_parse (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_i2_indexing (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_i3_ (GGS_xmlNodeList & ioArgument0,
                                                             const GGS_bool constinArgument1,
                                                             const GGS_bool constinArgument2,
                                                             const GGS_bool constinArgument3,
                                                             const GGS_string constinArgument4,
                                                             Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_i3_parse (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;

  protected: void rule_xml_5F_parsing_5F_syntax_element_i3_indexing (Lexique_xml_5F_parsing_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_xml_5F_parsing_5F_syntax_0 (Lexique_xml_5F_parsing_5F_lexique *) = 0 ;

  protected: virtual int32_t select_xml_5F_parsing_5F_syntax_1 (Lexique_xml_5F_parsing_5F_lexique *) = 0 ;

  protected: virtual int32_t select_xml_5F_parsing_5F_syntax_2 (Lexique_xml_5F_parsing_5F_lexique *) = 0 ;

  protected: virtual int32_t select_xml_5F_parsing_5F_syntax_3 (Lexique_xml_5F_parsing_5F_lexique *) = 0 ;


} ;


//----------------------------------------------------------------------------------------------------------------------

