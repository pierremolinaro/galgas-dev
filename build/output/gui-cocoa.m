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

static const UInt16 gPopUpData_0_galgasScanner_33__1942 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_before, 0,
  galgasScanner3_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__1965 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_after, 0,
  galgasScanner3_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__1986 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_map, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2015 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_boolset, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2041 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_list, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2073 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_sortedlist, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2099 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_enum, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2126 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_class, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2154 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_extern, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2182 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_struct, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2208 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_rule, 0,
  galgasScanner3_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2243 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_proc, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2274 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2314 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_once, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2366 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_once, 0,
  galgasScanner3_1__25_usefull, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2409 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_usefull, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2461 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_func, 0,
  galgasScanner3_1__25_usefull, 0,
  galgasScanner3_1__25_once, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2513 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_filewrapper, 0,
  galgasScanner3_1_identifier, 0,
  galgasScanner3_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2560 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2614 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2656 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2711 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2766 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2808 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2863 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2918 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2960 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3007 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_syntax, 0,
  galgasScanner3_1_extension, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3044 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_case, 0,
  galgasScanner3_1__2E_, 0,
  galgasScanner3_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3086 [4] = {
  1, // Leading character count to strip
  galgasScanner3_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3127 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1__21_selector_3A_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3163 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgasScanner_33_ [33] = {
  gPopUpData_0_galgasScanner_33__1942,
  gPopUpData_0_galgasScanner_33__1965,
  gPopUpData_0_galgasScanner_33__1986,
  gPopUpData_0_galgasScanner_33__2015,
  gPopUpData_0_galgasScanner_33__2041,
  gPopUpData_0_galgasScanner_33__2073,
  gPopUpData_0_galgasScanner_33__2099,
  gPopUpData_0_galgasScanner_33__2126,
  gPopUpData_0_galgasScanner_33__2154,
  gPopUpData_0_galgasScanner_33__2182,
  gPopUpData_0_galgasScanner_33__2208,
  gPopUpData_0_galgasScanner_33__2243,
  gPopUpData_0_galgasScanner_33__2274,
  gPopUpData_0_galgasScanner_33__2314,
  gPopUpData_0_galgasScanner_33__2366,
  gPopUpData_0_galgasScanner_33__2409,
  gPopUpData_0_galgasScanner_33__2461,
  gPopUpData_0_galgasScanner_33__2513,
  gPopUpData_0_galgasScanner_33__2560,
  gPopUpData_0_galgasScanner_33__2614,
  gPopUpData_0_galgasScanner_33__2656,
  gPopUpData_0_galgasScanner_33__2711,
  gPopUpData_0_galgasScanner_33__2766,
  gPopUpData_0_galgasScanner_33__2808,
  gPopUpData_0_galgasScanner_33__2863,
  gPopUpData_0_galgasScanner_33__2918,
  gPopUpData_0_galgasScanner_33__2960,
  gPopUpData_0_galgasScanner_33__3007,
  gPopUpData_0_galgasScanner_33__3044,
  gPopUpData_0_galgasScanner_33__3086,
  gPopUpData_0_galgasScanner_33__3127,
  gPopUpData_0_galgasScanner_33__3163,
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
  if ([inExtension isEqualToString:@"galgas"]) {
    result = [OC_Tokenizer_0_galgasScanner3 new] ;
  }else if ([inExtension isEqualToString:@"galgasProject"]) {
    result = [OC_Tokenizer_0_galgasScanner3 new] ;
  }else if ([inExtension isEqualToString:@"galgasTemplate"]) {
    result = [OC_Tokenizer_2_galgasTemplateScanner new] ;
  }else if ([inExtension isEqualToString:@"ggs"]) {
    result = [OC_Tokenizer_1_galgasScanner4 new] ;
  }else if ([inExtension isEqualToString:@"ggsTemplate"]) {
    result = [OC_Tokenizer_2_galgasTemplateScanner new] ;
  }else if ([inExtension isEqualToString:@"ggsproject"]) {
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


