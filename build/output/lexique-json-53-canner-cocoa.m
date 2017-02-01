//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-json-53-canner-cocoa.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------------------------------------------------*
//            Unicode test functions                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*
 
//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Lexique_jsonScanner

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Replacements                                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Delimiters                                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_bigintValue = [[NSMutableString alloc] init] ;
    mLexicalAttribute_charValue = 0 ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) indexingDirectory {
  return @"" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    T I T L E S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Terminal Symbols as end of script in template mark                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               P A R S E    L E X I C A L    T O K E N                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (void) parseLexicalTokenForLexicalColoring {
  mLoop = YES ;
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
    [mLexicalAttribute_bigintValue setString:@""] ;
    mLexicalAttribute_charValue = 0 ;
    [mLexicalAttribute_tokenString setString:@""] ;
    mLexicalAttribute_uint32value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    if (scanningOk && [self testForInputString:@"}" advance:YES]) {
      mTokenCode = jsonScanner_1__7D_ ;
    }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
      mTokenCode = jsonScanner_1__7B_ ;
    }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
      mTokenCode = jsonScanner_1__5D_ ;
    }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
      mTokenCode = jsonScanner_1__5B_ ;
    }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
      mTokenCode = jsonScanner_1__3A_ ;
    }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
      mTokenCode = jsonScanner_1__2C_ ;
    }else if (scanningOk && [self testForInputString:@"false" advance:YES]) {
      mTokenCode = jsonScanner_1_false ;
    }else if (scanningOk && [self testForInputString:@"true" advance:YES]) {
      mTokenCode = jsonScanner_1_true ;
    }else if (scanningOk && [self testForInputString:@"null" advance:YES]) {
      mTokenCode = jsonScanner_1_null ;
    }else if (scanningOk && ([self testForInputChar:34])) {
      do {
        if (scanningOk && ([self testForInputChar:92])) {
          if (scanningOk && ([self testForInputChar:98])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 8) ;
          }else if (scanningOk && ([self testForInputChar:102])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 12) ;
          }else if (scanningOk && ([self testForInputChar:110])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 10) ;
          }else if (scanningOk && ([self testForInputChar:114])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 13) ;
          }else if (scanningOk && ([self testForInputChar:116])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 9) ;
          }else if (scanningOk && ([self testForInputChar:92])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
          }else if (scanningOk && ([self testForInputChar:47])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 47) ;
          }else if (scanningOk && ([self testForInputChar:34])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 34) ;
          }else if (scanningOk && ([self testForInputChar:117])) {
            if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
              if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                  if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                    scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (& scanningOk, & mLexicalAttribute_uint32value, & mLexicalAttribute_charValue) ;
                    scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_charValue) ;
                  }else{
                    scanningOk = NO ;
                  }
                }else{
                  scanningOk = NO ;
                }
              }else{
                scanningOk = NO ;
              }
            }else{
              scanningOk = NO ;
            }
          }else{
            scanningOk = NO ;
          }
        }else if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:91] || [self testForInputFromChar:93 toChar:1114111])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:34])) {
        mTokenCode = jsonScanner_1__22_string_22_ ;
      }else{
        scanningOk = NO ;
      }
    }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = jsonScanner_1_integer ;
    }else if (scanningOk && ([self testForInputChar:45])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      scanner_cocoa_routine_negateBigInt (& scanningOk, mLexicalAttribute_bigintValue) ;
      mTokenCode = jsonScanner_1_integer ;
    }else if (scanningOk && ([self testForInputChar:9] || [self testForInputChar:10] || [self testForInputChar:13] || [self testForInputChar:32])) {
    }else if ([self testForInputChar:'\0']) { // End of source text ? 
      mTokenCode = jsonScanner_1_ ; // Empty string code
    }else{ // Unknown input character
      scanningOk = NO ;
      [self advance] ;
    }
  //--- Error ?
    if (! scanningOk) {
      mTokenCode = -1 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   T E R M I N A L    C O U N T                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) terminalVocabularyCount {
  return 11 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S T Y L E   C O U N T                                                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleCount {
  return 5 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                I S    T E M P L A T E    L E X I Q U E                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) isTemplateLexique {
  return NO ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [12] = {0,
    3 /* jsonScanner_1__22_string_22_ */,
    4 /* jsonScanner_1_integer */,
    2 /* jsonScanner_1__5B_ */,
    2 /* jsonScanner_1__5D_ */,
    2 /* jsonScanner_1__7B_ */,
    2 /* jsonScanner_1__7D_ */,
    2 /* jsonScanner_1__3A_ */,
    2 /* jsonScanner_1__2C_ */,
    1 /* jsonScanner_1_false */,
    1 /* jsonScanner_1_null */,
    1 /* jsonScanner_1_true */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [12] = {NO,
    NO /* jsonScanner_1__22_string_22_ */,
    YES /* jsonScanner_1_integer */,
    YES /* jsonScanner_1__5B_ */,
    YES /* jsonScanner_1__5D_ */,
    YES /* jsonScanner_1__7B_ */,
    YES /* jsonScanner_1__7D_ */,
    YES /* jsonScanner_1__3A_ */,
    YES /* jsonScanner_1__2C_ */,
    YES /* jsonScanner_1_false */,
    YES /* jsonScanner_1_null */,
    YES /* jsonScanner_1_true */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             S T Y L E   N A M E    F O R    I N D E X                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 5)) {
    NSString * kStyleArray [5] = {
      @"Default Style",
      @"Keywords",
      @"Delimiters",
      @"String",
      @"Integer"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 5)) {
    NSString * kStyleArray [5] = {
      @"jsonScanner",
      @"jsonScanner-keywordsStyle",
      @"jsonScanner-delimitersStyle",
      @"jsonScanner-stringStyle",
      @"jsonScanner-integerStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         L E X I Q U E   I D E N T I F I E R                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) lexiqueIdentifier {
  return @"jsonScanner" ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


