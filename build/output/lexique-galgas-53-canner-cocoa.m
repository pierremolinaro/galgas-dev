//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-galgas-53-canner-cocoa.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Lexique_galgasScanner

//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_bigintValue = [[NSMutableString alloc] init] ;
    mLexicalAttribute_charValue = 0 ;
    mLexicalAttribute_floatValue = 0.0 ;
    mLexicalAttribute_identifierString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_sint32value = 0 ;
    mLexicalAttribute_sint64value = 0 ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
    mLexicalAttribute_uint64value = 0 ;
  }
  return self ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    D I R E C T O R Y
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) indexingDirectory {
  return @"../build/indexes" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    T I T L E S
//
//----------------------------------------------------------------------------------------------------------------------

- (NSArray *) indexingTitles { // Array of NSString
  return [NSArray arrayWithObjects:
    @"Class Definition",
    @"Enum Definition",
    @"Struct Definition",
    @"List Definition",
    @"Sorted List Definition",
    @"Listmap Definition",
    @"Map Definition",
    @"Extern Type Definition",
    @"Shared Map Entry Definition",
    @"Array Definition",
    @"Reference as array element",
    @"Filewrapper Definition",
    @"Filewrapper Reference",
    @"Graph Definition",
    @"Class Reference as Superclass",
    @"Type reference in Constructor",
    @"Type reference in Type Method",
    @"Routine Definition",
    @"Routine Call",
    @"Function Definition",
    @"Function Call",
    @"Terminal Declaration",
    @"Terminal Reference",
    @"Rule Definition",
    @"Rule Reference",
    @"Abstract Extension Setter Definition",
    @"Abstract Extension Setter Definition",
    @"Override Abstract Extension Setter Definition",
    @"Extension Setter Definition",
    @"Extension Setter Definition",
    @"Override Extension Setter Definition",
    @"Override Extension Setter Definition",
    @"Override Abstract Extension Setter Definition",
    @"Abstract Extension Method Definition",
    @"Abstract Extension Method Definition",
    @"Override Abstract Extension Method Definition",
    @"Extension Method Definition",
    @"Extension Method Definition",
    @"Override Extension Method Definition",
    @"Override Extension Method Definition",
    @"Override Abstract Extension Method Definition",
    @"Abstract Extension Getter Definition",
    @"Abstract Extension Getter Definition",
    @"Override Abstract Extension Getter Definition",
    @"Override Abstract Extension Getter Definition",
    @"Extension Getter Definition",
    @"Extension Getter Definition",
    @"Override Extension Getter Definition",
    @"Override Extension Getter Definition",
    @"Option Component Definition",
    @"Option Component Reference",
    @"Grammar Component Definition",
    @"Grammar Component Reference",
    @"Indexing Name Definition",
    @"Indexing Name Reference",
    NULL
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'galgasKeyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_galgasScanner_galgasKeyWordList [87] = {
  {"as", galgasScanner_1_as},
  {"do", galgasScanner_1_do},
  {"if", galgasScanner_1_if},
  {"in", galgasScanner_1_in},
  {"is", galgasScanner_1_is},
  {"on", galgasScanner_1_on},
  {"or", galgasScanner_1_or},
  {"end", galgasScanner_1_end},
  {"for", galgasScanner_1_for},
  {"gui", galgasScanner_1_gui},
  {"let", galgasScanner_1_let},
  {"log", galgasScanner_1_log},
  {"map", galgasScanner_1_map},
  {"mod", galgasScanner_1_mod},
  {"not", galgasScanner_1_not},
  {"tag", galgasScanner_1_tag},
  {"var", galgasScanner_1_var},
  {"bang", galgasScanner_1_bang},
  {"case", galgasScanner_1_case},
  {"cast", galgasScanner_1_cast},
  {"dict", galgasScanner_1_dict},
  {"drop", galgasScanner_1_drop},
  {"else", galgasScanner_1_else},
  {"enum", galgasScanner_1_enum},
  {"func", galgasScanner_1_func},
  {"list", galgasScanner_1_list},
  {"loop", galgasScanner_1_loop},
  {"proc", galgasScanner_1_proc},
  {"rule", galgasScanner_1_rule},
  {"self", galgasScanner_1_self},
  {"send", galgasScanner_1_send},
  {"then", galgasScanner_1_then},
  {"true", galgasScanner_1_true},
  {"with", galgasScanner_1_with},
  {"after", galgasScanner_1_after},
  {"array", galgasScanner_1_array},
  {"block", galgasScanner_1_block},
  {"class", galgasScanner_1_class},
  {"elsif", galgasScanner_1_elsif},
  {"error", galgasScanner_1_error},
  {"false", galgasScanner_1_false},
  {"fixit", galgasScanner_1_fixit},
  {"graph", galgasScanner_1_graph},
  {"label", galgasScanner_1_label},
  {"parse", galgasScanner_1_parse},
  {"style", galgasScanner_1_style},
  {"while", galgasScanner_1_while},
  {"before", galgasScanner_1_before},
  {"extern", galgasScanner_1_extern},
  {"getter", galgasScanner_1_getter},
  {"insert", galgasScanner_1_insert},
  {"method", galgasScanner_1_method},
  {"option", galgasScanner_1_option},
  {"public", galgasScanner_1_public},
  {"remove", galgasScanner_1_remove},
  {"repeat", galgasScanner_1_repeat},
  {"rewind", galgasScanner_1_rewind},
  {"search", galgasScanner_1_search},
  {"select", galgasScanner_1_select},
  {"setter", galgasScanner_1_setter},
  {"struct", galgasScanner_1_struct},
  {"switch", galgasScanner_1_switch},
  {"syntax", galgasScanner_1_syntax},
  {"unused", galgasScanner_1_unused},
  {"between", galgasScanner_1_between},
  {"boolset", galgasScanner_1_boolset},
  {"default", galgasScanner_1_default},
  {"grammar", galgasScanner_1_grammar},
  {"lexique", galgasScanner_1_lexique},
  {"listmap", galgasScanner_1_listmap},
  {"message", galgasScanner_1_message},
  {"private", galgasScanner_1_private},
  {"project", galgasScanner_1_project},
  {"replace", galgasScanner_1_replace},
  {"warning", galgasScanner_1_warning},
  {"abstract", galgasScanner_1_abstract},
  {"indexing", galgasScanner_1_indexing},
  {"mutating", galgasScanner_1_mutating},
  {"operator", galgasScanner_1_operator},
  {"override", galgasScanner_1_override},
  {"refclass", galgasScanner_1_refclass},
  {"template", galgasScanner_1_template},
  {"extension", galgasScanner_1_extension},
  {"sortedlist", galgasScanner_1_sortedlist},
  {"valueclass", galgasScanner_1_valueclass},
  {"constructor", galgasScanner_1_constructor},
  {"filewrapper", galgasScanner_1_filewrapper}
} ;

static NSInteger search_into_galgasScanner_galgasKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_galgasScanner_galgasKeyWordList, 87) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) internalParseLexicalTokenForLexicalColoring {
  BOOL loop = YES ;
  BOOL scanningOk = YES ;
  [mLexicalAttribute_bigintValue setString:@""] ;
  mLexicalAttribute_charValue = 0 ;
  mLexicalAttribute_floatValue = 0.0 ;
  [mLexicalAttribute_identifierString setString:@""] ;
  mLexicalAttribute_sint32value = 0 ;
  mLexicalAttribute_sint64value = 0 ;
  [mLexicalAttribute_tokenString setString:@""] ;
  mLexicalAttribute_uint32value = 0 ;
  mLexicalAttribute_uint64value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (mPreviousChar)) ;
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_galgasScanner_galgasKeyWordList (mLexicalAttribute_identifierString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = galgasScanner_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputString:@"0x" advance:YES])) {
    do {
      if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      scanner_cocoa_routine_convertHexStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasScanner_1_literalInt ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputChar:46])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
      mTokenCode = galgasScanner_1_double_2E_xxx ;
    }else{
      scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasScanner_1_literalInt ;
    }
  }else if (scanningOk && ([self testForInputChar:46])) {
    if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 48) ;
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
      mTokenCode = galgasScanner_1_double_2E_xxx ;
    }else{
      if (scanningOk && ([self testForInputString:@".." advance:YES])) {
        mTokenCode = galgasScanner_1__2E__2E__2E_ ;
      }else if (scanningOk && ([self testForInputString:@".<" advance:YES])) {
        mTokenCode = galgasScanner_1__2E__2E__3C_ ;
      }else{
        mTokenCode = galgasScanner_1__2E_ ;
      }
    }
  }else if (scanningOk && ([self testForInputChar:64])) {
    if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      if (scanningOk && ([self testForInputChar:45])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          }else{
            loop = NO ;
          }
        }while (loop && scanningOk) ;
        loop = YES ;
      }
    }else{
      scanningOk = NO ;
    }
    mTokenCode = galgasScanner_1__40_type ;
  }else if (scanningOk && ([self testForInputChar:37])) {
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:45] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
    }else{
      scanningOk = NO ;
    }
    mTokenCode = galgasScanner_1__25_attribute ;
  }else if (scanningOk && ([self testForInputChar:39])) {
    if (scanningOk && ([self testForInputChar:92])) {
      if (scanningOk && ([self testForInputChar:102])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 12) ;
      }else if (scanningOk && ([self testForInputChar:110])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 10) ;
      }else if (scanningOk && ([self testForInputChar:114])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 13) ;
      }else if (scanningOk && ([self testForInputChar:116])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 9) ;
      }else if (scanningOk && ([self testForInputChar:118])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 11) ;
      }else if (scanningOk && ([self testForInputChar:92])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 92) ;
      }else if (scanningOk && ([self testForInputChar:48])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 0) ;
      }else if (scanningOk && ([self testForInputChar:39])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 39) ;
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
      }else if (scanningOk && ([self testForInputChar:85])) {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
          scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
          if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
            scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
            if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
              if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                  if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                    if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                      scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                      if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                        scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                        scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (& scanningOk, & mLexicalAttribute_uint32value, & mLexicalAttribute_charValue) ;
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
    }else if (scanningOk && ([self testForInputFromChar:32 toChar:65533])) {
      scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
    }else{
      scanningOk = NO ;
    }
    if (scanningOk && ([self testForInputChar:39])) {
      mTokenCode = galgasScanner_1__27_char_27_ ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputChar:36])) {
    if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
    }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
    }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
    }else{
      scanningOk = NO ;
    }
    if (scanningOk && ([self testForInputChar:36])) {
    }else{
      scanningOk = NO ;
    }
    mTokenCode = galgasScanner_1__24_terminal_24_ ;
  }else if (scanningOk && [self testForInputString:@"===" advance:YES]) {
    mTokenCode = galgasScanner_1__3D__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&--" advance:YES]) {
    mTokenCode = galgasScanner_1__26__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&++" advance:YES]) {
    mTokenCode = galgasScanner_1__26__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"!==" advance:YES]) {
    mTokenCode = galgasScanner_1__21__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"||" advance:YES]) {
    mTokenCode = galgasScanner_1__7C__7C_ ;
  }else if (scanningOk && [self testForInputString:@"\?^" advance:YES]) {
    mTokenCode = galgasScanner_1__3F__5E_ ;
  }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
    mTokenCode = galgasScanner_1__3E__3E_ ;
  }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
    mTokenCode = galgasScanner_1__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
    mTokenCode = galgasScanner_1__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@":>" advance:YES]) {
    mTokenCode = galgasScanner_1__3A__3E_ ;
  }else if (scanningOk && [self testForInputString:@"/=" advance:YES]) {
    mTokenCode = galgasScanner_1__2F__3D_ ;
  }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
    mTokenCode = galgasScanner_1__2D__3E_ ;
  }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
    mTokenCode = galgasScanner_1__2D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"--" advance:YES]) {
    mTokenCode = galgasScanner_1__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
    mTokenCode = galgasScanner_1__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"++" advance:YES]) {
    mTokenCode = galgasScanner_1__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*=" advance:YES]) {
    mTokenCode = galgasScanner_1__2A__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&/" advance:YES]) {
    mTokenCode = galgasScanner_1__26__2F_ ;
  }else if (scanningOk && [self testForInputString:@"&-" advance:YES]) {
    mTokenCode = galgasScanner_1__26__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&+" advance:YES]) {
    mTokenCode = galgasScanner_1__26__2B_ ;
  }else if (scanningOk && [self testForInputString:@"&*" advance:YES]) {
    mTokenCode = galgasScanner_1__26__2A_ ;
  }else if (scanningOk && [self testForInputString:@"&&" advance:YES]) {
    mTokenCode = galgasScanner_1__26__26_ ;
  }else if (scanningOk && [self testForInputString:@"!^" advance:YES]) {
    mTokenCode = galgasScanner_1__21__5E_ ;
  }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
    mTokenCode = galgasScanner_1__21__3D_ ;
  }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
    mTokenCode = galgasScanner_1__7E_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = galgasScanner_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = galgasScanner_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = galgasScanner_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"`" advance:YES]) {
    mTokenCode = galgasScanner_1__60_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = galgasScanner_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = galgasScanner_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = galgasScanner_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = galgasScanner_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = galgasScanner_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = galgasScanner_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = galgasScanner_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
    mTokenCode = galgasScanner_1__2F_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = galgasScanner_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = galgasScanner_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
    mTokenCode = galgasScanner_1__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
    mTokenCode = galgasScanner_1__2A_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = galgasScanner_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = galgasScanner_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = galgasScanner_1__26_ ;
  }else if (scanningOk && ([self testForInputChar:63])) {
    scanningPointStructForCocoa locationForTag_onlyInterrogationMark ;
    [self saveScanningPoint: & locationForTag_onlyInterrogationMark] ;
    if (scanningOk && ([self testForInputChar:33])) {
      scanningPointStructForCocoa locationForTag_onlyExclamationInterrogationMark ;
      [self saveScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
          }else{
            loop = NO ;
          }
        }while (loop && scanningOk) ;
        loop = YES ;
        if (scanningOk && ([self testForInputChar:58])) {
          mTokenCode = galgasScanner_1__3F__21_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
          mTokenCode = galgasScanner_1__3F__21_ ;
        }
      }else{
        mTokenCode = galgasScanner_1__3F__21_ ;
      }
    }else if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner_1__3F_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyInterrogationMark] ;
        mTokenCode = galgasScanner_1__3F_ ;
      }
    }else{
      mTokenCode = galgasScanner_1__3F_ ;
    }
  }else if (scanningOk && ([self testForInputChar:33])) {
    scanningPointStructForCocoa locationForTag_onlyExclamationMark ;
    [self saveScanningPoint: & locationForTag_onlyExclamationMark] ;
    if (scanningOk && ([self testForInputChar:63])) {
      scanningPointStructForCocoa locationForTag_onlyInterrogationExclamationMark ;
      [self saveScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
          }else{
            loop = NO ;
          }
        }while (loop && scanningOk) ;
        loop = YES ;
        if (scanningOk && ([self testForInputChar:58])) {
          mTokenCode = galgasScanner_1__21__3F_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
          mTokenCode = galgasScanner_1__21__3F_ ;
        }
      }else{
        mTokenCode = galgasScanner_1__21__3F_ ;
      }
    }else if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner_1__21_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyExclamationMark] ;
        mTokenCode = galgasScanner_1__21_ ;
      }
    }else{
      mTokenCode = galgasScanner_1__21_ ;
    }
  }else if (scanningOk && ([self testForInputChar:60])) {
    scanningPointStructForCocoa locationForTag_onlyInfDelimiter ;
    [self saveScanningPoint: & locationForTag_onlyInfDelimiter] ;
    if (scanningOk && ([self testForInputChar:61])) {
      mTokenCode = galgasScanner_1__3C__3D_ ;
    }else if (scanningOk && ([self testForInputChar:60])) {
      mTokenCode = galgasScanner_1__3C__3C_ ;
    }else if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      if (scanningOk && ([self testForInputChar:62])) {
        mTokenCode = galgasScanner_1__3C_non_5F_terminal_3E_ ;
      }else{
        [self restoreScanningPoint: & locationForTag_onlyInfDelimiter] ;
        mTokenCode = galgasScanner_1__3C_ ;
      }
    }else{
      mTokenCode = galgasScanner_1__3C_ ;
    }
  }else if (scanningOk && ([self testForInputChar:34])) {
    do {
      if (scanningOk && ([self testForInputChar:92])) {
        if (scanningOk && ([self testForInputChar:102])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 12) ;
        }else if (scanningOk && ([self testForInputChar:110])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 10) ;
        }else if (scanningOk && ([self testForInputChar:114])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 13) ;
        }else if (scanningOk && ([self testForInputChar:116])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 9) ;
        }else if (scanningOk && ([self testForInputChar:118])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 11) ;
        }else if (scanningOk && ([self testForInputChar:92])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputChar:34])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 34) ;
        }else if (scanningOk && ([self testForInputChar:39])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 39) ;
        }else if (scanningOk && ([self testForInputChar:63])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 63) ;
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
        }else if (scanningOk && ([self testForInputChar:85])) {
          if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
            scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
            if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
              if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
                if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
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
      }else if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:65533])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = galgasScanner_1__22_string_22_ ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputChar:35])) {
    if (scanningOk && ([self testForInputChar:33])) {
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      mTokenCode = galgasScanner_1_commentMark ;
    }else{
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:1114111])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      mTokenCode = galgasScanner_1_comment ;
    }
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = galgasScanner_1_ ; // Empty string code
  }else{ // Unknown input character
    scanningOk = NO ;
    [self advance] ;
  }
  return scanningOk ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
  }
