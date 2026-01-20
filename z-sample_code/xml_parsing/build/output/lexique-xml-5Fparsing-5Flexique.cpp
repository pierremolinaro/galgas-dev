#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "lexique-xml-5Fparsing-5Flexique.h"

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_xml_5F_parsing_5F_lexique::cTokenFor_xml_5F_parsing_5F_lexique (void) :
mLexicalAttribute_tokenString () {
}

//--------------------------------------------------------------------------------------------------

Lexique_xml_5F_parsing_5F_lexique::Lexique_xml_5F_parsing_5F_lexique (Compiler * inCallerCompiler,
                                                                      const String & inSourceFileName
                                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------

Lexique_xml_5F_parsing_5F_lexique::Lexique_xml_5F_parsing_5F_lexique (Compiler * inCallerCompiler,
                                                                      const String & inSourceString,
                                                                      const String & inStringForError
                                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_xml_5F_parsing_5F_lexique_incorrectAttributeEnd = "attribute value should be enclosed between apostrophes (') or quotation marks (\")" ;

static const char * gLexicalMessage_xml_5F_parsing_5F_lexique_incorrectCommentError = "incorrect XML comment" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_xml_5F_parsing_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 11)) {
    static const char * syntaxErrorMessageArray [11] = {kEndOfSourceLexicalErrorMessage,
        "a comment",
        "a name",
        "an attribute value",
        "the '<' delimitor",
        "the '<\?' delimitor",
        "the '>' delimitor",
        "the '\?>' delimitor",
        "the '/>' delimitor",
        "the '</' delimitor",
        "the '=' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$\"$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__22_ = {
  utf32 ('\"'),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$&#$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__26__23_ = {
  utf32 ('&'),
  utf32 ('#'),
} ;

//--- Unicode string for '$&amp;$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__26_amp_3B_ = {
  utf32 ('&'),
  utf32 ('a'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 (';'),
} ;

//--- Unicode string for '$&apos;$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__26_apos_3B_ = {
  utf32 ('&'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 (';'),
} ;

//--- Unicode string for '$&gt;$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__26_gt_3B_ = {
  utf32 ('&'),
  utf32 ('g'),
  utf32 ('t'),
  utf32 (';'),
} ;

//--- Unicode string for '$&lt;$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__26_lt_3B_ = {
  utf32 ('&'),
  utf32 ('l'),
  utf32 ('t'),
  utf32 (';'),
} ;

//--- Unicode string for '$&quot;$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__26_quot_3B_ = {
  utf32 ('&'),
  utf32 ('q'),
  utf32 ('u'),
  utf32 ('o'),
  utf32 ('t'),
  utf32 (';'),
} ;

//--- Unicode string for '$'$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__27_ = {
  utf32 ('\''),
} ;

//--- Unicode string for '$-->$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__2D__2D__3E_ = {
  utf32 ('-'),
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$/>$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__2F__3E_ = {
  utf32 ('/'),
  utf32 ('>'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3C_ = {
  utf32 ('<'),
} ;

//--- Unicode string for '$<!--$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3C__21__2D__2D_ = {
  utf32 ('<'),
  utf32 ('!'),
  utf32 ('-'),
  utf32 ('-'),
} ;

//--- Unicode string for '$</$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3C__2F_ = {
  utf32 ('<'),
  utf32 ('/'),
} ;

//--- Unicode string for '$<?$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3C__3F_ = {
  utf32 ('<'),
  utf32 ('\?'),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$?>$'
