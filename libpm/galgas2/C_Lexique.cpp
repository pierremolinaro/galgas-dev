//--------------------------------------------------------------------------------------------------
//
//  'C_Lexique' : an abstract lexique class ;
//  Galgas generated scanner classes inherit from this class.
//
//  This file is part of libpm library
//
//  Copyright (C) 1996, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"
#include "all-predefined-types.h"
#include "utilities/MF_MemoryControl.h"
#include "strings/unicode_character_cpp.h"
#include "strings/unicode_string_routines.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/cIndexingDictionary.h"
#include "files/FileManager.h"
#include "galgas2/F_verbose_output.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors, Destructor
#endif

//--------------------------------------------------------------------------------------------------

cTemplateDelimiter::
cTemplateDelimiter (const utf32 * inStartString,
                    const int32_t inStartStringLength,
                    const utf32 * inEndString,
                    const int32_t inEndStringLength,
                    void (* inReplacementFunction) (C_Lexique & inLexique, const String & inElementString, String & ioTemplateString),
                    const bool inDiscardStartString) :
mStartString (inStartString),
mStartStringLength (inStartStringLength),
mEndString (inEndString),
mEndStringLength (inEndStringLength),
mReplacementFunction (inReplacementFunction),
mDiscardStartString (inDiscardStartString) {
}

//--------------------------------------------------------------------------------------------------

cTemplateDelimiter::cTemplateDelimiter (const cTemplateDelimiter & inOperand) :
mStartString (inOperand.mStartString),
mStartStringLength (inOperand.mStartStringLength),
mEndString (inOperand.mEndString),
mEndStringLength (inOperand.mEndStringLength),
mReplacementFunction (inOperand.mReplacementFunction),
mDiscardStartString (inOperand.mDiscardStartString) {
}

//--------------------------------------------------------------------------------------------------

C_Lexique::C_Lexique (Compiler * inCallerCompiler,
                      const String & inSourceFileName
                      COMMA_LOCATION_ARGS) :
