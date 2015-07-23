//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Token.h"
#import "F_CocoaWrapperForGalgas.h"
#import "lexique-galgas3Scanner-cocoa.m"
#import "lexique-galgas2Scanner-cocoa.m"
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
}

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Lexique galgas3Scanner

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const UInt16 gPopUpData_galgas_33_Scanner_2185 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_before, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2206 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_after, 0,
  galgas3Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2233 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_map, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2266 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_sharedmap, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2294 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_list, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2328 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_sortedlist, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2356 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_enum, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2385 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_class, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2415 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_extern, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2445 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_struct, 0,
  galgas3Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2483 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_rule, 0,
  galgas3Scanner_1_non_5F_terminal_5F_symbol, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2512 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_proc, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2541 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2583 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_func, 0,
  galgas3Scanner_1_attribute, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2625 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_filewrapper, 0,
  galgas3Scanner_1_identifier, 0,
  galgas3Scanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2682 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2738 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2782 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_method, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2839 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2896 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2940 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_getter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_2997 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_abstract, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3054 [10] = {
  0, // Leading character count to strip
  galgas3Scanner_1_override, 0,
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3098 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_setter, 0,
  galgas3Scanner_1_type_5F_name, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3143 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_syntax, 0,
  galgas3Scanner_1_extension, 0,
  galgas3Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3182 [8] = {
  0, // Leading character count to strip
  galgas3Scanner_1_case, 0,
  galgas3Scanner_1__2E_, 0,
  galgas3Scanner_1_literal_5F_string, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3213 [4] = {
  1, // Leading character count to strip
  galgas3Scanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3239 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_terminal, 0,
  galgas3Scanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_galgas_33_Scanner_3269 [6] = {
  0, // Leading character count to strip
  galgas3Scanner_1_terminal, 0,
  galgas3Scanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_galgas_33_Scanner [30] = {
  gPopUpData_galgas_33_Scanner_2185,
  gPopUpData_galgas_33_Scanner_2206,
  gPopUpData_galgas_33_Scanner_2233,
  gPopUpData_galgas_33_Scanner_2266,
  gPopUpData_galgas_33_Scanner_2294,
  gPopUpData_galgas_33_Scanner_2328,
  gPopUpData_galgas_33_Scanner_2356,
  gPopUpData_galgas_33_Scanner_2385,
  gPopUpData_galgas_33_Scanner_2415,
  gPopUpData_galgas_33_Scanner_2445,
  gPopUpData_galgas_33_Scanner_2483,
  gPopUpData_galgas_33_Scanner_2512,
  gPopUpData_galgas_33_Scanner_2541,
  gPopUpData_galgas_33_Scanner_2583,
  gPopUpData_galgas_33_Scanner_2625,
  gPopUpData_galgas_33_Scanner_2682,
  gPopUpData_galgas_33_Scanner_2738,
  gPopUpData_galgas_33_Scanner_2782,
  gPopUpData_galgas_33_Scanner_2839,
  gPopUpData_galgas_33_Scanner_2896,
  gPopUpData_galgas_33_Scanner_2940,
  gPopUpData_galgas_33_Scanner_2997,
  gPopUpData_galgas_33_Scanner_3054,
  gPopUpData_galgas_33_Scanner_3098,
  gPopUpData_galgas_33_Scanner_3143,
  gPopUpData_galgas_33_Scanner_3182,
  gPopUpData_galgas_33_Scanner_3213,
  gPopUpData_galgas_33_Scanner_3239,
  gPopUpData_galgas_33_Scanner_3269,
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
  return @"Source GALGAS \xE2""\x89""\xA5"" 3" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [8] = {
    @"GALGAS 3/Class",
    @"GALGAS 3/Enum",
    @"GALGAS 3/List",
    @"GALGAS 3/List Map",
    @"GALGAS 3/Map",
    @"GALGAS 3/Sorted List",
    @"GALGAS 3/Struct",
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

#pragma mark Lexique galgas2Scanner

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const UInt16 gPopUpData_galgas_32_Scanner_4712 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_before, 0,
  galgas2Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4733 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_after, 0,
  galgas2Scanner_1__7B_, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4760 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_map, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4793 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_sharedmap, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4821 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_list, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4855 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_sortedlist, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4883 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_enum, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4912 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_class, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4942 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_extern, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_4972 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_struct, 0,
  galgas2Scanner_1_type_5F_name, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5017 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_nonterminal, 0,
  galgas2Scanner_1_non_5F_terminal_5F_symbol, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5055 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_rule, 0,
  galgas2Scanner_1_non_5F_terminal_5F_symbol, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5087 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_routine, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5120 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_function, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5149 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_once, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5191 [8] = {
  0, // Leading character count to strip
  galgas2Scanner_1_filewrapper, 0,
  galgas2Scanner_1_identifier, 0,
  galgas2Scanner_1_in, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5247 [10] = {
  0, // Leading character count to strip
  galgas2Scanner_1_abstract, 0,
  galgas2Scanner_1_method, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5303 [10] = {
  0, // Leading character count to strip
  galgas2Scanner_1_override, 0,
  galgas2Scanner_1_method, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5347 [8] = {
  0, // Leading character count to strip
  galgas2Scanner_1_method, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5403 [10] = {
  0, // Leading character count to strip
  galgas2Scanner_1_abstract, 0,
  galgas2Scanner_1_reader, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5459 [10] = {
  0, // Leading character count to strip
  galgas2Scanner_1_override, 0,
  galgas2Scanner_1_reader, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5503 [8] = {
  0, // Leading character count to strip
  galgas2Scanner_1_reader, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5561 [10] = {
  0, // Leading character count to strip
  galgas2Scanner_1_abstract, 0,
  galgas2Scanner_1_modifier, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5619 [10] = {
  0, // Leading character count to strip
  galgas2Scanner_1_override, 0,
  galgas2Scanner_1_modifier, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5665 [8] = {
  0, // Leading character count to strip
  galgas2Scanner_1_modifier, 0,
  galgas2Scanner_1_type_5F_name, 0,
  galgas2Scanner_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5703 [8] = {
  0, // Leading character count to strip
  galgas2Scanner_1_when, 0,
  galgas2Scanner_1__2E_, 0,
  galgas2Scanner_1_literal_5F_string, 0,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5734 [4] = {
  1, // Leading character count to strip
  galgas2Scanner_1_commentMark, 32,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5760 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_terminal, 0,
  galgas2Scanner_1__21_, 65535,
  0
} ;

static const UInt16 gPopUpData_galgas_32_Scanner_5790 [6] = {
  0, // Leading character count to strip
  galgas2Scanner_1_terminal, 0,
  galgas2Scanner_1_error, 65535,
  0
} ;

static const UInt16 * gPopUpData_galgas_32_Scanner [30] = {
  gPopUpData_galgas_32_Scanner_4712,
  gPopUpData_galgas_32_Scanner_4733,
  gPopUpData_galgas_32_Scanner_4760,
  gPopUpData_galgas_32_Scanner_4793,
  gPopUpData_galgas_32_Scanner_4821,
  gPopUpData_galgas_32_Scanner_4855,
  gPopUpData_galgas_32_Scanner_4883,
  gPopUpData_galgas_32_Scanner_4912,
  gPopUpData_galgas_32_Scanner_4942,
  gPopUpData_galgas_32_Scanner_4972,
  gPopUpData_galgas_32_Scanner_5017,
  gPopUpData_galgas_32_Scanner_5055,
  gPopUpData_galgas_32_Scanner_5087,
  gPopUpData_galgas_32_Scanner_5120,
  gPopUpData_galgas_32_Scanner_5149,
  gPopUpData_galgas_32_Scanner_5191,
  gPopUpData_galgas_32_Scanner_5247,
  gPopUpData_galgas_32_Scanner_5303,
  gPopUpData_galgas_32_Scanner_5347,
  gPopUpData_galgas_32_Scanner_5403,
  gPopUpData_galgas_32_Scanner_5459,
  gPopUpData_galgas_32_Scanner_5503,
  gPopUpData_galgas_32_Scanner_5561,
  gPopUpData_galgas_32_Scanner_5619,
  gPopUpData_galgas_32_Scanner_5665,
  gPopUpData_galgas_32_Scanner_5703,
  gPopUpData_galgas_32_Scanner_5734,
  gPopUpData_galgas_32_Scanner_5760,
  gPopUpData_galgas_32_Scanner_5790,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Lexique interface                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Tokenizer_galgas2Scanner : OC_Lexique_galgas2Scanner {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Tokenizer_galgas2Scanner

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) blockComment {
  return @"#" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (const UInt16 * *) popupListData {
  return gPopUpData_galgas_32_Scanner ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) textMacroCount {
  return 7 ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) tabItemTitle {
  return @"Source GALGAS \xE2""\x89""\xA4"" 2" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [8] = {
    @"GALGAS 2/Class",
    @"GALGAS 2/Enum",
    @"GALGAS 2/List",
    @"GALGAS 2/List Map",
    @"GALGAS 2/Map",
    @"GALGAS 2/Sorted List",
    @"GALGAS 2/Struct",
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [8] = {
    @"class @aClassName extends @superClassName {\n"
  "  @aType mAnAttribute ;\n"
  "}\n",
    @"enum @aType {\n"
  "  constant1, constant2\n"
  "}\n",
    @"list @type {\n"
  "  @aType mAnAttribute ;\n"
  "}\n",
    @"list @type {\n"
  "  @aType mAnAttribute ;\n"
  "}\n"
  "listmap @myListMap (@aList) ;\n",
    @"map @type {\n"
  "  @aType mAnAttribute ;\n"
  "  insert insertKey error message \"the '%K' key is already declared in %L\" ;\n"
  "  search searchKey error message \"there is no '%K' key\" ;\n"
  "}\n",
    @"sortedlist @type {\n"
  "  @string mFirstAttribute ;\n"
  "  @bool mSecondAttribute ;\n"
  "}{\n"
  "  mFirstAttribute >, mSecondAttribute <\n"
  "}\n",
    @"struct @type {\n"
  "  @aType mAnAttribute ;\n"
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
  if ([inExtension isEqualToString:@"gGrammar"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"gGui"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"gLexique"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"gOption"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"gProgram"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"gProject"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"gSemantics"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"gSyntax"]) {
    result = [OC_Tokenizer_galgas2Scanner new] ;
  }else if ([inExtension isEqualToString:@"galgas"]) {
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
    [OC_Tokenizer_galgas2Scanner new],
    [OC_Tokenizer_galgasTemplateScanner new],
    nil
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


