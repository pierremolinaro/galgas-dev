//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Token.h"
#import "F_CocoaWrapperForGalgas.h"
#import "OC_GGS_CommandLineOption.h"
#import "lexique-galgas-53-canner-cocoa.h"
#import "lexique-galgas-54-emplate-53-canner-cocoa.h"
#import "GGSUpdateCocoaGalgas.h"

#ifdef USER_DEFAULT_COLORS_DEFINED
  #import "user_default_colors.h"
#endif

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Nibs

//----------------------------------------------------------------------------------------------------------------------
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S
//----------------------------------------------------------------------------------------------------------------------

NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"GGSUpdateCocoaGalgas", [GGSUpdateCocoaGalgas class], nil],
    nil
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------
//    Project file extensions
//----------------------------------------------------------------------------------------------------------------------

NSSet * projectFileExtensions (void) {
  return [NSSet setWithObjects: @"galgasProject", @"ggsproject", nil] ;
}

//----------------------------------------------------------------------------------------------------------------------
//    indexingPathSuffix
//----------------------------------------------------------------------------------------------------------------------

NSString * indexingPathSuffix (void) {
  return @"-build/indexes" ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Command Line Options

//----------------------------------------------------------------------------------------------------------------------
//
//                       Command Line Options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

#import "option-galgas-5F-cli-5F-options-cocoa.h"

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Lexique galgasScanner

//----------------------------------------------------------------------------------------------------------------------
//
//                     P O P    U P    L I S T    D A T A                                        
//
//----------------------------------------------------------------------------------------------------------------------

static const UInt16 gPopUpData_0_galgasScanner_1613 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_before, 0,
  galgasScanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1636 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_after, 0,
  galgasScanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1661 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_map, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1690 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_boolset, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1716 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_list, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1748 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_sortedlist, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1774 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_enum, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1801 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_class, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1831 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_refclass, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1859 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_extern, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1887 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_struct, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1922 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_rule, 0,
  galgasScanner_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1953 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_proc, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1984 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2029 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1__25_attribute, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2073 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_filewrapper, 0,
  galgasScanner_1_identifier, 0,
  galgasScanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2130 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2184 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2226 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2283 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2338 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2380 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2437 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2492 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2534 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2583 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_syntax, 0,
  galgasScanner_1_extension, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2620 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_case, 0,
  galgasScanner_1__2E_, 0,
  galgasScanner_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2653 [4] = {
  1, // Leading character count to strip
  galgasScanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2685 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2721 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgasScanner [31] = {
  gPopUpData_0_galgasScanner_1613,
  gPopUpData_0_galgasScanner_1636,
  gPopUpData_0_galgasScanner_1661,
  gPopUpData_0_galgasScanner_1690,
  gPopUpData_0_galgasScanner_1716,
  gPopUpData_0_galgasScanner_1748,
  gPopUpData_0_galgasScanner_1774,
  gPopUpData_0_galgasScanner_1801,
  gPopUpData_0_galgasScanner_1831,
  gPopUpData_0_galgasScanner_1859,
  gPopUpData_0_galgasScanner_1887,
  gPopUpData_0_galgasScanner_1922,
  gPopUpData_0_galgasScanner_1953,
  gPopUpData_0_galgasScanner_1984,
  gPopUpData_0_galgasScanner_2029,
  gPopUpData_0_galgasScanner_2073,
  gPopUpData_0_galgasScanner_2130,
  gPopUpData_0_galgasScanner_2184,
  gPopUpData_0_galgasScanner_2226,
  gPopUpData_0_galgasScanner_2283,
  gPopUpData_0_galgasScanner_2338,
  gPopUpData_0_galgasScanner_2380,
  gPopUpData_0_galgasScanner_2437,
  gPopUpData_0_galgasScanner_2492,
  gPopUpData_0_galgasScanner_2534,
  gPopUpData_0_galgasScanner_2583,
  gPopUpData_0_galgasScanner_2620,
  gPopUpData_0_galgasScanner_2653,
  gPopUpData_0_galgasScanner_2685,
  gPopUpData_0_galgasScanner_2721,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                            Lexique interface                                                  
//
//----------------------------------------------------------------------------------------------------------------------

@interface OC_Tokenizer_0_galgasScanner : OC_Lexique_galgasScanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Tokenizer_0_galgasScanner

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) blockComment {
  return @"#" ;
}

//----------------------------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_0_galgasScanner ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 7 ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) tabItemTitle {
  return @"Source GALGAS" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [8] = {
    @"refclass @aClassName : @superClassName {\n  public let @aType mAnAttribute\n}\n",
    @"enum @aType {\n  constant1, constant2\n}\n",
    @"list @type {\n  public let @aType mAnAttribute\n}\n",
    @"list @type {\n  public let @aType mAnAttribute\n}\nlistmap @myListMap (@aList)\n",
    @"map @type {\n  public let @aType mAnAttribute\n  insert insertKey error message \"the '%K' key is already declared in %L\"\n  search searchKey error message \"there is no '%K' key\"\n}\n",
    @"sortedlist @type {\n  public let @string mFirstAttribute\n  public let @bool mSecondAttribute\n}{\n  mFirstAttribute >, mSecondAttribute <\n}\n",
    @"struct @type {\n  public let @aType mAnAttribute\n}\n",
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------

@end

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Lexique galgasTemplateScanner

//----------------------------------------------------------------------------------------------------------------------
//
//                     P O P    U P    L I S T    D A T A                                        
//
//----------------------------------------------------------------------------------------------------------------------

static const UInt16 * gPopUpData_1_galgasTemplateScanner [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                            Lexique interface                                                  
//
//----------------------------------------------------------------------------------------------------------------------

@interface OC_Tokenizer_1_galgasTemplateScanner : OC_Lexique_galgasTemplateScanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Tokenizer_1_galgasTemplateScanner

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) blockComment {
  return @"" ;
}

//----------------------------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_1_galgasTemplateScanner ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) tabItemTitle {
  return @"Template" ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------

@end



//----------------------------------------------------------------------------------------------------------------------

OC_Lexique * tokenizerForExtension (const NSString * inExtension) {
  OC_Lexique * result = nil ;
  if ([inExtension isEqualToString:@"galgas"]) {
    result = [OC_Tokenizer_0_galgasScanner new] ;
  }else if ([inExtension isEqualToString:@"galgasProject"]) {
    result = [OC_Tokenizer_0_galgasScanner new] ;
  }else if ([inExtension isEqualToString:@"galgasTemplate"]) {
    result = [OC_Tokenizer_1_galgasTemplateScanner new] ;
  }else if ([inExtension isEqualToString:@"ggs"]) {
    result = [OC_Tokenizer_0_galgasScanner new] ;
  }else if ([inExtension isEqualToString:@"ggsTemplate"]) {
    result = [OC_Tokenizer_1_galgasTemplateScanner new] ;
  }else if ([inExtension isEqualToString:@"ggsproject"]) {
    result = [OC_Tokenizer_0_galgasScanner new] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

NSArray * tokenizers (void) {
  return [NSArray arrayWithObjects:
    [OC_Tokenizer_0_galgasScanner new],
    [OC_Tokenizer_1_galgasTemplateScanner new],
    nil
  ] ;
}

//----------------------------------------------------------------------------------------------------------------------

NSString * buildRunOption (void) {
  return @"" ;
}

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


