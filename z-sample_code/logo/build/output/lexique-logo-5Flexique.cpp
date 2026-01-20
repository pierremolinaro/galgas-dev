#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "lexique-logo-5Flexique.h"

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_logo_5F_lexique::cTokenFor_logo_5F_lexique (void) :
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_logo_5F_lexique::Lexique_logo_5F_lexique (Compiler * inCallerCompiler,
                                                  const String & inSourceFileName
                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_logo_5F_lexique::Lexique_logo_5F_lexique (Compiler * inCallerCompiler,
                                                  const String & inSourceString,
                                                  const String & inStringForError
                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_logo_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_logo_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_logo_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_logo_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 17)) {
    static const char * syntaxErrorMessageArray [17] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a 32-bit unsigned decimal number",
        "a character string constant \"...\"",
        "a comment",
        "the 'PROGRAM' keyword",
        "the 'ROUTINE' keyword",
        "the 'BEGIN' keyword",
        "the 'END' keyword",
        "the 'FORWARD' keyword",
        "the 'ROTATE' keyword",
        "the 'CALL' keyword",
        "the 'PEN' keyword",
        "the 'UP' keyword",
        "the 'DOWN' keyword",
        "the '.' delimitor",
        "the ';' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique__2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$BEGIN$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_BEGIN = {
  utf32 ('B'),
  utf32 ('E'),
  utf32 ('G'),
  utf32 ('I'),
  utf32 ('N'),
} ;

//--- Unicode string for '$CALL$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_CALL = {
  utf32 ('C'),
  utf32 ('A'),
  utf32 ('L'),
  utf32 ('L'),
} ;

//--- Unicode string for '$DOWN$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_DOWN = {
  utf32 ('D'),
  utf32 ('O'),
  utf32 ('W'),
  utf32 ('N'),
} ;

//--- Unicode string for '$END$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_END = {
  utf32 ('E'),
  utf32 ('N'),
  utf32 ('D'),
} ;

//--- Unicode string for '$FORWARD$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_FORWARD = {
  utf32 ('F'),
  utf32 ('O'),
  utf32 ('R'),
  utf32 ('W'),
  utf32 ('A'),
  utf32 ('R'),
  utf32 ('D'),
} ;

//--- Unicode string for '$PEN$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_PEN = {
  utf32 ('P'),
  utf32 ('E'),
  utf32 ('N'),
} ;

//--- Unicode string for '$PROGRAM$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_PROGRAM = {
  utf32 ('P'),
  utf32 ('R'),
  utf32 ('O'),
  utf32 ('G'),
  utf32 ('R'),
  utf32 ('A'),
  utf32 ('M'),
} ;

//--- Unicode string for '$ROTATE$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_ROTATE = {
  utf32 ('R'),
  utf32 ('O'),
  utf32 ('T'),
  utf32 ('A'),
  utf32 ('T'),
  utf32 ('E'),
} ;

//--- Unicode string for '$ROUTINE$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_ROUTINE = {
  utf32 ('R'),
  utf32 ('O'),
  utf32 ('U'),
  utf32 ('T'),
  utf32 ('I'),
  utf32 ('N'),
  utf32 ('E'),
} ;

//--- Unicode string for '$UP$'
static const std::initializer_list <utf32> kUnicodeString_logo_5F_lexique_UP = {
  utf32 ('U'),
  utf32 ('P'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_logo_5F_lexique_delimitorsList = 2 ;

static const C_unicode_lexique_table_entry ktable_for_logo_5F_lexique_delimitorsList [ktable_size_logo_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique__2E_, Lexique_logo_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique__3B_, Lexique_logo_5F_lexique::kToken__3B_)
} ;

int32_t Lexique_logo_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_logo_5F_lexique_delimitorsList, ktable_size_logo_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_logo_5F_lexique_keyWordList = 10 ;

static const C_unicode_lexique_table_entry ktable_for_logo_5F_lexique_keyWordList [ktable_size_logo_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_UP, Lexique_logo_5F_lexique::kToken_UP),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_END, Lexique_logo_5F_lexique::kToken_END),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_PEN, Lexique_logo_5F_lexique::kToken_PEN),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_CALL, Lexique_logo_5F_lexique::kToken_CALL),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_DOWN, Lexique_logo_5F_lexique::kToken_DOWN),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_BEGIN, Lexique_logo_5F_lexique::kToken_BEGIN),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_ROTATE, Lexique_logo_5F_lexique::kToken_ROTATE),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_FORWARD, Lexique_logo_5F_lexique::kToken_FORWARD),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_PROGRAM, Lexique_logo_5F_lexique::kToken_PROGRAM),
  C_unicode_lexique_table_entry (kUnicodeString_logo_5F_lexique_ROUTINE, Lexique_logo_5F_lexique::kToken_ROUTINE)
} ;

