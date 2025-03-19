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

static const UInt16 gPopUpData_0_galgasScanner_33__2845 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2900 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2942 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_getter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__2997 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_abstract, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3052 [10] = {
  0, // Leading character count to strip
  galgasScanner3_1_override, 0,
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3094 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_setter, 0,
  galgasScanner3_1__40_type, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3141 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_syntax, 0,
  galgasScanner3_1_extension, 0,
  galgasScanner3_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3178 [8] = {
  0, // Leading character count to strip
  galgasScanner3_1_case, 0,
  galgasScanner3_1__2E_, 0,
  galgasScanner3_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3220 [4] = {
  1, // Leading character count to strip
  galgasScanner3_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3261 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1__21_selector_3A_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_33__3297 [6] = {
  0, // Leading character count to strip
  galgasScanner3_1__24_terminal_24_, 0,
  galgasScanner3_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgasScanner_33_ [34] = {
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
  gPopUpData_0_galgasScanner_33__2845,
  gPopUpData_0_galgasScanner_33__2900,
  gPopUpData_0_galgasScanner_33__2942,
  gPopUpData_0_galgasScanner_33__2997,
  gPopUpData_0_galgasScanner_33__3052,
  gPopUpData_0_galgasScanner_33__3094,
  gPopUpData_0_galgasScanner_33__3141,
  gPopUpData_0_galgasScanner_33__3178,
  gPopUpData_0_galgasScanner_33__3220,
  gPopUpData_0_galgasScanner_33__3261,
  gPopUpData_0_galgasScanner_33__3297,
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

static const UInt16 gPopUpData_1_galgasScanner_34__4468 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_before, 0,
  galgasScanner4_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4491 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_after, 0,
  galgasScanner4_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4513 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_dict, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4538 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_map, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4567 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_boolset, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4593 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_list, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4625 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_sortedlist, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4651 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_enum, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4678 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_class, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4706 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_extern, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4734 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_struct, 0,
  galgasScanner4_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4760 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_rule, 0,
  galgasScanner4_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4795 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4826 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4866 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_once, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4918 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_once, 0,
  galgasScanner4_1__25_usefull, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__4961 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_usefull, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5013 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__25_usefull, 0,
  galgasScanner4_1__25_once, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5065 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_filewrapper, 0,
  galgasScanner4_1_identifier, 0,
  galgasScanner4_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5110 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5162 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5202 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5246 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5289 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5320 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5373 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5426 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5466 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5510 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5554 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5585 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1_func, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5650 [12] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5715 [12] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5767 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1__40_type, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5823 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_abstract, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5879 [10] = {
  0, // Leading character count to strip
  galgasScanner4_1_override, 0,
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5922 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_mutating, 0,
  galgasScanner4_1_proc, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__5969 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_syntax, 0,
  galgasScanner4_1_extension, 0,
  galgasScanner4_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6006 [8] = {
  0, // Leading character count to strip
  galgasScanner4_1_case, 0,
  galgasScanner4_1__2E_, 0,
  galgasScanner4_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6048 [4] = {
  1, // Leading character count to strip
  galgasScanner4_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6089 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1__24_terminal_24_, 0,
  galgasScanner4_1__21_selector_3A_, 65535,
  0
} ;

static const UInt16 gPopUpData_1_galgasScanner_34__6125 [6] = {
  0, // Leading character count to strip
  galgasScanner4_1__24_terminal_24_, 0,
  galgasScanner4_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_1_galgasScanner_34_ [43] = {
  gPopUpData_1_galgasScanner_34__4468,
  gPopUpData_1_galgasScanner_34__4491,
  gPopUpData_1_galgasScanner_34__4513,
  gPopUpData_1_galgasScanner_34__4538,
  gPopUpData_1_galgasScanner_34__4567,
  gPopUpData_1_galgasScanner_34__4593,
  gPopUpData_1_galgasScanner_34__4625,
  gPopUpData_1_galgasScanner_34__4651,
  gPopUpData_1_galgasScanner_34__4678,
  gPopUpData_1_galgasScanner_34__4706,
  gPopUpData_1_galgasScanner_34__4734,
  gPopUpData_1_galgasScanner_34__4760,
  gPopUpData_1_galgasScanner_34__4795,
  gPopUpData_1_galgasScanner_34__4826,
  gPopUpData_1_galgasScanner_34__4866,
  gPopUpData_1_galgasScanner_34__4918,
  gPopUpData_1_galgasScanner_34__4961,
  gPopUpData_1_galgasScanner_34__5013,
  gPopUpData_1_galgasScanner_34__5065,
  gPopUpData_1_galgasScanner_34__5110,
  gPopUpData_1_galgasScanner_34__5162,
  gPopUpData_1_galgasScanner_34__5202,
  gPopUpData_1_galgasScanner_34__5246,
  gPopUpData_1_galgasScanner_34__5289,
  gPopUpData_1_galgasScanner_34__5320,
  gPopUpData_1_galgasScanner_34__5373,
  gPopUpData_1_galgasScanner_34__5426,
  gPopUpData_1_galgasScanner_34__5466,
  gPopUpData_1_galgasScanner_34__5510,
  gPopUpData_1_galgasScanner_34__5554,
  gPopUpData_1_galgasScanner_34__5585,
  gPopUpData_1_galgasScanner_34__5650,
  gPopUpData_1_galgasScanner_34__5715,
  gPopUpData_1_galgasScanner_34__5767,
  gPopUpData_1_galgasScanner_34__5823,
  gPopUpData_1_galgasScanner_34__5879,
  gPopUpData_1_galgasScanner_34__5922,
  gPopUpData_1_galgasScanner_34__5969,
  gPopUpData_1_galgasScanner_34__6006,
  gPopUpData_1_galgasScanner_34__6048,
  gPopUpData_1_galgasScanner_34__6089,
  gPopUpData_1_galgasScanner_34__6125,
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


