//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-galgas-54-emplate-53-canner-4E-ew-cocoa.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Lexique_galgasTemplateScannerNew

//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Replacements                                               
//
//----------------------------------------------------------------------------------------------------------------------

static NSArray * kTemplateReplacementArray_galgasTemplateScannerNew ; // Of NSString 


//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Delimiters                                                 
//
//----------------------------------------------------------------------------------------------------------------------

static NSArray * kTemplateDefinitionArray_galgasTemplateScannerNew ;

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
  if (nil == kTemplateDefinitionArray_galgasTemplateScannerNew) {
    kTemplateDefinitionArray_galgasTemplateScannerNew = [NSArray arrayWithObjects:
      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@"%" endString:@"%" discardStartString:YES],
      nil
    ] ;
  }
  if (nil == kTemplateReplacementArray_galgasTemplateScannerNew) {

    kTemplateReplacementArray_galgasTemplateScannerNew = [NSArray arrayWithObjects:
      @"\\%",       @"\\n",       @"\\\\",       nil
    ] ;
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

static const BOOL kEndOfScriptInTemplateArray_galgasTemplateScannerNew [156] = {
  NO /* identifier */,
  NO /* double.xxx */,
  NO /* uint32 */,
  NO /* sint32_S */,
  NO /* uint64_L */,
  NO /* sint64_LS */,
  NO /* bigint_G */,
  NO /* . */,
  NO /* ... */,
  NO /* ..< */,
  NO /* @type */,
  NO /* %attribute */,
  NO /* 'char' */,
  NO /* $terminal$ */,
  NO /* ? */,
  NO /* ?! */,
  NO /* ! */,
  NO /* !? */,
  NO /* < */,
  NO /* <= */,
  NO /* << */,
  NO /* <non_terminal> */,
  NO /* "string" */,
  NO /* comment */,
  NO /* commentMark */,
  NO /* abstract */,
  NO /* after */,
  NO /* array */,
  NO /* as */,
  NO /* before */,
  NO /* between */,
  NO /* block */,
  NO /* boolset */,
  NO /* cast */,
  NO /* case */,
  NO /* class */,
  NO /* constructor */,
  NO /* default */,
  NO /* dict */,
  NO /* do */,
  NO /* drop */,
  NO /* else */,
  NO /* elsif */,
  NO /* end */,
  NO /* enum */,
  NO /* error */,
  NO /* extension */,
  NO /* extern */,
  NO /* false */,
  NO /* filewrapper */,
  NO /* for */,
  NO /* fixit */,
  NO /* func */,
  NO /* getter */,
  NO /* grammar */,
  NO /* graph */,
  NO /* gui */,
  NO /* if */,
  NO /* in */,
  NO /* indexing */,
  NO /* insert */,
  NO /* is */,
  NO /* label */,
  NO /* let */,
  NO /* lexique */,
  NO /* list */,
  NO /* listmap */,
  NO /* log */,
  NO /* loop */,
  NO /* map */,
  NO /* message */,
  NO /* method */,
  NO /* mod */,
  NO /* mutating */,
  NO /* not */,
  NO /* on */,
  NO /* operator */,
  NO /* option */,
  NO /* or */,
  NO /* override */,
  NO /* parse */,
  NO /* public */,
  NO /* private */,
  NO /* proc */,
  NO /* project */,
  NO /* refclass */,
  NO /* remove */,
  NO /* replace */,
  NO /* repeat */,
  NO /* rewind */,
  NO /* rule */,
  NO /* search */,
  NO /* select */,
  NO /* self */,
  NO /* send */,
  NO /* setter */,
  NO /* sortedlist */,
  NO /* struct */,
  NO /* style */,
  NO /* switch */,
  NO /* syntax */,
  NO /* tag */,
  NO /* template */,
  NO /* then */,
  NO /* true */,
  NO /* unused */,
  NO /* var */,
  NO /* valueclass */,
  NO /* warning */,
  NO /* while */,
  NO /* with */,
  NO /* * */,
  NO /* , */,
  NO /* + */,
  NO /* &+ */,
  NO /* &- */,
  NO /* &* */,
  NO /* &/ */,
  NO /* > */,
  NO /* ; */,
  NO /* : */,
  NO /* :> */,
  NO /* - */,
  NO /* ( */,
  NO /* ) */,
  NO /* -> */,
  NO /* == */,
  NO /* = */,
  NO /* && */,
  NO /* [ */,
  NO /* ] */,
  NO /* += */,
  NO /* -= */,
  NO /* *= */,
  NO /* /= */,
  NO /* / */,
  NO /* != */,
  NO /* >= */,
  NO /* & */,
  NO /* { */,
  NO /* } */,
  NO /* ` */,
  NO /* || */,
  NO /* | */,
  NO /* ^ */,
  NO /* >> */,
  NO /* ~ */,
  NO /* -- */,
  NO /* ++ */,
  NO /* &-- */,
  NO /* &++ */,
  NO /* ° */,
  NO /* === */,
  NO /* !== */,
  NO /* ?^ */,
  NO /* !^ */
} ;


//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'galgasKeyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_galgasTemplateScannerNew_galgasKeyWordList [86] = {
  {"as", galgasTemplateScannerNew_1_as},
  {"do", galgasTemplateScannerNew_1_do},
  {"if", galgasTemplateScannerNew_1_if},
  {"in", galgasTemplateScannerNew_1_in},
  {"is", galgasTemplateScannerNew_1_is},
  {"on", galgasTemplateScannerNew_1_on},
  {"or", galgasTemplateScannerNew_1_or},
  {"end", galgasTemplateScannerNew_1_end},
  {"for", galgasTemplateScannerNew_1_for},
  {"gui", galgasTemplateScannerNew_1_gui},
  {"let", galgasTemplateScannerNew_1_let},
  {"log", galgasTemplateScannerNew_1_log},
  {"map", galgasTemplateScannerNew_1_map},
  {"mod", galgasTemplateScannerNew_1_mod},
  {"not", galgasTemplateScannerNew_1_not},
  {"tag", galgasTemplateScannerNew_1_tag},
  {"var", galgasTemplateScannerNew_1_var},
  {"case", galgasTemplateScannerNew_1_case},
  {"cast", galgasTemplateScannerNew_1_cast},
  {"dict", galgasTemplateScannerNew_1_dict},
  {"drop", galgasTemplateScannerNew_1_drop},
  {"else", galgasTemplateScannerNew_1_else},
  {"enum", galgasTemplateScannerNew_1_enum},
  {"func", galgasTemplateScannerNew_1_func},
  {"list", galgasTemplateScannerNew_1_list},
  {"loop", galgasTemplateScannerNew_1_loop},
  {"proc", galgasTemplateScannerNew_1_proc},
  {"rule", galgasTemplateScannerNew_1_rule},
  {"self", galgasTemplateScannerNew_1_self},
  {"send", galgasTemplateScannerNew_1_send},
  {"then", galgasTemplateScannerNew_1_then},
  {"true", galgasTemplateScannerNew_1_true},
  {"with", galgasTemplateScannerNew_1_with},
  {"after", galgasTemplateScannerNew_1_after},
  {"array", galgasTemplateScannerNew_1_array},
  {"block", galgasTemplateScannerNew_1_block},
  {"class", galgasTemplateScannerNew_1_class},
  {"elsif", galgasTemplateScannerNew_1_elsif},
  {"error", galgasTemplateScannerNew_1_error},
  {"false", galgasTemplateScannerNew_1_false},
  {"fixit", galgasTemplateScannerNew_1_fixit},
  {"graph", galgasTemplateScannerNew_1_graph},
  {"label", galgasTemplateScannerNew_1_label},
  {"parse", galgasTemplateScannerNew_1_parse},
  {"style", galgasTemplateScannerNew_1_style},
  {"while", galgasTemplateScannerNew_1_while},
  {"before", galgasTemplateScannerNew_1_before},
  {"extern", galgasTemplateScannerNew_1_extern},
  {"getter", galgasTemplateScannerNew_1_getter},
  {"insert", galgasTemplateScannerNew_1_insert},
  {"method", galgasTemplateScannerNew_1_method},
  {"option", galgasTemplateScannerNew_1_option},
  {"public", galgasTemplateScannerNew_1_public},
  {"remove", galgasTemplateScannerNew_1_remove},
  {"repeat", galgasTemplateScannerNew_1_repeat},
  {"rewind", galgasTemplateScannerNew_1_rewind},
  {"search", galgasTemplateScannerNew_1_search},
  {"select", galgasTemplateScannerNew_1_select},
  {"setter", galgasTemplateScannerNew_1_setter},
  {"struct", galgasTemplateScannerNew_1_struct},
  {"switch", galgasTemplateScannerNew_1_switch},
  {"syntax", galgasTemplateScannerNew_1_syntax},
  {"unused", galgasTemplateScannerNew_1_unused},
  {"between", galgasTemplateScannerNew_1_between},
  {"boolset", galgasTemplateScannerNew_1_boolset},
  {"default", galgasTemplateScannerNew_1_default},
  {"grammar", galgasTemplateScannerNew_1_grammar},
  {"lexique", galgasTemplateScannerNew_1_lexique},
  {"listmap", galgasTemplateScannerNew_1_listmap},
  {"message", galgasTemplateScannerNew_1_message},
  {"private", galgasTemplateScannerNew_1_private},
  {"project", galgasTemplateScannerNew_1_project},
  {"replace", galgasTemplateScannerNew_1_replace},
  {"warning", galgasTemplateScannerNew_1_warning},
  {"abstract", galgasTemplateScannerNew_1_abstract},
  {"indexing", galgasTemplateScannerNew_1_indexing},
  {"mutating", galgasTemplateScannerNew_1_mutating},
  {"operator", galgasTemplateScannerNew_1_operator},
  {"override", galgasTemplateScannerNew_1_override},
  {"refclass", galgasTemplateScannerNew_1_refclass},
  {"template", galgasTemplateScannerNew_1_template},
  {"extension", galgasTemplateScannerNew_1_extension},
  {"sortedlist", galgasTemplateScannerNew_1_sortedlist},
  {"valueclass", galgasTemplateScannerNew_1_valueclass},
  {"constructor", galgasTemplateScannerNew_1_constructor},
  {"filewrapper", galgasTemplateScannerNew_1_filewrapper}
} ;

