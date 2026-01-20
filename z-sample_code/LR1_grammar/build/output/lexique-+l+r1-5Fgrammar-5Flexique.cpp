#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "lexique-+l+r1-5Fgrammar-5Flexique.h"

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_LR_31__5F_grammar_5F_lexique::cTokenFor_LR_31__5F_grammar_5F_lexique (void) {
}

//--------------------------------------------------------------------------------------------------

Lexique_LR_31__5F_grammar_5F_lexique::Lexique_LR_31__5F_grammar_5F_lexique (Compiler * inCallerCompiler,
                                                                            const String & inSourceFileName
                                                                            COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_LR_31__5F_grammar_5F_lexique::Lexique_LR_31__5F_grammar_5F_lexique (Compiler * inCallerCompiler,
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

String Lexique_LR_31__5F_grammar_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 3)) {
    static const char * syntaxErrorMessageArray [3] = {kEndOfSourceLexicalErrorMessage,
        "'c' keyword",
        "'d' keyword"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_LR_31__5F_grammar_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_LR_31__5F_grammar_5F_lexique * ptr = (const cTokenFor_LR_31__5F_grammar_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_c:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("c") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_d:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("d") ;
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

void Lexique_LR_31__5F_grammar_5F_lexique::internalParseLexicalToken (cTokenFor_LR_31__5F_grammar_5F_lexique & token) {
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32Char (utf32 ('c'))) {
      token.mTokenCode = kToken_c ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('d'))) {
      token.mTokenCode = kToken_d ;
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

bool Lexique_LR_31__5F_grammar_5F_lexique::parseLexicalToken (void) {
  cTokenFor_LR_31__5F_grammar_5F_lexique token ;
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

void Lexique_LR_31__5F_grammar_5F_lexique::enterToken (cTokenFor_LR_31__5F_grammar_5F_lexique & ioToken) {
  cTokenFor_LR_31__5F_grammar_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_LR_31__5F_grammar_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_LR_31__5F_grammar_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("c") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("d") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_LR_31__5F_grammar_5F_lexique (GenericUniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_LR_31__5F_grammar_5F_lexique (const String & /* inIdentifier */,
                                                                   bool & /* ioFound */,
                                                                   GenericUniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_LR_31__5F_grammar_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_LR_31__5F_grammar_5F_lexique, getKeywordsForIdentifier_LR_31__5F_grammar_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_LR_31__5F_grammar_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [3] = {0,
    0 /* LR1_grammar_lexique_1_c */,
    0 /* LR1_grammar_lexique_1_d */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_LR_31__5F_grammar_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 1) {
    static const char * kStyleArray [1] = {
      ""
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