Compiler (inCallerCompiler COMMA_THERE),
mIndexingDictionary (nullptr),
mFirstToken (nullptr),
mLastToken (nullptr),
mCurrentTokenPtr (nullptr),
mLastSeparatorIndex (0),
mCurrentChar (TO_UNICODE ('\0')),
mPreviousChar (TO_UNICODE ('\0')),
mTokenStartLocation (),
mTokenEndLocation (),
mTriggerNonTerminalSymbolList (),
mDebugDepthCounter (0),
mDebugIsRunning (false),
mArrayForSecondPassParsing (),
mIndexForSecondPassParsing (0),
mLatexOutputString (),
mLatexNextCharacterToEnterIndex (0) {
//---
  if (inSourceFileName.length () > 0) {
    logFileRead (inSourceFileName) ;
    bool ok = false ;
    PMTextFileEncoding textFileEncoding ;
    const String sourceString = FileManager::stringWithContentOfFile (inSourceFileName, textFileEncoding, ok) ;
    if (ok) {
      const SourceTextInString source (sourceString,
                                         inSourceFileName,
                                         false) ; // Do not print source string
      resetAndLoadSourceFromText (source) ;
      mTokenStartLocation.resetWithSourceText (source) ;
      mTokenEndLocation.resetWithSourceText (source) ;
    }else if (inCallerCompiler != nullptr) {
      String errorMessage = "cannot read '" ;
      errorMessage.addString (inSourceFileName) ;
      errorMessage.addString ("': this file does not exist or is not encoded in UTF8") ;
      inCallerCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE)  ;
    }
  }
  mCurrentChar = sourceText ().readCharOrNul (0 COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

C_Lexique::C_Lexique (Compiler * inCallerCompiler,
                      const String & inSourceString,
                      const String & inStringForError
                      COMMA_LOCATION_ARGS) :
Compiler (inCallerCompiler COMMA_THERE),
mIndexingDictionary (nullptr),
mFirstToken (nullptr),
mLastToken (nullptr),
mCurrentTokenPtr (nullptr),
mLastSeparatorIndex (0),
mCurrentChar (TO_UNICODE ('\0')),
mPreviousChar (TO_UNICODE ('\0')),
mTokenStartLocation (),
mTokenEndLocation (),
mTriggerNonTerminalSymbolList (),
mDebugDepthCounter (0),
mDebugIsRunning (false),
mArrayForSecondPassParsing (),
mIndexForSecondPassParsing (0),
mLatexOutputString (),
mLatexNextCharacterToEnterIndex (0) {
  const SourceTextInString source (inSourceString, inStringForError, verboseOutput ()) ;
  resetAndLoadSourceFromText (source) ;
  mTokenStartLocation.resetWithSourceText (source) ;
  mTokenEndLocation.resetWithSourceText (source) ;
  mCurrentChar = sourceText ().readCharOrNul (0 COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

C_Lexique::~C_Lexique (void) {
  macroMyDelete (mIndexingDictionary) ;
  mLastToken = nullptr ;
  mCurrentTokenPtr = nullptr ;
  while (mFirstToken != nullptr) {
    cToken * p = mFirstToken->mNextToken ;
    macroMyDelete (mFirstToken) ;
    mFirstToken = p ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Scanner configuration
#endif

//--------------------------------------------------------------------------------------------------

void C_Lexique::appendLastSeparatorTo (String & ioString) const {
  if (nullptr != mLastToken) {
    const int32_t lastSeparatorStart = mLastToken->mEndLocation.index () + 1 ;
    const String lastSeparatorString = sourceText ().sourceString ().subStringFromIndex (lastSeparatorStart) ;
    ioString.addString (lastSeparatorString) ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::enterTokenFromPointer (cToken * inToken) {
  macroValidPointer (inToken) ;
//--- Append separator and comments
  const int32_t tokenStart = mTokenStartLocation.index () ;
  if (tokenStart > mLastSeparatorIndex) {
    const String sep = sourceText ().sourceString ().subString (mLastSeparatorIndex, tokenStart -mLastSeparatorIndex) ;
    inToken->mSeparatorStringBeforeToken.addString (sep) ;
  }
  mLastSeparatorIndex = mTokenEndLocation.index () + 1 ;
//--- Enter token in token list
  if (mLastToken == nullptr) {
    mFirstToken = inToken ;
  }else{
    mLastToken->mNextToken = inToken ;
  }
  mLastToken = inToken ;
//---
  if (executionModeIsLexicalAnalysisOnly ()) {
    String s ;
    for (int32_t i=inToken->mStartLocation.index () ; i<=inToken->mEndLocation.index () ; i++) {
      const utf32 c = sourceText ().readCharOrNul (i COMMA_HERE) ;
      if (UNICODE_VALUE (c) != '\0') {
        s.addUnicodeChar (c COMMA_HERE) ;
      }
    }
    gCout.addString ("  ") ;
    gCout.addString (getCurrentTokenString (inToken)) ;
    gCout.addString (", from location ") ;
    gCout.addSigned (inToken->mStartLocation.index ()) ;
    gCout.addString (" (line ") ;
    gCout.addSigned (inToken->mStartLocation.lineNumber ()) ;
    gCout.addString (", column ") ;
    gCout.addSigned (inToken->mStartLocation.columnNumber ()) ;
    gCout.addString (")") ;
    gCout.addString (" to location ") ;
    gCout.addSigned (inToken->mEndLocation.index ()) ;
    gCout.addString (" (line ") ;
    gCout.addSigned (inToken->mEndLocation.lineNumber ()) ;
    gCout.addString (", column ") ;
    gCout.addSigned (inToken->mEndLocation.columnNumber ()) ;
    gCout.addString (")") ;
    if (inToken->mTemplateStringBeforeToken.length () > 0) {
      gCout.addString (", template '") ;
      gCout.addString (inToken->mTemplateStringBeforeToken) ;
      gCout.addString ("'") ;
    }
    gCout.addNL () ; ;
  }else if (executionModeIsLatex ()) {
    while (mLatexNextCharacterToEnterIndex < inToken->mStartLocation.index ()) {
      const utf32 c = sourceText ().readCharOrNul (mLatexNextCharacterToEnterIndex COMMA_HERE) ;
      appendCharacterToLatexFile (c) ;
      mLatexNextCharacterToEnterIndex ++ ;
    }
    const String styleName = styleNameForIndex (styleIndexForTerminal (inToken->mTokenCode)) ;
    if (styleName.length () > 0) {
      mLatexOutputString.addString ("\\") ;
      mLatexOutputString.addString (styleName) ;
      mLatexOutputString.addString (latexModeStyleSuffixString ()) ;
      mLatexOutputString.addString ("{") ;
    }
    for (int32_t i=inToken->mStartLocation.index () ; i<=inToken->mEndLocation.index () ; i++) {
      const utf32 c = sourceText ().readCharOrNul (i COMMA_HERE) ;
      if (UNICODE_VALUE (c) != '\0') {
        appendCharacterToLatexFile (c) ;
      }
    }
    if (styleName.length () > 0) {
      mLatexOutputString.addString ("}") ;
    }
  //---
    mLatexNextCharacterToEnterIndex = inToken->mEndLocation.index () + 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::resetForSecondPass (void) {
  mCurrentLocation.resetWithSourceText (sourceText ()) ;
  mCurrentChar = sourceText ().readCharOrNul (0 COMMA_HERE) ;
  mPreviousChar = TO_UNICODE ('\0') ;
  mCurrentTokenPtr = mFirstToken ;
  if (mCurrentTokenPtr != nullptr) {
    mStartLocationForHere = mCurrentTokenPtr->mStartLocation ;
    mEndLocationForHere = mCurrentTokenPtr->mEndLocation ;
    mStartLocationForNext = mCurrentTokenPtr->mStartLocation ;
    mEndLocationForNext = mCurrentTokenPtr->mEndLocation ;
    mTemplateString.addString (mCurrentTokenPtr->mTemplateStringBeforeToken) ;
    mCurrentLocation = mCurrentTokenPtr->mEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Template Delimiter Scanning
#endif

//--------------------------------------------------------------------------------------------------

int32_t C_Lexique::findTemplateDelimiterIndex (const cTemplateDelimiter inTemplateDelimiterArray [],
                                               const int32_t inTemplateDelimiterArrayLength) {
  int32_t templateIndex = 0 ;
  bool found = false ;

  while ((templateIndex < inTemplateDelimiterArrayLength) && ! found) {
    found = testForInputUTF32String (inTemplateDelimiterArray [templateIndex].mStartString,
                                     inTemplateDelimiterArray [templateIndex].mStartStringLength,
                                     inTemplateDelimiterArray [templateIndex].mDiscardStartString) ;
    templateIndex ++ ;
  }
  templateIndex -- ;
  if (! found) {
    templateIndex = -1 ;
  }
  return templateIndex ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Lexical Analysis
#endif

//--------------------------------------------------------------------------------------------------
//
//   performLexicalAnalysis
//
//--------------------------------------------------------------------------------------------------

void C_Lexique::performLexicalAnalysis (void) {
  if (executionModeIsLexicalAnalysisOnly ()) {
    gCout.addString ("*** PERFORM LEXICAL ANALYSIS ONLY (--mode=lexical-only option) ***\n") ;
  }
  bool loop = true ;
  while (loop) {
    loop = parseLexicalToken () ;
  }
  if (executionModeIsLexicalAnalysisOnly ()) {
    gCout.addString ("*** END OF LEXICAL ANALYSIS ***\n") ;
  }else if (executionModeIsLatex ()) {
    generateLatexFile () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//        Methods for scanning
//
//--------------------------------------------------------------------------------------------------

void C_Lexique::advance (void) {
  mTokenEndLocation = mCurrentLocation ;
  mPreviousChar = mCurrentChar ;
  if (UNICODE_VALUE (mCurrentChar) != '\0') {
    mCurrentLocation.gotoNextLocation () ;
    mCurrentChar = sourceText ().readCharOrNul (mCurrentLocation.index () COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::advance (const int32_t inCount) {
  for (int32_t i=0 ; i<inCount ; i++) {
    advance () ;
  }
}

//--------------------------------------------------------------------------------------------------

bool C_Lexique::testForInputUTF32CharRange (const utf32 inLowBound,
                                            const utf32 inHighBound) {
  const bool ok = (UNICODE_VALUE (inLowBound) <= UNICODE_VALUE (mCurrentChar))
     && (UNICODE_VALUE (mCurrentChar) <= UNICODE_VALUE (inHighBound)) ;
  if (ok) {
    advance () ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool C_Lexique::testForInputUTF32Char (const utf32 inChar) {
  const bool ok = UNICODE_VALUE (inChar) == UNICODE_VALUE (mCurrentChar) ;
  if (ok) {
    advance () ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool C_Lexique::testForCharWithFunction (bool (*inFunction) (const utf32 inUnicodeCharacter)) {
  const bool ok = inFunction (mCurrentChar) ;
  if (ok) {
    advance () ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool C_Lexique::testForInputUTF32String (const utf32 * inTestCstring,
                                         const int32_t inStringLength,
                                         const bool inAdvanceOnMatch) {
//--- Test
  bool ok = utf32_strncmp (sourceText ().temporaryUTF32StringAtIndex (mCurrentLocation.index () COMMA_HERE),
                           inTestCstring,
                           inStringLength) == 0 ;
//--- Avancer dans la lecture si test ok et fin de source non atteinte
  if (ok && inAdvanceOnMatch) {
    advance (inStringLength) ;
  }
//---
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool C_Lexique::notTestForInputUTF32String (const utf32 * inTestCstring,
                                            const int32_t inStringLength,
                                            const char * inEndOfFileErrorMessage
                                            COMMA_LOCATION_ARGS) {
  bool ok = UNICODE_VALUE (sourceText ().readCharOrNul (mCurrentLocation.index () COMMA_HERE)) != '\0' ;
  if (! ok) { // End of input file reached
    lexicalError (inEndOfFileErrorMessage COMMA_THERE) ;
  }else{
  //--- Test
    ok = false ;
    for (int32_t i=0 ; (i<inStringLength) && ! ok ; i++) {
      ok = UNICODE_VALUE (sourceText ().readCharOrNul (mCurrentLocation.index () + i COMMA_HERE)) != UNICODE_VALUE (* inTestCstring) ;
      inTestCstring ++ ;
    }
    if (ok) {
      advance () ;
    }else{
      advance (inStringLength) ;
    }
  }
//---
  return ok ;
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::lexicalLog (LOCATION_ARGS) {
  String message ;
  message.addString ("LEXICAL LOG:'") ;
  message.addStringAsCLiteralCharConstant (mCurrentChar) ;
  message.addString ("'\n") ;
  printMessage (message COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//    Search in an ordered list (used for searching into scanner generated tables)
//
//--------------------------------------------------------------------------------------------------

int32_t C_Lexique::searchInList (const String & inString,
                                 const C_unicode_lexique_table_entry inTable [],
                                 const int32_t inTableSize) {
  const int32_t searchedStringLength = inString.length () ;
  int32_t code = -1 ; // -1 means 'not found'
  int32_t bottom = 0 ;
  int32_t top = inTableSize - 1 ;

  while ((code < 0) && (top >= bottom)) {
    const int32_t index = (bottom + top) / 2 ;
    int32_t result = searchedStringLength - inTable [index].mEntryStringLength ;
    if (result == 0) {
      result = inString.compare (String (inTable [index].mEntryString)) ;
    }
    if (result < 0) { // <
      top = index - 1 ;
    }else if (result > 0) { // >
      bottom = index + 1 ;
    }else{
      code = inTable [index].mTokenCode ;
    }
  }
  return code ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Handling an error
#endif

//--------------------------------------------------------------------------------------------------

void C_Lexique::internalBottomUpParserError (LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    printf ("*** Fatal error: Internal bottom-up parser error at line %d of file '%s'.\n", IN_SOURCE_LINE, IN_SOURCE_FILE) ;
  #else
    printf ("*** Fatal error: Internal bottom-up parser error.\n") ;
  #endif
  exit (1) ;
}

//--------------------------------------------------------------------------------------------------
//
//           Lexical error
//
//--------------------------------------------------------------------------------------------------

void C_Lexique::unknownCharacterLexicalError (LOCATION_ARGS) {
  String errorMessage ;
  errorMessage.addString ("Unknown character: ") ;
  errorMessage.addString (unicodeName (mCurrentChar)) ;
  errorMessage.addString (" (Unicode ") ;
  errorMessage.adddHex0xUnsigned (UNICODE_VALUE (mCurrentChar)) ;
  errorMessage.addString (")") ;
  lexicalError (errorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::lexicalError (const String & inLexicalErrorMessage
                              COMMA_LOCATION_ARGS) {
  signalLexicalError (this, sourceText (), C_IssueWithFixIt (mCurrentLocation, mCurrentLocation, TC_Array <C_FixItDescription> ()), inLexicalErrorMessage COMMA_THERE) ;
  if (executionModeIsLatex ()) {
    signalLexicalErrorInLatexOutput () ;
  }
  throw C_lexicalErrorException () ;
}

//--------------------------------------------------------------------------------------------------
//
//                Signaler une erreur syntaxique
//
//--------------------------------------------------------------------------------------------------

void C_Lexique::parsingError (const TC_UniqueArray <int32_t> & inExpectedTerminalsArray,
                              const cToken * inPreviousTokenPtr,
                              const cToken * inCurrentTokenPtr,
                              const int32_t inCurrentTokenCode
                              COMMA_LOCATION_ARGS) {
//--- Build error message
  String foundTokenMessage = getMessageForTerminal (inCurrentTokenCode) ;
  const int32_t expectedTerminalsCount = inExpectedTerminalsArray.count () ;
  TC_UniqueArray <String> expectedTokenNames (expectedTerminalsCount, String () COMMA_HERE) ;
  for (int32_t i=0 ; i<expectedTerminalsCount ; i++) {
    expectedTokenNames (i COMMA_HERE) = getMessageForTerminal (inExpectedTerminalsArray (i COMMA_HERE)) ;
  }
//--- Sort expected token name array
  expectedTokenNames.sortArrayUsingCompareMethod () ;
//--- Signal error
  signalParsingError (this,
                      sourceText (),
                      (inPreviousTokenPtr == nullptr) ? LocationInSource () : inPreviousTokenPtr->mEndLocation,
                      C_IssueWithFixIt (inCurrentTokenPtr->mStartLocation, inCurrentTokenPtr->mEndLocation, TC_Array <C_FixItDescription> ()),
                      foundTokenMessage,
                      expectedTokenNames COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Scanner warning
#endif

//--------------------------------------------------------------------------------------------------

void C_Lexique::lexicalWarning (const String & inLexicalWarningMessage
                                COMMA_LOCATION_ARGS) { // §
  signalLexicalWarning (this, sourceText (), C_IssueWithFixIt (mCurrentLocation, mCurrentLocation, TC_Array <C_FixItDescription> ()), inLexicalWarningMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Second pass methods
#endif

//--------------------------------------------------------------------------------------------------
//
//                         Get next production index
//
//--------------------------------------------------------------------------------------------------

int32_t C_Lexique::nextProductionIndex (void) {
  int32_t result = 0 ;
  if (mIndexForSecondPassParsing < mArrayForSecondPassParsing.count ()) {
    result = mArrayForSecondPassParsing (mIndexForSecondPassParsing COMMA_HERE) ;
    mIndexForSecondPassParsing += 1 ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String C_Lexique::separatorString (void) const {
  String result ;
  if (mCurrentTokenPtr != nullptr) {
    result = mCurrentTokenPtr->mSeparatorStringBeforeToken ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

String C_Lexique::tokenString (void) const {
  String result ;
  if (mCurrentTokenPtr != nullptr) {
    const int32_t tokenStart = mCurrentTokenPtr->mStartLocation.index () ;
    const int32_t tokenLength = mCurrentTokenPtr->mEndLocation.index () - tokenStart + 1 ;
    result = sourceText ().sourceString ().subString (tokenStart, tokenLength) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//   Accept current token by shifting it
//
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define IN_EXPECTED_TERMINAL inExpectedTerminal
#else
  #define IN_EXPECTED_TERMINAL
#endif

//--------------------------------------------------------------------------------------------------

void C_Lexique::acceptTerminal (const int32_t IN_EXPECTED_TERMINAL COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    int32_t currentTokenCode = 0 ;
  #endif
  if (mCurrentTokenPtr != nullptr) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      currentTokenCode = mCurrentTokenPtr->mTokenCode ;
    #endif
    mStartLocationForHere = mCurrentTokenPtr->mStartLocation ;
    mEndLocationForHere = mCurrentTokenPtr->mEndLocation ;
    mCurrentTokenPtr = mCurrentTokenPtr->mNextToken ;
    if (mCurrentTokenPtr != nullptr) {
      macroValidPointer (mCurrentTokenPtr) ;
      mStartLocationForNext = mCurrentTokenPtr->mStartLocation ;
      mEndLocationForNext = mCurrentTokenPtr->mEndLocation ;
      mTemplateString.addString (mCurrentTokenPtr->mTemplateStringBeforeToken) ;
      mTemplateStringLocation = mCurrentTokenPtr->mStartLocation ;
      mCurrentLocation = mCurrentTokenPtr->mEndLocation ;
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (currentTokenCode != inExpectedTerminal) {
      const String currentTokenString = getMessageForTerminal (currentTokenCode) ;
      const String expectedTokenString = getMessageForTerminal (inExpectedTerminal) ;
      macroAssertThere (false,
                      "Internal second pass parsing error (current token:%s, expected token:%s)",
                      (intptr_t) currentTokenString.cString (HERE),
                      (intptr_t) expectedTokenString.cString (HERE)) ;
    }
  #endif
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::enterIndexing (const uint32_t inIndexingKind,
                               const char * inIndexedKeyPosfix) {
  if ((nullptr != mIndexingDictionary) && (sourceText ().sourceFilePath ().length () > 0)) {
    const uint32_t tokenStartLocation = (uint32_t) mCurrentTokenPtr->mStartLocation.index () ;
    const uint32_t tokenLine = (uint32_t) mCurrentTokenPtr->mStartLocation.lineNumber () ;
    const uint32_t tokenLength  = ((uint32_t) mCurrentTokenPtr->mEndLocation.index ()) - tokenStartLocation + 1 ;
    String indexedKey = sourceText ().sourceString ().subString ((int32_t) tokenStartLocation, (int32_t) tokenLength) + inIndexedKeyPosfix ;
    mIndexingDictionary->addIndexedKey (inIndexingKind,
                                        indexedKey,
                                        sourceText ().sourceFilePath (),
                                        tokenLine,
                                        tokenStartLocation,
                                        tokenLength) ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::enableIndexing (void) {
  macroMyNew (mIndexingDictionary, cIndexingDictionary) ;
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::generateIndexFile (void) {
  if (nullptr != mIndexingDictionary) {
    mIndexingDictionary->generateIndexFile (indexingModeOutputFilePath ()) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Handling Parsing context
#endif

//--------------------------------------------------------------------------------------------------

C_parsingContext C_Lexique::parsingContext (void) const {
  C_parsingContext context ;
  context.mParsingArrayIndex = mIndexForSecondPassParsing ;
  context.mLocation = mCurrentLocation ;
  context.mCurrentChar = mCurrentChar ;
  context.mPreviousChar = mPreviousChar ;
  context.mCurrentTokenPtr = mCurrentTokenPtr ;
  context.mTemplateString = mTemplateString ;
  return context ;
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::setParsingContext (const C_parsingContext & inContext) {
  mIndexForSecondPassParsing = inContext.mParsingArrayIndex ;
  mCurrentTokenPtr = inContext.mCurrentTokenPtr ;
  mCurrentLocation = inContext.mLocation ;
  mCurrentChar = inContext.mCurrentChar ;
  mPreviousChar = inContext.mPreviousChar ;
  mTemplateString = inContext.mTemplateString ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark For Debugging parser
#endif

//--------------------------------------------------------------------------------------------------
//
//  For Debugging parser
//
//--------------------------------------------------------------------------------------------------

void C_Lexique::enterProduction (const char * inProductionName,
                                 const char * inLabel,
                                 const char * inTag) {
//--- If Debug is not running, check if trigger list contains non terminal
  if (! mDebugIsRunning) {
    TC_UniqueArray <String> stringArray ;
    mTriggerNonTerminalSymbolList.componentsSeparatedByString (inProductionName, stringArray) ;
    mDebugIsRunning = stringArray.count () > 1 ;
  }
  if (mDebugIsRunning) {
    String message ;
    for (uint16_t i=1 ; i<mDebugDepthCounter ; i++) {
      message.addString ("|  ") ;
    }
    message.addString ((mDebugDepthCounter > 0) ? "|- " : "") ;
    message.addString (inProductionName) ;
    if (inLabel != nullptr) {
      message.addString (" label '") ;
      message.addString (inLabel) ;
      message.addString ("'") ;
    }
    if ((inTag != nullptr) && (inTag [0] != '\0')) {
      message.addString (" tag '") ;
      message.addString (inTag) ;
      message.addString ("'") ;
    }
    message.addString ("\n") ;
    ggs_printMessage (message COMMA_HERE) ;
    mDebugDepthCounter ++ ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::exitProduction (void) {
  if (mDebugIsRunning) {
    mDebugDepthCounter -- ;
    mDebugIsRunning = mDebugDepthCounter > 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::didParseTerminal (const char * inTerminalName,
                                  const String & inValue) {
  if (mDebugIsRunning) {
    String message ;
    for (uint16_t i=1 ; i<mDebugDepthCounter ; i++) {
      message.addString ("|  ") ;
    }
    message.addString ((mDebugDepthCounter > 0) ? "|- " : "") ;
    message.addString (inTerminalName) ;
    if (inValue.length () > 0) {
      message.addString (inValue) ;
    }
    message.addString ("\n") ;
    ggs_printMessage (message COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Generate Latex file
#endif

//--------------------------------------------------------------------------------------------------

void C_Lexique::enterDroppedTerminal (const int32_t inTerminalIndex) {
  if (executionModeIsLatex ()) {
    while (mLatexNextCharacterToEnterIndex < mTokenStartLocation.index ()) {
      const utf32 c = sourceText ().readCharOrNul (mLatexNextCharacterToEnterIndex COMMA_HERE) ;
      appendCharacterToLatexFile (c) ;
      mLatexNextCharacterToEnterIndex += 1 ;
    }
    const String styleName = styleNameForIndex (styleIndexForTerminal (inTerminalIndex)) ;
    if (styleName.length () > 0) {
      mLatexOutputString.addString ("\\") ;
      mLatexOutputString.addString (styleName) ;
      mLatexOutputString.addString (latexModeStyleSuffixString ()) ;
      mLatexOutputString.addString ("{") ;
    }
    for (int32_t i=mTokenStartLocation.index () ; i<=mTokenEndLocation.index () ; i++) {
      const utf32 c = sourceText ().readCharOrNul (i COMMA_HERE) ;
      if (UNICODE_VALUE (c) != '\0') {
        appendCharacterToLatexFile (c) ;
      }
    }
    if (styleName.length () > 0) {
      mLatexOutputString.addString ("}") ;
    }
  //---
    mLatexNextCharacterToEnterIndex = mTokenEndLocation.index () + 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::appendCharacterToLatexFile (const utf32 inUnicodeCharacter) {
  switch (UNICODE_VALUE (inUnicodeCharacter)) {
  case '>' : mLatexOutputString.addString ("\\textgreater{}") ; break ;
  case '<' : mLatexOutputString.addString ("\\textless{}") ; break ;
  case '~' : mLatexOutputString.addString ("$\\sim$") ; break ;
  case '^' : mLatexOutputString.addString ("$\\wedge$") ; break ;
  case '|' : mLatexOutputString.addString ("\\textbar{}") ; break ;
  case '&' : mLatexOutputString.addString ("\\&") ; break ;
  case '%' : mLatexOutputString.addString ("\\%") ; break ;
  case '#' : mLatexOutputString.addString ("\\#") ; break ;
  case '$' : mLatexOutputString.addString ("\\$") ; break ;
  case ' ' : mLatexOutputString.addString ("\\hspace*{.6em}") ; break ;
  case '\n' : mLatexOutputString.addString ("\\newline\n") ; break ;
  case '{' : mLatexOutputString.addString ("\\{") ; break ;
  case '}' : mLatexOutputString.addString ("\\}") ; break ;
  case '_' : mLatexOutputString.addString ("\\_") ; break ;
  case '\\' : mLatexOutputString.addString ("\\textbackslash{}")  ; break ;
  case '\'' : mLatexOutputString.addString ("\\textquotesingle{}") ; break ;
  case '"' : mLatexOutputString.addString ("\"") ; break ;
  default:
    mLatexOutputString.addUnicodeChar (inUnicodeCharacter COMMA_HERE) ;
    mLatexOutputString.addString ("{}") ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::signalLexicalErrorInLatexOutput (void) {
  mLatexOutputString.addString ("\\lexicalError") ;
  mLatexOutputString.addString (latexModeStyleSuffixString ()) ;
}

//--------------------------------------------------------------------------------------------------

void C_Lexique::generateLatexFile (void) {
  const String latexFilePath = sourceText ().sourceFilePath () + ".tex" ;
//--- Suppress last '\newline'
  const String newLine = "\\newline\n" ;
  if (mLatexOutputString.endsWithString (newLine)) {
    mLatexOutputString = mLatexOutputString.subString (0, mLatexOutputString.length () - newLine.length ()) ;
  }
  FileManager::writeStringToFile (mLatexOutputString, latexFilePath) ;
}

//--------------------------------------------------------------------------------------------------
