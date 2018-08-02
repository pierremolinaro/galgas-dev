//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-galgas3-53-canner-cocoa.h"
#import "PMDebug.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//            Unicode test functions                                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
 
bool galgasUnicodeLetter (const utf32 inUnicodeCharacter) {
  return ((0x61 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x7A)) ||
         ((0x41 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x5A)) ||
         ((0xC0 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0xD6)) ||
         ((0xD8 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0xF6)) ||
         ((0xF8 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x2B4)) ||
         ((0x38E <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x3A1)) ||
         ((0x3A3 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x3F5)) ||
         ((0x3F7 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x481)) ||
         ((0x48A <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x523)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@implementation OC_Lexique_galgas3Scanner

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Template Replacements                                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Template Delimiters                                                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) indexingDirectory {
  return @"../build/indexes" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 I N D E X I N G    T I T L E S                                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    @"Unique Map Definition",
    @"Map Proxy Definition",
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Terminal Symbols as end of script in template mark                                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Key words table 'galgasKeyWordList'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_cocoa_lexique_table_entry ktable_for_galgas_33_Scanner_galgasKeyWordList [85] = {
  {"as", galgas3Scanner_1_as},
  {"do", galgas3Scanner_1_do},
  {"if", galgas3Scanner_1_if},
  {"in", galgas3Scanner_1_in},
  {"is", galgas3Scanner_1_is},
  {"on", galgas3Scanner_1_on},
  {"or", galgas3Scanner_1_or},
  {"end", galgas3Scanner_1_end},
  {"for", galgas3Scanner_1_for},
  {"gui", galgas3Scanner_1_gui},
  {"let", galgas3Scanner_1_let},
  {"log", galgas3Scanner_1_log},
  {"map", galgas3Scanner_1_map},
  {"mod", galgas3Scanner_1_mod},
  {"not", galgas3Scanner_1_not},
  {"tag", galgas3Scanner_1_tag},
  {"var", galgas3Scanner_1_var},
  {"case", galgas3Scanner_1_case},
  {"cast", galgas3Scanner_1_cast},
  {"dict", galgas3Scanner_1_dict},
  {"drop", galgas3Scanner_1_drop},
  {"else", galgas3Scanner_1_else},
  {"enum", galgas3Scanner_1_enum},
  {"func", galgas3Scanner_1_func},
  {"list", galgas3Scanner_1_list},
  {"loop", galgas3Scanner_1_loop},
  {"proc", galgas3Scanner_1_proc},
  {"rule", galgas3Scanner_1_rule},
  {"self", galgas3Scanner_1_self},
  {"send", galgas3Scanner_1_send},
  {"then", galgas3Scanner_1_then},
  {"true", galgas3Scanner_1_true},
  {"with", galgas3Scanner_1_with},
  {"after", galgas3Scanner_1_after},
  {"array", galgas3Scanner_1_array},
  {"block", galgas3Scanner_1_block},
  {"class", galgas3Scanner_1_class},
  {"elsif", galgas3Scanner_1_elsif},
  {"error", galgas3Scanner_1_error},
  {"false", galgas3Scanner_1_false},
  {"fixit", galgas3Scanner_1_fixit},
  {"graph", galgas3Scanner_1_graph},
  {"label", galgas3Scanner_1_label},
  {"match", galgas3Scanner_1_match},
  {"parse", galgas3Scanner_1_parse},
  {"state", galgas3Scanner_1_state},
  {"style", galgas3Scanner_1_style},
  {"while", galgas3Scanner_1_while},
  {"before", galgas3Scanner_1_before},
  {"extern", galgas3Scanner_1_extern},
  {"getter", galgas3Scanner_1_getter},
  {"insert", galgas3Scanner_1_insert},
  {"method", galgas3Scanner_1_method},
  {"option", galgas3Scanner_1_option},
  {"remove", galgas3Scanner_1_remove},
  {"repeat", galgas3Scanner_1_repeat},
  {"rewind", galgas3Scanner_1_rewind},
  {"search", galgas3Scanner_1_search},
  {"select", galgas3Scanner_1_select},
  {"setter", galgas3Scanner_1_setter},
  {"shared", galgas3Scanner_1_shared},
  {"struct", galgas3Scanner_1_struct},
  {"switch", galgas3Scanner_1_switch},
  {"syntax", galgas3Scanner_1_syntax},
  {"unused", galgas3Scanner_1_unused},
  {"between", galgas3Scanner_1_between},
  {"boolset", galgas3Scanner_1_boolset},
  {"default", galgas3Scanner_1_default},
  {"grammar", galgas3Scanner_1_grammar},
  {"lexique", galgas3Scanner_1_lexique},
  {"listmap", galgas3Scanner_1_listmap},
  {"message", galgas3Scanner_1_message},
  {"private", galgas3Scanner_1_private},
  {"project", galgas3Scanner_1_project},
  {"replace", galgas3Scanner_1_replace},
  {"warning", galgas3Scanner_1_warning},
  {"abstract", galgas3Scanner_1_abstract},
  {"indexing", galgas3Scanner_1_indexing},
  {"operator", galgas3Scanner_1_operator},
  {"override", galgas3Scanner_1_override},
  {"template", galgas3Scanner_1_template},
  {"extension", galgas3Scanner_1_extension},
  {"sortedlist", galgas3Scanner_1_sortedlist},
  {"constructor", galgas3Scanner_1_constructor},
  {"filewrapper", galgas3Scanner_1_filewrapper}
} ;

static NSInteger search_into_galgas_33_Scanner_galgasKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_galgas_33_Scanner_galgasKeyWordList, 85) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               P A R S E    L E X I C A L    T O K E N                                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (void) parseLexicalTokenForLexicalColoring {
  mLoop = YES ;
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
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
    if (scanningOk && ([self testForCharWithFunction:galgasUnicodeLetter])) {
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (mPreviousChar)) ;
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction:galgasUnicodeLetter] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (mTokenCode == 0) {
        mTokenCode = search_into_galgas_33_Scanner_galgasKeyWordList (mLexicalAttribute_identifierString) ;
      }
      if (mTokenCode == 0) {
        mTokenCode = galgas3Scanner_1_identifier ;
      }
    }else if (scanningOk && ([self testForInputString:@"0x" advance:YES])) {
      do {
        if (scanningOk && ([self testForInputChar:95])) {
        }else{
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        do {
          if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          }else if (scanningOk && ([self testForInputChar:95])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputString:@"LS" advance:YES])) {
          scanner_cocoa_routine_convertHexStringIntoSInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint64value) ;
          mTokenCode = galgas3Scanner_1_sint_36__34__5F_LS ;
        }else if (scanningOk && ([self testForInputChar:83] || [self testForInputChar:115])) {
          scanner_cocoa_routine_convertHexStringIntoSInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint32value) ;
          mTokenCode = galgas3Scanner_1_sint_33__32__5F_S ;
        }else if (scanningOk && ([self testForInputChar:76])) {
          scanner_cocoa_routine_convertHexStringIntoUInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint64value) ;
          mTokenCode = galgas3Scanner_1_uint_36__34__5F_L ;
        }else if (scanningOk && ([self testForInputChar:71])) {
          scanner_cocoa_routine_convertHexStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
          mTokenCode = galgas3Scanner_1_bigint_5F_G ;
        }else{
          scanner_cocoa_routine_convertHexStringIntoUInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint32value) ;
          mTokenCode = galgas3Scanner_1_uint_33__32_ ;
        }
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
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:83] || [self testForInputChar:115])) {
        scanner_cocoa_routine_convertDecimalStringIntoSInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint32value) ;
        mTokenCode = galgas3Scanner_1_sint_33__32__5F_S ;
      }else if (scanningOk && ([self testForInputString:@"LS" advance:YES])) {
        scanner_cocoa_routine_convertDecimalStringIntoSInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint64value) ;
        mTokenCode = galgas3Scanner_1_sint_36__34__5F_LS ;
      }else if (scanningOk && ([self testForInputChar:76])) {
        scanner_cocoa_routine_convertDecimalStringIntoUInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint64value) ;
        mTokenCode = galgas3Scanner_1_uint_36__34__5F_L ;
      }else if (scanningOk && ([self testForInputChar:71])) {
        scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
        mTokenCode = galgas3Scanner_1_bigint_5F_G ;
      }else if (scanningOk && ([self testForInputChar:46])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
        do {
          if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          }else if (scanningOk && ([self testForInputChar:95])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
        mTokenCode = galgas3Scanner_1_double_2E_xxx ;
      }else{
        scanner_cocoa_routine_convertDecimalStringIntoUInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint32value) ;
        mTokenCode = galgas3Scanner_1_uint_33__32_ ;
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
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
        mTokenCode = galgas3Scanner_1_double_2E_xxx ;
      }else{
        if (scanningOk && ([self testForInputString:@".." advance:YES])) {
          mTokenCode = galgas3Scanner_1__2E__2E__2E_ ;
        }else if (scanningOk && ([self testForInputString:@".<" advance:YES])) {
          mTokenCode = galgas3Scanner_1__2E__2E__3C_ ;
        }else{
          mTokenCode = galgas3Scanner_1__2E_ ;
        }
      }
    }else if (scanningOk && ([self testForInputChar:64])) {
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputChar:45])) {
          do {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
            if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
            }else{
              mLoop = NO ;
            }
          }while (mLoop && scanningOk) ;
          mLoop = YES ;
        }
        if (scanningOk && ([self testForInputChar:63])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }
      }else{
        scanningOk = NO ;
      }
      mTokenCode = galgas3Scanner_1__40_type ;
    }else if (scanningOk && ([self testForInputChar:37])) {
      if (scanningOk && ([self testForCharWithFunction:galgasUnicodeLetter])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForCharWithFunction:galgasUnicodeLetter] || [self testForInputChar:45] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
      }else{
        scanningOk = NO ;
      }
      mTokenCode = galgas3Scanner_1__25_attribute ;
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
        }else if (scanningOk && ([self testForInputChar:38])) {
          do {
            if (scanningOk && ([self notTestForInputString:@";" error:& scanningOk])) {
              scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
            }else{
              mLoop = NO ;
            }
          }while (mLoop && scanningOk) ;
          mLoop = YES ;
          scanner_cocoa_routine_convertHTMLSequenceToUnicodeCharacter (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_charValue) ;
        }else{
          scanningOk = NO ;
        }
      }else if (scanningOk && ([self testForInputFromChar:32 toChar:65533])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
      }else{
        scanningOk = NO ;
      }
      if (scanningOk && ([self testForInputChar:39])) {
        mTokenCode = galgas3Scanner_1__27_char_27_ ;
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
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
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
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
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
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
      }else{
        scanningOk = NO ;
      }
      if (scanningOk && ([self testForInputChar:36])) {
      }else{
        scanningOk = NO ;
      }
      mTokenCode = galgas3Scanner_1__24_terminal_24_ ;
    }else if (scanningOk && [self testForInputString:@"&--" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26__2D__2D_ ;
    }else if (scanningOk && [self testForInputString:@"&++" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26__2B__2B_ ;
    }else if (scanningOk && [self testForInputString:@"||" advance:YES]) {
      mTokenCode = galgas3Scanner_1__7C__7C_ ;
    }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3E__3E_ ;
    }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3E__3D_ ;
    }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3D__3D_ ;
    }else if (scanningOk && [self testForInputString:@":>" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3A__3E_ ;
    }else if (scanningOk && [self testForInputString:@"/=" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2F__3D_ ;
    }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2D__3E_ ;
    }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2D__3D_ ;
    }else if (scanningOk && [self testForInputString:@"--" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2D__2D_ ;
    }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2B__3D_ ;
    }else if (scanningOk && [self testForInputString:@"++" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2B__2B_ ;
    }else if (scanningOk && [self testForInputString:@"*=" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2A__3D_ ;
    }else if (scanningOk && [self testForInputString:@"&/" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26__2F_ ;
    }else if (scanningOk && [self testForInputString:@"&-" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26__2D_ ;
    }else if (scanningOk && [self testForInputString:@"&+" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26__2B_ ;
    }else if (scanningOk && [self testForInputString:@"&*" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26__2A_ ;
    }else if (scanningOk && [self testForInputString:@"&&" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26__26_ ;
    }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
      mTokenCode = galgas3Scanner_1__21__3D_ ;
    }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
      mTokenCode = galgas3Scanner_1__7E_ ;
    }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
      mTokenCode = galgas3Scanner_1__7D_ ;
    }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
      mTokenCode = galgas3Scanner_1__7C_ ;
    }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
      mTokenCode = galgas3Scanner_1__7B_ ;
    }else if (scanningOk && [self testForInputString:@"`" advance:YES]) {
      mTokenCode = galgas3Scanner_1__60_ ;
    }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
      mTokenCode = galgas3Scanner_1__5E_ ;
    }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
      mTokenCode = galgas3Scanner_1__5D_ ;
    }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
      mTokenCode = galgas3Scanner_1__5B_ ;
    }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3E_ ;
    }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3D_ ;
    }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3B_ ;
    }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
      mTokenCode = galgas3Scanner_1__3A_ ;
    }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2F_ ;
    }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2D_ ;
    }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
      mTokenCode = galgas3Scanner_1__2C_ ;
    }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2B_ ;
    }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
      mTokenCode = galgas3Scanner_1__2A_ ;
    }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
      mTokenCode = galgas3Scanner_1__29_ ;
    }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
      mTokenCode = galgas3Scanner_1__28_ ;
    }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
      mTokenCode = galgas3Scanner_1__26_ ;
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
              mLoop = NO ;
            }
          }while (mLoop && scanningOk) ;
          mLoop = YES ;
          if (scanningOk && ([self testForInputChar:58])) {
            mTokenCode = galgas3Scanner_1__3F__21_ ;
          }else{
            scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
            [self restoreScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
            mTokenCode = galgas3Scanner_1__3F__21_ ;
          }
        }else{
          mTokenCode = galgas3Scanner_1__3F__21_ ;
        }
      }else if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputChar:58])) {
          mTokenCode = galgas3Scanner_1__3F_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyInterrogationMark] ;
          mTokenCode = galgas3Scanner_1__3F_ ;
        }
      }else{
        mTokenCode = galgas3Scanner_1__3F_ ;
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
              mLoop = NO ;
            }
          }while (mLoop && scanningOk) ;
          mLoop = YES ;
          if (scanningOk && ([self testForInputChar:58])) {
            mTokenCode = galgas3Scanner_1__21__3F_ ;
          }else{
            scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
            [self restoreScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
            mTokenCode = galgas3Scanner_1__21__3F_ ;
          }
        }else{
          mTokenCode = galgas3Scanner_1__21__3F_ ;
        }
      }else if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputChar:58])) {
          mTokenCode = galgas3Scanner_1__21_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyExclamationMark] ;
          mTokenCode = galgas3Scanner_1__21_ ;
        }
      }else{
        mTokenCode = galgas3Scanner_1__21_ ;
      }
    }else if (scanningOk && ([self testForInputChar:60])) {
      scanningPointStructForCocoa locationForTag_onlyInfDelimiter ;
      [self saveScanningPoint: & locationForTag_onlyInfDelimiter] ;
      if (scanningOk && ([self testForInputChar:61])) {
        mTokenCode = galgas3Scanner_1__3C__3D_ ;
      }else if (scanningOk && ([self testForInputChar:60])) {
        mTokenCode = galgas3Scanner_1__3C__3C_ ;
      }else if (scanningOk && ([self testForCharWithFunction:galgasUnicodeLetter])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForCharWithFunction:galgasUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputChar:62])) {
          mTokenCode = galgas3Scanner_1__3C_non_5F_terminal_3E_ ;
        }else{
          [self restoreScanningPoint: & locationForTag_onlyInfDelimiter] ;
          mTokenCode = galgas3Scanner_1__3C_ ;
        }
      }else{
        mTokenCode = galgas3Scanner_1__3C_ ;
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
          }else if (scanningOk && ([self testForInputChar:38])) {
            do {
              if (scanningOk && ([self notTestForInputString:@";" error:& scanningOk])) {
                scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, mPreviousChar) ;
              }else{
                mLoop = NO ;
              }
            }while (mLoop && scanningOk) ;
            mLoop = YES ;
            scanner_cocoa_routine_convertHTMLSequenceToUnicodeCharacter (& scanningOk, mLexicalAttribute_identifierString, & mLexicalAttribute_charValue) ;
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_charValue) ;
          }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
            do {
              scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
              if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
              }else{
                mLoop = NO ;
              }
            }while (mLoop && scanningOk) ;
            mLoop = YES ;
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_charValue) ;
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
          mLoop = NO ;
        }
      }while (mLoop && scanningOk) ;
      mLoop = YES ;
      if (scanningOk && ([self testForInputChar:34])) {
        mTokenCode = galgas3Scanner_1__22_string_22_ ;
      }else{
        scanningOk = NO ;
      }
    }else if (scanningOk && ([self testForInputChar:35])) {
      if (scanningOk && ([self testForInputChar:33])) {
        do {
          if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        mTokenCode = galgas3Scanner_1_commentMark ;
      }else{
        do {
          if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        mTokenCode = galgas3Scanner_1_comment ;
      }
    }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
    }else if ([self testForInputChar:'\0']) { // End of source text ? 
      mTokenCode = galgas3Scanner_1_ ; // Empty string code
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   T E R M I N A L    C O U N T                                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) terminalVocabularyCount {
  return 150 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     S T Y L E   C O U N T                                                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) styleCount {
  return 14 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                I S    T E M P L A T E    L E X I Q U E                                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (BOOL) isTemplateLexique {
  return NO ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [151] = {0,
    0 /* galgas3Scanner_1_identifier */,
    8 /* galgas3Scanner_1_double_2E_xxx */,
    6 /* galgas3Scanner_1_uint_33__32_ */,
    6 /* galgas3Scanner_1_sint_33__32__5F_S */,
    6 /* galgas3Scanner_1_uint_36__34__5F_L */,
    6 /* galgas3Scanner_1_sint_36__34__5F_LS */,
    7 /* galgas3Scanner_1_bigint_5F_G */,
    2 /* galgas3Scanner_1__2E_ */,
    2 /* galgas3Scanner_1__2E__2E__2E_ */,
    2 /* galgas3Scanner_1__2E__2E__3C_ */,
    11 /* galgas3Scanner_1__40_type */,
    12 /* galgas3Scanner_1__25_attribute */,
    9 /* galgas3Scanner_1__27_char_27_ */,
    4 /* galgas3Scanner_1__24_terminal_24_ */,
    3 /* galgas3Scanner_1__3F_ */,
    3 /* galgas3Scanner_1__3F__21_ */,
    3 /* galgas3Scanner_1__21_ */,
    3 /* galgas3Scanner_1__21__3F_ */,
    2 /* galgas3Scanner_1__3C_ */,
    2 /* galgas3Scanner_1__3C__3D_ */,
    2 /* galgas3Scanner_1__3C__3C_ */,
    5 /* galgas3Scanner_1__3C_non_5F_terminal_3E_ */,
    10 /* galgas3Scanner_1__22_string_22_ */,
    13 /* galgas3Scanner_1_comment */,
    13 /* galgas3Scanner_1_commentMark */,
    1 /* galgas3Scanner_1_abstract */,
    1 /* galgas3Scanner_1_after */,
    1 /* galgas3Scanner_1_array */,
    1 /* galgas3Scanner_1_as */,
    1 /* galgas3Scanner_1_before */,
    1 /* galgas3Scanner_1_between */,
    1 /* galgas3Scanner_1_block */,
    1 /* galgas3Scanner_1_boolset */,
    1 /* galgas3Scanner_1_cast */,
    1 /* galgas3Scanner_1_case */,
    1 /* galgas3Scanner_1_class */,
    1 /* galgas3Scanner_1_constructor */,
    1 /* galgas3Scanner_1_default */,
    1 /* galgas3Scanner_1_dict */,
    1 /* galgas3Scanner_1_do */,
    1 /* galgas3Scanner_1_drop */,
    1 /* galgas3Scanner_1_else */,
    1 /* galgas3Scanner_1_elsif */,
    1 /* galgas3Scanner_1_end */,
    1 /* galgas3Scanner_1_enum */,
    1 /* galgas3Scanner_1_error */,
    1 /* galgas3Scanner_1_extension */,
    1 /* galgas3Scanner_1_extern */,
    1 /* galgas3Scanner_1_false */,
    1 /* galgas3Scanner_1_filewrapper */,
    1 /* galgas3Scanner_1_for */,
    1 /* galgas3Scanner_1_fixit */,
    1 /* galgas3Scanner_1_func */,
    1 /* galgas3Scanner_1_getter */,
    1 /* galgas3Scanner_1_grammar */,
    1 /* galgas3Scanner_1_graph */,
    1 /* galgas3Scanner_1_gui */,
    1 /* galgas3Scanner_1_if */,
    1 /* galgas3Scanner_1_in */,
    1 /* galgas3Scanner_1_indexing */,
    1 /* galgas3Scanner_1_insert */,
    1 /* galgas3Scanner_1_is */,
    1 /* galgas3Scanner_1_label */,
    1 /* galgas3Scanner_1_let */,
    1 /* galgas3Scanner_1_lexique */,
    1 /* galgas3Scanner_1_list */,
    1 /* galgas3Scanner_1_listmap */,
    1 /* galgas3Scanner_1_log */,
    1 /* galgas3Scanner_1_loop */,
    1 /* galgas3Scanner_1_map */,
    1 /* galgas3Scanner_1_match */,
    1 /* galgas3Scanner_1_message */,
    1 /* galgas3Scanner_1_method */,
    1 /* galgas3Scanner_1_mod */,
    1 /* galgas3Scanner_1_not */,
    1 /* galgas3Scanner_1_on */,
    1 /* galgas3Scanner_1_operator */,
    1 /* galgas3Scanner_1_option */,
    1 /* galgas3Scanner_1_or */,
    1 /* galgas3Scanner_1_override */,
    1 /* galgas3Scanner_1_parse */,
    1 /* galgas3Scanner_1_private */,
    1 /* galgas3Scanner_1_proc */,
    1 /* galgas3Scanner_1_project */,
    1 /* galgas3Scanner_1_remove */,
    1 /* galgas3Scanner_1_replace */,
    1 /* galgas3Scanner_1_repeat */,
    1 /* galgas3Scanner_1_rewind */,
    1 /* galgas3Scanner_1_rule */,
    1 /* galgas3Scanner_1_search */,
    1 /* galgas3Scanner_1_select */,
    1 /* galgas3Scanner_1_self */,
    1 /* galgas3Scanner_1_send */,
    1 /* galgas3Scanner_1_setter */,
    1 /* galgas3Scanner_1_sortedlist */,
    1 /* galgas3Scanner_1_state */,
    1 /* galgas3Scanner_1_struct */,
    1 /* galgas3Scanner_1_style */,
    1 /* galgas3Scanner_1_switch */,
    1 /* galgas3Scanner_1_syntax */,
    1 /* galgas3Scanner_1_tag */,
    1 /* galgas3Scanner_1_template */,
    1 /* galgas3Scanner_1_then */,
    1 /* galgas3Scanner_1_true */,
    1 /* galgas3Scanner_1_shared */,
    1 /* galgas3Scanner_1_unused */,
    1 /* galgas3Scanner_1_var */,
    1 /* galgas3Scanner_1_warning */,
    1 /* galgas3Scanner_1_while */,
    1 /* galgas3Scanner_1_with */,
    2 /* galgas3Scanner_1__2A_ */,
    2 /* galgas3Scanner_1__2C_ */,
    2 /* galgas3Scanner_1__2B_ */,
    2 /* galgas3Scanner_1__26__2B_ */,
    2 /* galgas3Scanner_1__26__2D_ */,
    2 /* galgas3Scanner_1__26__2A_ */,
    2 /* galgas3Scanner_1__26__2F_ */,
    2 /* galgas3Scanner_1__3E_ */,
    2 /* galgas3Scanner_1__3B_ */,
    2 /* galgas3Scanner_1__3A_ */,
    2 /* galgas3Scanner_1__3A__3E_ */,
    2 /* galgas3Scanner_1__2D_ */,
    2 /* galgas3Scanner_1__28_ */,
    2 /* galgas3Scanner_1__29_ */,
    2 /* galgas3Scanner_1__2D__3E_ */,
    2 /* galgas3Scanner_1__3D__3D_ */,
    2 /* galgas3Scanner_1__3D_ */,
    2 /* galgas3Scanner_1__26__26_ */,
    2 /* galgas3Scanner_1__5B_ */,
    2 /* galgas3Scanner_1__5D_ */,
    2 /* galgas3Scanner_1__2B__3D_ */,
    2 /* galgas3Scanner_1__2D__3D_ */,
    2 /* galgas3Scanner_1__2A__3D_ */,
    2 /* galgas3Scanner_1__2F__3D_ */,
    2 /* galgas3Scanner_1__2F_ */,
    2 /* galgas3Scanner_1__21__3D_ */,
    2 /* galgas3Scanner_1__3E__3D_ */,
    2 /* galgas3Scanner_1__26_ */,
    2 /* galgas3Scanner_1__7B_ */,
    2 /* galgas3Scanner_1__7D_ */,
    2 /* galgas3Scanner_1__60_ */,
    2 /* galgas3Scanner_1__7C__7C_ */,
    2 /* galgas3Scanner_1__7C_ */,
    2 /* galgas3Scanner_1__5E_ */,
    2 /* galgas3Scanner_1__3E__3E_ */,
    2 /* galgas3Scanner_1__7E_ */,
    2 /* galgas3Scanner_1__2D__2D_ */,
    2 /* galgas3Scanner_1__2B__2B_ */,
    2 /* galgas3Scanner_1__26__2D__2D_ */,
    2 /* galgas3Scanner_1__26__2B__2B_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [151] = {NO,
    YES /* galgas3Scanner_1_identifier */,
    YES /* galgas3Scanner_1_double_2E_xxx */,
    YES /* galgas3Scanner_1_uint_33__32_ */,
    YES /* galgas3Scanner_1_sint_33__32__5F_S */,
    YES /* galgas3Scanner_1_uint_36__34__5F_L */,
    YES /* galgas3Scanner_1_sint_36__34__5F_LS */,
    YES /* galgas3Scanner_1_bigint_5F_G */,
    YES /* galgas3Scanner_1__2E_ */,
    YES /* galgas3Scanner_1__2E__2E__2E_ */,
    YES /* galgas3Scanner_1__2E__2E__3C_ */,
    YES /* galgas3Scanner_1__40_type */,
    YES /* galgas3Scanner_1__25_attribute */,
    YES /* galgas3Scanner_1__27_char_27_ */,
    YES /* galgas3Scanner_1__24_terminal_24_ */,
    YES /* galgas3Scanner_1__3F_ */,
    YES /* galgas3Scanner_1__3F__21_ */,
    YES /* galgas3Scanner_1__21_ */,
    YES /* galgas3Scanner_1__21__3F_ */,
    YES /* galgas3Scanner_1__3C_ */,
    YES /* galgas3Scanner_1__3C__3D_ */,
    YES /* galgas3Scanner_1__3C__3C_ */,
    YES /* galgas3Scanner_1__3C_non_5F_terminal_3E_ */,
    NO /* galgas3Scanner_1__22_string_22_ */,
    NO /* galgas3Scanner_1_comment */,
    NO /* galgas3Scanner_1_commentMark */,
    YES /* galgas3Scanner_1_abstract */,
    YES /* galgas3Scanner_1_after */,
    YES /* galgas3Scanner_1_array */,
    YES /* galgas3Scanner_1_as */,
    YES /* galgas3Scanner_1_before */,
    YES /* galgas3Scanner_1_between */,
    YES /* galgas3Scanner_1_block */,
    YES /* galgas3Scanner_1_boolset */,
    YES /* galgas3Scanner_1_cast */,
    YES /* galgas3Scanner_1_case */,
    YES /* galgas3Scanner_1_class */,
    YES /* galgas3Scanner_1_constructor */,
    YES /* galgas3Scanner_1_default */,
    YES /* galgas3Scanner_1_dict */,
    YES /* galgas3Scanner_1_do */,
    YES /* galgas3Scanner_1_drop */,
    YES /* galgas3Scanner_1_else */,
    YES /* galgas3Scanner_1_elsif */,
    YES /* galgas3Scanner_1_end */,
    YES /* galgas3Scanner_1_enum */,
    YES /* galgas3Scanner_1_error */,
    YES /* galgas3Scanner_1_extension */,
    YES /* galgas3Scanner_1_extern */,
    YES /* galgas3Scanner_1_false */,
    YES /* galgas3Scanner_1_filewrapper */,
    YES /* galgas3Scanner_1_for */,
    YES /* galgas3Scanner_1_fixit */,
    YES /* galgas3Scanner_1_func */,
    YES /* galgas3Scanner_1_getter */,
    YES /* galgas3Scanner_1_grammar */,
    YES /* galgas3Scanner_1_graph */,
    YES /* galgas3Scanner_1_gui */,
    YES /* galgas3Scanner_1_if */,
    YES /* galgas3Scanner_1_in */,
    YES /* galgas3Scanner_1_indexing */,
    YES /* galgas3Scanner_1_insert */,
    YES /* galgas3Scanner_1_is */,
    YES /* galgas3Scanner_1_label */,
    YES /* galgas3Scanner_1_let */,
    YES /* galgas3Scanner_1_lexique */,
    YES /* galgas3Scanner_1_list */,
    YES /* galgas3Scanner_1_listmap */,
    YES /* galgas3Scanner_1_log */,
    YES /* galgas3Scanner_1_loop */,
    YES /* galgas3Scanner_1_map */,
    YES /* galgas3Scanner_1_match */,
    YES /* galgas3Scanner_1_message */,
    YES /* galgas3Scanner_1_method */,
    YES /* galgas3Scanner_1_mod */,
    YES /* galgas3Scanner_1_not */,
    YES /* galgas3Scanner_1_on */,
    YES /* galgas3Scanner_1_operator */,
    YES /* galgas3Scanner_1_option */,
    YES /* galgas3Scanner_1_or */,
    YES /* galgas3Scanner_1_override */,
    YES /* galgas3Scanner_1_parse */,
    YES /* galgas3Scanner_1_private */,
    YES /* galgas3Scanner_1_proc */,
    YES /* galgas3Scanner_1_project */,
    YES /* galgas3Scanner_1_remove */,
    YES /* galgas3Scanner_1_replace */,
    YES /* galgas3Scanner_1_repeat */,
    YES /* galgas3Scanner_1_rewind */,
    YES /* galgas3Scanner_1_rule */,
    YES /* galgas3Scanner_1_search */,
    YES /* galgas3Scanner_1_select */,
    YES /* galgas3Scanner_1_self */,
    YES /* galgas3Scanner_1_send */,
    YES /* galgas3Scanner_1_setter */,
    YES /* galgas3Scanner_1_sortedlist */,
    YES /* galgas3Scanner_1_state */,
    YES /* galgas3Scanner_1_struct */,
    YES /* galgas3Scanner_1_style */,
    YES /* galgas3Scanner_1_switch */,
    YES /* galgas3Scanner_1_syntax */,
    YES /* galgas3Scanner_1_tag */,
    YES /* galgas3Scanner_1_template */,
    YES /* galgas3Scanner_1_then */,
    YES /* galgas3Scanner_1_true */,
    YES /* galgas3Scanner_1_shared */,
    YES /* galgas3Scanner_1_unused */,
    YES /* galgas3Scanner_1_var */,
    YES /* galgas3Scanner_1_warning */,
    YES /* galgas3Scanner_1_while */,
    YES /* galgas3Scanner_1_with */,
    YES /* galgas3Scanner_1__2A_ */,
    YES /* galgas3Scanner_1__2C_ */,
    YES /* galgas3Scanner_1__2B_ */,
    YES /* galgas3Scanner_1__26__2B_ */,
    YES /* galgas3Scanner_1__26__2D_ */,
    YES /* galgas3Scanner_1__26__2A_ */,
    YES /* galgas3Scanner_1__26__2F_ */,
    YES /* galgas3Scanner_1__3E_ */,
    YES /* galgas3Scanner_1__3B_ */,
    YES /* galgas3Scanner_1__3A_ */,
    YES /* galgas3Scanner_1__3A__3E_ */,
    YES /* galgas3Scanner_1__2D_ */,
    YES /* galgas3Scanner_1__28_ */,
    YES /* galgas3Scanner_1__29_ */,
    YES /* galgas3Scanner_1__2D__3E_ */,
    YES /* galgas3Scanner_1__3D__3D_ */,
    YES /* galgas3Scanner_1__3D_ */,
    YES /* galgas3Scanner_1__26__26_ */,
    YES /* galgas3Scanner_1__5B_ */,
    YES /* galgas3Scanner_1__5D_ */,
    YES /* galgas3Scanner_1__2B__3D_ */,
    YES /* galgas3Scanner_1__2D__3D_ */,
    YES /* galgas3Scanner_1__2A__3D_ */,
    YES /* galgas3Scanner_1__2F__3D_ */,
    YES /* galgas3Scanner_1__2F_ */,
    YES /* galgas3Scanner_1__21__3D_ */,
    YES /* galgas3Scanner_1__3E__3D_ */,
    YES /* galgas3Scanner_1__26_ */,
    YES /* galgas3Scanner_1__7B_ */,
    YES /* galgas3Scanner_1__7D_ */,
    YES /* galgas3Scanner_1__60_ */,
    YES /* galgas3Scanner_1__7C__7C_ */,
    YES /* galgas3Scanner_1__7C_ */,
    YES /* galgas3Scanner_1__5E_ */,
    YES /* galgas3Scanner_1__3E__3E_ */,
    YES /* galgas3Scanner_1__7E_ */,
    YES /* galgas3Scanner_1__2D__2D_ */,
    YES /* galgas3Scanner_1__2B__2B_ */,
    YES /* galgas3Scanner_1__26__2D__2D_ */,
    YES /* galgas3Scanner_1__26__2B__2B_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             S T Y L E   N A M E    F O R    I N D E X                                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 14)) {
    NSString * kStyleArray [14] = {
      @"galgas3Scanner",
      @"galgas3Scanner-keywordsStyle",
      @"galgas3Scanner-delimitersStyle",
      @"galgas3Scanner-selectorStyle",
      @"galgas3Scanner-terminalStyle",
      @"galgas3Scanner-nonTerminalStyle",
      @"galgas3Scanner-integerStyle",
      @"galgas3Scanner-bigintStyle",
      @"galgas3Scanner-floatStyle",
      @"galgas3Scanner-characterStyle",
      @"galgas3Scanner-stringStyle",
      @"galgas3Scanner-typeNameStyle",
      @"galgas3Scanner-attributeStyle",
      @"galgas3Scanner-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         L E X I Q U E   I D E N T I F I E R                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) lexiqueIdentifier {
  return @"galgas3Scanner" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


