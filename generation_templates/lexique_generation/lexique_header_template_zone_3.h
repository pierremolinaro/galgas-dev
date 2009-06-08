
//--- Terminal symbols enumeration
  public : enum {xml_parsing_lexique_1_,
  xml_parsing_lexique_1_comment,
  xml_parsing_lexique_1__3C,
  xml_parsing_lexique_1__3C_3F,
  xml_parsing_lexique_1__3E,
  xml_parsing_lexique_1__3F_3E,
  xml_parsing_lexique_1__2F_3E,
  xml_parsing_lexique_1__3C_2F,
  xml_parsing_lexique_1__3D,
  xml_parsing_lexique_1_name,
  xml_parsing_lexique_1_value} ;

//--- Key words table 'xmlDelimitorsList'
  public : static sint16 search_into_xmlDelimitorsList (const C_String & inSearchedString) ;

  protected : virtual bool parseLexicalToken (void) ;
  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const sint16 numeroTerminal,
                                                              C_String & messageErreur) ;

//--- Get terminal count
  public : virtual sint16 terminalVocabularyCount (void) const { return 10 ; }
//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;
//--- Enter Token
  protected : void enterToken (const cTokenFor_xml_parsing_lexique & inToken) ;
} ;

//---------------------------------------------------------------------------*

#endif
