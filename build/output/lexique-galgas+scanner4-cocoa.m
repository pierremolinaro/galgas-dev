//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-galgas+scanner4-cocoa.h"
#import "PMDebug.h"

//--------------------------------------------------------------------------------------------------

@implementation OC_Lexique_galgasScanner4

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

static const C_cocoa_lexique_table_entry ktable_for_galgasScanner_34__attributeKeyWordList [44] = {
  {"from", galgasScanner4_1__25_from},
  {"once", galgasScanner4_1__25_once},
  {"MacOS", galgasScanner4_1__25_MacOS},
  {"remove", galgasScanner4_1__25_remove},
  {"usefull", galgasScanner4_1__25_usefull},
  {"app-link", galgasScanner4_1__25_app_2D_link},
  {"clonable", galgasScanner4_1__25_clonable},
  {"equatable", galgasScanner4_1__25_equatable},
  {"preserved", galgasScanner4_1__25_preserved},
  {"replaceBy", galgasScanner4_1__25_replaceBy},
  {"translate", galgasScanner4_1__25_translate},
  {"app-source", galgasScanner4_1__25_app_2D_source},
  {"comparable", galgasScanner4_1__25_comparable},
  {"MacSwiftApp", galgasScanner4_1__25_MacSwiftApp},
  {"insertAfter", galgasScanner4_1__25_insertAfter},
  {"libpmAtPath", galgasScanner4_1__25_libpmAtPath},
  {"macCodeSign", galgasScanner4_1__25_macCodeSign},
  {"tool-source", galgasScanner4_1__25_tool_2D_source},
  {"errorMessage", galgasScanner4_1__25_errorMessage},
  {"initArgLabel", galgasScanner4_1__25_initArgLabel},
  {"insertBefore", galgasScanner4_1__25_insertBefore},
  {"insertSetter", galgasScanner4_1__25_insertSetter},
  {"removeSetter", galgasScanner4_1__25_removeSetter},
  {"searchMethod", galgasScanner4_1__25_searchMethod},
  {"searchString", galgasScanner4_1__25_searchString},
  {"makefile-unix", galgasScanner4_1__25_makefile_2D_unix},
  {"replaceSetter", galgasScanner4_1__25_replaceSetter},
  {"MacOSDeployment", galgasScanner4_1__25_MacOSDeployment},
  {"makefile-macosx", galgasScanner4_1__25_makefile_2D_macosx},
  {"searchSubscript", galgasScanner4_1__25_searchSubscript},
  {"templateEndMark", galgasScanner4_1__25_templateEndMark},
  {"codeblocks-linux32", galgasScanner4_1__25_codeblocks_2D_linux_33__32_},
  {"codeblocks-linux64", galgasScanner4_1__25_codeblocks_2D_linux_36__34_},
  {"codeblocks-windows", galgasScanner4_1__25_codeblocks_2D_windows},
  {"nonAtomicSelection", galgasScanner4_1__25_nonAtomicSelection},
  {"templateReplacement", galgasScanner4_1__25_templateReplacement},
  {"quietOutputByDefault", galgasScanner4_1__25_quietOutputByDefault},
  {"applicationBundleBase", galgasScanner4_1__25_applicationBundleBase},
  {"insertOrReplaceSetter", galgasScanner4_1__25_insertOrReplaceSetter},
  {"generatedInSeparateFile", galgasScanner4_1__25_generatedInSeparateFile},
  {"makefile-win32-on-macosx", galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx},
  {"makefile-x86linux32-on-macosx", galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx},
  {"makefile-x86linux64-on-macosx", galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx},
  {"makefile-arm64-linux-on-macosx", galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx}
} ;

static NSInteger search_into_galgasScanner_34__attributeKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_galgasScanner_34__attributeKeyWordList, 44) ;
}