int32_t Lexique_logo_5F_lexique::search_into_keyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_logo_5F_lexique_keyWordList, ktable_size_logo_5F_lexique_keyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_logo_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_logo_5F_lexique * ptr = (const cTokenFor_logo_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken__22_string_22_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\"string\"") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_PROGRAM:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("PROGRAM") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ROUTINE:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ROUTINE") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_BEGIN:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("BEGIN") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_END:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("END") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_FORWARD:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("FORWARD") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_ROTATE:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("ROTATE") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_CALL:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("CALL") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_PEN:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("PEN") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_UP:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("UP") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_DOWN:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("DOWN") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_logo_5F_lexique::internalParseLexicalToken (cTokenFor_logo_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_logo_5F_lexique_decimalNumberTooLarge, gLexicalMessage_logo_5F_lexique_internalError) ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_logo_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_logo_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_logo_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_logo_5F_lexique::parseLexicalToken (void) {
  cTokenFor_logo_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_logo_5F_lexique::enterToken (cTokenFor_logo_5F_lexique & ioToken) {
  cTokenFor_logo_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_logo_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

String Lexique_logo_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_logo_5F_lexique * ptr = (cTokenFor_logo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_logo_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_logo_5F_lexique * ptr = (cTokenFor_logo_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_logo_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_logo_5F_lexique * ptr = (cTokenFor_logo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_logo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_logo_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_logo_5F_lexique * ptr = (cTokenFor_logo_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_logo_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_logo_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("PROGRAM") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ROUTINE") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("BEGIN") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("END") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("FORWARD") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("ROTATE") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("CALL") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("PEN") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("UP") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("DOWN") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_logo_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("logo_lexique:delimitorsList") ;
  ioList.appendObject ("logo_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_logo_5F_lexique (const String & inIdentifier,
                                                      bool & ioFound,
                                                      GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "logo_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject (".") ;
    ioList.appendObject (";") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "logo_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("UP") ;
    ioList.appendObject ("END") ;
    ioList.appendObject ("PEN") ;
    ioList.appendObject ("CALL") ;
    ioList.appendObject ("DOWN") ;
    ioList.appendObject ("BEGIN") ;
    ioList.appendObject ("ROTATE") ;
    ioList.appendObject ("FORWARD") ;
    ioList.appendObject ("PROGRAM") ;
    ioList.appendObject ("ROUTINE") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_logo_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_logo_5F_lexique, getKeywordsForIdentifier_logo_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_logo_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [17] = {0,
    0 /* logo_lexique_1_identifier */,
    2 /* logo_lexique_1_integer */,
    3 /* logo_lexique_1__22_string_22_ */,
    5 /* logo_lexique_1_comment */,
    1 /* logo_lexique_1_PROGRAM */,
    1 /* logo_lexique_1_ROUTINE */,
    1 /* logo_lexique_1_BEGIN */,
    1 /* logo_lexique_1_END */,
    1 /* logo_lexique_1_FORWARD */,
    1 /* logo_lexique_1_ROTATE */,
    1 /* logo_lexique_1_CALL */,
    1 /* logo_lexique_1_PEN */,
    1 /* logo_lexique_1_UP */,
    1 /* logo_lexique_1_DOWN */,
    4 /* logo_lexique_1__2E_ */,
    4 /* logo_lexique_1__3B_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_logo_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 6) {
    static const char * kStyleArray [6] = {
      "",
      "keywordsStyle",
      "integerStyle",
      "stringStyle",
      "delimitersStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