//--- Error ?
  if (! scanningOk) {
    mTokenCode = -1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//                   T E R M I N A L    C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) terminalVocabularyCount {
  return 152 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                     S T Y L E   C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleCount {
  return 14 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) isTemplateLexique {
  return NO ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S T Y L E   I N D E X    F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [153] = {0,
    0 /* galgasScanner_1_identifier */,
    8 /* galgasScanner_1_double_2E_xxx */,
    7 /* galgasScanner_1_literalInt */,
    2 /* galgasScanner_1__2E_ */,
    2 /* galgasScanner_1__2E__2E__2E_ */,
    2 /* galgasScanner_1__2E__2E__3C_ */,
    11 /* galgasScanner_1__40_type */,
    12 /* galgasScanner_1__25_attribute */,
    9 /* galgasScanner_1__27_char_27_ */,
    4 /* galgasScanner_1__24_terminal_24_ */,
    3 /* galgasScanner_1__3F_ */,
    3 /* galgasScanner_1__3F__21_ */,
    3 /* galgasScanner_1__21_ */,
    3 /* galgasScanner_1__21__3F_ */,
    2 /* galgasScanner_1__3C_ */,
    2 /* galgasScanner_1__3C__3D_ */,
    2 /* galgasScanner_1__3C__3C_ */,
    5 /* galgasScanner_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasScanner_1__22_string_22_ */,
    13 /* galgasScanner_1_comment */,
    13 /* galgasScanner_1_commentMark */,
    1 /* galgasScanner_1_abstract */,
    1 /* galgasScanner_1_after */,
    1 /* galgasScanner_1_array */,
    1 /* galgasScanner_1_as */,
    1 /* galgasScanner_1_bang */,
    1 /* galgasScanner_1_before */,
    1 /* galgasScanner_1_between */,
    1 /* galgasScanner_1_block */,
    1 /* galgasScanner_1_boolset */,
    1 /* galgasScanner_1_cast */,
    1 /* galgasScanner_1_case */,
    1 /* galgasScanner_1_class */,
    1 /* galgasScanner_1_constructor */,
    1 /* galgasScanner_1_default */,
    1 /* galgasScanner_1_dict */,
    1 /* galgasScanner_1_do */,
    1 /* galgasScanner_1_drop */,
    1 /* galgasScanner_1_else */,
    1 /* galgasScanner_1_elsif */,
    1 /* galgasScanner_1_end */,
    1 /* galgasScanner_1_enum */,
    1 /* galgasScanner_1_error */,
    1 /* galgasScanner_1_extension */,
    1 /* galgasScanner_1_extern */,
    1 /* galgasScanner_1_false */,
    1 /* galgasScanner_1_filewrapper */,
    1 /* galgasScanner_1_for */,
    1 /* galgasScanner_1_fixit */,
    1 /* galgasScanner_1_func */,
    1 /* galgasScanner_1_getter */,
    1 /* galgasScanner_1_grammar */,
    1 /* galgasScanner_1_graph */,
    1 /* galgasScanner_1_gui */,
    1 /* galgasScanner_1_if */,
    1 /* galgasScanner_1_in */,
    1 /* galgasScanner_1_indexing */,
    1 /* galgasScanner_1_insert */,
    1 /* galgasScanner_1_is */,
    1 /* galgasScanner_1_label */,
    1 /* galgasScanner_1_let */,
    1 /* galgasScanner_1_lexique */,
    1 /* galgasScanner_1_list */,
    1 /* galgasScanner_1_listmap */,
    1 /* galgasScanner_1_log */,
    1 /* galgasScanner_1_loop */,
    1 /* galgasScanner_1_map */,
    1 /* galgasScanner_1_message */,
    1 /* galgasScanner_1_method */,
    1 /* galgasScanner_1_mod */,
    1 /* galgasScanner_1_mutating */,
    1 /* galgasScanner_1_not */,
    1 /* galgasScanner_1_on */,
    1 /* galgasScanner_1_operator */,
    1 /* galgasScanner_1_option */,
    1 /* galgasScanner_1_or */,
    1 /* galgasScanner_1_override */,
    1 /* galgasScanner_1_parse */,
    1 /* galgasScanner_1_public */,
    1 /* galgasScanner_1_private */,
    1 /* galgasScanner_1_proc */,
    1 /* galgasScanner_1_project */,
    1 /* galgasScanner_1_refclass */,
    1 /* galgasScanner_1_remove */,
    1 /* galgasScanner_1_replace */,
    1 /* galgasScanner_1_repeat */,
    1 /* galgasScanner_1_rewind */,
    1 /* galgasScanner_1_rule */,
    1 /* galgasScanner_1_search */,
    1 /* galgasScanner_1_select */,
    1 /* galgasScanner_1_self */,
    1 /* galgasScanner_1_send */,
    1 /* galgasScanner_1_setter */,
    1 /* galgasScanner_1_sortedlist */,
    1 /* galgasScanner_1_struct */,
    1 /* galgasScanner_1_style */,
    1 /* galgasScanner_1_switch */,
    1 /* galgasScanner_1_syntax */,
    1 /* galgasScanner_1_tag */,
    1 /* galgasScanner_1_template */,
    1 /* galgasScanner_1_then */,
    1 /* galgasScanner_1_true */,
    1 /* galgasScanner_1_unused */,
    1 /* galgasScanner_1_var */,
    1 /* galgasScanner_1_valueclass */,
    1 /* galgasScanner_1_warning */,
    1 /* galgasScanner_1_while */,
    1 /* galgasScanner_1_with */,
    2 /* galgasScanner_1__2A_ */,
    2 /* galgasScanner_1__2C_ */,
    2 /* galgasScanner_1__2B_ */,
    2 /* galgasScanner_1__26__2B_ */,
    2 /* galgasScanner_1__26__2D_ */,
    2 /* galgasScanner_1__26__2A_ */,
    2 /* galgasScanner_1__26__2F_ */,
    2 /* galgasScanner_1__3E_ */,
    2 /* galgasScanner_1__3B_ */,
    2 /* galgasScanner_1__3A_ */,
    2 /* galgasScanner_1__3A__3E_ */,
    2 /* galgasScanner_1__2D_ */,
    2 /* galgasScanner_1__28_ */,
    2 /* galgasScanner_1__29_ */,
    2 /* galgasScanner_1__2D__3E_ */,
    2 /* galgasScanner_1__3D__3D_ */,
    2 /* galgasScanner_1__3D_ */,
    2 /* galgasScanner_1__26__26_ */,
    2 /* galgasScanner_1__5B_ */,
    2 /* galgasScanner_1__5D_ */,
    2 /* galgasScanner_1__2B__3D_ */,
    2 /* galgasScanner_1__2D__3D_ */,
    2 /* galgasScanner_1__2A__3D_ */,
    2 /* galgasScanner_1__2F__3D_ */,
    2 /* galgasScanner_1__2F_ */,
    2 /* galgasScanner_1__21__3D_ */,
    2 /* galgasScanner_1__3E__3D_ */,
    2 /* galgasScanner_1__26_ */,
    2 /* galgasScanner_1__7B_ */,
    2 /* galgasScanner_1__7D_ */,
    2 /* galgasScanner_1__60_ */,
    2 /* galgasScanner_1__7C__7C_ */,
    2 /* galgasScanner_1__7C_ */,
    2 /* galgasScanner_1__5E_ */,
    2 /* galgasScanner_1__3E__3E_ */,
    2 /* galgasScanner_1__7E_ */,
    2 /* galgasScanner_1__2D__2D_ */,
    2 /* galgasScanner_1__2B__2B_ */,
    2 /* galgasScanner_1__26__2D__2D_ */,
    2 /* galgasScanner_1__26__2B__2B_ */,
    2 /* galgasScanner_1__3D__3D__3D_ */,
    2 /* galgasScanner_1__21__3D__3D_ */,
    2 /* galgasScanner_1__3F__5E_ */,
    2 /* galgasScanner_1__21__5E_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [153] = {NO,
    YES /* galgasScanner_1_identifier */,
    YES /* galgasScanner_1_double_2E_xxx */,
    YES /* galgasScanner_1_literalInt */,
    YES /* galgasScanner_1__2E_ */,
    YES /* galgasScanner_1__2E__2E__2E_ */,
    YES /* galgasScanner_1__2E__2E__3C_ */,
    YES /* galgasScanner_1__40_type */,
    YES /* galgasScanner_1__25_attribute */,
    YES /* galgasScanner_1__27_char_27_ */,
    YES /* galgasScanner_1__24_terminal_24_ */,
    YES /* galgasScanner_1__3F_ */,
    YES /* galgasScanner_1__3F__21_ */,
    YES /* galgasScanner_1__21_ */,
    YES /* galgasScanner_1__21__3F_ */,
    YES /* galgasScanner_1__3C_ */,
    YES /* galgasScanner_1__3C__3D_ */,
    YES /* galgasScanner_1__3C__3C_ */,
    YES /* galgasScanner_1__3C_non_5F_terminal_3E_ */,
    NO /* galgasScanner_1__22_string_22_ */,
    NO /* galgasScanner_1_comment */,
    NO /* galgasScanner_1_commentMark */,
    YES /* galgasScanner_1_abstract */,
    YES /* galgasScanner_1_after */,
    YES /* galgasScanner_1_array */,
    YES /* galgasScanner_1_as */,
    YES /* galgasScanner_1_bang */,
    YES /* galgasScanner_1_before */,
    YES /* galgasScanner_1_between */,
    YES /* galgasScanner_1_block */,
    YES /* galgasScanner_1_boolset */,
    YES /* galgasScanner_1_cast */,
    YES /* galgasScanner_1_case */,
    YES /* galgasScanner_1_class */,
    YES /* galgasScanner_1_constructor */,
    YES /* galgasScanner_1_default */,
    YES /* galgasScanner_1_dict */,
    YES /* galgasScanner_1_do */,
    YES /* galgasScanner_1_drop */,
    YES /* galgasScanner_1_else */,
    YES /* galgasScanner_1_elsif */,
    YES /* galgasScanner_1_end */,
    YES /* galgasScanner_1_enum */,
    YES /* galgasScanner_1_error */,
    YES /* galgasScanner_1_extension */,
    YES /* galgasScanner_1_extern */,
    YES /* galgasScanner_1_false */,
    YES /* galgasScanner_1_filewrapper */,
    YES /* galgasScanner_1_for */,
    YES /* galgasScanner_1_fixit */,
    YES /* galgasScanner_1_func */,
    YES /* galgasScanner_1_getter */,
    YES /* galgasScanner_1_grammar */,
    YES /* galgasScanner_1_graph */,
    YES /* galgasScanner_1_gui */,
    YES /* galgasScanner_1_if */,
    YES /* galgasScanner_1_in */,
    YES /* galgasScanner_1_indexing */,
    YES /* galgasScanner_1_insert */,
    YES /* galgasScanner_1_is */,
    YES /* galgasScanner_1_label */,
    YES /* galgasScanner_1_let */,
    YES /* galgasScanner_1_lexique */,
    YES /* galgasScanner_1_list */,
    YES /* galgasScanner_1_listmap */,
    YES /* galgasScanner_1_log */,
    YES /* galgasScanner_1_loop */,
    YES /* galgasScanner_1_map */,
    YES /* galgasScanner_1_message */,
    YES /* galgasScanner_1_method */,
    YES /* galgasScanner_1_mod */,
    YES /* galgasScanner_1_mutating */,
    YES /* galgasScanner_1_not */,
    YES /* galgasScanner_1_on */,
    YES /* galgasScanner_1_operator */,
    YES /* galgasScanner_1_option */,
    YES /* galgasScanner_1_or */,
    YES /* galgasScanner_1_override */,
    YES /* galgasScanner_1_parse */,
    YES /* galgasScanner_1_public */,
    YES /* galgasScanner_1_private */,
    YES /* galgasScanner_1_proc */,
    YES /* galgasScanner_1_project */,
    YES /* galgasScanner_1_refclass */,
    YES /* galgasScanner_1_remove */,
    YES /* galgasScanner_1_replace */,
    YES /* galgasScanner_1_repeat */,
    YES /* galgasScanner_1_rewind */,
    YES /* galgasScanner_1_rule */,
    YES /* galgasScanner_1_search */,
    YES /* galgasScanner_1_select */,
    YES /* galgasScanner_1_self */,
    YES /* galgasScanner_1_send */,
    YES /* galgasScanner_1_setter */,
    YES /* galgasScanner_1_sortedlist */,
    YES /* galgasScanner_1_struct */,
    YES /* galgasScanner_1_style */,
    YES /* galgasScanner_1_switch */,
    YES /* galgasScanner_1_syntax */,
    YES /* galgasScanner_1_tag */,
    YES /* galgasScanner_1_template */,
    YES /* galgasScanner_1_then */,
    YES /* galgasScanner_1_true */,
    YES /* galgasScanner_1_unused */,
    YES /* galgasScanner_1_var */,
    YES /* galgasScanner_1_valueclass */,
    YES /* galgasScanner_1_warning */,
    YES /* galgasScanner_1_while */,
    YES /* galgasScanner_1_with */,
    YES /* galgasScanner_1__2A_ */,
    YES /* galgasScanner_1__2C_ */,
    YES /* galgasScanner_1__2B_ */,
    YES /* galgasScanner_1__26__2B_ */,
    YES /* galgasScanner_1__26__2D_ */,
    YES /* galgasScanner_1__26__2A_ */,
    YES /* galgasScanner_1__26__2F_ */,
    YES /* galgasScanner_1__3E_ */,
    YES /* galgasScanner_1__3B_ */,
    YES /* galgasScanner_1__3A_ */,
    YES /* galgasScanner_1__3A__3E_ */,
    YES /* galgasScanner_1__2D_ */,
    YES /* galgasScanner_1__28_ */,
    YES /* galgasScanner_1__29_ */,
    YES /* galgasScanner_1__2D__3E_ */,
    YES /* galgasScanner_1__3D__3D_ */,
    YES /* galgasScanner_1__3D_ */,
    YES /* galgasScanner_1__26__26_ */,
    YES /* galgasScanner_1__5B_ */,
    YES /* galgasScanner_1__5D_ */,
    YES /* galgasScanner_1__2B__3D_ */,
    YES /* galgasScanner_1__2D__3D_ */,
    YES /* galgasScanner_1__2A__3D_ */,
    YES /* galgasScanner_1__2F__3D_ */,
    YES /* galgasScanner_1__2F_ */,
    YES /* galgasScanner_1__21__3D_ */,
    YES /* galgasScanner_1__3E__3D_ */,
    YES /* galgasScanner_1__26_ */,
    YES /* galgasScanner_1__7B_ */,
    YES /* galgasScanner_1__7D_ */,
    YES /* galgasScanner_1__60_ */,
    YES /* galgasScanner_1__7C__7C_ */,
    YES /* galgasScanner_1__7C_ */,
    YES /* galgasScanner_1__5E_ */,
    YES /* galgasScanner_1__3E__3E_ */,
    YES /* galgasScanner_1__7E_ */,
    YES /* galgasScanner_1__2D__2D_ */,
    YES /* galgasScanner_1__2B__2B_ */,
    YES /* galgasScanner_1__26__2D__2D_ */,
    YES /* galgasScanner_1__26__2B__2B_ */,
    YES /* galgasScanner_1__3D__3D__3D_ */,
    YES /* galgasScanner_1__21__3D__3D_ */,
    YES /* galgasScanner_1__3F__5E_ */,
    YES /* galgasScanner_1__21__5E_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//             S T Y L E   N A M E    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 14)) {
    NSString * kStyleArray [14] = {
      @"Default Style",
      @"Keywords",
      @"Delimiters",
      @"Selectors",
      @"Terminal Symbols",
      @"Non Terminal Symbols",
      @"Integer Constants",
      @"Big Integer Constants",
      @"Floating Point Constants",
      @"Character Constants",
      @"String Constants",
      @"Type Names (@...)",
      @"Attributes (%...)",
      @"Comments"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 14)) {
    NSString * kStyleArray [14] = {
      @"galgasScanner",
      @"galgasScanner-keywordsStyle",
      @"galgasScanner-delimitersStyle",
      @"galgasScanner-selectorStyle",
      @"galgasScanner-terminalStyle",
      @"galgasScanner-nonTerminalStyle",
      @"galgasScanner-integerStyle",
      @"galgasScanner-bigintStyle",
      @"galgasScanner-floatStyle",
      @"galgasScanner-characterStyle",
      @"galgasScanner-stringStyle",
      @"galgasScanner-typeNameStyle",
      @"galgasScanner-attributeStyle",
      @"galgasScanner-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) lexiqueIdentifier {
  return @"galgasScanner" ;
}

//----------------------------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


