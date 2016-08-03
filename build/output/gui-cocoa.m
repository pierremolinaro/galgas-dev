//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Token.h"
#import "F_CocoaWrapperForGalgas.h"
#import "lexique-galgas3Scanner-cocoa.m"
#import "lexique-galgasTemplateScanner-cocoa.m"
#import "GGSUpdateCocoaGalgas.h"

#ifdef USER_DEFAULT_COLORS_DEFINED
  #import "user_default_colors.h"
#endif

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Nibs

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"GGSUpdateCocoaGalgas", [GGSUpdateCocoaGalgas class], nil],
    nil
  ] ;
}


//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Command Line Options

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Command Line Options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#import "option-galgas_cli_options-cocoa.m"

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Lexique galgas3Scanner

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const UInt16 gPopUpData_galgas_33_Scanner_2189 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_before, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2210 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_after, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2237 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_map, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2270 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_sharedmap, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2298 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_list, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2332 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_sortedlist, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2360 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_enum, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2389 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_class, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2419 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_extern, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2449 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_struct, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2487 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_rule, 0,
  galgas3Scanner_1_non_5F_terminal_5F_symbol, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2516 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_proc, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2545 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2587 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1_attribute, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2630 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_filewrapper, 0,
  galgas3Scanner_1_identifier, 0,
  galgas3Scanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2686 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2742 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2787 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2843 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2900 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2945 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3001 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3058 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3103 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3148 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_syntax, 0,
  galgas3Scanner_1_extension, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3186 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_case, 0,
  galgas3Scanner_1__2E_, 0,
  galgas3Scanner_1_literal_5F_string, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3217 [4] = {
  1, // Leading character count to strip
  galgas3Scanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3243 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_terminal, 0,
  galgas3Scanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3281 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_terminal, 0,
  galgas3Scanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_galgas_33_Scanner [30] = {
  gPopUpData_galgas_33_Scanner_2189,
  gPopUpData_galgas_33_Scanner_2210,
  gPopUpData_galgas_33_Scanner_2237,
  gPopUpData_galgas_33_Scanner_2270,
  gPopUpData_galgas_33_Scanner_2298,
  gPopUpData_galgas_33_Scanner_2332,
  gPopUpData_galgas_33_Scanner_2360,
  gPopUpData_galgas_33_Scanner_2389,
  gPopUpData_galgas_33_Scanner_2419,
  gPopUpData_galgas_33_Scanner_2449,
  gPopUpData_galgas_33_Scanner_2487,
  gPopUpData_galgas_33_Scanner_2516,
  gPopUpData_galgas_33_Scanner_2545,
  gPopUpData_galgas_33_Scanner_2587,
  gPopUpData_galgas_33_Scanner_2630,
  gPopUpData_galgas_33_Scanner_2686,
  gPopUpData_galgas_33_Scanner_2742,
  gPopUpData_galgas_33_Scanner_2787,
  gPopUpData_galgas_33_Scanner_2843,
  gPopUpData_galgas_33_Scanner_2900,
  gPopUpData_galgas_33_Scanner_2945,
  gPopUpData_galgas_33_Scanner_3001,
  gPopUpData_galgas_33_Scanner_3058,
  gPopUpData_galgas_33_Scanner_3103,
  gPopUpData_galgas_33_Scanner_3148,
  gPopUpData_galgas_33_Scanner_3186,
  gPopUpData_galgas_33_Scanner_3217,
  gPopUpData_galgas_33_Scanner_3243,
  gPopUpData_galgas_33_Scanner_3281,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Lexique interface                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Tokenizer_galgas3Scanner : OC_Lexique_galgas3Scanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Tokenizer_galgas3Scanner

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) blockComment {
  return @"#" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (const UInt16 * *) popupListData {
  return gPopUpData_galgas_33_Scanner ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) textMacroCount {
  return 7 ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) tabItemTitle {
  return @"Source GALGAS" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

@end

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Lexique galgasTemplateScanner

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const UInt16 * gPopUpData_galgasTemplateScanner [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Lexique interface                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Tokenizer_galgasTemplateScanner : OC_Lexique_galgasTemplateScanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Tokenizer_galgasTemplateScanner

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) blockComment {
  return @"" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (const UInt16 * *) popupListData {
  return gPopUpData_galgasTemplateScanner ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) textMacroCount {
  return 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) tabItemTitle {
  return @"Template" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end



//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

NSArray * tokenizers (void) {
  return [NSArray arrayWithObjects:
    [OC_Tokenizer_galgas3Scanner new],
    [OC_Tokenizer_galgasTemplateScanner new],
    nil
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