//--------------------------------------------------------------------------------------------------
//
//             Key words table 'galgasKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_galgasScanner_34__galgasKeyWordList [84] = {
  {"as", galgasScanner4_1_as},
  {"do", galgasScanner4_1_do},
  {"if", galgasScanner4_1_if},
  {"in", galgasScanner4_1_in},
  {"is", galgasScanner4_1_is},
  {"on", galgasScanner4_1_on},
  {"or", galgasScanner4_1_or},
  {"end", galgasScanner4_1_end},
  {"for", galgasScanner4_1_for},
  {"gui", galgasScanner4_1_gui},
  {"let", galgasScanner4_1_let},
  {"log", galgasScanner4_1_log},
  {"map", galgasScanner4_1_map},
  {"mod", galgasScanner4_1_mod},
  {"nil", galgasScanner4_1_nil},
  {"not", galgasScanner4_1_not},
  {"tag", galgasScanner4_1_tag},
  {"var", galgasScanner4_1_var},
  {"case", galgasScanner4_1_case},
  {"dict", galgasScanner4_1_dict},
  {"drop", galgasScanner4_1_drop},
  {"else", galgasScanner4_1_else},
  {"enum", galgasScanner4_1_enum},
  {"func", galgasScanner4_1_func},
  {"init", galgasScanner4_1_init},
  {"json", galgasScanner4_1_json},
  {"list", galgasScanner4_1_list},
  {"loop", galgasScanner4_1_loop},
  {"proc", galgasScanner4_1_proc},
  {"rule", galgasScanner4_1_rule},
  {"self", galgasScanner4_1_self},
  {"send", galgasScanner4_1_send},
  {"then", galgasScanner4_1_then},
  {"true", galgasScanner4_1_true},
  {"weak", galgasScanner4_1_weak},
  {"with", galgasScanner4_1_with},
  {"after", galgasScanner4_1_after},
  {"block", galgasScanner4_1_block},
  {"class", galgasScanner4_1_class},
  {"elsif", galgasScanner4_1_elsif},
  {"error", galgasScanner4_1_error},
  {"false", galgasScanner4_1_false},
  {"final", galgasScanner4_1_final},
  {"fixit", galgasScanner4_1_fixit},
  {"graph", galgasScanner4_1_graph},
  {"guard", galgasScanner4_1_guard},
  {"label", galgasScanner4_1_label},
  {"parse", galgasScanner4_1_parse},
  {"spoil", galgasScanner4_1_spoil},
  {"style", galgasScanner4_1_style},
  {"super", galgasScanner4_1_super},
  {"while", galgasScanner4_1_while},
  {"before", galgasScanner4_1_before},
  {"extern", galgasScanner4_1_extern},
  {"option", galgasScanner4_1_option},
  {"public", galgasScanner4_1_public},
  {"repeat", galgasScanner4_1_repeat},
  {"rewind", galgasScanner4_1_rewind},
  {"select", galgasScanner4_1_select},
  {"struct", galgasScanner4_1_struct},
  {"switch", galgasScanner4_1_switch},
  {"syntax", galgasScanner4_1_syntax},
  {"unused", galgasScanner4_1_unused},
  {"between", galgasScanner4_1_between},
  {"boolset", galgasScanner4_1_boolset},
  {"default", galgasScanner4_1_default},
  {"grammar", galgasScanner4_1_grammar},
  {"lexique", galgasScanner4_1_lexique},
  {"package", galgasScanner4_1_package},
  {"private", galgasScanner4_1_private},
  {"project", galgasScanner4_1_project},
  {"warning", galgasScanner4_1_warning},
  {"abstract", galgasScanner4_1_abstract},
  {"indexing", galgasScanner4_1_indexing},
  {"mutating", galgasScanner4_1_mutating},
  {"operator", galgasScanner4_1_operator},
  {"override", galgasScanner4_1_override},
  {"template", galgasScanner4_1_template},
  {"extension", galgasScanner4_1_extension},
  {"protected", galgasScanner4_1_protected},
  {"typealias", galgasScanner4_1_typealias},
  {"sortedlist", galgasScanner4_1_sortedlist},
  {"fileprivate", galgasScanner4_1_fileprivate},
  {"filewrapper", galgasScanner4_1_filewrapper}
} ;

