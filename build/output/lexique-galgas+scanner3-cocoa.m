//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-galgas+scanner3-cocoa.h"
#import "PMDebug.h"

//--------------------------------------------------------------------------------------------------

@implementation OC_Lexique_galgasScanner3

//--------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//--------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    T I T L E S
//
//--------------------------------------------------------------------------------------------------

- (NSArray *) indexingTitles { // Array of NSString
  return [NSArray arrayWithObjects:
    @"Class Definition",
    @"Enum Definition",
    @"Struct Definition",
    @"List Definition",
    @"Sorted List Definition",
    @"Map Definition",
    @"Dictionary Definition",
    @"Extern Type Definition",
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

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//
//             Key words table 'attributeKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_galgasScanner_33__attributeKeyWordList [30] = {
  {"from", galgasScanner3_1__25_from},
  {"once", galgasScanner3_1__25_once},
  {"MacOS", galgasScanner3_1__25_MacOS},
  {"usefull", galgasScanner3_1__25_usefull},
  {"app-link", galgasScanner3_1__25_app_2D_link},
  {"clonable", galgasScanner3_1__25_clonable},
  {"equatable", galgasScanner3_1__25_equatable},
  {"preserved", galgasScanner3_1__25_preserved},
  {"translate", galgasScanner3_1__25_translate},
  {"app-source", galgasScanner3_1__25_app_2D_source},
  {"comparable", galgasScanner3_1__25_comparable},
  {"MacSwiftApp", galgasScanner3_1__25_MacSwiftApp},
  {"libpmAtPath", galgasScanner3_1__25_libpmAtPath},
  {"macCodeSign", galgasScanner3_1__25_macCodeSign},
  {"tool-source", galgasScanner3_1__25_tool_2D_source},
  {"initArgLabel", galgasScanner3_1__25_initArgLabel},
  {"makefile-unix", galgasScanner3_1__25_makefile_2D_unix},
  {"MacOSDeployment", galgasScanner3_1__25_MacOSDeployment},
  {"makefile-macosx", galgasScanner3_1__25_makefile_2D_macosx},
  {"templateEndMark", galgasScanner3_1__25_templateEndMark},
  {"codeblocks-linux32", galgasScanner3_1__25_codeblocks_2D_linux_33__32_},
  {"codeblocks-linux64", galgasScanner3_1__25_codeblocks_2D_linux_36__34_},
  {"codeblocks-windows", galgasScanner3_1__25_codeblocks_2D_windows},
  {"nonAtomicSelection", galgasScanner3_1__25_nonAtomicSelection},
  {"quietOutputByDefault", galgasScanner3_1__25_quietOutputByDefault},
  {"applicationBundleBase", galgasScanner3_1__25_applicationBundleBase},
  {"generatedInSeparateFile", galgasScanner3_1__25_generatedInSeparateFile},
  {"makefile-win32-on-macosx", galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx},
  {"makefile-x86linux32-on-macosx", galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx},
  {"makefile-x86linux64-on-macosx", galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx}
} ;

static NSInteger search_into_galgasScanner_33__attributeKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_galgasScanner_33__attributeKeyWordList, 30) ;
}

