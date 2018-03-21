//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Token.h"
#import "F_CocoaWrapperForGalgas.h"
#import "OC_GGS_CommandLineOption.h"
#import "lexique-galgas3-53-canner-cocoa.h"
#import "lexique-galgas-54-emplate-53-canner-cocoa.h"
#import "GGSUpdateCocoaGalgas.h"

#ifdef USER_DEFAULT_COLORS_DEFINED
  #import "user_default_colors.h"
#endif

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma mark Nibs

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"GGSUpdateCocoaGalgas", [GGSUpdateCocoaGalgas class], nil],
    nil
  ] ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma mark Command Line Options

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Command Line Options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#import "option-galgas-5F-cli-5F-options-cocoa.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterOptions (NSMutableArray * ioBoolOptionArray,
                   NSMutableArray * ioUIntOptionArray,
                   NSMutableArray * ioStringOptionArray,
                   NSMutableArray * ioStringListOptionArray) {
  enterOptionsFor_galgas_5F_cli_5F_options (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;
  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"quiet_output"
    commandChar:'q'
    commandString:@"quiet"
    comment:@"Quiet output"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma mark Lexique galgas3Scanner

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const UInt16 gPopUpData_galgas_33_Scanner_2319 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_before, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2342 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_after, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2367 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_map, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2402 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_shared, 0,
  galgas3Scanner_1_map, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2428 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_list, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2460 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_sortedlist, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2486 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_enum, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2513 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_class, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2541 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_extern, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2569 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_struct, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2604 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_rule, 0,
  galgas3Scanner_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2635 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_proc, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2666 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2711 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1__25_attribute, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2755 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_filewrapper, 0,
  galgas3Scanner_1_identifier, 0,
  galgas3Scanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2812 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2866 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2908 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2965 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3020 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3062 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3119 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3174 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3216 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3265 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_syntax, 0,
  galgas3Scanner_1_extension, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3302 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_case, 0,
  galgas3Scanner_1__2E_, 0,
  galgas3Scanner_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3335 [4] = {
  1, // Leading character count to strip
  galgas3Scanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3367 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1__24_terminal_24_, 0,
  galgas3Scanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3403 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1__24_terminal_24_, 0,
  galgas3Scanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_galgas_33_Scanner [30] = {
  gPopUpData_galgas_33_Scanner_2319,
  gPopUpData_galgas_33_Scanner_2342,
  gPopUpData_galgas_33_Scanner_2367,
  gPopUpData_galgas_33_Scanner_2402,
  gPopUpData_galgas_33_Scanner_2428,
  gPopUpData_galgas_33_Scanner_2460,
  gPopUpData_galgas_33_Scanner_2486,
  gPopUpData_galgas_33_Scanner_2513,
  gPopUpData_galgas_33_Scanner_2541,
  gPopUpData_galgas_33_Scanner_2569,
  gPopUpData_galgas_33_Scanner_2604,
  gPopUpData_galgas_33_Scanner_2635,
  gPopUpData_galgas_33_Scanner_2666,
  gPopUpData_galgas_33_Scanner_2711,
  gPopUpData_galgas_33_Scanner_2755,
  gPopUpData_galgas_33_Scanner_2812,
  gPopUpData_galgas_33_Scanner_2866,
  gPopUpData_galgas_33_Scanner_2908,
  gPopUpData_galgas_33_Scanner_2965,
  gPopUpData_galgas_33_Scanner_3020,
  gPopUpData_galgas_33_Scanner_3062,
  gPopUpData_galgas_33_Scanner_3119,
  gPopUpData_galgas_33_Scanner_3174,
  gPopUpData_galgas_33_Scanner_3216,
  gPopUpData_galgas_33_Scanner_3265,
  gPopUpData_galgas_33_Scanner_3302,
  gPopUpData_galgas_33_Scanner_3335,
  gPopUpData_galgas_33_Scanner_3367,
  gPopUpData_galgas_33_Scanner_3403,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Lexique interface                                                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@interface OC_Tokenizer_galgas3Scanner : OC_Lexique_galgas3Scanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@implementation OC_Tokenizer_galgas3Scanner

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) blockComment {
  return @"#" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (const UInt16 * *) popupListData {
  return gPopUpData_galgas_33_Scanner ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) textMacroCount {
  return 7 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) tabItemTitle {
  return @"Source GALGAS" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [8] = {
    @"Class",
    @"Enum",
    @"List",
    @"List Map",
    @"Map",
    @"Sorted List",
    @"Struct",
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [8] = {
    @"class @aClassName : @superClassName {\n"
  "  @aType mAnAttribute\n"
  "}\n",
    @"enum @aType {\n"
  "  constant1, constant2\n"
  "}\n",
    @"list @type {\n"
  "  @aType mAnAttribute\n"
  "}\n",
    @"list @type {\n"
  "  @aType mAnAttribute\n"
  "}\n"
  "listmap @myListMap (@aList)\n",
    @"map @type {\n"
  "  @aType mAnAttribute\n"
  "  insert insertKey error message \"the '%K' key is already declared in %L\"\n"
  "  search searchKey error message \"there is no '%K' key\"\n"
  "}\n",
    @"sortedlist @type {\n"
  "  @string mFirstAttribute\n"
  "  @bool mSecondAttribute\n"
  "}{\n"
  "  mFirstAttribute >, mSecondAttribute <\n"
  "}\n",
    @"struct @type {\n"
  "  @aType mAnAttribute\n"
  "}\n",
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@end

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#pragma mark Lexique galgasTemplateScanner

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const UInt16 * gPopUpData_galgasTemplateScanner [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Lexique interface                                                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@interface OC_Tokenizer_galgasTemplateScanner : OC_Lexique_galgasTemplateScanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@implementation OC_Tokenizer_galgasTemplateScanner

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) blockComment {
  return @"" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (const UInt16 * *) popupListData {
  return gPopUpData_galgasTemplateScanner ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSUInteger) textMacroCount {
  return 0 ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) tabItemTitle {
  return @"Template" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@end



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

OC_Lexique * tokenizerForExtension (const NSString * inExtension) {
  OC_Lexique * result = nil ;
  if ([inExtension isEqualToString:@"galgas"]) {
    result = [OC_Tokenizer_galgas3Scanner new] ;
  }else if ([inExtension isEqualToString:@"galgasProject"]) {
    result = [OC_Tokenizer_galgas3Scanner new] ;
  }else if ([inExtension isEqualToString:@"galgasTemplate"]) {
    result = [OC_Tokenizer_galgasTemplateScanner new] ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

NSArray * tokenizers (void) {
  return [NSArray arrayWithObjects:
    [OC_Tokenizer_galgas3Scanner new],
    [OC_Tokenizer_galgasTemplateScanner new],
    nil
  ] ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

NSString * buildRunOption (void) {
  return @"" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


