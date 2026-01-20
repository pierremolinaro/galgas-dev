#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "lexique-+s+l+r-5Fexpression-5Flexique.h"

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_SLR_5F_expression_5F_lexique::cTokenFor_SLR_5F_expression_5F_lexique (void) :
mLexicalAttribute_number () {
}

//--------------------------------------------------------------------------------------------------

Lexique_SLR_5F_expression_5F_lexique::Lexique_SLR_5F_expression_5F_lexique (Compiler * inCallerCompiler,
                                                                            const String & inSourceFileName
                                                                            COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_SLR_5F_expression_5F_lexique::Lexique_SLR_5F_expression_5F_lexique (Compiler * inCallerCompiler,
                                                                            const String & inSourceString,
                                                                            const String & inStringForError
                                                                            COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_SLR_5F_expression_5F_lexique_decimalNumberTooLarge = "Decimal number too large" ;

static const char * gLexicalMessage_SLR_5F_expression_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_SLR_5F_expression_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 6)) {
    static const char * syntaxErrorMessageArray [6] = {kEndOfSourceLexicalErrorMessage,
        "a number",
        "the '+' keyword",
        "the '*' keyword",
        "the '(' keyword",
        "the ')' keyword"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_SLR_5F_expression_5F_lexique__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_SLR_5F_expression_5F_lexique__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$*$'
static const std::initializer_list <utf32> kUnicodeString_SLR_5F_expression_5F_lexique__2A_ = {
  utf32 ('*'),
} ;

//--- Unicode string for '$+$'
static const std::initializer_list <utf32> kUnicodeString_SLR_5F_expression_5F_lexique__2B_ = {
  utf32 ('+'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'operator_list'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_SLR_5F_expression_5F_lexique_operator_list = 4 ;

static const C_unicode_lexique_table_entry ktable_for_SLR_5F_expression_5F_lexique_operator_list [ktable_size_SLR_5F_expression_5F_lexique_operator_list] = {
  C_unicode_lexique_table_entry (kUnicodeString_SLR_5F_expression_5F_lexique__28_, Lexique_SLR_5F_expression_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_SLR_5F_expression_5F_lexique__29_, Lexique_SLR_5F_expression_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_SLR_5F_expression_5F_lexique__2A_, Lexique_SLR_5F_expression_5F_lexique::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_SLR_5F_expression_5F_lexique__2B_, Lexique_SLR_5F_expression_5F_lexique::kToken__2B_)
} ;

int32_t Lexique_SLR_5F_expression_5F_lexique::search_into_operator_list (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_SLR_5F_expression_5F_lexique_operator_list, ktable_size_SLR_5F_expression_5F_lexique_operator_list) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_SLR_5F_expression_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_SLR_5F_expression_5F_lexique * ptr = (const cTokenFor_SLR_5F_expression_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_number:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("number") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_number) ;
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

void Lexique_SLR_5F_expression_5F_lexique::internalParseLexicalToken (cTokenFor_SLR_5F_expression_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_number = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32String (kUnicodeString_SLR_5F_expression_5F_lexique__2B_, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_SLR_5F_expression_5F_lexique__2A_, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_SLR_5F_expression_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_SLR_5F_expression_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_number, gLexicalMessage_SLR_5F_expression_5F_lexique_decimalNumberTooLarge, gLexicalMessage_SLR_5F_expression_5F_lexique_internalError) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_number, gLexicalMessage_SLR_5F_expression_5F_lexique_decimalNumberTooLarge, gLexicalMessage_SLR_5F_expression_5F_lexique_internalError) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_number ;
      enterToken (token) ;
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

bool Lexique_SLR_5F_expression_5F_lexique::parseLexicalToken (void) {
  cTokenFor_SLR_5F_expression_5F_lexique token ;
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

void Lexique_SLR_5F_expression_5F_lexique::enterToken (cTokenFor_SLR_5F_expression_5F_lexique & ioToken) {
  cTokenFor_SLR_5F_expression_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_SLR_5F_expression_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_number = ioToken.mLexicalAttribute_number ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_SLR_5F_expression_5F_lexique::attributeValue_number (void) const {
  cTokenFor_SLR_5F_expression_5F_lexique * ptr = (cTokenFor_SLR_5F_expression_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_number ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_SLR_5F_expression_5F_lexique::synthetizedAttribute_number (void) const {
  cTokenFor_SLR_5F_expression_5F_lexique * ptr = (cTokenFor_SLR_5F_expression_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_SLR_5F_expression_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_number) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_SLR_5F_expression_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("number") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_SLR_5F_expression_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("SLR_expression_lexique:operator_list") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_SLR_5F_expression_5F_lexique (const String & inIdentifier,
                                                                   bool & ioFound,
                                                                   GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "SLR_expression_lexique:operator_list") {
    ioFound = true ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_SLR_5F_expression_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_SLR_5F_expression_5F_lexique, getKeywordsForIdentifier_SLR_5F_expression_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_SLR_5F_expression_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [6] = {0,
    0 /* SLR_expression_lexique_1_number */,
    0 /* SLR_expression_lexique_1__2B_ */,
    0 /* SLR_expression_lexique_1__2A_ */,
    0 /* SLR_expression_lexique_1__28_ */,
    0 /* SLR_expression_lexique_1__29_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_SLR_5F_expression_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 1) {
    static const char * kStyleArray [1] = {
      ""
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