//--------------------------------------------------------------------------------------------------
//
//             Key words table 'galgasKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_galgasScanner_33__galgasKeyWordList [93] = {
  {"as", galgasScanner3_1_as},
  {"do", galgasScanner3_1_do},
  {"if", galgasScanner3_1_if},
  {"in", galgasScanner3_1_in},
  {"is", galgasScanner3_1_is},
  {"on", galgasScanner3_1_on},
  {"or", galgasScanner3_1_or},
  {"end", galgasScanner3_1_end},
  {"for", galgasScanner3_1_for},
  {"gui", galgasScanner3_1_gui},
  {"let", galgasScanner3_1_let},
  {"log", galgasScanner3_1_log},
  {"map", galgasScanner3_1_map},
  {"mod", galgasScanner3_1_mod},
  {"nil", galgasScanner3_1_nil},
  {"not", galgasScanner3_1_not},
  {"tag", galgasScanner3_1_tag},
  {"var", galgasScanner3_1_var},
  {"bang", galgasScanner3_1_bang},
  {"case", galgasScanner3_1_case},
  {"cast", galgasScanner3_1_cast},
  {"dict", galgasScanner3_1_dict},
  {"drop", galgasScanner3_1_drop},
  {"else", galgasScanner3_1_else},
  {"enum", galgasScanner3_1_enum},
  {"func", galgasScanner3_1_func},
  {"init", galgasScanner3_1_init},
  {"list", galgasScanner3_1_list},
  {"loop", galgasScanner3_1_loop},
  {"proc", galgasScanner3_1_proc},
  {"rule", galgasScanner3_1_rule},
  {"self", galgasScanner3_1_self},
  {"send", galgasScanner3_1_send},
  {"then", galgasScanner3_1_then},
  {"true", galgasScanner3_1_true},
  {"weak", galgasScanner3_1_weak},
  {"with", galgasScanner3_1_with},
  {"after", galgasScanner3_1_after},
  {"block", galgasScanner3_1_block},
  {"class", galgasScanner3_1_class},
  {"elsif", galgasScanner3_1_elsif},
  {"error", galgasScanner3_1_error},
  {"false", galgasScanner3_1_false},
  {"final", galgasScanner3_1_final},
  {"fixit", galgasScanner3_1_fixit},
  {"graph", galgasScanner3_1_graph},
  {"guard", galgasScanner3_1_guard},
  {"label", galgasScanner3_1_label},
  {"parse", galgasScanner3_1_parse},
  {"spoil", galgasScanner3_1_spoil},
  {"style", galgasScanner3_1_style},
  {"super", galgasScanner3_1_super},
  {"while", galgasScanner3_1_while},
  {"before", galgasScanner3_1_before},
  {"extern", galgasScanner3_1_extern},
  {"getter", galgasScanner3_1_getter},
  {"insert", galgasScanner3_1_insert},
  {"method", galgasScanner3_1_method},
  {"option", galgasScanner3_1_option},
  {"public", galgasScanner3_1_public},
  {"remove", galgasScanner3_1_remove},
  {"repeat", galgasScanner3_1_repeat},
  {"rewind", galgasScanner3_1_rewind},
  {"search", galgasScanner3_1_search},
  {"select", galgasScanner3_1_select},
  {"setter", galgasScanner3_1_setter},
  {"struct", galgasScanner3_1_struct},
  {"switch", galgasScanner3_1_switch},
  {"syntax", galgasScanner3_1_syntax},
  {"unused", galgasScanner3_1_unused},
  {"between", galgasScanner3_1_between},
  {"boolset", galgasScanner3_1_boolset},
  {"default", galgasScanner3_1_default},
  {"grammar", galgasScanner3_1_grammar},
  {"lexique", galgasScanner3_1_lexique},
  {"message", galgasScanner3_1_message},
  {"private", galgasScanner3_1_private},
  {"project", galgasScanner3_1_project},
  {"replace", galgasScanner3_1_replace},
  {"warning", galgasScanner3_1_warning},
  {"abstract", galgasScanner3_1_abstract},
  {"indexing", galgasScanner3_1_indexing},
  {"mutating", galgasScanner3_1_mutating},
  {"operator", galgasScanner3_1_operator},
  {"override", galgasScanner3_1_override},
  {"template", galgasScanner3_1_template},
  {"extension", galgasScanner3_1_extension},
  {"protected", galgasScanner3_1_protected},
  {"typealias", galgasScanner3_1_typealias},
  {"sortedlist", galgasScanner3_1_sortedlist},
  {"valueclass", galgasScanner3_1_valueclass},
  {"fileprivate", galgasScanner3_1_fileprivate},
  {"filewrapper", galgasScanner3_1_filewrapper}
} ;

static NSInteger search_into_galgasScanner_33__galgasKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_galgasScanner_33__galgasKeyWordList, 93) ;
}


//--------------------------------------------------------------------------------------------------
//
//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

