#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "lexique-dangling-5Felse-5Fsolution-5Flexique.h"

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_dangling_5F_else_5F_solution_5F_lexique::cTokenFor_dangling_5F_else_5F_solution_5F_lexique (void) :
mLexicalAttribute_identifierString () {
}

//--------------------------------------------------------------------------------------------------

Lexique_dangling_5F_else_5F_solution_5F_lexique::Lexique_dangling_5F_else_5F_solution_5F_lexique (Compiler * inCallerCompiler,
                                                                                                  const String & inSourceFileName
                                                                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_dangling_5F_else_5F_solution_5F_lexique::Lexique_dangling_5F_else_5F_solution_5F_lexique (Compiler * inCallerCompiler,
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

String Lexique_dangling_5F_else_5F_solution_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 9)) {
    static const char * syntaxErrorMessageArray [9] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "the 'I' key word",
        "the 'E' key word",
        "the 'O' key word",
        "the '+' delimitor",
        "the '*' delimitor",
        "the '(' delimitor",
        "the ')' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__2B_ = {
  utf32 ('+'),
} ;

//--- Unicode string for '$E$'
static const std::initializer_list <utf32> kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_E = {
  utf32 ('E'),
} ;

//--- Unicode string for '$I$'
static const std::initializer_list <utf32> kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_I = {
  utf32 ('I'),
} ;

//--- Unicode string for '$O$'
static const std::initializer_list <utf32> kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_O = {
  utf32 ('O'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_dangling_5F_else_5F_solution_5F_lexique_delimitorsList = 4 ;

static const C_unicode_lexique_table_entry ktable_for_dangling_5F_else_5F_solution_5F_lexique_delimitorsList [ktable_size_dangling_5F_else_5F_solution_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__28_, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__29_, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__2A_, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__2B_, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken__2B_)
} ;

int32_t Lexique_dangling_5F_else_5F_solution_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_dangling_5F_else_5F_solution_5F_lexique_delimitorsList, ktable_size_dangling_5F_else_5F_solution_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_dangling_5F_else_5F_solution_5F_lexique_keyWordList = 3 ;

static const C_unicode_lexique_table_entry ktable_for_dangling_5F_else_5F_solution_5F_lexique_keyWordList [ktable_size_dangling_5F_else_5F_solution_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_E, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_E),
  C_unicode_lexique_table_entry (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_I, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_I),
  C_unicode_lexique_table_entry (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_O, Lexique_dangling_5F_else_5F_solution_5F_lexique::kToken_O)
} ;

int32_t Lexique_dangling_5F_else_5F_solution_5F_lexique::search_into_keyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_dangling_5F_else_5F_solution_5F_lexique_keyWordList, ktable_size_dangling_5F_else_5F_solution_5F_lexique_keyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_dangling_5F_else_5F_solution_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_dangling_5F_else_5F_solution_5F_lexique * ptr = (const cTokenFor_dangling_5F_else_5F_solution_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_id:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("id") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_I:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("I") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_E:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("E") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_O:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("O") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("*") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
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

void Lexique_dangling_5F_else_5F_solution_5F_lexique::internalParseLexicalToken (cTokenFor_dangling_5F_else_5F_solution_5F_lexique & token) {
  token.mLexicalAttribute_identifierString.removeAllKeepingCapacity () ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32String (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_O, true)) {
      token.mTokenCode = kToken_O ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_I, true)) {
      token.mTokenCode = kToken_I ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique_E, true)) {
      token.mTokenCode = kToken_E ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_id ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_dangling_5F_else_5F_solution_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
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

bool Lexique_dangling_5F_else_5F_solution_5F_lexique::parseLexicalToken (void) {
  cTokenFor_dangling_5F_else_5F_solution_5F_lexique token ;
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

void Lexique_dangling_5F_else_5F_solution_5F_lexique::enterToken (cTokenFor_dangling_5F_else_5F_solution_5F_lexique & ioToken) {
  cTokenFor_dangling_5F_else_5F_solution_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_dangling_5F_else_5F_solution_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

String Lexique_dangling_5F_else_5F_solution_5F_lexique::attributeValue_identifierString (void) const {
  cTokenFor_dangling_5F_else_5F_solution_5F_lexique * ptr = (cTokenFor_dangling_5F_else_5F_solution_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_dangling_5F_else_5F_solution_5F_lexique::synthetizedAttribute_identifierString (void) const {
  cTokenFor_dangling_5F_else_5F_solution_5F_lexique * ptr = (cTokenFor_dangling_5F_else_5F_solution_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_dangling_5F_else_5F_solution_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_identifierString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_dangling_5F_else_5F_solution_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("id") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("I") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("E") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("O") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_dangling_5F_else_5F_solution_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("dangling_else_solution_lexique:delimitorsList") ;
  ioList.appendObject ("dangling_else_solution_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_dangling_5F_else_5F_solution_5F_lexique (const String & inIdentifier,
                                                                              bool & ioFound,
                                                                              GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "dangling_else_solution_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "dangling_else_solution_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("E") ;
    ioList.appendObject ("I") ;
    ioList.appendObject ("O") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_dangling_5F_else_5F_solution_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_dangling_5F_else_5F_solution_5F_lexique, getKeywordsForIdentifier_dangling_5F_else_5F_solution_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_dangling_5F_else_5F_solution_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [9] = {0,
    0 /* dangling_else_solution_lexique_1_id */,
    0 /* dangling_else_solution_lexique_1_I */,
    0 /* dangling_else_solution_lexique_1_E */,
    0 /* dangling_else_solution_lexique_1_O */,
    0 /* dangling_else_solution_lexique_1__2B_ */,
    0 /* dangling_else_solution_lexique_1__2A_ */,
    0 /* dangling_else_solution_lexique_1__28_ */,
    0 /* dangling_else_solution_lexique_1__29_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_dangling_5F_else_5F_solution_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 1) {
    static const char * kStyleArray [1] = {
      ""
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

