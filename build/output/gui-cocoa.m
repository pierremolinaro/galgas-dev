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
  return [NSDictionary dictionaryWithObjectsAndKeys: @"build/indexes", @"galgasProject", @"*+BUILD/indexes", @"ggsproject", nil] ;
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

static const UInt16 gPopUpData_0_galgasScanner_33__2644 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_dict, 0,
  galgasScanner3_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2694 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2748 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2790 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_method, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2836 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2881 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_method, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2914 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_method, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2969 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3024 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3066 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3112 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3158 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3191 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_getter, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3246 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3301 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3343 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3389 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3435 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3468 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1_setter, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3515 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_syntax, 0,
  galgasScanner3_1_extension, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3552 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_case, 0,
  galgasScanner3_1__2E_, 0,
  galgasScanner3_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3594 [4] = {
  1, // Leading character count to strip
  galgasScanner3_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3635 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1__21_selector_3A_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3671 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgasScanner_33_ [43] = {
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
  gPopUpData_0_galgasScanner_33__2644,
  gPopUpData_0_galgasScanner_33__2694,
  gPopUpData_0_galgasScanner_33__2748,
  gPopUpData_0_galgasScanner_33__2790,
  gPopUpData_0_galgasScanner_33__2836,
  gPopUpData_0_galgasScanner_33__2881,
  gPopUpData_0_galgasScanner_33__2914,
  gPopUpData_0_galgasScanner_33__2969,
  gPopUpData_0_galgasScanner_33__3024,
  gPopUpData_0_galgasScanner_33__3066,
  gPopUpData_0_galgasScanner_33__3112,
  gPopUpData_0_galgasScanner_33__3158,
  gPopUpData_0_galgasScanner_33__3191,
  gPopUpData_0_galgasScanner_33__3246,
  gPopUpData_0_galgasScanner_33__3301,
  gPopUpData_0_galgasScanner_33__3343,
  gPopUpData_0_galgasScanner_33__3389,
  gPopUpData_0_galgasScanner_33__3435,
  gPopUpData_0_galgasScanner_33__3468,
  gPopUpData_0_galgasScanner_33__3515,
  gPopUpData_0_galgasScanner_33__3552,
  gPopUpData_0_galgasScanner_33__3594,
  gPopUpData_0_galgasScanner_33__3635,
  gPopUpData_0_galgasScanner_33__3671,
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

static const UInt16 gPopUpData_1_galgasScanner_34__4842 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_before, 0,
  galgasScanner4_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4865 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_after, 0,
  galgasScanner4_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4887 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_dict, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4912 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_map, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4941 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_boolset, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4967 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_list, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4999 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_sortedlist, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5025 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_enum, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5052 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_class, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5080 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_extern, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5108 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_struct, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5134 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_rule, 0,
  galgasScanner4_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5169 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5200 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5240 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_once, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5292 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_once, 0,
  galgasScanner4_1__25_usefull, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5335 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_usefull, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5387 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_usefull, 0,
  galgasScanner4_1__25_once, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5439 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_filewrapper, 0,
  galgasScanner4_1_identifier, 0,
  galgasScanner4_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5484 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5536 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5576 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5620 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5663 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5694 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5747 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5800 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5840 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5884 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5928 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5959 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6024 [12] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6089 [12] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6141 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6197 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6253 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6296 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6343 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_syntax, 0,
  galgasScanner4_1_extension, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6380 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_case, 0,
  galgasScanner4_1__2E_, 0,
  galgasScanner4_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6422 [4] = {
  1, // Leading character count to strip
  galgasScanner4_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6463 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1__24_terminal_24_, 0,
  galgasScanner4_1__21_selector_3A_, 65535,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6499 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1__24_terminal_24_, 0,
  galgasScanner4_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_1_galgasScanner_34_ [43] = {
  gPopUpData_1_galgasScanner_34__4842,
  gPopUpData_1_galgasScanner_34__4865,
  gPopUpData_1_galgasScanner_34__4887,
  gPopUpData_1_galgasScanner_34__4912,
  gPopUpData_1_galgasScanner_34__4941,
  gPopUpData_1_galgasScanner_34__4967,
  gPopUpData_1_galgasScanner_34__4999,
  gPopUpData_1_galgasScanner_34__5025,
  gPopUpData_1_galgasScanner_34__5052,
  gPopUpData_1_galgasScanner_34__5080,
  gPopUpData_1_galgasScanner_34__5108,
  gPopUpData_1_galgasScanner_34__5134,
  gPopUpData_1_galgasScanner_34__5169,
  gPopUpData_1_galgasScanner_34__5200,
  gPopUpData_1_galgasScanner_34__5240,
  gPopUpData_1_galgasScanner_34__5292,
  gPopUpData_1_galgasScanner_34__5335,
  gPopUpData_1_galgasScanner_34__5387,
  gPopUpData_1_galgasScanner_34__5439,
  gPopUpData_1_galgasScanner_34__5484,
  gPopUpData_1_galgasScanner_34__5536,
  gPopUpData_1_galgasScanner_34__5576,
  gPopUpData_1_galgasScanner_34__5620,
  gPopUpData_1_galgasScanner_34__5663,
  gPopUpData_1_galgasScanner_34__5694,
  gPopUpData_1_galgasScanner_34__5747,
  gPopUpData_1_galgasScanner_34__5800,
  gPopUpData_1_galgasScanner_34__5840,
  gPopUpData_1_galgasScanner_34__5884,
  gPopUpData_1_galgasScanner_34__5928,
  gPopUpData_1_galgasScanner_34__5959,
  gPopUpData_1_galgasScanner_34__6024,
  gPopUpData_1_galgasScanner_34__6089,
  gPopUpData_1_galgasScanner_34__6141,
  gPopUpData_1_galgasScanner_34__6197,
  gPopUpData_1_galgasScanner_34__6253,
  gPopUpData_1_galgasScanner_34__6296,
  gPopUpData_1_galgasScanner_34__6343,
  gPopUpData_1_galgasScanner_34__6380,
  gPopUpData_1_galgasScanner_34__6422,
  gPopUpData_1_galgasScanner_34__6463,
  gPopUpData_1_galgasScanner_34__6499,
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