- (BOOL) internalParseLexicalTokenForLexicalColoring {
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
    BOOL loop7074 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (mPreviousChar)) ;
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop7074 = NO ;
      }
    }while (loop7074 && scanningOk) ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_galgasScanner_33__galgasKeyWordList (mLexicalAttribute_identifierString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = galgasScanner3_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputString:@"0x" advance:YES])) {
    BOOL loop7795 = YES ;
    do {
      if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop7795 = NO ;
      }
    }while (loop7795 && scanningOk) ;
    if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      BOOL loop7924 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop7924 = NO ;
        }
      }while (loop7924 && scanningOk) ;
      scanner_cocoa_routine_convertHexStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasScanner3_1_literalInt ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
    BOOL loop8259 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop8259 = NO ;
      }
    }while (loop8259 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:46])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
      BOOL loop8430 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop8430 = NO ;
        }
      }while (loop8430 && scanningOk) ;
      scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
      mTokenCode = galgasScanner3_1_double_2E_xxx ;
    }else{
      scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasScanner3_1_literalInt ;
    }
  }else if (scanningOk && ([self testForInputChar:37])) {
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop10346 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:45] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          loop10346 = NO ;
        }
      }while (loop10346 && scanningOk) ;
    }else{
      scanningOk = NO ;
    }
    if (mTokenCode == 0) {
      mTokenCode = search_into_galgasScanner_33__attributeKeyWordList (mLexicalAttribute_tokenString) ;
    }
    if (mTokenCode == 0) {
      scanningOk = NO ;
    }
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
      mTokenCode = galgasScanner3_1__27_char_27_ ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputChar:36])) {
    if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
      BOOL loop15591 = YES ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop15591 = NO ;
        }
      }while (loop15591 && scanningOk) ;
    }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
      BOOL loop15909 = YES ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop15909 = NO ;
        }
      }while (loop15909 && scanningOk) ;
    }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      BOOL loop16287 = YES ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop16287 = NO ;
        }
      }while (loop16287 && scanningOk) ;
    }else{
      scanningOk = NO ;
    }
    if (scanningOk && ([self testForInputChar:36])) {
    }else{
      scanningOk = NO ;
    }
    mTokenCode = galgasScanner3_1__24_terminal_24_ ;
  }else if (scanningOk && ([self testForInputChar:35])) {
    if (scanningOk && ([self testForInputChar:33])) {
      BOOL loop16951 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          loop16951 = NO ;
        }
      }while (loop16951 && scanningOk) ;
      mTokenCode = galgasScanner3_1_commentMark ;
    }else{
      BOOL loop17081 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:1114111])) {
        }else{
          loop17081 = NO ;
        }
      }while (loop17081 && scanningOk) ;
      mTokenCode = galgasScanner3_1_comment ;
    }
  }else if (scanningOk && ([self testForInputString:@"//" advance:YES])) {
    if (scanningOk && ([self testForInputChar:33])) {
      BOOL loop17244 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          loop17244 = NO ;
        }
      }while (loop17244 && scanningOk) ;
      mTokenCode = galgasScanner3_1_commentMark ;
    }else{
      BOOL loop17374 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:1114111])) {
        }else{
          loop17374 = NO ;
        }
      }while (loop17374 && scanningOk) ;
      mTokenCode = galgasScanner3_1_comment ;
    }
  }else if (scanningOk && [self testForInputString:@"===" advance:YES]) {
    mTokenCode = galgasScanner3_1__3D__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"..<" advance:YES]) {
    mTokenCode = galgasScanner3_1__2E__2E__3C_ ;
  }else if (scanningOk && [self testForInputString:@"..." advance:YES]) {
    mTokenCode = galgasScanner3_1__2E__2E__2E_ ;
  }else if (scanningOk && [self testForInputString:@"++=" advance:YES]) {
    mTokenCode = galgasScanner3_1__2B__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&--" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&++" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"!==" advance:YES]) {
    mTokenCode = galgasScanner3_1__21__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"||" advance:YES]) {
    mTokenCode = galgasScanner3_1__7C__7C_ ;
  }else if (scanningOk && [self testForInputString:@"|=" advance:YES]) {
    mTokenCode = galgasScanner3_1__7C__3D_ ;
  }else if (scanningOk && [self testForInputString:@"^=" advance:YES]) {
    mTokenCode = galgasScanner3_1__5E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"@{" advance:YES]) {
    mTokenCode = galgasScanner3_1__40__7B_ ;
  }else if (scanningOk && [self testForInputString:@"@[" advance:YES]) {
    mTokenCode = galgasScanner3_1__40__5B_ ;
  }else if (scanningOk && [self testForInputString:@"@(" advance:YES]) {
    mTokenCode = galgasScanner3_1__40__28_ ;
  }else if (scanningOk && [self testForInputString:@"\?^" advance:YES]) {
    mTokenCode = galgasScanner3_1__3F__5E_ ;
  }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
    mTokenCode = galgasScanner3_1__3E__3E_ ;
  }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
    mTokenCode = galgasScanner3_1__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
    mTokenCode = galgasScanner3_1__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@":>" advance:YES]) {
    mTokenCode = galgasScanner3_1__3A__3E_ ;
  }else if (scanningOk && [self testForInputString:@"/=" advance:YES]) {
    mTokenCode = galgasScanner3_1__2F__3D_ ;
  }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
    mTokenCode = galgasScanner3_1__2D__3E_ ;
  }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
    mTokenCode = galgasScanner3_1__2D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"--" advance:YES]) {
    mTokenCode = galgasScanner3_1__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
    mTokenCode = galgasScanner3_1__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"++" advance:YES]) {
    mTokenCode = galgasScanner3_1__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*=" advance:YES]) {
    mTokenCode = galgasScanner3_1__2A__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&=" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&/" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__2F_ ;
  }else if (scanningOk && [self testForInputString:@"&-" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&+" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__2B_ ;
  }else if (scanningOk && [self testForInputString:@"&*" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__2A_ ;
  }else if (scanningOk && [self testForInputString:@"&&" advance:YES]) {
    mTokenCode = galgasScanner3_1__26__26_ ;
  }else if (scanningOk && [self testForInputString:@"!^" advance:YES]) {
    mTokenCode = galgasScanner3_1__21__5E_ ;
  }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
    mTokenCode = galgasScanner3_1__21__3D_ ;
  }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
    mTokenCode = galgasScanner3_1__7E_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = galgasScanner3_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = galgasScanner3_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = galgasScanner3_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"`" advance:YES]) {
    mTokenCode = galgasScanner3_1__60_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = galgasScanner3_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = galgasScanner3_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = galgasScanner3_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = galgasScanner3_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = galgasScanner3_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = galgasScanner3_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = galgasScanner3_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
    mTokenCode = galgasScanner3_1__2F_ ;
  }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
    mTokenCode = galgasScanner3_1__2E_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = galgasScanner3_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = galgasScanner3_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
    mTokenCode = galgasScanner3_1__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
    mTokenCode = galgasScanner3_1__2A_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = galgasScanner3_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = galgasScanner3_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = galgasScanner3_1__26_ ;
  }else if (scanningOk && ([self testForInputChar:64])) {
    if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      BOOL loop18439 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          loop18439 = NO ;
        }
      }while (loop18439 && scanningOk) ;
      mTokenCode = galgasScanner3_1__40_type ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputString:@"\?!" advance:YES])) {
    scanningPointStructForCocoa locationForTag_onlyInterrogationExclamationMark ;
    [self saveScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop19410 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop19410 = NO ;
        }
      }while (loop19410 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner3_1__3F__21_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
        mTokenCode = galgasScanner3_1__3F__21_ ;
      }
    }else{
      mTokenCode = galgasScanner3_1__3F__21_ ;
    }
  }else if (scanningOk && ([self testForInputChar:63])) {
    scanningPointStructForCocoa locationForTag_onlyInterrogationMark ;
    [self saveScanningPoint: & locationForTag_onlyInterrogationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop19795 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop19795 = NO ;
        }
      }while (loop19795 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner3_1__3F_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyInterrogationMark] ;
        mTokenCode = galgasScanner3_1__3F_ ;
      }
    }else{
      mTokenCode = galgasScanner3_1__3F_ ;
    }
  }else if (scanningOk && ([self testForInputString:@"!\?" advance:YES])) {
    scanningPointStructForCocoa locationForTag_onlyExclamationInterrogationMark ;
    [self saveScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop20178 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:95])) {
        }else{
          loop20178 = NO ;
        }
      }while (loop20178 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner3_1__21__3F_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
        mTokenCode = galgasScanner3_1__21__3F_ ;
      }
    }else{
      mTokenCode = galgasScanner3_1__21__3F_ ;
    }
  }else if (scanningOk && ([self testForInputChar:33])) {
    scanningPointStructForCocoa locationForTag_onlyExclamationMark ;
    [self saveScanningPoint: & locationForTag_onlyExclamationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop20548 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop20548 = NO ;
        }
      }while (loop20548 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner3_1__21_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyExclamationMark] ;
        mTokenCode = galgasScanner3_1__21_ ;
      }
    }else{
      mTokenCode = galgasScanner3_1__21_ ;
    }
  }else if (scanningOk && ([self testForInputChar:60])) {
    scanningPointStructForCocoa locationForTag_onlyInfDelimiter ;
    [self saveScanningPoint: & locationForTag_onlyInfDelimiter] ;
    if (scanningOk && ([self testForInputChar:61])) {
      mTokenCode = galgasScanner3_1__3C__3D_ ;
    }else if (scanningOk && ([self testForInputChar:60])) {
      mTokenCode = galgasScanner3_1__3C__3C_ ;
    }else if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop21329 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop21329 = NO ;
        }
      }while (loop21329 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:62])) {
        mTokenCode = galgasScanner3_1__3C_non_5F_terminal_3E_ ;
      }else{
        [self restoreScanningPoint: & locationForTag_onlyInfDelimiter] ;
        mTokenCode = galgasScanner3_1__3C_ ;
      }
    }else{
      mTokenCode = galgasScanner3_1__3C_ ;
    }
  }else if (scanningOk && ([self testForInputChar:34])) {
    BOOL loop21858 = YES ;
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
        loop21858 = NO ;
      }
    }while (loop21858 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = galgasScanner3_1__22_string_22_ ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = galgasScanner3_1_ ; // Empty string code
  }else{ // Unknown input character
    scanningOk = NO ;
    [self advance] ;
  }
  return scanningOk ;
}

