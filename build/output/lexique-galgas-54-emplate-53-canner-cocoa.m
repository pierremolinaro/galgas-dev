//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-galgas-54-emplate-53-canner-cocoa.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Lexique_galgasTemplateScanner

//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//----------------------------------------------------------------------------------------------------------------------

static NSArray * kTemplateReplacementArray_galgasTemplateScanner ; // Of NSString 


//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//----------------------------------------------------------------------------------------------------------------------

static NSArray * kTemplateDefinitionArray_galgasTemplateScanner ;

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
  if (nil == kTemplateDefinitionArray_galgasTemplateScanner) {
    kTemplateDefinitionArray_galgasTemplateScanner = [NSArray arrayWithObjects:
      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@"%" endString:@"%" discardStartString:YES],
      nil
    ] ;
  }
  if (nil == kTemplateReplacementArray_galgasTemplateScanner) {

    kTemplateReplacementArray_galgasTemplateScanner = [NSArray arrayWithObjects:
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
  return @"" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    T I T L E S
//
//----------------------------------------------------------------------------------------------------------------------

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------

static const BOOL kEndOfScriptInTemplateArray_galgasTemplateScanner [156] = {
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
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_galgasTemplateScanner objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {
      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_galgasTemplateScanner objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\0')) {
      [self searchForReplacementPattern:kTemplateReplacementArray_galgasTemplateScanner] ;
      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_galgasTemplateScanner] ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        [self advance] ;
        mTokenCode = -2 ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\0') && scanningOk) {
      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
    }
    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_galgasTemplateScanner [mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  //--- Error ?
    if (! scanningOk) {
      mTokenCode = -1 ;
      [self advance] ;
    }
  }
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
    0 /* galgasTemplateScanner_1_identifier */,
    8 /* galgasTemplateScanner_1_double_2E_xxx */,
    6 /* galgasTemplateScanner_1_uint_33__32_ */,
    6 /* galgasTemplateScanner_1_sint_33__32__5F_S */,
    6 /* galgasTemplateScanner_1_uint_36__34__5F_L */,
    6 /* galgasTemplateScanner_1_sint_36__34__5F_LS */,
    7 /* galgasTemplateScanner_1_bigint_5F_G */,
    2 /* galgasTemplateScanner_1__2E_ */,
    2 /* galgasTemplateScanner_1__2E__2E__2E_ */,
    2 /* galgasTemplateScanner_1__2E__2E__3C_ */,
    11 /* galgasTemplateScanner_1__40_type */,
    12 /* galgasTemplateScanner_1__25_attribute */,
    9 /* galgasTemplateScanner_1__27_char_27_ */,
    4 /* galgasTemplateScanner_1__24_terminal_24_ */,
    3 /* galgasTemplateScanner_1__3F_ */,
    3 /* galgasTemplateScanner_1__3F__21_ */,
    3 /* galgasTemplateScanner_1__21_ */,
    3 /* galgasTemplateScanner_1__21__3F_ */,
    2 /* galgasTemplateScanner_1__3C_ */,
    2 /* galgasTemplateScanner_1__3C__3D_ */,
    2 /* galgasTemplateScanner_1__3C__3C_ */,
    5 /* galgasTemplateScanner_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasTemplateScanner_1__22_string_22_ */,
    13 /* galgasTemplateScanner_1_comment */,
    13 /* galgasTemplateScanner_1_commentMark */,
    1 /* galgasTemplateScanner_1_abstract */,
    1 /* galgasTemplateScanner_1_after */,
    1 /* galgasTemplateScanner_1_array */,
    1 /* galgasTemplateScanner_1_as */,
    1 /* galgasTemplateScanner_1_before */,
    1 /* galgasTemplateScanner_1_between */,
    1 /* galgasTemplateScanner_1_block */,
    1 /* galgasTemplateScanner_1_boolset */,
    1 /* galgasTemplateScanner_1_cast */,
    1 /* galgasTemplateScanner_1_case */,
    1 /* galgasTemplateScanner_1_class */,
    1 /* galgasTemplateScanner_1_constructor */,
    1 /* galgasTemplateScanner_1_default */,
    1 /* galgasTemplateScanner_1_dict */,
    1 /* galgasTemplateScanner_1_do */,
    1 /* galgasTemplateScanner_1_drop */,
    1 /* galgasTemplateScanner_1_else */,
    1 /* galgasTemplateScanner_1_elsif */,
    1 /* galgasTemplateScanner_1_end */,
    1 /* galgasTemplateScanner_1_enum */,
    1 /* galgasTemplateScanner_1_error */,
    1 /* galgasTemplateScanner_1_extension */,
    1 /* galgasTemplateScanner_1_extern */,
    1 /* galgasTemplateScanner_1_false */,
    1 /* galgasTemplateScanner_1_filewrapper */,
    1 /* galgasTemplateScanner_1_for */,
    1 /* galgasTemplateScanner_1_fixit */,
    1 /* galgasTemplateScanner_1_func */,
    1 /* galgasTemplateScanner_1_getter */,
    1 /* galgasTemplateScanner_1_grammar */,
    1 /* galgasTemplateScanner_1_graph */,
    1 /* galgasTemplateScanner_1_gui */,
    1 /* galgasTemplateScanner_1_if */,
    1 /* galgasTemplateScanner_1_in */,
    1 /* galgasTemplateScanner_1_indexing */,
    1 /* galgasTemplateScanner_1_insert */,
    1 /* galgasTemplateScanner_1_is */,
    1 /* galgasTemplateScanner_1_label */,
    1 /* galgasTemplateScanner_1_let */,
    1 /* galgasTemplateScanner_1_lexique */,
    1 /* galgasTemplateScanner_1_list */,
    1 /* galgasTemplateScanner_1_listmap */,
    1 /* galgasTemplateScanner_1_log */,
    1 /* galgasTemplateScanner_1_loop */,
    1 /* galgasTemplateScanner_1_map */,
    1 /* galgasTemplateScanner_1_message */,
    1 /* galgasTemplateScanner_1_method */,
    1 /* galgasTemplateScanner_1_mod */,
    1 /* galgasTemplateScanner_1_mutating */,
    1 /* galgasTemplateScanner_1_not */,
    1 /* galgasTemplateScanner_1_on */,
    1 /* galgasTemplateScanner_1_operator */,
    1 /* galgasTemplateScanner_1_option */,
    1 /* galgasTemplateScanner_1_or */,
    1 /* galgasTemplateScanner_1_override */,
    1 /* galgasTemplateScanner_1_parse */,
    1 /* galgasTemplateScanner_1_public */,
    1 /* galgasTemplateScanner_1_private */,
    1 /* galgasTemplateScanner_1_proc */,
    1 /* galgasTemplateScanner_1_project */,
    1 /* galgasTemplateScanner_1_refclass */,
    1 /* galgasTemplateScanner_1_remove */,
    1 /* galgasTemplateScanner_1_replace */,
    1 /* galgasTemplateScanner_1_repeat */,
    1 /* galgasTemplateScanner_1_rewind */,
    1 /* galgasTemplateScanner_1_rule */,
    1 /* galgasTemplateScanner_1_search */,
    1 /* galgasTemplateScanner_1_select */,
    1 /* galgasTemplateScanner_1_self */,
    1 /* galgasTemplateScanner_1_send */,
    1 /* galgasTemplateScanner_1_setter */,
    1 /* galgasTemplateScanner_1_sortedlist */,
    1 /* galgasTemplateScanner_1_struct */,
    1 /* galgasTemplateScanner_1_style */,
    1 /* galgasTemplateScanner_1_switch */,
    1 /* galgasTemplateScanner_1_syntax */,
    1 /* galgasTemplateScanner_1_tag */,
    1 /* galgasTemplateScanner_1_template */,
    1 /* galgasTemplateScanner_1_then */,
    1 /* galgasTemplateScanner_1_true */,
    1 /* galgasTemplateScanner_1_unused */,
    1 /* galgasTemplateScanner_1_var */,
    1 /* galgasTemplateScanner_1_valueclass */,
    1 /* galgasTemplateScanner_1_warning */,
    1 /* galgasTemplateScanner_1_while */,
    1 /* galgasTemplateScanner_1_with */,
    2 /* galgasTemplateScanner_1__2A_ */,
    2 /* galgasTemplateScanner_1__2C_ */,
    2 /* galgasTemplateScanner_1__2B_ */,
    2 /* galgasTemplateScanner_1__26__2B_ */,
    2 /* galgasTemplateScanner_1__26__2D_ */,
    2 /* galgasTemplateScanner_1__26__2A_ */,
    2 /* galgasTemplateScanner_1__26__2F_ */,
    2 /* galgasTemplateScanner_1__3E_ */,
    2 /* galgasTemplateScanner_1__3B_ */,
    2 /* galgasTemplateScanner_1__3A_ */,
    2 /* galgasTemplateScanner_1__3A__3E_ */,
    2 /* galgasTemplateScanner_1__2D_ */,
    2 /* galgasTemplateScanner_1__28_ */,
    2 /* galgasTemplateScanner_1__29_ */,
    2 /* galgasTemplateScanner_1__2D__3E_ */,
    2 /* galgasTemplateScanner_1__3D__3D_ */,
    2 /* galgasTemplateScanner_1__3D_ */,
    2 /* galgasTemplateScanner_1__26__26_ */,
    2 /* galgasTemplateScanner_1__5B_ */,
    2 /* galgasTemplateScanner_1__5D_ */,
    2 /* galgasTemplateScanner_1__2B__3D_ */,
    2 /* galgasTemplateScanner_1__2D__3D_ */,
    2 /* galgasTemplateScanner_1__2A__3D_ */,
    2 /* galgasTemplateScanner_1__2F__3D_ */,
    2 /* galgasTemplateScanner_1__2F_ */,
    2 /* galgasTemplateScanner_1__21__3D_ */,
    2 /* galgasTemplateScanner_1__3E__3D_ */,
    2 /* galgasTemplateScanner_1__26_ */,
    2 /* galgasTemplateScanner_1__7B_ */,
    2 /* galgasTemplateScanner_1__7D_ */,
    2 /* galgasTemplateScanner_1__60_ */,
    2 /* galgasTemplateScanner_1__7C__7C_ */,
    2 /* galgasTemplateScanner_1__7C_ */,
    2 /* galgasTemplateScanner_1__5E_ */,
    2 /* galgasTemplateScanner_1__3E__3E_ */,
    2 /* galgasTemplateScanner_1__7E_ */,
    2 /* galgasTemplateScanner_1__2D__2D_ */,
    2 /* galgasTemplateScanner_1__2B__2B_ */,
    2 /* galgasTemplateScanner_1__26__2D__2D_ */,
    2 /* galgasTemplateScanner_1__26__2B__2B_ */,
    2 /* galgasTemplateScanner_1__B0_ */,
    2 /* galgasTemplateScanner_1__3D__3D__3D_ */,
    2 /* galgasTemplateScanner_1__21__3D__3D_ */,
    2 /* galgasTemplateScanner_1__3F__5E_ */,
    2 /* galgasTemplateScanner_1__21__5E_ */
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
    YES /* galgasTemplateScanner_1_identifier */,
    YES /* galgasTemplateScanner_1_double_2E_xxx */,
    YES /* galgasTemplateScanner_1_uint_33__32_ */,
    YES /* galgasTemplateScanner_1_sint_33__32__5F_S */,
    YES /* galgasTemplateScanner_1_uint_36__34__5F_L */,
    YES /* galgasTemplateScanner_1_sint_36__34__5F_LS */,
    YES /* galgasTemplateScanner_1_bigint_5F_G */,
    YES /* galgasTemplateScanner_1__2E_ */,
    YES /* galgasTemplateScanner_1__2E__2E__2E_ */,
    YES /* galgasTemplateScanner_1__2E__2E__3C_ */,
    YES /* galgasTemplateScanner_1__40_type */,
    YES /* galgasTemplateScanner_1__25_attribute */,
    YES /* galgasTemplateScanner_1__27_char_27_ */,
    YES /* galgasTemplateScanner_1__24_terminal_24_ */,
    YES /* galgasTemplateScanner_1__3F_ */,
    YES /* galgasTemplateScanner_1__3F__21_ */,
    YES /* galgasTemplateScanner_1__21_ */,
    YES /* galgasTemplateScanner_1__21__3F_ */,
    YES /* galgasTemplateScanner_1__3C_ */,
    YES /* galgasTemplateScanner_1__3C__3D_ */,
    YES /* galgasTemplateScanner_1__3C__3C_ */,
    YES /* galgasTemplateScanner_1__3C_non_5F_terminal_3E_ */,
    NO /* galgasTemplateScanner_1__22_string_22_ */,
    NO /* galgasTemplateScanner_1_comment */,
    NO /* galgasTemplateScanner_1_commentMark */,
    YES /* galgasTemplateScanner_1_abstract */,
    YES /* galgasTemplateScanner_1_after */,
    YES /* galgasTemplateScanner_1_array */,
    YES /* galgasTemplateScanner_1_as */,
    YES /* galgasTemplateScanner_1_before */,
    YES /* galgasTemplateScanner_1_between */,
    YES /* galgasTemplateScanner_1_block */,
    YES /* galgasTemplateScanner_1_boolset */,
    YES /* galgasTemplateScanner_1_cast */,
    YES /* galgasTemplateScanner_1_case */,
    YES /* galgasTemplateScanner_1_class */,
    YES /* galgasTemplateScanner_1_constructor */,
    YES /* galgasTemplateScanner_1_default */,
    YES /* galgasTemplateScanner_1_dict */,
    YES /* galgasTemplateScanner_1_do */,
    YES /* galgasTemplateScanner_1_drop */,
    YES /* galgasTemplateScanner_1_else */,
    YES /* galgasTemplateScanner_1_elsif */,
    YES /* galgasTemplateScanner_1_end */,
    YES /* galgasTemplateScanner_1_enum */,
    YES /* galgasTemplateScanner_1_error */,
    YES /* galgasTemplateScanner_1_extension */,
    YES /* galgasTemplateScanner_1_extern */,
    YES /* galgasTemplateScanner_1_false */,
    YES /* galgasTemplateScanner_1_filewrapper */,
    YES /* galgasTemplateScanner_1_for */,
    YES /* galgasTemplateScanner_1_fixit */,
    YES /* galgasTemplateScanner_1_func */,
    YES /* galgasTemplateScanner_1_getter */,
    YES /* galgasTemplateScanner_1_grammar */,
    YES /* galgasTemplateScanner_1_graph */,
    YES /* galgasTemplateScanner_1_gui */,
    YES /* galgasTemplateScanner_1_if */,
    YES /* galgasTemplateScanner_1_in */,
    YES /* galgasTemplateScanner_1_indexing */,
    YES /* galgasTemplateScanner_1_insert */,
    YES /* galgasTemplateScanner_1_is */,
    YES /* galgasTemplateScanner_1_label */,
    YES /* galgasTemplateScanner_1_let */,
    YES /* galgasTemplateScanner_1_lexique */,
    YES /* galgasTemplateScanner_1_list */,
    YES /* galgasTemplateScanner_1_listmap */,
    YES /* galgasTemplateScanner_1_log */,
    YES /* galgasTemplateScanner_1_loop */,
    YES /* galgasTemplateScanner_1_map */,
    YES /* galgasTemplateScanner_1_message */,
    YES /* galgasTemplateScanner_1_method */,
    YES /* galgasTemplateScanner_1_mod */,
    YES /* galgasTemplateScanner_1_mutating */,
    YES /* galgasTemplateScanner_1_not */,
    YES /* galgasTemplateScanner_1_on */,
    YES /* galgasTemplateScanner_1_operator */,
    YES /* galgasTemplateScanner_1_option */,
    YES /* galgasTemplateScanner_1_or */,
    YES /* galgasTemplateScanner_1_override */,
    YES /* galgasTemplateScanner_1_parse */,
    YES /* galgasTemplateScanner_1_public */,
    YES /* galgasTemplateScanner_1_private */,
    YES /* galgasTemplateScanner_1_proc */,
    YES /* galgasTemplateScanner_1_project */,
    YES /* galgasTemplateScanner_1_refclass */,
    YES /* galgasTemplateScanner_1_remove */,
    YES /* galgasTemplateScanner_1_replace */,
    YES /* galgasTemplateScanner_1_repeat */,
    YES /* galgasTemplateScanner_1_rewind */,
    YES /* galgasTemplateScanner_1_rule */,
    YES /* galgasTemplateScanner_1_search */,
    YES /* galgasTemplateScanner_1_select */,
    YES /* galgasTemplateScanner_1_self */,
    YES /* galgasTemplateScanner_1_send */,
    YES /* galgasTemplateScanner_1_setter */,
    YES /* galgasTemplateScanner_1_sortedlist */,
    YES /* galgasTemplateScanner_1_struct */,
    YES /* galgasTemplateScanner_1_style */,
    YES /* galgasTemplateScanner_1_switch */,
    YES /* galgasTemplateScanner_1_syntax */,
    YES /* galgasTemplateScanner_1_tag */,
    YES /* galgasTemplateScanner_1_template */,
    YES /* galgasTemplateScanner_1_then */,
    YES /* galgasTemplateScanner_1_true */,
    YES /* galgasTemplateScanner_1_unused */,
    YES /* galgasTemplateScanner_1_var */,
    YES /* galgasTemplateScanner_1_valueclass */,
    YES /* galgasTemplateScanner_1_warning */,
    YES /* galgasTemplateScanner_1_while */,
    YES /* galgasTemplateScanner_1_with */,
    YES /* galgasTemplateScanner_1__2A_ */,
    YES /* galgasTemplateScanner_1__2C_ */,
    YES /* galgasTemplateScanner_1__2B_ */,
    YES /* galgasTemplateScanner_1__26__2B_ */,
    YES /* galgasTemplateScanner_1__26__2D_ */,
    YES /* galgasTemplateScanner_1__26__2A_ */,
    YES /* galgasTemplateScanner_1__26__2F_ */,
    YES /* galgasTemplateScanner_1__3E_ */,
    YES /* galgasTemplateScanner_1__3B_ */,
    YES /* galgasTemplateScanner_1__3A_ */,
    YES /* galgasTemplateScanner_1__3A__3E_ */,
    YES /* galgasTemplateScanner_1__2D_ */,
    YES /* galgasTemplateScanner_1__28_ */,
    YES /* galgasTemplateScanner_1__29_ */,
    YES /* galgasTemplateScanner_1__2D__3E_ */,
    YES /* galgasTemplateScanner_1__3D__3D_ */,
    YES /* galgasTemplateScanner_1__3D_ */,
    YES /* galgasTemplateScanner_1__26__26_ */,
    YES /* galgasTemplateScanner_1__5B_ */,
    YES /* galgasTemplateScanner_1__5D_ */,
    YES /* galgasTemplateScanner_1__2B__3D_ */,
    YES /* galgasTemplateScanner_1__2D__3D_ */,
    YES /* galgasTemplateScanner_1__2A__3D_ */,
    YES /* galgasTemplateScanner_1__2F__3D_ */,
    YES /* galgasTemplateScanner_1__2F_ */,
    YES /* galgasTemplateScanner_1__21__3D_ */,
    YES /* galgasTemplateScanner_1__3E__3D_ */,
    YES /* galgasTemplateScanner_1__26_ */,
    YES /* galgasTemplateScanner_1__7B_ */,
    YES /* galgasTemplateScanner_1__7D_ */,
    YES /* galgasTemplateScanner_1__60_ */,
    YES /* galgasTemplateScanner_1__7C__7C_ */,
    YES /* galgasTemplateScanner_1__7C_ */,
    YES /* galgasTemplateScanner_1__5E_ */,
    YES /* galgasTemplateScanner_1__3E__3E_ */,
    YES /* galgasTemplateScanner_1__7E_ */,
    YES /* galgasTemplateScanner_1__2D__2D_ */,
    YES /* galgasTemplateScanner_1__2B__2B_ */,
    YES /* galgasTemplateScanner_1__26__2D__2D_ */,
    YES /* galgasTemplateScanner_1__26__2B__2B_ */,
    YES /* galgasTemplateScanner_1__B0_ */,
    YES /* galgasTemplateScanner_1__3D__3D__3D_ */,
    YES /* galgasTemplateScanner_1__21__3D__3D_ */,
    YES /* galgasTemplateScanner_1__3F__5E_ */,
    YES /* galgasTemplateScanner_1__21__5E_ */
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
      @"galgasTemplateScanner",
      @"galgasTemplateScanner-keywordsStyle",
      @"galgasTemplateScanner-delimitersStyle",
      @"galgasTemplateScanner-selectorStyle",
      @"galgasTemplateScanner-terminalStyle",
      @"galgasTemplateScanner-nonTerminalStyle",
      @"galgasTemplateScanner-integerStyle",
      @"galgasTemplateScanner-bigintStyle",
      @"galgasTemplateScanner-floatStyle",
      @"galgasTemplateScanner-characterStyle",
      @"galgasTemplateScanner-stringStyle",
      @"galgasTemplateScanner-typeNameStyle",
      @"galgasTemplateScanner-attributeStyle",
      @"galgasTemplateScanner-commentStyle"
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
  return @"galgasTemplateScanner" ;
}

//----------------------------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