static const std::initializer_list <utf32> kUnicodeString_xml_5F_parsing_5F_lexique__3F__3E_ = {
  utf32 ('\?'),
  utf32 ('>'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'xmlDelimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_xml_5F_parsing_5F_lexique_xmlDelimitorsList = 7 ;

static const C_unicode_lexique_table_entry ktable_for_xml_5F_parsing_5F_lexique_xmlDelimitorsList [ktable_size_xml_5F_parsing_5F_lexique_xmlDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_xml_5F_parsing_5F_lexique__3C_, Lexique_xml_5F_parsing_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_xml_5F_parsing_5F_lexique__3D_, Lexique_xml_5F_parsing_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_xml_5F_parsing_5F_lexique__3E_, Lexique_xml_5F_parsing_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_xml_5F_parsing_5F_lexique__2F__3E_, Lexique_xml_5F_parsing_5F_lexique::kToken__2F__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_xml_5F_parsing_5F_lexique__3C__2F_, Lexique_xml_5F_parsing_5F_lexique::kToken__3C__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_xml_5F_parsing_5F_lexique__3C__3F_, Lexique_xml_5F_parsing_5F_lexique::kToken__3C__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_xml_5F_parsing_5F_lexique__3F__3E_, Lexique_xml_5F_parsing_5F_lexique::kToken__3F__3E_)
} ;

int32_t Lexique_xml_5F_parsing_5F_lexique::search_into_xmlDelimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_xml_5F_parsing_5F_lexique_xmlDelimitorsList, ktable_size_xml_5F_parsing_5F_lexique_xmlDelimitorsList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_xml_5F_parsing_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_xml_5F_parsing_5F_lexique * ptr = (const cTokenFor_xml_5F_parsing_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_name:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("name") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_value:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("value") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2F__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("/>") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__2F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("</") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
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

static const TemplateDelimiter xml_5F_parsing_5F_lexique_kTemplateDefinitionArray [1] = {
  TemplateDelimiter (kUnicodeString_xml_5F_parsing_5F_lexique__3C_, 1, {}, 0, nullptr, false)
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter xml_5F_parsing_5F_lexique_kTemplateReplacementArray [6] = {
  TemplateDelimiter (kUnicodeString_xml_5F_parsing_5F_lexique__26_amp_3B_, 5, kUnicodeString_xml_5F_parsing_5F_lexique__26_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_xml_5F_parsing_5F_lexique__26_lt_3B_, 4, kUnicodeString_xml_5F_parsing_5F_lexique__3C_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_xml_5F_parsing_5F_lexique__26_gt_3B_, 4, kUnicodeString_xml_5F_parsing_5F_lexique__3E_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_xml_5F_parsing_5F_lexique__26_quot_3B_, 6, kUnicodeString_xml_5F_parsing_5F_lexique__22_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_xml_5F_parsing_5F_lexique__26_apos_3B_, 6, kUnicodeString_xml_5F_parsing_5F_lexique__27_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_xml_5F_parsing_5F_lexique__26__23_, 2, kUnicodeString_xml_5F_parsing_5F_lexique__3B_, 1, scanner_routine_codePointToUnicode, true)
} ;

//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------

static const bool xml_5F_parsing_5F_lexique_kEndOfScriptInTemplateArray [10] = {
  true /* comment */,
  false /* name */,
  false /* value */,
  false /* < */,
  false /* <? */,
  true /* > */,
  true /* ?> */,
  true /* /> */,
  false /* </ */,
  false /* = */
} ;

//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_xml_5F_parsing_5F_lexique::internalParseLexicalToken (cTokenFor_xml_5F_parsing_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__3C__21__2D__2D_, true)) {
      do {
        if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_amp_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('&')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_lt_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('<')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_gt_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('>')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_quot_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_apos_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\'')) ;
        }else if (testForInputUTF32CharRange (utf32 (1), utf32 (',')) || testForInputUTF32CharRange (utf32 ('.'), utf32 (1114111))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (notTestForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__2D__2D__3E_, gLexicalMessage_xml_5F_parsing_5F_lexique_incorrectCommentError COMMA_LINE_AND_SOURCE_FILE)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('-')) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_comment ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__3F__3E_, true)) {
      token.mTokenCode = kToken__3F__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__3C__3F_, true)) {
      token.mTokenCode = kToken__3C__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__3C__2F_, true)) {
      token.mTokenCode = kToken__3C__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__2F__3E_, true)) {
      token.mTokenCode = kToken__2F__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForChar_isUnicodeLetter ()) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_name ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_amp_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('&')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_lt_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('<')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_gt_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('>')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_quot_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_apos_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\'')) ;
        }else if (notTestForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__22_, gLexicalMessage_xml_5F_parsing_5F_lexique_incorrectAttributeEnd COMMA_LINE_AND_SOURCE_FILE)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_value ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\''))) {
      do {
        if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_amp_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('&')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_lt_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('<')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_gt_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('>')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_quot_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
        }else if (testForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__26_apos_3B_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\'')) ;
        }else if (notTestForInputUTF32String (kUnicodeString_xml_5F_parsing_5F_lexique__27_, gLexicalMessage_xml_5F_parsing_5F_lexique_incorrectAttributeEnd COMMA_LINE_AND_SOURCE_FILE)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_value ;
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

bool Lexique_xml_5F_parsing_5F_lexique::parseLexicalToken (void) {
  cTokenFor_xml_5F_parsing_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
     && (xml_5F_parsing_5F_lexique_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
     && (mCurrentChar.u32 () != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (xml_5F_parsing_5F_lexique_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                               true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar.u32 () != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (xml_5F_parsing_5F_lexique_kTemplateReplacementArray, 6) ;
        if (replacementIndex >= 0) {
          if (xml_5F_parsing_5F_lexique_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {
            token.mTemplateStringBeforeToken.appendString (xml_5F_parsing_5F_lexique_kTemplateReplacementArray [replacementIndex].mEndString) ;
          }else{
            String s ;
            while (notTestForInputUTF32String (xml_5F_parsing_5F_lexique_kTemplateReplacementArray [replacementIndex].mEndString,
                                                kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendChar (previousChar ()) ;
            }
            xml_5F_parsing_5F_lexique_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (xml_5F_parsing_5F_lexique_kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\0')) {
      internalParseLexicalToken (token) ;
    }
    if ((token.mTokenCode > 0) && xml_5F_parsing_5F_lexique_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  
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

void Lexique_xml_5F_parsing_5F_lexique::enterToken (cTokenFor_xml_5F_parsing_5F_lexique & ioToken) {
  cTokenFor_xml_5F_parsing_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_xml_5F_parsing_5F_lexique ()) ;
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

String Lexique_xml_5F_parsing_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_xml_5F_parsing_5F_lexique * ptr = (cTokenFor_xml_5F_parsing_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_xml_5F_parsing_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_xml_5F_parsing_5F_lexique * ptr = (cTokenFor_xml_5F_parsing_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_xml_5F_parsing_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_xml_5F_parsing_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("name") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("value") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("</") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_xml_5F_parsing_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("xml_parsing_lexique:xmlDelimitorsList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_xml_5F_parsing_5F_lexique (const String & inIdentifier,
                                                                bool & ioFound,
                                                                GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "xml_parsing_lexique:xmlDelimitorsList") {
    ioFound = true ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("/>") ;
    ioList.appendObject ("</") ;
    ioList.appendObject ("<\?") ;
    ioList.appendObject ("\?>") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_xml_5F_parsing_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_xml_5F_parsing_5F_lexique, getKeywordsForIdentifier_xml_5F_parsing_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_xml_5F_parsing_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [11] = {0,
    4 /* xml_parsing_lexique_1_comment */,
    2 /* xml_parsing_lexique_1_name */,
    3 /* xml_parsing_lexique_1_value */,
    1 /* xml_parsing_lexique_1__3C_ */,
    1 /* xml_parsing_lexique_1__3C__3F_ */,
    1 /* xml_parsing_lexique_1__3E_ */,
    1 /* xml_parsing_lexique_1__3F__3E_ */,
    1 /* xml_parsing_lexique_1__2F__3E_ */,
    1 /* xml_parsing_lexique_1__3C__2F_ */,
    1 /* xml_parsing_lexique_1__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_xml_5F_parsing_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 6) {
    static const char * kStyleArray [6] = {
      "",
      "delimitersStyle",
      "nameStyle",
      "attributeValue",
      "commentStyle",
      "textStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