//--------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//                   T E R M I N A L    C O U N T
//
//--------------------------------------------------------------------------------------------------

- (NSUInteger) terminalVocabularyCount {
  return 198 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     S T Y L E   C O U N T
//
//--------------------------------------------------------------------------------------------------

- (NSUInteger) styleCount {
  return 13 ;
}

//--------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

- (BOOL) isTemplateLexique {
  return NO ;
}

//--------------------------------------------------------------------------------------------------
//
//   S T Y L E   I N D E X    F O R    T E R M I N A L
//
//--------------------------------------------------------------------------------------------------

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [199] = {0,
    0 /* galgasScanner3_1_identifier */,
    7 /* galgasScanner3_1_double_2E_xxx */,
    6 /* galgasScanner3_1_literalInt */,
    8 /* galgasScanner3_1__27_char_27_ */,
    4 /* galgasScanner3_1__24_terminal_24_ */,
    12 /* galgasScanner3_1_comment */,
    12 /* galgasScanner3_1_commentMark */,
    10 /* galgasScanner3_1__40_type */,
    3 /* galgasScanner3_1__3F_selector_3A_ */,
    2 /* galgasScanner3_1__3F_ */,
    3 /* galgasScanner3_1__3F__21_selector_3A_ */,
    2 /* galgasScanner3_1__3F__21_ */,
    3 /* galgasScanner3_1__21_selector_3A_ */,
    2 /* galgasScanner3_1__21_ */,
    3 /* galgasScanner3_1__21__3F_selector_3A_ */,
    2 /* galgasScanner3_1__21__3F_ */,
    2 /* galgasScanner3_1__3C_ */,
    2 /* galgasScanner3_1__3C__3D_ */,
    2 /* galgasScanner3_1__3C__3C_ */,
    5 /* galgasScanner3_1__3C_non_5F_terminal_3E_ */,
    9 /* galgasScanner3_1__22_string_22_ */,
    1 /* galgasScanner3_1_abstract */,
    1 /* galgasScanner3_1_after */,
    1 /* galgasScanner3_1_as */,
    1 /* galgasScanner3_1_bang */,
    1 /* galgasScanner3_1_before */,
    1 /* galgasScanner3_1_between */,
    1 /* galgasScanner3_1_block */,
    1 /* galgasScanner3_1_boolset */,
    1 /* galgasScanner3_1_cast */,
    1 /* galgasScanner3_1_case */,
    1 /* galgasScanner3_1_class */,
    1 /* galgasScanner3_1_default */,
    1 /* galgasScanner3_1_dict */,
    1 /* galgasScanner3_1_do */,
    1 /* galgasScanner3_1_drop */,
    1 /* galgasScanner3_1_else */,
    1 /* galgasScanner3_1_elsif */,
    1 /* galgasScanner3_1_end */,
    1 /* galgasScanner3_1_enum */,
    1 /* galgasScanner3_1_error */,
    1 /* galgasScanner3_1_extension */,
    1 /* galgasScanner3_1_extern */,
    1 /* galgasScanner3_1_false */,
    1 /* galgasScanner3_1_fileprivate */,
    1 /* galgasScanner3_1_filewrapper */,
    1 /* galgasScanner3_1_for */,
    1 /* galgasScanner3_1_final */,
    1 /* galgasScanner3_1_fixit */,
    1 /* galgasScanner3_1_func */,
    1 /* galgasScanner3_1_getter */,
    1 /* galgasScanner3_1_grammar */,
    1 /* galgasScanner3_1_graph */,
    1 /* galgasScanner3_1_guard */,
    1 /* galgasScanner3_1_gui */,
    1 /* galgasScanner3_1_if */,
    1 /* galgasScanner3_1_in */,
    1 /* galgasScanner3_1_indexing */,
    1 /* galgasScanner3_1_init */,
    1 /* galgasScanner3_1_insert */,
    1 /* galgasScanner3_1_is */,
    1 /* galgasScanner3_1_label */,
    1 /* galgasScanner3_1_let */,
    1 /* galgasScanner3_1_lexique */,
    1 /* galgasScanner3_1_list */,
    1 /* galgasScanner3_1_log */,
    1 /* galgasScanner3_1_loop */,
    1 /* galgasScanner3_1_map */,
    1 /* galgasScanner3_1_message */,
    1 /* galgasScanner3_1_method */,
    1 /* galgasScanner3_1_mod */,
    1 /* galgasScanner3_1_mutating */,
    1 /* galgasScanner3_1_nil */,
    1 /* galgasScanner3_1_not */,
    1 /* galgasScanner3_1_on */,
    1 /* galgasScanner3_1_operator */,
    1 /* galgasScanner3_1_option */,
    1 /* galgasScanner3_1_or */,
    1 /* galgasScanner3_1_override */,
    1 /* galgasScanner3_1_parse */,
    1 /* galgasScanner3_1_public */,
    1 /* galgasScanner3_1_protected */,
    1 /* galgasScanner3_1_private */,
    1 /* galgasScanner3_1_proc */,
    1 /* galgasScanner3_1_project */,
    1 /* galgasScanner3_1_remove */,
    1 /* galgasScanner3_1_repeat */,
    1 /* galgasScanner3_1_replace */,
    1 /* galgasScanner3_1_rewind */,
    1 /* galgasScanner3_1_rule */,
    1 /* galgasScanner3_1_search */,
    1 /* galgasScanner3_1_select */,
    1 /* galgasScanner3_1_self */,
    1 /* galgasScanner3_1_send */,
    1 /* galgasScanner3_1_setter */,
    1 /* galgasScanner3_1_sortedlist */,
    1 /* galgasScanner3_1_spoil */,
    1 /* galgasScanner3_1_struct */,
    1 /* galgasScanner3_1_style */,
    1 /* galgasScanner3_1_super */,
    1 /* galgasScanner3_1_switch */,
    1 /* galgasScanner3_1_syntax */,
    1 /* galgasScanner3_1_tag */,
    1 /* galgasScanner3_1_template */,
    1 /* galgasScanner3_1_then */,
    1 /* galgasScanner3_1_true */,
    1 /* galgasScanner3_1_typealias */,
    1 /* galgasScanner3_1_unused */,
    1 /* galgasScanner3_1_valueclass */,
    1 /* galgasScanner3_1_var */,
    1 /* galgasScanner3_1_warning */,
    1 /* galgasScanner3_1_weak */,
    1 /* galgasScanner3_1_while */,
    1 /* galgasScanner3_1_with */,
    11 /* galgasScanner3_1__25_app_2D_link */,
    11 /* galgasScanner3_1__25_app_2D_source */,
    11 /* galgasScanner3_1__25_applicationBundleBase */,
    11 /* galgasScanner3_1__25_clonable */,
    11 /* galgasScanner3_1__25_codeblocks_2D_linux_33__32_ */,
    11 /* galgasScanner3_1__25_codeblocks_2D_linux_36__34_ */,
    11 /* galgasScanner3_1__25_codeblocks_2D_windows */,
    11 /* galgasScanner3_1__25_comparable */,
    11 /* galgasScanner3_1__25_equatable */,
    11 /* galgasScanner3_1__25_from */,
    11 /* galgasScanner3_1__25_generatedInSeparateFile */,
    11 /* galgasScanner3_1__25_initArgLabel */,
    11 /* galgasScanner3_1__25_libpmAtPath */,
    11 /* galgasScanner3_1__25_MacOS */,
    11 /* galgasScanner3_1__25_MacSwiftApp */,
    11 /* galgasScanner3_1__25_MacOSDeployment */,
    11 /* galgasScanner3_1__25_macCodeSign */,
    11 /* galgasScanner3_1__25_makefile_2D_macosx */,
    11 /* galgasScanner3_1__25_makefile_2D_unix */,
    11 /* galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    11 /* galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner3_1__25_nonAtomicSelection */,
    11 /* galgasScanner3_1__25_once */,
    11 /* galgasScanner3_1__25_preserved */,
    11 /* galgasScanner3_1__25_quietOutputByDefault */,
    11 /* galgasScanner3_1__25_templateEndMark */,
    11 /* galgasScanner3_1__25_tool_2D_source */,
    11 /* galgasScanner3_1__25_translate */,
    11 /* galgasScanner3_1__25_usefull */,
    2 /* galgasScanner3_1__2A_ */,
    2 /* galgasScanner3_1__2C_ */,
    2 /* galgasScanner3_1__2B_ */,
    2 /* galgasScanner3_1__26__2B_ */,
    2 /* galgasScanner3_1__26__2D_ */,
    2 /* galgasScanner3_1__26__2A_ */,
    2 /* galgasScanner3_1__26__2F_ */,
    2 /* galgasScanner3_1__3E_ */,
    2 /* galgasScanner3_1__3B_ */,
    2 /* galgasScanner3_1__3A_ */,
    2 /* galgasScanner3_1__3A__3E_ */,
    2 /* galgasScanner3_1__2D_ */,
    2 /* galgasScanner3_1__28_ */,
    2 /* galgasScanner3_1__29_ */,
    2 /* galgasScanner3_1__2D__3E_ */,
    2 /* galgasScanner3_1__3D__3D_ */,
    2 /* galgasScanner3_1__3D_ */,
    2 /* galgasScanner3_1__26__26_ */,
    2 /* galgasScanner3_1__5B_ */,
    2 /* galgasScanner3_1__5D_ */,
    2 /* galgasScanner3_1__2B__2B__3D_ */,
    2 /* galgasScanner3_1__2E_ */,
    2 /* galgasScanner3_1__2E__2E__2E_ */,
    2 /* galgasScanner3_1__2E__2E__3C_ */,
    2 /* galgasScanner3_1__40__7B_ */,
    2 /* galgasScanner3_1__40__28_ */,
    2 /* galgasScanner3_1__40__5B_ */,
    2 /* galgasScanner3_1__2B__3D_ */,
    2 /* galgasScanner3_1__2D__3D_ */,
    2 /* galgasScanner3_1__2A__3D_ */,
    2 /* galgasScanner3_1__2F__3D_ */,
    2 /* galgasScanner3_1__26__3D_ */,
    2 /* galgasScanner3_1__7C__3D_ */,
    2 /* galgasScanner3_1__5E__3D_ */,
    2 /* galgasScanner3_1__2F_ */,
    2 /* galgasScanner3_1__21__3D_ */,
    2 /* galgasScanner3_1__3E__3D_ */,
    2 /* galgasScanner3_1__26_ */,
    2 /* galgasScanner3_1__7B_ */,
    2 /* galgasScanner3_1__7D_ */,
    2 /* galgasScanner3_1__60_ */,
    2 /* galgasScanner3_1__7C__7C_ */,
    2 /* galgasScanner3_1__7C_ */,
    2 /* galgasScanner3_1__5E_ */,
    2 /* galgasScanner3_1__3E__3E_ */,
    2 /* galgasScanner3_1__7E_ */,
    2 /* galgasScanner3_1__2D__2D_ */,
    2 /* galgasScanner3_1__2B__2B_ */,
    2 /* galgasScanner3_1__26__2D__2D_ */,
    2 /* galgasScanner3_1__26__2B__2B_ */,
    2 /* galgasScanner3_1__3D__3D__3D_ */,
    2 /* galgasScanner3_1__21__3D__3D_ */,
    2 /* galgasScanner3_1__3F__5E_ */,
    2 /* galgasScanner3_1__21__5E_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//--------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//--------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [199] = {NO,
    YES /* galgasScanner3_1_identifier */,
    YES /* galgasScanner3_1_double_2E_xxx */,
    YES /* galgasScanner3_1_literalInt */,
    YES /* galgasScanner3_1__27_char_27_ */,
    YES /* galgasScanner3_1__24_terminal_24_ */,
    NO /* galgasScanner3_1_comment */,
    NO /* galgasScanner3_1_commentMark */,
    YES /* galgasScanner3_1__40_type */,
    YES /* galgasScanner3_1__3F_selector_3A_ */,
    YES /* galgasScanner3_1__3F_ */,
    YES /* galgasScanner3_1__3F__21_selector_3A_ */,
    YES /* galgasScanner3_1__3F__21_ */,
    YES /* galgasScanner3_1__21_selector_3A_ */,
    YES /* galgasScanner3_1__21_ */,
    YES /* galgasScanner3_1__21__3F_selector_3A_ */,
    YES /* galgasScanner3_1__21__3F_ */,
    YES /* galgasScanner3_1__3C_ */,
    YES /* galgasScanner3_1__3C__3D_ */,
    YES /* galgasScanner3_1__3C__3C_ */,
    YES /* galgasScanner3_1__3C_non_5F_terminal_3E_ */,
    NO /* galgasScanner3_1__22_string_22_ */,
    YES /* galgasScanner3_1_abstract */,
    YES /* galgasScanner3_1_after */,
    YES /* galgasScanner3_1_as */,
    YES /* galgasScanner3_1_bang */,
    YES /* galgasScanner3_1_before */,
    YES /* galgasScanner3_1_between */,
    YES /* galgasScanner3_1_block */,
    YES /* galgasScanner3_1_boolset */,
    YES /* galgasScanner3_1_cast */,
    YES /* galgasScanner3_1_case */,
    YES /* galgasScanner3_1_class */,
    YES /* galgasScanner3_1_default */,
    YES /* galgasScanner3_1_dict */,
    YES /* galgasScanner3_1_do */,
    YES /* galgasScanner3_1_drop */,
    YES /* galgasScanner3_1_else */,
    YES /* galgasScanner3_1_elsif */,
    YES /* galgasScanner3_1_end */,
    YES /* galgasScanner3_1_enum */,
    YES /* galgasScanner3_1_error */,
    YES /* galgasScanner3_1_extension */,
    YES /* galgasScanner3_1_extern */,
    YES /* galgasScanner3_1_false */,
    YES /* galgasScanner3_1_fileprivate */,
    YES /* galgasScanner3_1_filewrapper */,
    YES /* galgasScanner3_1_for */,
    YES /* galgasScanner3_1_final */,
    YES /* galgasScanner3_1_fixit */,
    YES /* galgasScanner3_1_func */,
    YES /* galgasScanner3_1_getter */,
    YES /* galgasScanner3_1_grammar */,
    YES /* galgasScanner3_1_graph */,
    YES /* galgasScanner3_1_guard */,
    YES /* galgasScanner3_1_gui */,
    YES /* galgasScanner3_1_if */,
    YES /* galgasScanner3_1_in */,
    YES /* galgasScanner3_1_indexing */,
    YES /* galgasScanner3_1_init */,
    YES /* galgasScanner3_1_insert */,
    YES /* galgasScanner3_1_is */,
    YES /* galgasScanner3_1_label */,
    YES /* galgasScanner3_1_let */,
    YES /* galgasScanner3_1_lexique */,
    YES /* galgasScanner3_1_list */,
    YES /* galgasScanner3_1_log */,
    YES /* galgasScanner3_1_loop */,
    YES /* galgasScanner3_1_map */,
    YES /* galgasScanner3_1_message */,
    YES /* galgasScanner3_1_method */,
    YES /* galgasScanner3_1_mod */,
    YES /* galgasScanner3_1_mutating */,
    YES /* galgasScanner3_1_nil */,
    YES /* galgasScanner3_1_not */,
    YES /* galgasScanner3_1_on */,
    YES /* galgasScanner3_1_operator */,
    YES /* galgasScanner3_1_option */,
    YES /* galgasScanner3_1_or */,
    YES /* galgasScanner3_1_override */,
    YES /* galgasScanner3_1_parse */,
    YES /* galgasScanner3_1_public */,
    YES /* galgasScanner3_1_protected */,
    YES /* galgasScanner3_1_private */,
    YES /* galgasScanner3_1_proc */,
    YES /* galgasScanner3_1_project */,
    YES /* galgasScanner3_1_remove */,
    YES /* galgasScanner3_1_repeat */,
    YES /* galgasScanner3_1_replace */,
    YES /* galgasScanner3_1_rewind */,
    YES /* galgasScanner3_1_rule */,
    YES /* galgasScanner3_1_search */,
    YES /* galgasScanner3_1_select */,
    YES /* galgasScanner3_1_self */,
    YES /* galgasScanner3_1_send */,
    YES /* galgasScanner3_1_setter */,
    YES /* galgasScanner3_1_sortedlist */,
    YES /* galgasScanner3_1_spoil */,
    YES /* galgasScanner3_1_struct */,
    YES /* galgasScanner3_1_style */,
    YES /* galgasScanner3_1_super */,
    YES /* galgasScanner3_1_switch */,
    YES /* galgasScanner3_1_syntax */,
    YES /* galgasScanner3_1_tag */,
    YES /* galgasScanner3_1_template */,
    YES /* galgasScanner3_1_then */,
    YES /* galgasScanner3_1_true */,
    YES /* galgasScanner3_1_typealias */,
    YES /* galgasScanner3_1_unused */,
    YES /* galgasScanner3_1_valueclass */,
    YES /* galgasScanner3_1_var */,
    YES /* galgasScanner3_1_warning */,
    YES /* galgasScanner3_1_weak */,
    YES /* galgasScanner3_1_while */,
    YES /* galgasScanner3_1_with */,
    YES /* galgasScanner3_1__25_app_2D_link */,
    YES /* galgasScanner3_1__25_app_2D_source */,
    YES /* galgasScanner3_1__25_applicationBundleBase */,
    YES /* galgasScanner3_1__25_clonable */,
    YES /* galgasScanner3_1__25_codeblocks_2D_linux_33__32_ */,
    YES /* galgasScanner3_1__25_codeblocks_2D_linux_36__34_ */,
    YES /* galgasScanner3_1__25_codeblocks_2D_windows */,
    YES /* galgasScanner3_1__25_comparable */,
    YES /* galgasScanner3_1__25_equatable */,
    YES /* galgasScanner3_1__25_from */,
    YES /* galgasScanner3_1__25_generatedInSeparateFile */,
    YES /* galgasScanner3_1__25_initArgLabel */,
    YES /* galgasScanner3_1__25_libpmAtPath */,
    YES /* galgasScanner3_1__25_MacOS */,
    YES /* galgasScanner3_1__25_MacSwiftApp */,
    YES /* galgasScanner3_1__25_MacOSDeployment */,
    YES /* galgasScanner3_1__25_macCodeSign */,
    YES /* galgasScanner3_1__25_makefile_2D_macosx */,
    YES /* galgasScanner3_1__25_makefile_2D_unix */,
    YES /* galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    YES /* galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    YES /* galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    YES /* galgasScanner3_1__25_nonAtomicSelection */,
    YES /* galgasScanner3_1__25_once */,
    YES /* galgasScanner3_1__25_preserved */,
    YES /* galgasScanner3_1__25_quietOutputByDefault */,
    YES /* galgasScanner3_1__25_templateEndMark */,
    YES /* galgasScanner3_1__25_tool_2D_source */,
    YES /* galgasScanner3_1__25_translate */,
    YES /* galgasScanner3_1__25_usefull */,
    YES /* galgasScanner3_1__2A_ */,
    YES /* galgasScanner3_1__2C_ */,
    YES /* galgasScanner3_1__2B_ */,
    YES /* galgasScanner3_1__26__2B_ */,
    YES /* galgasScanner3_1__26__2D_ */,
    YES /* galgasScanner3_1__26__2A_ */,
    YES /* galgasScanner3_1__26__2F_ */,
    YES /* galgasScanner3_1__3E_ */,
    YES /* galgasScanner3_1__3B_ */,
    YES /* galgasScanner3_1__3A_ */,
    YES /* galgasScanner3_1__3A__3E_ */,
    YES /* galgasScanner3_1__2D_ */,
    YES /* galgasScanner3_1__28_ */,
    YES /* galgasScanner3_1__29_ */,
    YES /* galgasScanner3_1__2D__3E_ */,
    YES /* galgasScanner3_1__3D__3D_ */,
    YES /* galgasScanner3_1__3D_ */,
    YES /* galgasScanner3_1__26__26_ */,
    YES /* galgasScanner3_1__5B_ */,
    YES /* galgasScanner3_1__5D_ */,
    YES /* galgasScanner3_1__2B__2B__3D_ */,
    YES /* galgasScanner3_1__2E_ */,
    YES /* galgasScanner3_1__2E__2E__2E_ */,
    YES /* galgasScanner3_1__2E__2E__3C_ */,
    YES /* galgasScanner3_1__40__7B_ */,
    YES /* galgasScanner3_1__40__28_ */,
    YES /* galgasScanner3_1__40__5B_ */,
    YES /* galgasScanner3_1__2B__3D_ */,
    YES /* galgasScanner3_1__2D__3D_ */,
    YES /* galgasScanner3_1__2A__3D_ */,
    YES /* galgasScanner3_1__2F__3D_ */,
    YES /* galgasScanner3_1__26__3D_ */,
    YES /* galgasScanner3_1__7C__3D_ */,
    YES /* galgasScanner3_1__5E__3D_ */,
    YES /* galgasScanner3_1__2F_ */,
    YES /* galgasScanner3_1__21__3D_ */,
    YES /* galgasScanner3_1__3E__3D_ */,
    YES /* galgasScanner3_1__26_ */,
    YES /* galgasScanner3_1__7B_ */,
    YES /* galgasScanner3_1__7D_ */,
    YES /* galgasScanner3_1__60_ */,
    YES /* galgasScanner3_1__7C__7C_ */,
    YES /* galgasScanner3_1__7C_ */,
    YES /* galgasScanner3_1__5E_ */,
    YES /* galgasScanner3_1__3E__3E_ */,
    YES /* galgasScanner3_1__7E_ */,
    YES /* galgasScanner3_1__2D__2D_ */,
    YES /* galgasScanner3_1__2B__2B_ */,
    YES /* galgasScanner3_1__26__2D__2D_ */,
    YES /* galgasScanner3_1__26__2B__2B_ */,
    YES /* galgasScanner3_1__3D__3D__3D_ */,
    YES /* galgasScanner3_1__21__3D__3D_ */,
    YES /* galgasScanner3_1__3F__5E_ */,
    YES /* galgasScanner3_1__21__5E_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//--------------------------------------------------------------------------------------------------
//
//             S T Y L E   N A M E    F O R    I N D E X
//
//--------------------------------------------------------------------------------------------------

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 13)) {
    NSString * kStyleArray [13] = {
      @"Default Style",
      @"Keywords",
      @"Delimiters",
      @"Selectors",
      @"Terminal Symbols",
      @"Non Terminal Symbols",
      @"Integer Constants",
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

//--------------------------------------------------------------------------------------------------
//
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X
//
//--------------------------------------------------------------------------------------------------

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 13)) {
    NSString * kStyleArray [13] = {
      @"galgasScanner3",
      @"galgasScanner3-keywordsStyle",
      @"galgasScanner3-delimitersStyle",
      @"galgasScanner3-selectorStyle",
      @"galgasScanner3-terminalStyle",
      @"galgasScanner3-nonTerminalStyle",
      @"galgasScanner3-integerStyle",
      @"galgasScanner3-floatStyle",
      @"galgasScanner3-characterStyle",
      @"galgasScanner3-stringStyle",
      @"galgasScanner3-typeNameStyle",
      @"galgasScanner3-attributeStyle",
      @"galgasScanner3-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//--------------------------------------------------------------------------------------------------

- (NSString *) lexiqueIdentifier {
  return @"galgasScanner3" ;
}

//--------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