static NSInteger search_into_galgasScanner_34__galgasKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_galgasScanner_34__galgasKeyWordList, 84) ;
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
    BOOL loop6948 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (mPreviousChar)) ;
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop6948 = NO ;
      }
    }while (loop6948 && scanningOk) ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_galgasScanner_34__galgasKeyWordList (mLexicalAttribute_identifierString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = galgasScanner4_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputString:@"0x" advance:YES])) {
    BOOL loop7669 = YES ;
    do {
      if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop7669 = NO ;
      }
    }while (loop7669 && scanningOk) ;
    if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      BOOL loop7798 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop7798 = NO ;
        }
      }while (loop7798 && scanningOk) ;
      scanner_cocoa_routine_convertHexStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasScanner4_1_literalInt ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
    BOOL loop8133 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop8133 = NO ;
      }
    }while (loop8133 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:46])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
      BOOL loop8304 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else if (scanningOk && ([self testForInputChar:95])) {
        }else{
          loop8304 = NO ;
        }
      }while (loop8304 && scanningOk) ;
      scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
      mTokenCode = galgasScanner4_1_double_2E_xxx ;
    }else{
      scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasScanner4_1_literalInt ;
    }
  }else if (scanningOk && ([self testForInputChar:37])) {
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop10823 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:45] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          loop10823 = NO ;
        }
      }while (loop10823 && scanningOk) ;
    }else{
      scanningOk = NO ;
    }
    if (mTokenCode == 0) {
      mTokenCode = search_into_galgasScanner_34__attributeKeyWordList (mLexicalAttribute_tokenString) ;
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
      mTokenCode = galgasScanner4_1__27_char_27_ ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputChar:36])) {
    if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
      BOOL loop16068 = YES ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop16068 = NO ;
        }
      }while (loop16068 && scanningOk) ;
    }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
      BOOL loop16386 = YES ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop16386 = NO ;
        }
      }while (loop16386 && scanningOk) ;
    }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      BOOL loop16764 = YES ;
      do {
        if (scanningOk && ([self testForInputString:@"\\\\" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputString:@"\\$" advance:YES])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 36) ;
        }else if (scanningOk && ([self testForInputFromChar:33 toChar:35] || [self testForInputFromChar:37 toChar:65533])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        }else{
          loop16764 = NO ;
        }
      }while (loop16764 && scanningOk) ;
    }else{
      scanningOk = NO ;
    }
    if (scanningOk && ([self testForInputChar:36])) {
    }else{
      scanningOk = NO ;
    }
    mTokenCode = galgasScanner4_1__24_terminal_24_ ;
  }else if (scanningOk && ([self testForInputString:@"//" advance:YES])) {
    if (scanningOk && ([self testForInputChar:33])) {
      BOOL loop17429 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          loop17429 = NO ;
        }
      }while (loop17429 && scanningOk) ;
      mTokenCode = galgasScanner4_1_commentMark ;
    }else{
      BOOL loop17559 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:1114111])) {
        }else{
          loop17559 = NO ;
        }
      }while (loop17559 && scanningOk) ;
      mTokenCode = galgasScanner4_1_comment ;
    }
  }else if (scanningOk && [self testForInputString:@"===" advance:YES]) {
    mTokenCode = galgasScanner4_1__3D__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"..<" advance:YES]) {
    mTokenCode = galgasScanner4_1__2E__2E__3C_ ;
  }else if (scanningOk && [self testForInputString:@"..." advance:YES]) {
    mTokenCode = galgasScanner4_1__2E__2E__2E_ ;
  }else if (scanningOk && [self testForInputString:@"++=" advance:YES]) {
    mTokenCode = galgasScanner4_1__2B__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&--" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&++" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"!==" advance:YES]) {
    mTokenCode = galgasScanner4_1__21__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"||" advance:YES]) {
    mTokenCode = galgasScanner4_1__7C__7C_ ;
  }else if (scanningOk && [self testForInputString:@"|=" advance:YES]) {
    mTokenCode = galgasScanner4_1__7C__3D_ ;
  }else if (scanningOk && [self testForInputString:@"^=" advance:YES]) {
    mTokenCode = galgasScanner4_1__5E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"@(" advance:YES]) {
    mTokenCode = galgasScanner4_1__40__28_ ;
  }else if (scanningOk && [self testForInputString:@"\?^" advance:YES]) {
    mTokenCode = galgasScanner4_1__3F__5E_ ;
  }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
    mTokenCode = galgasScanner4_1__3E__3E_ ;
  }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
    mTokenCode = galgasScanner4_1__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
    mTokenCode = galgasScanner4_1__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@":>" advance:YES]) {
    mTokenCode = galgasScanner4_1__3A__3E_ ;
  }else if (scanningOk && [self testForInputString:@"/=" advance:YES]) {
    mTokenCode = galgasScanner4_1__2F__3D_ ;
  }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
    mTokenCode = galgasScanner4_1__2D__3E_ ;
  }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
    mTokenCode = galgasScanner4_1__2D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"--" advance:YES]) {
    mTokenCode = galgasScanner4_1__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
    mTokenCode = galgasScanner4_1__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"++" advance:YES]) {
    mTokenCode = galgasScanner4_1__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*=" advance:YES]) {
    mTokenCode = galgasScanner4_1__2A__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&=" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&/" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__2F_ ;
  }else if (scanningOk && [self testForInputString:@"&-" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&+" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__2B_ ;
  }else if (scanningOk && [self testForInputString:@"&*" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__2A_ ;
  }else if (scanningOk && [self testForInputString:@"&&" advance:YES]) {
    mTokenCode = galgasScanner4_1__26__26_ ;
  }else if (scanningOk && [self testForInputString:@"!^" advance:YES]) {
    mTokenCode = galgasScanner4_1__21__5E_ ;
  }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
    mTokenCode = galgasScanner4_1__21__3D_ ;
  }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
    mTokenCode = galgasScanner4_1__7E_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = galgasScanner4_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = galgasScanner4_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = galgasScanner4_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"`" advance:YES]) {
    mTokenCode = galgasScanner4_1__60_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = galgasScanner4_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = galgasScanner4_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = galgasScanner4_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = galgasScanner4_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = galgasScanner4_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = galgasScanner4_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = galgasScanner4_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
    mTokenCode = galgasScanner4_1__2F_ ;
  }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
    mTokenCode = galgasScanner4_1__2E_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = galgasScanner4_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = galgasScanner4_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
    mTokenCode = galgasScanner4_1__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
    mTokenCode = galgasScanner4_1__2A_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = galgasScanner4_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = galgasScanner4_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = galgasScanner4_1__26_ ;
  }else if (scanningOk && ([self testForInputChar:64])) {
    if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      BOOL loop18606 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
        }else{
          loop18606 = NO ;
        }
      }while (loop18606 && scanningOk) ;
    }else{
      scanningOk = NO ;
    }
    mTokenCode = galgasScanner4_1__40_type ;
  }else if (scanningOk && ([self testForInputString:@"\?!" advance:YES])) {
    scanningPointStructForCocoa locationForTag_onlyInterrogationExclamationMark ;
    [self saveScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop19575 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop19575 = NO ;
        }
      }while (loop19575 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner4_1__3F__21_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
        mTokenCode = galgasScanner4_1__3F__21_ ;
      }
    }else{
      mTokenCode = galgasScanner4_1__3F__21_ ;
    }
  }else if (scanningOk && ([self testForInputChar:63])) {
    scanningPointStructForCocoa locationForTag_onlyInterrogationMark ;
    [self saveScanningPoint: & locationForTag_onlyInterrogationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop19960 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop19960 = NO ;
        }
      }while (loop19960 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner4_1__3F_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyInterrogationMark] ;
        mTokenCode = galgasScanner4_1__3F_ ;
      }
    }else{
      mTokenCode = galgasScanner4_1__3F_ ;
    }
  }else if (scanningOk && ([self testForInputString:@"!\?" advance:YES])) {
    scanningPointStructForCocoa locationForTag_onlyExclamationInterrogationMark ;
    [self saveScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop20343 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop20343 = NO ;
        }
      }while (loop20343 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner4_1__21__3F_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
        mTokenCode = galgasScanner4_1__21__3F_ ;
      }
    }else{
      mTokenCode = galgasScanner4_1__21__3F_ ;
    }
  }else if (scanningOk && ([self testForInputChar:33])) {
    scanningPointStructForCocoa locationForTag_onlyExclamationMark ;
    [self saveScanningPoint: & locationForTag_onlyExclamationMark] ;
    if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop20726 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop20726 = NO ;
        }
      }while (loop20726 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:58])) {
        mTokenCode = galgasScanner4_1__21_selector_3A_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyExclamationMark] ;
        mTokenCode = galgasScanner4_1__21_ ;
      }
    }else{
      mTokenCode = galgasScanner4_1__21_ ;
    }
  }else if (scanningOk && ([self testForInputChar:60])) {
    scanningPointStructForCocoa locationForTag_onlyInfDelimiter ;
    [self saveScanningPoint: & locationForTag_onlyInfDelimiter] ;
    if (scanningOk && ([self testForInputChar:61])) {
      mTokenCode = galgasScanner4_1__3C__3D_ ;
    }else if (scanningOk && ([self testForInputChar:60])) {
      mTokenCode = galgasScanner4_1__3C__3C_ ;
    }else if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
      BOOL loop21507 = YES ;
      do {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputFromChar:48 toChar:57] || [self testForInputChar:95])) {
        }else{
          loop21507 = NO ;
        }
      }while (loop21507 && scanningOk) ;
      if (scanningOk && ([self testForInputChar:62])) {
        mTokenCode = galgasScanner4_1__3C_non_5F_terminal_3E_ ;
      }else{
        [self restoreScanningPoint: & locationForTag_onlyInfDelimiter] ;
        mTokenCode = galgasScanner4_1__3C_ ;
      }
    }else{
      mTokenCode = galgasScanner4_1__3C_ ;
    }
  }else if (scanningOk && ([self testForInputChar:34])) {
    BOOL loop22036 = YES ;
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
        loop22036 = NO ;
      }
    }while (loop22036 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = galgasScanner4_1__22_string_22_ ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = galgasScanner4_1_ ; // Empty string code
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
  return 201 ;
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
  static const NSUInteger kTerminalSymbolStyles [202] = {0,
    0 /* galgasScanner4_1_identifier */,
    7 /* galgasScanner4_1_double_2E_xxx */,
    6 /* galgasScanner4_1_literalInt */,
    8 /* galgasScanner4_1__27_char_27_ */,
    4 /* galgasScanner4_1__24_terminal_24_ */,
    12 /* galgasScanner4_1_comment */,
    12 /* galgasScanner4_1_commentMark */,
    10 /* galgasScanner4_1__40_type */,
    3 /* galgasScanner4_1__3F_selector_3A_ */,
    2 /* galgasScanner4_1__3F_ */,
    3 /* galgasScanner4_1__3F__21_selector_3A_ */,
    2 /* galgasScanner4_1__3F__21_ */,
    3 /* galgasScanner4_1__21_selector_3A_ */,
    2 /* galgasScanner4_1__21_ */,
    3 /* galgasScanner4_1__21__3F_selector_3A_ */,
    2 /* galgasScanner4_1__21__3F_ */,
    2 /* galgasScanner4_1__3C_ */,
    2 /* galgasScanner4_1__3C__3D_ */,
    2 /* galgasScanner4_1__3C__3C_ */,
    5 /* galgasScanner4_1__3C_non_5F_terminal_3E_ */,
    9 /* galgasScanner4_1__22_string_22_ */,
    1 /* galgasScanner4_1_abstract */,
    1 /* galgasScanner4_1_after */,
    1 /* galgasScanner4_1_as */,
    1 /* galgasScanner4_1_before */,
    1 /* galgasScanner4_1_between */,
    1 /* galgasScanner4_1_block */,
    1 /* galgasScanner4_1_boolset */,
    1 /* galgasScanner4_1_case */,
    1 /* galgasScanner4_1_class */,
    1 /* galgasScanner4_1_default */,
    1 /* galgasScanner4_1_dict */,
    1 /* galgasScanner4_1_do */,
    1 /* galgasScanner4_1_drop */,
    1 /* galgasScanner4_1_else */,
    1 /* galgasScanner4_1_elsif */,
    1 /* galgasScanner4_1_end */,
    1 /* galgasScanner4_1_enum */,
    1 /* galgasScanner4_1_error */,
    1 /* galgasScanner4_1_extension */,
    1 /* galgasScanner4_1_extern */,
    1 /* galgasScanner4_1_false */,
    1 /* galgasScanner4_1_fileprivate */,
    1 /* galgasScanner4_1_filewrapper */,
    1 /* galgasScanner4_1_final */,
    1 /* galgasScanner4_1_for */,
    1 /* galgasScanner4_1_fixit */,
    1 /* galgasScanner4_1_func */,
    1 /* galgasScanner4_1_grammar */,
    1 /* galgasScanner4_1_graph */,
    1 /* galgasScanner4_1_guard */,
    1 /* galgasScanner4_1_gui */,
    1 /* galgasScanner4_1_if */,
    1 /* galgasScanner4_1_in */,
    1 /* galgasScanner4_1_indexing */,
    1 /* galgasScanner4_1_init */,
    1 /* galgasScanner4_1_is */,
    1 /* galgasScanner4_1_json */,
    1 /* galgasScanner4_1_label */,
    1 /* galgasScanner4_1_let */,
    1 /* galgasScanner4_1_lexique */,
    1 /* galgasScanner4_1_list */,
    1 /* galgasScanner4_1_log */,
    1 /* galgasScanner4_1_loop */,
    1 /* galgasScanner4_1_map */,
    1 /* galgasScanner4_1_mod */,
    1 /* galgasScanner4_1_mutating */,
    1 /* galgasScanner4_1_nil */,
    1 /* galgasScanner4_1_not */,
    1 /* galgasScanner4_1_on */,
    1 /* galgasScanner4_1_operator */,
    1 /* galgasScanner4_1_option */,
    1 /* galgasScanner4_1_or */,
    1 /* galgasScanner4_1_override */,
    1 /* galgasScanner4_1_package */,
    1 /* galgasScanner4_1_parse */,
    1 /* galgasScanner4_1_public */,
    1 /* galgasScanner4_1_protected */,
    1 /* galgasScanner4_1_private */,
    1 /* galgasScanner4_1_proc */,
    1 /* galgasScanner4_1_project */,
    1 /* galgasScanner4_1_repeat */,
    1 /* galgasScanner4_1_rewind */,
    1 /* galgasScanner4_1_rule */,
    1 /* galgasScanner4_1_select */,
    1 /* galgasScanner4_1_self */,
    1 /* galgasScanner4_1_send */,
    1 /* galgasScanner4_1_sortedlist */,
    1 /* galgasScanner4_1_spoil */,
    1 /* galgasScanner4_1_super */,
    1 /* galgasScanner4_1_struct */,
    1 /* galgasScanner4_1_style */,
    1 /* galgasScanner4_1_switch */,
    1 /* galgasScanner4_1_syntax */,
    1 /* galgasScanner4_1_tag */,
    1 /* galgasScanner4_1_template */,
    1 /* galgasScanner4_1_then */,
    1 /* galgasScanner4_1_true */,
    1 /* galgasScanner4_1_typealias */,
    1 /* galgasScanner4_1_unused */,
    1 /* galgasScanner4_1_var */,
    1 /* galgasScanner4_1_warning */,
    1 /* galgasScanner4_1_weak */,
    1 /* galgasScanner4_1_while */,
    1 /* galgasScanner4_1_with */,
    11 /* galgasScanner4_1__25_app_2D_link */,
    11 /* galgasScanner4_1__25_app_2D_source */,
    11 /* galgasScanner4_1__25_applicationBundleBase */,
    11 /* galgasScanner4_1__25_clonable */,
    11 /* galgasScanner4_1__25_codeblocks_2D_linux_33__32_ */,
    11 /* galgasScanner4_1__25_codeblocks_2D_linux_36__34_ */,
    11 /* galgasScanner4_1__25_codeblocks_2D_windows */,
    11 /* galgasScanner4_1__25_comparable */,
    11 /* galgasScanner4_1__25_equatable */,
    11 /* galgasScanner4_1__25_errorMessage */,
    11 /* galgasScanner4_1__25_from */,
    11 /* galgasScanner4_1__25_generatedInSeparateFile */,
    11 /* galgasScanner4_1__25_initArgLabel */,
    11 /* galgasScanner4_1__25_insertAfter */,
    11 /* galgasScanner4_1__25_insertBefore */,
    11 /* galgasScanner4_1__25_insertOrReplaceSetter */,
    11 /* galgasScanner4_1__25_insertSetter */,
    11 /* galgasScanner4_1__25_libpmAtPath */,
    11 /* galgasScanner4_1__25_macCodeSign */,
    11 /* galgasScanner4_1__25_makefile_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_unix */,
    11 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    11 /* galgasScanner4_1__25_MacOS */,
    11 /* galgasScanner4_1__25_MacSwiftApp */,
    11 /* galgasScanner4_1__25_MacOSDeployment */,
    11 /* galgasScanner4_1__25_nonAtomicSelection */,
    11 /* galgasScanner4_1__25_once */,
    11 /* galgasScanner4_1__25_preserved */,
    11 /* galgasScanner4_1__25_quietOutputByDefault */,
    11 /* galgasScanner4_1__25_replaceBy */,
    11 /* galgasScanner4_1__25_remove */,
    11 /* galgasScanner4_1__25_removeSetter */,
    11 /* galgasScanner4_1__25_replaceSetter */,
    11 /* galgasScanner4_1__25_searchMethod */,
    11 /* galgasScanner4_1__25_searchSubscript */,
    11 /* galgasScanner4_1__25_searchString */,
    11 /* galgasScanner4_1__25_tool_2D_source */,
    11 /* galgasScanner4_1__25_templateEndMark */,
    11 /* galgasScanner4_1__25_templateReplacement */,
    11 /* galgasScanner4_1__25_translate */,
    11 /* galgasScanner4_1__25_usefull */,
    2 /* galgasScanner4_1__2A_ */,
    2 /* galgasScanner4_1__2C_ */,
    2 /* galgasScanner4_1__2B_ */,
    2 /* galgasScanner4_1__26__2B_ */,
    2 /* galgasScanner4_1__26__2D_ */,
    2 /* galgasScanner4_1__26__2A_ */,
    2 /* galgasScanner4_1__26__2F_ */,
    2 /* galgasScanner4_1__3E_ */,
    2 /* galgasScanner4_1__3B_ */,
    2 /* galgasScanner4_1__3A_ */,
    2 /* galgasScanner4_1__3A__3E_ */,
    2 /* galgasScanner4_1__2D_ */,
    2 /* galgasScanner4_1__28_ */,
    2 /* galgasScanner4_1__29_ */,
    2 /* galgasScanner4_1__2D__3E_ */,
    2 /* galgasScanner4_1__3D__3D_ */,
    2 /* galgasScanner4_1__3D_ */,
    2 /* galgasScanner4_1__26__26_ */,
    2 /* galgasScanner4_1__5B_ */,
    2 /* galgasScanner4_1__5D_ */,
    2 /* galgasScanner4_1__2B__2B__3D_ */,
    2 /* galgasScanner4_1__2E_ */,
    2 /* galgasScanner4_1__40__28_ */,
    2 /* galgasScanner4_1__2E__2E__2E_ */,
    2 /* galgasScanner4_1__2E__2E__3C_ */,
    2 /* galgasScanner4_1__2B__3D_ */,
    2 /* galgasScanner4_1__2D__3D_ */,
    2 /* galgasScanner4_1__2A__3D_ */,
    2 /* galgasScanner4_1__2F__3D_ */,
    2 /* galgasScanner4_1__26__3D_ */,
    2 /* galgasScanner4_1__7C__3D_ */,
    2 /* galgasScanner4_1__5E__3D_ */,
    2 /* galgasScanner4_1__2F_ */,
    2 /* galgasScanner4_1__21__3D_ */,
    2 /* galgasScanner4_1__3E__3D_ */,
    2 /* galgasScanner4_1__26_ */,
    2 /* galgasScanner4_1__7B_ */,
    2 /* galgasScanner4_1__7D_ */,
    2 /* galgasScanner4_1__60_ */,
    2 /* galgasScanner4_1__7C__7C_ */,
    2 /* galgasScanner4_1__7C_ */,
    2 /* galgasScanner4_1__5E_ */,
    2 /* galgasScanner4_1__3E__3E_ */,
    2 /* galgasScanner4_1__7E_ */,
    2 /* galgasScanner4_1__2D__2D_ */,
    2 /* galgasScanner4_1__2B__2B_ */,
    2 /* galgasScanner4_1__26__2D__2D_ */,
    2 /* galgasScanner4_1__26__2B__2B_ */,
    2 /* galgasScanner4_1__3D__3D__3D_ */,
    2 /* galgasScanner4_1__21__3D__3D_ */,
    2 /* galgasScanner4_1__3F__5E_ */,
    2 /* galgasScanner4_1__21__5E_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//--------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//--------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [202] = {NO,
    YES /* galgasScanner4_1_identifier */,
    YES /* galgasScanner4_1_double_2E_xxx */,
    YES /* galgasScanner4_1_literalInt */,
    YES /* galgasScanner4_1__27_char_27_ */,
    YES /* galgasScanner4_1__24_terminal_24_ */,
    NO /* galgasScanner4_1_comment */,
    NO /* galgasScanner4_1_commentMark */,
    YES /* galgasScanner4_1__40_type */,
    YES /* galgasScanner4_1__3F_selector_3A_ */,
    YES /* galgasScanner4_1__3F_ */,
    YES /* galgasScanner4_1__3F__21_selector_3A_ */,
    YES /* galgasScanner4_1__3F__21_ */,
    YES /* galgasScanner4_1__21_selector_3A_ */,
    YES /* galgasScanner4_1__21_ */,
    YES /* galgasScanner4_1__21__3F_selector_3A_ */,
    YES /* galgasScanner4_1__21__3F_ */,
    YES /* galgasScanner4_1__3C_ */,
    YES /* galgasScanner4_1__3C__3D_ */,
    YES /* galgasScanner4_1__3C__3C_ */,
    YES /* galgasScanner4_1__3C_non_5F_terminal_3E_ */,
    NO /* galgasScanner4_1__22_string_22_ */,
    YES /* galgasScanner4_1_abstract */,
    YES /* galgasScanner4_1_after */,
    YES /* galgasScanner4_1_as */,
    YES /* galgasScanner4_1_before */,
    YES /* galgasScanner4_1_between */,
    YES /* galgasScanner4_1_block */,
    YES /* galgasScanner4_1_boolset */,
    YES /* galgasScanner4_1_case */,
    YES /* galgasScanner4_1_class */,
    YES /* galgasScanner4_1_default */,
    YES /* galgasScanner4_1_dict */,
    YES /* galgasScanner4_1_do */,
    YES /* galgasScanner4_1_drop */,
    YES /* galgasScanner4_1_else */,
    YES /* galgasScanner4_1_elsif */,
    YES /* galgasScanner4_1_end */,
    YES /* galgasScanner4_1_enum */,
    YES /* galgasScanner4_1_error */,
    YES /* galgasScanner4_1_extension */,
    YES /* galgasScanner4_1_extern */,
    YES /* galgasScanner4_1_false */,
    YES /* galgasScanner4_1_fileprivate */,
    YES /* galgasScanner4_1_filewrapper */,
    YES /* galgasScanner4_1_final */,
    YES /* galgasScanner4_1_for */,
    YES /* galgasScanner4_1_fixit */,
    YES /* galgasScanner4_1_func */,
    YES /* galgasScanner4_1_grammar */,
    YES /* galgasScanner4_1_graph */,
    YES /* galgasScanner4_1_guard */,
    YES /* galgasScanner4_1_gui */,
    YES /* galgasScanner4_1_if */,
    YES /* galgasScanner4_1_in */,
    YES /* galgasScanner4_1_indexing */,
    YES /* galgasScanner4_1_init */,
    YES /* galgasScanner4_1_is */,
    YES /* galgasScanner4_1_json */,
    YES /* galgasScanner4_1_label */,
    YES /* galgasScanner4_1_let */,
    YES /* galgasScanner4_1_lexique */,
    YES /* galgasScanner4_1_list */,
    YES /* galgasScanner4_1_log */,
    YES /* galgasScanner4_1_loop */,
    YES /* galgasScanner4_1_map */,
    YES /* galgasScanner4_1_mod */,
    YES /* galgasScanner4_1_mutating */,
    YES /* galgasScanner4_1_nil */,
    YES /* galgasScanner4_1_not */,
    YES /* galgasScanner4_1_on */,
    YES /* galgasScanner4_1_operator */,
    YES /* galgasScanner4_1_option */,
    YES /* galgasScanner4_1_or */,
    YES /* galgasScanner4_1_override */,
    YES /* galgasScanner4_1_package */,
    YES /* galgasScanner4_1_parse */,
    YES /* galgasScanner4_1_public */,
    YES /* galgasScanner4_1_protected */,
    YES /* galgasScanner4_1_private */,
    YES /* galgasScanner4_1_proc */,
    YES /* galgasScanner4_1_project */,
    YES /* galgasScanner4_1_repeat */,
    YES /* galgasScanner4_1_rewind */,
    YES /* galgasScanner4_1_rule */,
    YES /* galgasScanner4_1_select */,
    YES /* galgasScanner4_1_self */,
    YES /* galgasScanner4_1_send */,
    YES /* galgasScanner4_1_sortedlist */,
    YES /* galgasScanner4_1_spoil */,
    YES /* galgasScanner4_1_super */,
    YES /* galgasScanner4_1_struct */,
    YES /* galgasScanner4_1_style */,
    YES /* galgasScanner4_1_switch */,
    YES /* galgasScanner4_1_syntax */,
    YES /* galgasScanner4_1_tag */,
    YES /* galgasScanner4_1_template */,
    YES /* galgasScanner4_1_then */,
    YES /* galgasScanner4_1_true */,
    YES /* galgasScanner4_1_typealias */,
    YES /* galgasScanner4_1_unused */,
    YES /* galgasScanner4_1_var */,
    YES /* galgasScanner4_1_warning */,
    YES /* galgasScanner4_1_weak */,
    YES /* galgasScanner4_1_while */,
    YES /* galgasScanner4_1_with */,
    YES /* galgasScanner4_1__25_app_2D_link */,
    YES /* galgasScanner4_1__25_app_2D_source */,
    YES /* galgasScanner4_1__25_applicationBundleBase */,
    YES /* galgasScanner4_1__25_clonable */,
    YES /* galgasScanner4_1__25_codeblocks_2D_linux_33__32_ */,
    YES /* galgasScanner4_1__25_codeblocks_2D_linux_36__34_ */,
    YES /* galgasScanner4_1__25_codeblocks_2D_windows */,
    YES /* galgasScanner4_1__25_comparable */,
    YES /* galgasScanner4_1__25_equatable */,
    YES /* galgasScanner4_1__25_errorMessage */,
    YES /* galgasScanner4_1__25_from */,
    YES /* galgasScanner4_1__25_generatedInSeparateFile */,
    YES /* galgasScanner4_1__25_initArgLabel */,
    YES /* galgasScanner4_1__25_insertAfter */,
    YES /* galgasScanner4_1__25_insertBefore */,
    YES /* galgasScanner4_1__25_insertOrReplaceSetter */,
    YES /* galgasScanner4_1__25_insertSetter */,
    YES /* galgasScanner4_1__25_libpmAtPath */,
    YES /* galgasScanner4_1__25_macCodeSign */,
    YES /* galgasScanner4_1__25_makefile_2D_macosx */,
    YES /* galgasScanner4_1__25_makefile_2D_unix */,
    YES /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    YES /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    YES /* galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx */,
    YES /* galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    YES /* galgasScanner4_1__25_MacOS */,
    YES /* galgasScanner4_1__25_MacSwiftApp */,
    YES /* galgasScanner4_1__25_MacOSDeployment */,
    YES /* galgasScanner4_1__25_nonAtomicSelection */,
    YES /* galgasScanner4_1__25_once */,
    YES /* galgasScanner4_1__25_preserved */,
    YES /* galgasScanner4_1__25_quietOutputByDefault */,
    YES /* galgasScanner4_1__25_replaceBy */,
    YES /* galgasScanner4_1__25_remove */,
    YES /* galgasScanner4_1__25_removeSetter */,
    YES /* galgasScanner4_1__25_replaceSetter */,
    YES /* galgasScanner4_1__25_searchMethod */,
    YES /* galgasScanner4_1__25_searchSubscript */,
    YES /* galgasScanner4_1__25_searchString */,
    YES /* galgasScanner4_1__25_tool_2D_source */,
    YES /* galgasScanner4_1__25_templateEndMark */,
    YES /* galgasScanner4_1__25_templateReplacement */,
    YES /* galgasScanner4_1__25_translate */,
    YES /* galgasScanner4_1__25_usefull */,
    YES /* galgasScanner4_1__2A_ */,
    YES /* galgasScanner4_1__2C_ */,
    YES /* galgasScanner4_1__2B_ */,
    YES /* galgasScanner4_1__26__2B_ */,
    YES /* galgasScanner4_1__26__2D_ */,
    YES /* galgasScanner4_1__26__2A_ */,
    YES /* galgasScanner4_1__26__2F_ */,
    YES /* galgasScanner4_1__3E_ */,
    YES /* galgasScanner4_1__3B_ */,
    YES /* galgasScanner4_1__3A_ */,
    YES /* galgasScanner4_1__3A__3E_ */,
    YES /* galgasScanner4_1__2D_ */,
    YES /* galgasScanner4_1__28_ */,
    YES /* galgasScanner4_1__29_ */,
    YES /* galgasScanner4_1__2D__3E_ */,
    YES /* galgasScanner4_1__3D__3D_ */,
    YES /* galgasScanner4_1__3D_ */,
    YES /* galgasScanner4_1__26__26_ */,
    YES /* galgasScanner4_1__5B_ */,
    YES /* galgasScanner4_1__5D_ */,
    YES /* galgasScanner4_1__2B__2B__3D_ */,
    YES /* galgasScanner4_1__2E_ */,
    YES /* galgasScanner4_1__40__28_ */,
    YES /* galgasScanner4_1__2E__2E__2E_ */,
    YES /* galgasScanner4_1__2E__2E__3C_ */,
    YES /* galgasScanner4_1__2B__3D_ */,
    YES /* galgasScanner4_1__2D__3D_ */,
    YES /* galgasScanner4_1__2A__3D_ */,
    YES /* galgasScanner4_1__2F__3D_ */,
    YES /* galgasScanner4_1__26__3D_ */,
    YES /* galgasScanner4_1__7C__3D_ */,
    YES /* galgasScanner4_1__5E__3D_ */,
    YES /* galgasScanner4_1__2F_ */,
    YES /* galgasScanner4_1__21__3D_ */,
    YES /* galgasScanner4_1__3E__3D_ */,
    YES /* galgasScanner4_1__26_ */,
    YES /* galgasScanner4_1__7B_ */,
    YES /* galgasScanner4_1__7D_ */,
    YES /* galgasScanner4_1__60_ */,
    YES /* galgasScanner4_1__7C__7C_ */,
    YES /* galgasScanner4_1__7C_ */,
    YES /* galgasScanner4_1__5E_ */,
    YES /* galgasScanner4_1__3E__3E_ */,
    YES /* galgasScanner4_1__7E_ */,
    YES /* galgasScanner4_1__2D__2D_ */,
    YES /* galgasScanner4_1__2B__2B_ */,
    YES /* galgasScanner4_1__26__2D__2D_ */,
    YES /* galgasScanner4_1__26__2B__2B_ */,
    YES /* galgasScanner4_1__3D__3D__3D_ */,
    YES /* galgasScanner4_1__21__3D__3D_ */,
    YES /* galgasScanner4_1__3F__5E_ */,
    YES /* galgasScanner4_1__21__5E_ */
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
      @"galgasScanner4",
      @"galgasScanner4-keywordsStyle",
      @"galgasScanner4-delimitersStyle",
      @"galgasScanner4-selectorStyle",
      @"galgasScanner4-terminalStyle",
      @"galgasScanner4-nonTerminalStyle",
      @"galgasScanner4-integerStyle",
      @"galgasScanner4-floatStyle",
      @"galgasScanner4-characterStyle",
      @"galgasScanner4-stringStyle",
      @"galgasScanner4-typeNameStyle",
      @"galgasScanner4-attributeStyle",
      @"galgasScanner4-commentStyle"
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
  return @"galgasScanner4" ;
}

//--------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


