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

#pragma mark Lexique galgas3Scanner

//----------------------------------------------------------------------------------------------------------------------
//
//                     P O P    U P    L I S T    D A T A                                        
//
//----------------------------------------------------------------------------------------------------------------------

static const UInt16 gPopUpData_0_galgas_33_Scanner_1581 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_before, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1604 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_after, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1629 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_map, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1664 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_shared, 0,
  galgas3Scanner_1_map, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1690 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_list, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1722 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_sortedlist, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1748 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_enum, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1775 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_class, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1803 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_extern, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1831 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_struct, 0,
  galgas3Scanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1866 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_rule, 0,
  galgas3Scanner_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1897 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_proc, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1928 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_1973 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1__25_attribute, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2017 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_filewrapper, 0,
  galgas3Scanner_1_identifier, 0,
  galgas3Scanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2074 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2128 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2170 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2227 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2282 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2324 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2381 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2436 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2478 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1__40_type, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2527 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_syntax, 0,
  galgas3Scanner_1_extension, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2564 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_case, 0,
  galgas3Scanner_1__2E_, 0,
  galgas3Scanner_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2597 [4] = {
  1, // Leading character count to strip
  galgas3Scanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2629 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1__24_terminal_24_, 0,
  galgas3Scanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgas_33_Scanner_2665 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1__24_terminal_24_, 0,
  galgas3Scanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgas_33_Scanner [30] = {
  gPopUpData_0_galgas_33_Scanner_1581,
  gPopUpData_0_galgas_33_Scanner_1604,
  gPopUpData_0_galgas_33_Scanner_1629,
  gPopUpData_0_galgas_33_Scanner_1664,
  gPopUpData_0_galgas_33_Scanner_1690,
  gPopUpData_0_galgas_33_Scanner_1722,
  gPopUpData_0_galgas_33_Scanner_1748,
  gPopUpData_0_galgas_33_Scanner_1775,
  gPopUpData_0_galgas_33_Scanner_1803,
  gPopUpData_0_galgas_33_Scanner_1831,
  gPopUpData_0_galgas_33_Scanner_1866,
  gPopUpData_0_galgas_33_Scanner_1897,
  gPopUpData_0_galgas_33_Scanner_1928,
  gPopUpData_0_galgas_33_Scanner_1973,
  gPopUpData_0_galgas_33_Scanner_2017,
  gPopUpData_0_galgas_33_Scanner_2074,
  gPopUpData_0_galgas_33_Scanner_2128,
  gPopUpData_0_galgas_33_Scanner_2170,
  gPopUpData_0_galgas_33_Scanner_2227,
  gPopUpData_0_galgas_33_Scanner_2282,
  gPopUpData_0_galgas_33_Scanner_2324,
  gPopUpData_0_galgas_33_Scanner_2381,
  gPopUpData_0_galgas_33_Scanner_2436,
  gPopUpData_0_galgas_33_Scanner_2478,
  gPopUpData_0_galgas_33_Scanner_2527,
  gPopUpData_0_galgas_33_Scanner_2564,
  gPopUpData_0_galgas_33_Scanner_2597,
  gPopUpData_0_galgas_33_Scanner_2629,
  gPopUpData_0_galgas_33_Scanner_2665,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                            Lexique interface                                                  
//
//----------------------------------------------------------------------------------------------------------------------

@interface OC_Tokenizer_0_galgas3Scanner : OC_Lexique_galgas3Scanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Tokenizer_0_galgas3Scanner

//----------------------------------------------------------------------------------------------------------------------

- (NSString *) blockComment {
  return @"#" ;
}

//----------------------------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_0_galgas_33_Scanner ;
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
    @"refclass @aClassName : @superClassName {\n"
  "  public var @aType mAnAttribute\n"
  "}\n",
    @"enum @aType {\n"
  "  constant1, constant2\n"
  "}\n",
    @"list @type {\n"
  "  public var @aType mAnAttribute\n"
  "}\n",
    @"list @type {\n"
  "  public var @aType mAnAttribute\n"
  "}\n"
  "listmap @myListMap (@aList)\n",
    @"map @type {\n"
  "  public var @aType mAnAttribute\n"
  "  insert insertKey error message \"the '%K' key is already declared in %L\"\n"
  "  search searchKey error message \"there is no '%K' key\"\n"
  "}\n",
    @"sortedlist @type {\n"
  "  public var @string mFirstAttribute\n"
  "  public var @bool mSecondAttribute\n"
  "}{\n"
  "  mFirstAttribute >, mSecondAttribute <\n"
  "}\n",
    @"struct @type {\n"
  "  public var @aType mAnAttribute\n"
  "}\n",
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
    result = [OC_Tokenizer_0_galgas3Scanner new] ;
  }else if ([inExtension isEqualToString:@"galgasProject"]) {
    result = [OC_Tokenizer_0_galgas3Scanner new] ;
  }else if ([inExtension isEqualToString:@"galgasTemplate"]) {
    result = [OC_Tokenizer_1_galgasTemplateScanner new] ;
  }else if ([inExtension isEqualToString:@"ggs"]) {
    result = [OC_Tokenizer_0_galgas3Scanner new] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

NSArray * tokenizers (void) {
  return [NSArray arrayWithObjects:
    [OC_Tokenizer_0_galgas3Scanner new],
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


