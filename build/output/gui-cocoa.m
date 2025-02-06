//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Token.h"
#import "F_CocoaWrapperForGalgas.h"
#import "OC_GGS_CommandLineOption.h"
#import "lexique-galgas+scanner3-cocoa.h"
#import "lexique-galgas+scanner4-cocoa.h"
#import "lexique-galgas+template+scanner-cocoa.h"
#import "GGSUpdateCocoaGalgas.h"

#ifdef USER_DEFAULT_COLORS_DEFINED
  #import "user_default_colors.h"
#endif

//--------------------------------------------------------------------------------------------------

#pragma mark Nibs

//--------------------------------------------------------------------------------------------------
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                
//--------------------------------------------------------------------------------------------------

NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"GGSUpdateCocoaGalgas", [GGSUpdateCocoaGalgas class], nil],
    nil
  ] ;
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

NSDictionary * indexingDescriptorDictionary (void) {
  return [NSDictionary dictionaryWithObjectsAndKeys: @"build/indexes", @"galgasProject", @"*-build/indexes", @"ggsproject", nil] ;
}

//--------------------------------------------------------------------------------------------------

#pragma mark Command Line Options

//--------------------------------------------------------------------------------------------------
//                       Command Line Options                                                    
//--------------------------------------------------------------------------------------------------

#import "option-galgas-5Fcli-5Foptions-cocoa.h"

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

#pragma mark Lexique galgasScanner3

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

