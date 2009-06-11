
//--- Terminal symbols enumeration
  public : enum {%LEXIQUE_CLASS_NAME%_1_%
    foreach TERMINAL_LIST do
      %,\%  % LEXIQUE_CLASS_NAME %_1_% ([[mTerminalName string] identifierRepresentation])
    end foreach
  %} ;
%
  foreach DELIMITOR_LIST_LIST do
    %\%//--- Key words table '%([mName string])%'\%%
    %  public : static sint16 search_into_%([mName string])% (const C_String & inSearchedString) ;\%%
  end foreach
%  
//--- Key words table 'xmlDelimitorsList'
  public : static sint16 search_into_xmlDelimitorsList (const C_String & inSearchedString) ;

  protected : virtual bool parseLexicalToken (void) ;
  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const sint16 numeroTerminal,
                                                              C_String & messageErreur) ;

//--- Get terminal count
  public : virtual sint16 terminalVocabularyCount (void) const { return %([[TERMINAL_LIST length] string])% ; }
//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;
//--- Enter Token
  protected : void enterToken (const cTokenFor_xml_parsing_lexique & inToken) ;
} ;

//---------------------------------------------------------------------------*

#endif
