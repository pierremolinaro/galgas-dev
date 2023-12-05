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

NSDictionary * indexingDescriptorDictionary (void) {
  return [NSDictionary dictionaryWithObjectsAndKeys: @"build/indexes", @"galgasProject", @"*-build/indexes", @"ggsproject", nil] ;
}

//----------------------------------------------------------------------------------------------------------------------

#pragma mark Command Line Options

//----------------------------------------------------------------------------------------------------------------------
//                       Command Line Options                                                    
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
//                     P O P    U P    L I S T    D A T A
//----------------------------------------------------------------------------------------------------------------------

static const UInt16 gPopUpData_0_galgasScanner_1845 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_before, 0,
  galgasScanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1868 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_after, 0,
  galgasScanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1889 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_map, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1918 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_boolset, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1944 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_list, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_1976 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_sortedlist, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2002 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_enum, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2029 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_class, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2059 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_refclass, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2087 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_extern, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2115 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_struct, 0,
  galgasScanner_1__40_type, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2141 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_rule, 0,
  galgasScanner_1__3C_non_5F_terminal_3E_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2176 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_proc, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2207 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2247 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1__25_once, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2299 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1__25_once, 0,
  galgasScanner_1__25_usefull, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2342 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1__25_usefull, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2394 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1__25_usefull, 0,
  galgasScanner_1__25_once, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2446 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_filewrapper, 0,
  galgasScanner_1_identifier, 0,
  galgasScanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2495 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2549 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2591 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2648 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2703 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2745 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2802 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2857 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2899 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2948 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_syntax, 0,
  galgasScanner_1_extension, 0,
  galgasScanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_2987 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_case, 0,
  galgasScanner_1__2E_, 0,
  galgasScanner_1__22_string_22_, 0,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_3029 [4] = {
  1, // Leading character count to strip
  galgasScanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_3061 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_0_galgasScanner_3097 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_0_galgasScanner [34] = {
  gPopUpData_0_galgasScanner_1845,
  gPopUpData_0_galgasScanner_1868,
  gPopUpData_0_galgasScanner_1889,
  gPopUpData_0_galgasScanner_1918,
  gPopUpData_0_galgasScanner_1944,
  gPopUpData_0_galgasScanner_1976,
  gPopUpData_0_galgasScanner_2002,
  gPopUpData_0_galgasScanner_2029,
  gPopUpData_0_galgasScanner_2059,
  gPopUpData_0_galgasScanner_2087,
  gPopUpData_0_galgasScanner_2115,
  gPopUpData_0_galgasScanner_2141,
  gPopUpData_0_galgasScanner_2176,
  gPopUpData_0_galgasScanner_2207,
  gPopUpData_0_galgasScanner_2247,
  gPopUpData_0_galgasScanner_2299,
  gPopUpData_0_galgasScanner_2342,
  gPopUpData_0_galgasScanner_2394,
  gPopUpData_0_galgasScanner_2446,
  gPopUpData_0_galgasScanner_2495,
  gPopUpData_0_galgasScanner_2549,
  gPopUpData_0_galgasScanner_2591,
  gPopUpData_0_galgasScanner_2648,
  gPopUpData_0_galgasScanner_2703,
  gPopUpData_0_galgasScanner_2745,
  gPopUpData_0_galgasScanner_2802,
  gPopUpData_0_galgasScanner_2857,
  gPopUpData_0_galgasScanner_2899,
  gPopUpData_0_galgasScanner_2948,
  gPopUpData_0_galgasScanner_2987,
  gPopUpData_0_galgasScanner_3029,
  gPopUpData_0_galgasScanner_3061,
  gPopUpData_0_galgasScanner_3097,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------
//                            Lexique interface
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
//                     P O P    U P    L I S T    D A T A
//----------------------------------------------------------------------------------------------------------------------

static const UInt16 * gPopUpData_1_galgasTemplateScanner [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------
//                            Lexique interface
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