static NSInteger search_into_galgasTemplateScannerNew_galgasKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_galgasTemplateScannerNew_galgasKeyWordList, 86) ;
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
      mTokenCode = search_into_galgasTemplateScannerNew_galgasKeyWordList (mLexicalAttribute_identifierString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = galgasTemplateScannerNew_1_identifier ;
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
      if (scanningOk && ([self testForInputString:@"LS" advance:YES])) {
        scanner_cocoa_routine_convertHexStringIntoSInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint64value) ;
        mTokenCode = galgasTemplateScannerNew_1_sint_36__34__5F_LS ;
      }else if (scanningOk && ([self testForInputChar:83] || [self testForInputChar:115])) {
        scanner_cocoa_routine_convertHexStringIntoSInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint32value) ;
        mTokenCode = galgasTemplateScannerNew_1_sint_33__32__5F_S ;
      }else if (scanningOk && ([self testForInputChar:76])) {
        scanner_cocoa_routine_convertHexStringIntoUInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint64value) ;
        mTokenCode = galgasTemplateScannerNew_1_uint_36__34__5F_L ;
      }else if (scanningOk && ([self testForInputChar:71])) {
        scanner_cocoa_routine_convertHexStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
        mTokenCode = galgasTemplateScannerNew_1_bigint_5F_G ;
      }else{
        scanner_cocoa_routine_convertHexStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
        mTokenCode = galgasTemplateScannerNew_1_uint_33__32_ ;
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
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputChar:83] || [self testForInputChar:115])) {
      scanner_cocoa_routine_convertDecimalStringIntoSInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint32value) ;
      mTokenCode = galgasTemplateScannerNew_1_sint_33__32__5F_S ;
    }else if (scanningOk && ([self testForInputString:@"LS" advance:YES])) {
      scanner_cocoa_routine_convertDecimalStringIntoSInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint64value) ;
      mTokenCode = galgasTemplateScannerNew_1_sint_36__34__5F_LS ;
    }else if (scanningOk && ([self testForInputChar:76])) {
      scanner_cocoa_routine_convertDecimalStringIntoUInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint64value) ;
      mTokenCode = galgasTemplateScannerNew_1_uint_36__34__5F_L ;
    }else if (scanningOk && ([self testForInputChar:71])) {
      scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasTemplateScannerNew_1_bigint_5F_G ;
    }else if (scanningOk && ([self testForInputChar:46])) {
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
      mTokenCode = galgasTemplateScannerNew_1_double_2E_xxx ;
    }else{
      scanner_cocoa_routine_convertDecimalStringIntoBigInt (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_bigintValue) ;
      mTokenCode = galgasTemplateScannerNew_1_uint_33__32_ ;
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
      mTokenCode = galgasTemplateScannerNew_1_double_2E_xxx ;
    }else{
      if (scanningOk && ([self testForInputString:@".." advance:YES])) {
        mTokenCode = galgasTemplateScannerNew_1__2E__2E__2E_ ;
      }else if (scanningOk && ([self testForInputString:@".<" advance:YES])) {
        mTokenCode = galgasTemplateScannerNew_1__2E__2E__3C_ ;
      }else{
        mTokenCode = galgasTemplateScannerNew_1__2E_ ;
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
      if (scanningOk && ([self testForInputChar:63])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }
    }else{
      scanningOk = NO ;
    }
    mTokenCode = galgasTemplateScannerNew_1__40_type ;
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
    mTokenCode = galgasTemplateScannerNew_1__25_attribute ;
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
            loop = NO ;
          }
        }while (loop && scanningOk) ;
        loop = YES ;
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
      mTokenCode = galgasTemplateScannerNew_1__27_char_27_ ;
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
    mTokenCode = galgasTemplateScannerNew_1__24_terminal_24_ ;
  }else if (scanningOk && [self testForInputString:@"===" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3D__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&--" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&++" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"!==" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__21__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"||" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__7C__7C_ ;
  }else if (scanningOk && [self testForInputString:@"\?^" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3F__5E_ ;
  }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3E__3E_ ;
  }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@":>" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3A__3E_ ;
  }else if (scanningOk && [self testForInputString:@"/=" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2F__3D_ ;
  }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2D__3E_ ;
  }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"--" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2D__2D_ ;
  }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"++" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2B__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*=" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2A__3D_ ;
  }else if (scanningOk && [self testForInputString:@"&/" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26__2F_ ;
  }else if (scanningOk && [self testForInputString:@"&-" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26__2D_ ;
  }else if (scanningOk && [self testForInputString:@"&+" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26__2B_ ;
  }else if (scanningOk && [self testForInputString:@"&*" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26__2A_ ;
  }else if (scanningOk && [self testForInputString:@"&&" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26__26_ ;
  }else if (scanningOk && [self testForInputString:@"!^" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__21__5E_ ;
  }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__21__3D_ ;
  }else if (scanningOk && [self testForInputString:@"\xC2""\xB0""" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__B0_ ;
  }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__7E_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"`" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__60_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2F_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__2A_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = galgasTemplateScannerNew_1__26_ ;
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
          mTokenCode = galgasTemplateScannerNew_1__3F__21_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyExclamationInterrogationMark] ;
          mTokenCode = galgasTemplateScannerNew_1__3F__21_ ;
        }
      }else{
        mTokenCode = galgasTemplateScannerNew_1__3F__21_ ;
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
        mTokenCode = galgasTemplateScannerNew_1__3F_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyInterrogationMark] ;
        mTokenCode = galgasTemplateScannerNew_1__3F_ ;
      }
    }else{
      mTokenCode = galgasTemplateScannerNew_1__3F_ ;
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
          mTokenCode = galgasTemplateScannerNew_1__21__3F_ ;
        }else{
          scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
          [self restoreScanningPoint: & locationForTag_onlyInterrogationExclamationMark] ;
          mTokenCode = galgasTemplateScannerNew_1__21__3F_ ;
        }
      }else{
        mTokenCode = galgasTemplateScannerNew_1__21__3F_ ;
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
        mTokenCode = galgasTemplateScannerNew_1__21_ ;
      }else{
        scanner_cocoa_routine_resetString (& scanningOk, mLexicalAttribute_tokenString) ;
        [self restoreScanningPoint: & locationForTag_onlyExclamationMark] ;
        mTokenCode = galgasTemplateScannerNew_1__21_ ;
      }
    }else{
      mTokenCode = galgasTemplateScannerNew_1__21_ ;
    }
  }else if (scanningOk && ([self testForInputChar:60])) {
    scanningPointStructForCocoa locationForTag_onlyInfDelimiter ;
    [self saveScanningPoint: & locationForTag_onlyInfDelimiter] ;
    if (scanningOk && ([self testForInputChar:61])) {
      mTokenCode = galgasTemplateScannerNew_1__3C__3D_ ;
    }else if (scanningOk && ([self testForInputChar:60])) {
      mTokenCode = galgasTemplateScannerNew_1__3C__3C_ ;
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
        mTokenCode = galgasTemplateScannerNew_1__3C_non_5F_terminal_3E_ ;
      }else{
        [self restoreScanningPoint: & locationForTag_onlyInfDelimiter] ;
        mTokenCode = galgasTemplateScannerNew_1__3C_ ;
      }
    }else{
      mTokenCode = galgasTemplateScannerNew_1__3C_ ;
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
              loop = NO ;
            }
          }while (loop && scanningOk) ;
          loop = YES ;
          scanner_cocoa_routine_convertHTMLSequenceToUnicodeCharacter (& scanningOk, mLexicalAttribute_identifierString, & mLexicalAttribute_charValue) ;
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_charValue) ;
        }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          do {
            scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
            if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
            }else{
              loop = NO ;
            }
          }while (loop && scanningOk) ;
          loop = YES ;
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
        loop = NO ;
      }
    }while (loop && scanningOk) ;
    loop = YES ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = galgasTemplateScannerNew_1__22_string_22_ ;
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
      mTokenCode = galgasTemplateScannerNew_1_commentMark ;
    }else{
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:1114111])) {
        }else{
          loop = NO ;
        }
      }while (loop && scanningOk) ;
      loop = YES ;
      mTokenCode = galgasTemplateScannerNew_1_comment ;
    }
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ? 
    mTokenCode = galgasTemplateScannerNew_1_ ; // Empty string code
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
    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_galgasTemplateScannerNew objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {
      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_galgasTemplateScannerNew objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\0')) {
      
      [self searchForReplacementPattern:kTemplateReplacementArray_galgasTemplateScannerNew] ;
      
      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_galgasTemplateScannerNew] ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        [self advance] ;
        mTokenCode = -2 ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\0') && scanningOk) {
      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
    }
    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_galgasTemplateScannerNew [mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
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
  return 156 ;
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
  return YES ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [157] = {0,
    0 /* galgasTemplateScannerNew_1_identifier */,
    8 /* galgasTemplateScannerNew_1_double_2E_xxx */,
    6 /* galgasTemplateScannerNew_1_uint_33__32_ */,
    6 /* galgasTemplateScannerNew_1_sint_33__32__5F_S */,
    6 /* galgasTemplateScannerNew_1_uint_36__34__5F_L */,
    6 /* galgasTemplateScannerNew_1_sint_36__34__5F_LS */,
    7 /* galgasTemplateScannerNew_1_bigint_5F_G */,
    2 /* galgasTemplateScannerNew_1__2E_ */,
    2 /* galgasTemplateScannerNew_1__2E__2E__2E_ */,
    2 /* galgasTemplateScannerNew_1__2E__2E__3C_ */,
    11 /* galgasTemplateScannerNew_1__40_type */,
    12 /* galgasTemplateScannerNew_1__25_attribute */,
    9 /* galgasTemplateScannerNew_1__27_char_27_ */,
    4 /* galgasTemplateScannerNew_1__24_terminal_24_ */,
    3 /* galgasTemplateScannerNew_1__3F_ */,
    3 /* galgasTemplateScannerNew_1__3F__21_ */,
    3 /* galgasTemplateScannerNew_1__21_ */,
    3 /* galgasTemplateScannerNew_1__21__3F_ */,
    2 /* galgasTemplateScannerNew_1__3C_ */,
    2 /* galgasTemplateScannerNew_1__3C__3D_ */,
    2 /* galgasTemplateScannerNew_1__3C__3C_ */,
    5 /* galgasTemplateScannerNew_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasTemplateScannerNew_1__22_string_22_ */,
    13 /* galgasTemplateScannerNew_1_comment */,
    13 /* galgasTemplateScannerNew_1_commentMark */,
    1 /* galgasTemplateScannerNew_1_abstract */,
    1 /* galgasTemplateScannerNew_1_after */,
    1 /* galgasTemplateScannerNew_1_array */,
    1 /* galgasTemplateScannerNew_1_as */,
    1 /* galgasTemplateScannerNew_1_before */,
    1 /* galgasTemplateScannerNew_1_between */,
    1 /* galgasTemplateScannerNew_1_block */,
    1 /* galgasTemplateScannerNew_1_boolset */,
    1 /* galgasTemplateScannerNew_1_cast */,
    1 /* galgasTemplateScannerNew_1_case */,
    1 /* galgasTemplateScannerNew_1_class */,
    1 /* galgasTemplateScannerNew_1_constructor */,
    1 /* galgasTemplateScannerNew_1_default */,
    1 /* galgasTemplateScannerNew_1_dict */,
    1 /* galgasTemplateScannerNew_1_do */,
    1 /* galgasTemplateScannerNew_1_drop */,
    1 /* galgasTemplateScannerNew_1_else */,
    1 /* galgasTemplateScannerNew_1_elsif */,
    1 /* galgasTemplateScannerNew_1_end */,
    1 /* galgasTemplateScannerNew_1_enum */,
    1 /* galgasTemplateScannerNew_1_error */,
    1 /* galgasTemplateScannerNew_1_extension */,
    1 /* galgasTemplateScannerNew_1_extern */,
    1 /* galgasTemplateScannerNew_1_false */,
    1 /* galgasTemplateScannerNew_1_filewrapper */,
    1 /* galgasTemplateScannerNew_1_for */,
    1 /* galgasTemplateScannerNew_1_fixit */,
    1 /* galgasTemplateScannerNew_1_func */,
    1 /* galgasTemplateScannerNew_1_getter */,
    1 /* galgasTemplateScannerNew_1_grammar */,
    1 /* galgasTemplateScannerNew_1_graph */,
    1 /* galgasTemplateScannerNew_1_gui */,
    1 /* galgasTemplateScannerNew_1_if */,
    1 /* galgasTemplateScannerNew_1_in */,
    1 /* galgasTemplateScannerNew_1_indexing */,
    1 /* galgasTemplateScannerNew_1_insert */,
    1 /* galgasTemplateScannerNew_1_is */,
    1 /* galgasTemplateScannerNew_1_label */,
    1 /* galgasTemplateScannerNew_1_let */,
    1 /* galgasTemplateScannerNew_1_lexique */,
    1 /* galgasTemplateScannerNew_1_list */,
    1 /* galgasTemplateScannerNew_1_listmap */,
    1 /* galgasTemplateScannerNew_1_log */,
    1 /* galgasTemplateScannerNew_1_loop */,
    1 /* galgasTemplateScannerNew_1_map */,
    1 /* galgasTemplateScannerNew_1_message */,
    1 /* galgasTemplateScannerNew_1_method */,
    1 /* galgasTemplateScannerNew_1_mod */,
    1 /* galgasTemplateScannerNew_1_mutating */,
    1 /* galgasTemplateScannerNew_1_not */,
    1 /* galgasTemplateScannerNew_1_on */,
    1 /* galgasTemplateScannerNew_1_operator */,
    1 /* galgasTemplateScannerNew_1_option */,
    1 /* galgasTemplateScannerNew_1_or */,
    1 /* galgasTemplateScannerNew_1_override */,
    1 /* galgasTemplateScannerNew_1_parse */,
    1 /* galgasTemplateScannerNew_1_public */,
    1 /* galgasTemplateScannerNew_1_private */,
    1 /* galgasTemplateScannerNew_1_proc */,
    1 /* galgasTemplateScannerNew_1_project */,
    1 /* galgasTemplateScannerNew_1_refclass */,
    1 /* galgasTemplateScannerNew_1_remove */,
    1 /* galgasTemplateScannerNew_1_replace */,
    1 /* galgasTemplateScannerNew_1_repeat */,
    1 /* galgasTemplateScannerNew_1_rewind */,
    1 /* galgasTemplateScannerNew_1_rule */,
    1 /* galgasTemplateScannerNew_1_search */,
    1 /* galgasTemplateScannerNew_1_select */,
    1 /* galgasTemplateScannerNew_1_self */,
    1 /* galgasTemplateScannerNew_1_send */,
    1 /* galgasTemplateScannerNew_1_setter */,
    1 /* galgasTemplateScannerNew_1_sortedlist */,
    1 /* galgasTemplateScannerNew_1_struct */,
    1 /* galgasTemplateScannerNew_1_style */,
    1 /* galgasTemplateScannerNew_1_switch */,
    1 /* galgasTemplateScannerNew_1_syntax */,
    1 /* galgasTemplateScannerNew_1_tag */,
    1 /* galgasTemplateScannerNew_1_template */,
    1 /* galgasTemplateScannerNew_1_then */,
    1 /* galgasTemplateScannerNew_1_true */,
    1 /* galgasTemplateScannerNew_1_unused */,
    1 /* galgasTemplateScannerNew_1_var */,
    1 /* galgasTemplateScannerNew_1_valueclass */,
    1 /* galgasTemplateScannerNew_1_warning */,
    1 /* galgasTemplateScannerNew_1_while */,
    1 /* galgasTemplateScannerNew_1_with */,
    2 /* galgasTemplateScannerNew_1__2A_ */,
    2 /* galgasTemplateScannerNew_1__2C_ */,
    2 /* galgasTemplateScannerNew_1__2B_ */,
    2 /* galgasTemplateScannerNew_1__26__2B_ */,
    2 /* galgasTemplateScannerNew_1__26__2D_ */,
    2 /* galgasTemplateScannerNew_1__26__2A_ */,
    2 /* galgasTemplateScannerNew_1__26__2F_ */,
    2 /* galgasTemplateScannerNew_1__3E_ */,
    2 /* galgasTemplateScannerNew_1__3B_ */,
    2 /* galgasTemplateScannerNew_1__3A_ */,
    2 /* galgasTemplateScannerNew_1__3A__3E_ */,
    2 /* galgasTemplateScannerNew_1__2D_ */,
    2 /* galgasTemplateScannerNew_1__28_ */,
    2 /* galgasTemplateScannerNew_1__29_ */,
    2 /* galgasTemplateScannerNew_1__2D__3E_ */,
    2 /* galgasTemplateScannerNew_1__3D__3D_ */,
    2 /* galgasTemplateScannerNew_1__3D_ */,
    2 /* galgasTemplateScannerNew_1__26__26_ */,
    2 /* galgasTemplateScannerNew_1__5B_ */,
    2 /* galgasTemplateScannerNew_1__5D_ */,
    2 /* galgasTemplateScannerNew_1__2B__3D_ */,
    2 /* galgasTemplateScannerNew_1__2D__3D_ */,
    2 /* galgasTemplateScannerNew_1__2A__3D_ */,
    2 /* galgasTemplateScannerNew_1__2F__3D_ */,
    2 /* galgasTemplateScannerNew_1__2F_ */,
    2 /* galgasTemplateScannerNew_1__21__3D_ */,
    2 /* galgasTemplateScannerNew_1__3E__3D_ */,
    2 /* galgasTemplateScannerNew_1__26_ */,
    2 /* galgasTemplateScannerNew_1__7B_ */,
    2 /* galgasTemplateScannerNew_1__7D_ */,
    2 /* galgasTemplateScannerNew_1__60_ */,
    2 /* galgasTemplateScannerNew_1__7C__7C_ */,
    2 /* galgasTemplateScannerNew_1__7C_ */,
    2 /* galgasTemplateScannerNew_1__5E_ */,
    2 /* galgasTemplateScannerNew_1__3E__3E_ */,
    2 /* galgasTemplateScannerNew_1__7E_ */,
    2 /* galgasTemplateScannerNew_1__2D__2D_ */,
    2 /* galgasTemplateScannerNew_1__2B__2B_ */,
    2 /* galgasTemplateScannerNew_1__26__2D__2D_ */,
    2 /* galgasTemplateScannerNew_1__26__2B__2B_ */,
    2 /* galgasTemplateScannerNew_1__B0_ */,
    2 /* galgasTemplateScannerNew_1__3D__3D__3D_ */,
    2 /* galgasTemplateScannerNew_1__21__3D__3D_ */,
    2 /* galgasTemplateScannerNew_1__3F__5E_ */,
    2 /* galgasTemplateScannerNew_1__21__5E_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [157] = {NO,
    YES /* galgasTemplateScannerNew_1_identifier */,
    YES /* galgasTemplateScannerNew_1_double_2E_xxx */,
    YES /* galgasTemplateScannerNew_1_uint_33__32_ */,
    YES /* galgasTemplateScannerNew_1_sint_33__32__5F_S */,
    YES /* galgasTemplateScannerNew_1_uint_36__34__5F_L */,
    YES /* galgasTemplateScannerNew_1_sint_36__34__5F_LS */,
    YES /* galgasTemplateScannerNew_1_bigint_5F_G */,
    YES /* galgasTemplateScannerNew_1__2E_ */,
    YES /* galgasTemplateScannerNew_1__2E__2E__2E_ */,
    YES /* galgasTemplateScannerNew_1__2E__2E__3C_ */,
    YES /* galgasTemplateScannerNew_1__40_type */,
    YES /* galgasTemplateScannerNew_1__25_attribute */,
    YES /* galgasTemplateScannerNew_1__27_char_27_ */,
    YES /* galgasTemplateScannerNew_1__24_terminal_24_ */,
    YES /* galgasTemplateScannerNew_1__3F_ */,
    YES /* galgasTemplateScannerNew_1__3F__21_ */,
    YES /* galgasTemplateScannerNew_1__21_ */,
    YES /* galgasTemplateScannerNew_1__21__3F_ */,
    YES /* galgasTemplateScannerNew_1__3C_ */,
    YES /* galgasTemplateScannerNew_1__3C__3D_ */,
    YES /* galgasTemplateScannerNew_1__3C__3C_ */,
    YES /* galgasTemplateScannerNew_1__3C_non_5F_terminal_3E_ */,
    NO /* galgasTemplateScannerNew_1__22_string_22_ */,
    NO /* galgasTemplateScannerNew_1_comment */,
    NO /* galgasTemplateScannerNew_1_commentMark */,
    YES /* galgasTemplateScannerNew_1_abstract */,
    YES /* galgasTemplateScannerNew_1_after */,
    YES /* galgasTemplateScannerNew_1_array */,
    YES /* galgasTemplateScannerNew_1_as */,
    YES /* galgasTemplateScannerNew_1_before */,
    YES /* galgasTemplateScannerNew_1_between */,
    YES /* galgasTemplateScannerNew_1_block */,
    YES /* galgasTemplateScannerNew_1_boolset */,
    YES /* galgasTemplateScannerNew_1_cast */,
    YES /* galgasTemplateScannerNew_1_case */,
    YES /* galgasTemplateScannerNew_1_class */,
    YES /* galgasTemplateScannerNew_1_constructor */,
    YES /* galgasTemplateScannerNew_1_default */,
    YES /* galgasTemplateScannerNew_1_dict */,
    YES /* galgasTemplateScannerNew_1_do */,
    YES /* galgasTemplateScannerNew_1_drop */,
    YES /* galgasTemplateScannerNew_1_else */,
    YES /* galgasTemplateScannerNew_1_elsif */,
    YES /* galgasTemplateScannerNew_1_end */,
    YES /* galgasTemplateScannerNew_1_enum */,
    YES /* galgasTemplateScannerNew_1_error */,
    YES /* galgasTemplateScannerNew_1_extension */,
    YES /* galgasTemplateScannerNew_1_extern */,
    YES /* galgasTemplateScannerNew_1_false */,
    YES /* galgasTemplateScannerNew_1_filewrapper */,
    YES /* galgasTemplateScannerNew_1_for */,
    YES /* galgasTemplateScannerNew_1_fixit */,
    YES /* galgasTemplateScannerNew_1_func */,
    YES /* galgasTemplateScannerNew_1_getter */,
    YES /* galgasTemplateScannerNew_1_grammar */,
    YES /* galgasTemplateScannerNew_1_graph */,
    YES /* galgasTemplateScannerNew_1_gui */,
    YES /* galgasTemplateScannerNew_1_if */,
    YES /* galgasTemplateScannerNew_1_in */,
    YES /* galgasTemplateScannerNew_1_indexing */,
    YES /* galgasTemplateScannerNew_1_insert */,
    YES /* galgasTemplateScannerNew_1_is */,
    YES /* galgasTemplateScannerNew_1_label */,
    YES /* galgasTemplateScannerNew_1_let */,
    YES /* galgasTemplateScannerNew_1_lexique */,
    YES /* galgasTemplateScannerNew_1_list */,
    YES /* galgasTemplateScannerNew_1_listmap */,
    YES /* galgasTemplateScannerNew_1_log */,
    YES /* galgasTemplateScannerNew_1_loop */,
    YES /* galgasTemplateScannerNew_1_map */,
    YES /* galgasTemplateScannerNew_1_message */,
    YES /* galgasTemplateScannerNew_1_method */,
    YES /* galgasTemplateScannerNew_1_mod */,
    YES /* galgasTemplateScannerNew_1_mutating */,
    YES /* galgasTemplateScannerNew_1_not */,
    YES /* galgasTemplateScannerNew_1_on */,
    YES /* galgasTemplateScannerNew_1_operator */,
    YES /* galgasTemplateScannerNew_1_option */,
    YES /* galgasTemplateScannerNew_1_or */,
    YES /* galgasTemplateScannerNew_1_override */,
    YES /* galgasTemplateScannerNew_1_parse */,
    YES /* galgasTemplateScannerNew_1_public */,
    YES /* galgasTemplateScannerNew_1_private */,
    YES /* galgasTemplateScannerNew_1_proc */,
    YES /* galgasTemplateScannerNew_1_project */,
    YES /* galgasTemplateScannerNew_1_refclass */,
    YES /* galgasTemplateScannerNew_1_remove */,
    YES /* galgasTemplateScannerNew_1_replace */,
    YES /* galgasTemplateScannerNew_1_repeat */,
    YES /* galgasTemplateScannerNew_1_rewind */,
    YES /* galgasTemplateScannerNew_1_rule */,
    YES /* galgasTemplateScannerNew_1_search */,
    YES /* galgasTemplateScannerNew_1_select */,
    YES /* galgasTemplateScannerNew_1_self */,
    YES /* galgasTemplateScannerNew_1_send */,
    YES /* galgasTemplateScannerNew_1_setter */,
    YES /* galgasTemplateScannerNew_1_sortedlist */,
    YES /* galgasTemplateScannerNew_1_struct */,
    YES /* galgasTemplateScannerNew_1_style */,
    YES /* galgasTemplateScannerNew_1_switch */,
    YES /* galgasTemplateScannerNew_1_syntax */,
    YES /* galgasTemplateScannerNew_1_tag */,
    YES /* galgasTemplateScannerNew_1_template */,
    YES /* galgasTemplateScannerNew_1_then */,
    YES /* galgasTemplateScannerNew_1_true */,
    YES /* galgasTemplateScannerNew_1_unused */,
    YES /* galgasTemplateScannerNew_1_var */,
    YES /* galgasTemplateScannerNew_1_valueclass */,
    YES /* galgasTemplateScannerNew_1_warning */,
    YES /* galgasTemplateScannerNew_1_while */,
    YES /* galgasTemplateScannerNew_1_with */,
    YES /* galgasTemplateScannerNew_1__2A_ */,
    YES /* galgasTemplateScannerNew_1__2C_ */,
    YES /* galgasTemplateScannerNew_1__2B_ */,
    YES /* galgasTemplateScannerNew_1__26__2B_ */,
    YES /* galgasTemplateScannerNew_1__26__2D_ */,
    YES /* galgasTemplateScannerNew_1__26__2A_ */,
    YES /* galgasTemplateScannerNew_1__26__2F_ */,
    YES /* galgasTemplateScannerNew_1__3E_ */,
    YES /* galgasTemplateScannerNew_1__3B_ */,
    YES /* galgasTemplateScannerNew_1__3A_ */,
    YES /* galgasTemplateScannerNew_1__3A__3E_ */,
    YES /* galgasTemplateScannerNew_1__2D_ */,
    YES /* galgasTemplateScannerNew_1__28_ */,
    YES /* galgasTemplateScannerNew_1__29_ */,
    YES /* galgasTemplateScannerNew_1__2D__3E_ */,
    YES /* galgasTemplateScannerNew_1__3D__3D_ */,
    YES /* galgasTemplateScannerNew_1__3D_ */,
    YES /* galgasTemplateScannerNew_1__26__26_ */,
    YES /* galgasTemplateScannerNew_1__5B_ */,
    YES /* galgasTemplateScannerNew_1__5D_ */,
    YES /* galgasTemplateScannerNew_1__2B__3D_ */,
    YES /* galgasTemplateScannerNew_1__2D__3D_ */,
    YES /* galgasTemplateScannerNew_1__2A__3D_ */,
    YES /* galgasTemplateScannerNew_1__2F__3D_ */,
    YES /* galgasTemplateScannerNew_1__2F_ */,
    YES /* galgasTemplateScannerNew_1__21__3D_ */,
    YES /* galgasTemplateScannerNew_1__3E__3D_ */,
    YES /* galgasTemplateScannerNew_1__26_ */,
    YES /* galgasTemplateScannerNew_1__7B_ */,
    YES /* galgasTemplateScannerNew_1__7D_ */,
    YES /* galgasTemplateScannerNew_1__60_ */,
    YES /* galgasTemplateScannerNew_1__7C__7C_ */,
    YES /* galgasTemplateScannerNew_1__7C_ */,
    YES /* galgasTemplateScannerNew_1__5E_ */,
    YES /* galgasTemplateScannerNew_1__3E__3E_ */,
    YES /* galgasTemplateScannerNew_1__7E_ */,
    YES /* galgasTemplateScannerNew_1__2D__2D_ */,
    YES /* galgasTemplateScannerNew_1__2B__2B_ */,
    YES /* galgasTemplateScannerNew_1__26__2D__2D_ */,
    YES /* galgasTemplateScannerNew_1__26__2B__2B_ */,
    YES /* galgasTemplateScannerNew_1__B0_ */,
    YES /* galgasTemplateScannerNew_1__3D__3D__3D_ */,
    YES /* galgasTemplateScannerNew_1__21__3D__3D_ */,
    YES /* galgasTemplateScannerNew_1__3F__5E_ */,
    YES /* galgasTemplateScannerNew_1__21__5E_ */
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
      @"galgasTemplateScannerNew",
      @"galgasTemplateScannerNew-keywordsStyle",
      @"galgasTemplateScannerNew-delimitersStyle",
      @"galgasTemplateScannerNew-selectorStyle",
      @"galgasTemplateScannerNew-terminalStyle",
      @"galgasTemplateScannerNew-nonTerminalStyle",
      @"galgasTemplateScannerNew-integerStyle",
      @"galgasTemplateScannerNew-bigintStyle",
      @"galgasTemplateScannerNew-floatStyle",
      @"galgasTemplateScannerNew-characterStyle",
      @"galgasTemplateScannerNew-stringStyle",
      @"galgasTemplateScannerNew-typeNameStyle",
      @"galgasTemplateScannerNew-attributeStyle",
      @"galgasTemplateScannerNew-commentStyle"
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
  return @"galgasTemplateScannerNew" ;
}

//----------------------------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


