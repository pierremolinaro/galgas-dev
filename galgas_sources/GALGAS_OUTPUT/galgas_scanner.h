//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'galgas_scanner.h'                           *
//                     january 29th, 2007, at 20h15'39"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef galgas_scanner_0_DEFINED
#define galgas_scanner_0_DEFINED

//---------------------------------------------------------------------------*

#include "galgas/GGS_lstring.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_lbool.h"

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                          Lexical scanner class                            *
//                                                                           *
//---------------------------------------------------------------------------*

class cTokenFor_galgas_scanner : public cToken {
  public : char charValue ; // user defined attribute
  public : double floatValue ; // user defined attribute
  public : C_String identifierString ; // user defined attribute
  public : sint32 sint32value ; // user defined attribute
  public : sint64 sint64value ; // user defined attribute
  public : C_String tokenString ; // user defined attribute
  public : uint32 uint32value ; // user defined attribute
  public : uint64 uint64value ; // user defined attribute
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                          Lexical scanner class                            *
//                                                                           *
//---------------------------------------------------------------------------*

class galgas_scanner : public C_Lexique {
//--- Constructor
  public : galgas_scanner (C_galgas_io * inParametersPtr
                       COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~galgas_scanner (void) {}
  #endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//--- Terminal symbols enumeration
  public : enum {galgas_scanner_1_,
  galgas_scanner_1_identifier,
  galgas_scanner_1_compile,
  galgas_scanner_1_extract,
  galgas_scanner_1_program,
  galgas_scanner_1_enum,
  galgas_scanner_1_syntax,
  galgas_scanner_1_semantics,
  galgas_scanner_1_extends,
  galgas_scanner_1_reader,
  galgas_scanner_1_extern,
  galgas_scanner_1_routine,
  galgas_scanner_1_foreach,
  galgas_scanner_1_constructor,
  galgas_scanner_1_match,
  galgas_scanner_1_default,
  galgas_scanner_1_here,
  galgas_scanner_1_if,
  galgas_scanner_1_else,
  galgas_scanner_1_elsif,
  galgas_scanner_1_then,
  galgas_scanner_1_rewind,
  galgas_scanner_1_when,
  galgas_scanner_1_abstract,
  galgas_scanner_1_class,
  galgas_scanner_1_parse,
  galgas_scanner_1_map,
  galgas_scanner_1_warning,
  galgas_scanner_1_modifier,
  galgas_scanner_1_state,
  galgas_scanner_1_drop,
  galgas_scanner_1_override,
  galgas_scanner_1_select,
  galgas_scanner_1_while,
  galgas_scanner_1_or,
  galgas_scanner_1_block,
  galgas_scanner_1_not,
  galgas_scanner_1_loop,
  galgas_scanner_1_false,
  galgas_scanner_1_true,
  galgas_scanner_1_end,
  galgas_scanner_1_switch,
  galgas_scanner_1_rule,
  galgas_scanner_1_tag,
  galgas_scanner_1_metamodel,
  galgas_scanner_1_mod,
  galgas_scanner_1_import,
  galgas_scanner_1_lexique,
  galgas_scanner_1_list,
  galgas_scanner_1_message,
  galgas_scanner_1_repeat,
  galgas_scanner_1_error,
  galgas_scanner_1_search,
  galgas_scanner_1_log,
  galgas_scanner_1_insert,
  galgas_scanner_1_in,
  galgas_scanner_1_send,
  galgas_scanner_1_action,
  galgas_scanner_1_grammar,
  galgas_scanner_1_option,
  galgas_scanner_1_root,
  galgas_scanner_1_on,
  galgas_scanner_1_unused,
  galgas_scanner_1_label,
  galgas_scanner_1_style,
  galgas_scanner_1_gui,
  galgas_scanner_1_do,
  galgas_scanner_1_relation,
  galgas_scanner_1_of,
  galgas_scanner_1_self,
  galgas_scanner_1_constraint,
  galgas_scanner_1_context,
  galgas_scanner_1_call,
  galgas_scanner_1_mapindex,
  galgas_scanner_1_method,
  galgas_scanner_1_remove,
  galgas_scanner_1_sortedlist,
  galgas_scanner_1_nonterminal,
  galgas_scanner_1_literal_5Fdouble,
  galgas_scanner_1_unsigned_5Fliteral_5Finteger,
  galgas_scanner_1_signed_5Fliteral_5Finteger,
  galgas_scanner_1_unsigned_5Fliteral_5Finteger64,
  galgas_scanner_1_signed_5Fliteral_5Finteger64,
  galgas_scanner_1__2E,
  galgas_scanner_1__2E_3D,
  galgas_scanner_1__2E_2E_2E,
  galgas_scanner_1_type_5Fname,
  galgas_scanner_1_mda_5Ftype_5Fname,
  galgas_scanner_1_literal_5Fchar,
  galgas_scanner_1_terminal,
  galgas_scanner_1__2A,
  galgas_scanner_1__7C,
  galgas_scanner_1__2C,
  galgas_scanner_1__2B,
  galgas_scanner_1__2D_2D,
  galgas_scanner_1__3A_3A,
  galgas_scanner_1__3E,
  galgas_scanner_1__3B,
  galgas_scanner_1__3A,
  galgas_scanner_1__2D,
  galgas_scanner_1__28,
  galgas_scanner_1__29,
  galgas_scanner_1__2D_3E,
  galgas_scanner_1__3F,
  galgas_scanner_1__3D_3D,
  galgas_scanner_1__3F_3F,
  galgas_scanner_1__21,
  galgas_scanner_1__3A_3D,
  galgas_scanner_1__2B_2B,
  galgas_scanner_1__5B,
  galgas_scanner_1__5D,
  galgas_scanner_1__2B_3D,
  galgas_scanner_1__3F_21,
  galgas_scanner_1__21_3F,
  galgas_scanner_1__2F,
  galgas_scanner_1__21_3D,
  galgas_scanner_1__3E_3D,
  galgas_scanner_1__26,
  galgas_scanner_1__7B,
  galgas_scanner_1__7D,
  galgas_scanner_1__2B_3E,
  galgas_scanner_1__2D_3D,
  galgas_scanner_1__5E,
  galgas_scanner_1__3E_3E,
  galgas_scanner_1__7E,
  galgas_scanner_1__3C,
  galgas_scanner_1__3C_3D,
  galgas_scanner_1__3C_3C,
  galgas_scanner_1_non_5Fterminal_5Fsymbol,
  galgas_scanner_1_literal_5Fstring,
  galgas_scanner_1_comment} ;

//--- Key words table 'galgasDelimitorsList'
  public : static const sint16 galgas_scanner_table_size_galgasDelimitorsList ;
  private : static const C_lexique_table_entry galgas_scanner_table_for_galgasDelimitorsList [35] ;
  public : static sint16 search_into_galgasDelimitorsList (const C_String & inSearchedString) ;

//--- Key words table 'galgasKeyWordList'
  public : static const sint16 galgas_scanner_table_size_galgasKeyWordList ;
  private : static const C_lexique_table_entry galgas_scanner_table_for_galgasKeyWordList [76] ;
  public : static sint16 search_into_galgasKeyWordList (const C_String & inSearchedString) ;

  protected : virtual bool parseLexicalToken (void) ;
  protected : virtual sint16 parseLexicalTokenForLexicalColoring (void) ;
  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const sint16 numeroTerminal,
                                                              C_String & messageErreur) ;

//--- Get attribute values
  public : void _assignFromAttribute_identifierString (GGS_lstring & outValue) const ;
  public : void _assignFromAttribute_uint32value (GGS_luint & outValue) const ;
  public : void _assignFromAttribute_sint32value (GGS_lsint & outValue) const ;
  public : void _assignFromAttribute_uint64value (GGS_luint64 & outValue) const ;
  public : void _assignFromAttribute_sint64value (GGS_lsint64 & outValue) const ;
  public : void _assignFromAttribute_charValue (GGS_lchar & outValue) const ;
  public : void _assignFromAttribute_tokenString (GGS_lstring & outValue) const ;
  public : void _assignFromAttribute_floatValue (GGS_ldouble & outValue) const ;
//--- Get terminal count
  public : virtual sint16 terminalVocabularyCount (void) const { return 130 ; }
//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;
//--- Enter Token
  protected : void _enterToken (const cTokenFor_galgas_scanner & inToken) ;
//--- Style Definition
  public : static sint32 getStylesCount (void) ;
  public : static const char * getStyleName (const sint32 inIndex) ;
  public : static const char * getStyleIdentifier (const sint32 inIndex) ;
//--- Virtual method called getting terminal style index
  public : virtual uint8 terminalStyleIndex (const sint32 inTerminal) ;
} ;

//---------------------------------------------------------------------------*

#endif
