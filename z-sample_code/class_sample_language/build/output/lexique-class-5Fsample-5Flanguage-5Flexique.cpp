#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "lexique-class-5Fsample-5Flanguage-5Flexique.h"

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_class_5F_sample_5F_language_5F_lexique::cTokenFor_class_5F_sample_5F_language_5F_lexique (void) :
mLexicalAttribute_tokenString () {
}

//--------------------------------------------------------------------------------------------------

Lexique_class_5F_sample_5F_language_5F_lexique::Lexique_class_5F_sample_5F_language_5F_lexique (Compiler * inCallerCompiler,
                                                                                                const String & inSourceFileName
                                                                                                COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_class_5F_sample_5F_language_5F_lexique::Lexique_class_5F_sample_5F_language_5F_lexique (Compiler * inCallerCompiler,
                                                                                                const String & inSourceString,
                                                                                                const String & inStringForError
                                                                                                COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_class_5F_sample_5F_language_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 5)) {
    static const char * syntaxErrorMessageArray [5] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "the 'class' keyword",
        "the ';' delimitor",
        "the ':' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_class_5F_sample_5F_language_5F_lexique__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_class_5F_sample_5F_language_5F_lexique__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$class$'
static const std::initializer_list <utf32> kUnicodeString_class_5F_sample_5F_language_5F_lexique_class = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('s'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_class_5F_sample_5F_language_5F_lexique_delimitorsList = 2 ;

static const C_unicode_lexique_table_entry ktable_for_class_5F_sample_5F_language_5F_lexique_delimitorsList [ktable_size_class_5F_sample_5F_language_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_class_5F_sample_5F_language_5F_lexique__3A_, Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_class_5F_sample_5F_language_5F_lexique__3B_, Lexique_class_5F_sample_5F_language_5F_lexique::kToken__3B_)
} ;

int32_t Lexique_class_5F_sample_5F_language_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_class_5F_sample_5F_language_5F_lexique_delimitorsList, ktable_size_class_5F_sample_5F_language_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_class_5F_sample_5F_language_5F_lexique_keyWordList = 1 ;

static const C_unicode_lexique_table_entry ktable_for_class_5F_sample_5F_language_5F_lexique_keyWordList [ktable_size_class_5F_sample_5F_language_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_class_5F_sample_5F_language_5F_lexique_class, Lexique_class_5F_sample_5F_language_5F_lexique::kToken_class)
} ;

int32_t Lexique_class_5F_sample_5F_language_5F_lexique::search_into_keyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_class_5F_sample_5F_language_5F_lexique_keyWordList, ktable_size_class_5F_sample_5F_language_5F_lexique_keyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_class_5F_sample_5F_language_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_class_5F_sample_5F_language_5F_lexique * ptr = (const cTokenFor_class_5F_sample_5F_language_5F_lexique *) inTokenPtr ;
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
    case kToken_class:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("class") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
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

void Lexique_class_5F_sample_5F_language_5F_lexique::internalParseLexicalToken (cTokenFor_class_5F_sample_5F_language_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
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
    }else if (testForInputUTF32String (kUnicodeString_class_5F_sample_5F_language_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_class_5F_sample_5F_language_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
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

bool Lexique_class_5F_sample_5F_language_5F_lexique::parseLexicalToken (void) {
  cTokenFor_class_5F_sample_5F_language_5F_lexique token ;
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

void Lexique_class_5F_sample_5F_language_5F_lexique::enterToken (cTokenFor_class_5F_sample_5F_language_5F_lexique & ioToken) {
  cTokenFor_class_5F_sample_5F_language_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_class_5F_sample_5F_language_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

String Lexique_class_5F_sample_5F_language_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_class_5F_sample_5F_language_5F_lexique * ptr = (cTokenFor_class_5F_sample_5F_language_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_class_5F_sample_5F_language_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_class_5F_sample_5F_language_5F_lexique * ptr = (cTokenFor_class_5F_sample_5F_language_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_class_5F_sample_5F_language_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_class_5F_sample_5F_language_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("class") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_class_5F_sample_5F_language_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("class_sample_language_lexique:delimitorsList") ;
  ioList.appendObject ("class_sample_language_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_class_5F_sample_5F_language_5F_lexique (const String & inIdentifier,
                                                                             bool & ioFound,
                                                                             GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "class_sample_language_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "class_sample_language_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("class") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_class_5F_sample_5F_language_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_class_5F_sample_5F_language_5F_lexique, getKeywordsForIdentifier_class_5F_sample_5F_language_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_class_5F_sample_5F_language_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [5] = {0,
    0 /* class_sample_language_lexique_1_identifier */,
    1 /* class_sample_language_lexique_1_class */,
    2 /* class_sample_language_lexique_1__3B_ */,
    2 /* class_sample_language_lexique_1__3A_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_class_5F_sample_5F_language_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 3) {
    static const char * kStyleArray [3] = {
      "",
      "keywordsStyle",
      "delimitersStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

