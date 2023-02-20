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
//
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                
//
//----------------------------------------------------------------------------------------------------------------------

NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"GGSUpdateCocoaGalgas", [GGSUpdateCocoaGalgas class], nil],
    nil
  ] ;
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

static const UInt16 gPopUpData_0_galgasScanner_1580 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_before, 0,
  galgasScanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1603 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_after, 0,
  galgasScanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1628 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_map, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1657 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_boolset, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1683 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_list, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1715 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_sortedlist, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1741 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_enum, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1768 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_class, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1798 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_refclass, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1826 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_extern, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1854 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_struct, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1889 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_rule, 0,
  galgasScanner_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1920 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_proc, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1951 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1996 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1__25_attribute, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2040 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_filewrapper, 0,
  galgasScanner_1_identifier, 0,
  galgasScanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2097 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2151 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2193 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2250 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2305 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2347 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2404 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2459 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2501 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2550 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_syntax, 0,
  galgasScanner_1_extension, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2587 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_case, 0,
  galgasScanner_1__2E_, 0,
  galgasScanner_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2620 [4] = {
  1, // Leading character count to strip
  galgasScanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2652 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2688 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgasScanner [31] = {
  gPopUpData_0_galgasScanner_1580,
  gPopUpData_0_galgasScanner_1603,
  gPopUpData_0_galgasScanner_1628,
  gPopUpData_0_galgasScanner_1657,
  gPopUpData_0_galgasScanner_1683,
  gPopUpData_0_galgasScanner_1715,
  gPopUpData_0_galgasScanner_1741,
  gPopUpData_0_galgasScanner_1768,
  gPopUpData_0_galgasScanner_1798,
  gPopUpData_0_galgasScanner_1826,
  gPopUpData_0_galgasScanner_1854,
  gPopUpData_0_galgasScanner_1889,
  gPopUpData_0_galgasScanner_1920,
  gPopUpData_0_galgasScanner_1951,
  gPopUpData_0_galgasScanner_1996,
  gPopUpData_0_galgasScanner_2040,
  gPopUpData_0_galgasScanner_2097,
  gPopUpData_0_galgasScanner_2151,
  gPopUpData_0_galgasScanner_2193,
  gPopUpData_0_galgasScanner_2250,
  gPopUpData_0_galgasScanner_2305,
  gPopUpData_0_galgasScanner_2347,
  gPopUpData_0_galgasScanner_2404,
  gPopUpData_0_galgasScanner_2459,
  gPopUpData_0_galgasScanner_2501,
  gPopUpData_0_galgasScanner_2550,
  gPopUpData_0_galgasScanner_2587,
  gPopUpData_0_galgasScanner_2620,
  gPopUpData_0_galgasScanner_2652,
  gPopUpData_0_galgasScanner_2688,
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