static const UInt16 gPopUpData_0_galgasScanner_33__2049 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_before, 0,
  galgasScanner3_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2072 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_after, 0,
  galgasScanner3_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2093 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_map, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2122 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_boolset, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2148 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_list, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2180 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_sortedlist, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2206 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_enum, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2233 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_class, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2261 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_extern, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2289 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_struct, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2315 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_rule, 0,
  galgasScanner3_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2350 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_proc, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2381 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2421 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_once, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2473 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_once, 0,
  galgasScanner3_1__25_usefull, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2516 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_usefull, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2568 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_usefull, 0,
  galgasScanner3_1__25_once, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2620 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_filewrapper, 0,
  galgasScanner3_1_identifier, 0,
  galgasScanner3_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2667 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2721 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2763 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2818 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2873 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2915 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2970 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3025 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3067 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3114 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_syntax, 0,
  galgasScanner3_1_extension, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3151 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_case, 0,
  galgasScanner3_1__2E_, 0,
  galgasScanner3_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3193 [4] = {
  1, // Leading character count to strip
  galgasScanner3_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3234 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1__21_selector_3A_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3270 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgasScanner_33_ [33] = {
  gPopUpData_0_galgasScanner_33__2049,
  gPopUpData_0_galgasScanner_33__2072,
  gPopUpData_0_galgasScanner_33__2093,
  gPopUpData_0_galgasScanner_33__2122,
  gPopUpData_0_galgasScanner_33__2148,
  gPopUpData_0_galgasScanner_33__2180,
  gPopUpData_0_galgasScanner_33__2206,
  gPopUpData_0_galgasScanner_33__2233,
  gPopUpData_0_galgasScanner_33__2261,
  gPopUpData_0_galgasScanner_33__2289,
  gPopUpData_0_galgasScanner_33__2315,
  gPopUpData_0_galgasScanner_33__2350,
  gPopUpData_0_galgasScanner_33__2381,
  gPopUpData_0_galgasScanner_33__2421,
  gPopUpData_0_galgasScanner_33__2473,
  gPopUpData_0_galgasScanner_33__2516,
  gPopUpData_0_galgasScanner_33__2568,
  gPopUpData_0_galgasScanner_33__2620,
  gPopUpData_0_galgasScanner_33__2667,
  gPopUpData_0_galgasScanner_33__2721,
  gPopUpData_0_galgasScanner_33__2763,
  gPopUpData_0_galgasScanner_33__2818,
  gPopUpData_0_galgasScanner_33__2873,
  gPopUpData_0_galgasScanner_33__2915,
  gPopUpData_0_galgasScanner_33__2970,
  gPopUpData_0_galgasScanner_33__3025,
  gPopUpData_0_galgasScanner_33__3067,
  gPopUpData_0_galgasScanner_33__3114,
  gPopUpData_0_galgasScanner_33__3151,
  gPopUpData_0_galgasScanner_33__3193,
  gPopUpData_0_galgasScanner_33__3234,
  gPopUpData_0_galgasScanner_33__3270,
  NULL
} ;

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------

@interface OC_Tokenizer_0_galgasScanner3 : OC_Lexique_galgasScanner3 {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//--------------------------------------------------------------------------------------------------

@implementation OC_Tokenizer_0_galgasScanner3

//--------------------------------------------------------------------------------------------------

- (NSString *) blockComment {
  return @"//" ;
}

//--------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_0_galgasScanner_33_ ;
}

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 6 ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) tabItemTitle {
  return @"Source GALGAS 3" ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [7] = {
    @"Class",
    @"Enum",
    @"List",
    @"Map",
    @"Sorted List",
    @"Struct",
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [7] = {
    @"class @aClassName : @superClassName {\n  public let @aType mProperty\n}\n",
    @"enum @aType {\n  constant1, constant2\n}\n",
    @"list @type {\n  public let @aType mProperty\n}\n",
    @"map @type {\n  public let @aType mProperty\n  insert insertKey error message\"the '%K' key is already declared in %L\"\n  search searchKey error message\"there is no '%K' key\"\n}\n",
    @"sortedlist @type {\n  public let @string mFirstAttribute\n  public let @bool mSecondAttribute\n}{\n  mFirstAttribute >, mSecondAttribute <\n}\n",
    @"struct @type {\n  public let @aType mProperty\n}\n",
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end

//--------------------------------------------------------------------------------------------------

#pragma mark Lexique galgasScanner4

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

static const UInt16 * gPopUpData_1_galgasScanner_34_ [1] = {
  NULL
} ;

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------

@interface OC_Tokenizer_1_galgasScanner4 : OC_Lexique_galgasScanner4 {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//--------------------------------------------------------------------------------------------------

@implementation OC_Tokenizer_1_galgasScanner4

//--------------------------------------------------------------------------------------------------

- (NSString *) blockComment {
  return @"//" ;
}

//--------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_1_galgasScanner_34_ ;
}

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) tabItemTitle {
  return @"Source GALGAS 4" ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end

//--------------------------------------------------------------------------------------------------

#pragma mark Lexique galgasTemplateScanner

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

static const UInt16 * gPopUpData_2_galgasTemplateScanner [1] = {
  NULL
} ;

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------

@interface OC_Tokenizer_2_galgasTemplateScanner : OC_Lexique_galgasTemplateScanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//--------------------------------------------------------------------------------------------------

@implementation OC_Tokenizer_2_galgasTemplateScanner

//--------------------------------------------------------------------------------------------------

- (NSString *) blockComment {
  return @"" ;
}

//--------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_2_galgasTemplateScanner ;
}

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) tabItemTitle {
  return @"Template" ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end



//--------------------------------------------------------------------------------------------------

OC_Lexique * tokenizerForExtension (const NSString * inExtension) {
  OC_Lexique * result = nil ;
  NSString * uppercasedExtension = [inExtension uppercaseString] ;
  if ([uppercasedExtension isEqualToString:@"GALGAS"]) {
    result = [OC_Tokenizer_0_galgasScanner3 new] ;
  }else if ([uppercasedExtension isEqualToString:@"GALGASPROJECT"]) {
    result = [OC_Tokenizer_0_galgasScanner3 new] ;
  }else if ([uppercasedExtension isEqualToString:@"GALGASTEMPLATE"]) {
    result = [OC_Tokenizer_2_galgasTemplateScanner new] ;
  }else if ([uppercasedExtension isEqualToString:@"GGS"]) {
    result = [OC_Tokenizer_1_galgasScanner4 new] ;
  }else if ([uppercasedExtension isEqualToString:@"GGSTEMPLATE"]) {
    result = [OC_Tokenizer_2_galgasTemplateScanner new] ;
  }else if ([uppercasedExtension isEqualToString:@"GGSPROJECT"]) {
    result = [OC_Tokenizer_1_galgasScanner4 new] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

NSArray * tokenizers (void) {
  return [NSArray arrayWithObjects:
    [OC_Tokenizer_0_galgasScanner3 new],
    [OC_Tokenizer_1_galgasScanner4 new],
    [OC_Tokenizer_2_galgasTemplateScanner new],
    nil
  ] ;
}

//--------------------------------------------------------------------------------------------------

NSString * buildRunOption (void) {
  return @"" ;
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


