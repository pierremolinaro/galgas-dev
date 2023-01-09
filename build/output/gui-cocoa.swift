//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//----------------------------------------------------------------------------------------------------------------------
//
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                
//
//----------------------------------------------------------------------------------------------------------------------

/*
NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"GGSUpdateCocoaGalgas", [GGSUpdateCocoaGalgas class], nil],
    nil
  ] ;
}


*/
//----------------------------------------------------------------------------------------------------------------------
//
//                       Command Line Options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

// #import "option-galgas-5F-cli-5F-options-cocoa.h"

//----------------------------------------------------------------------------------------------------------------------

/*
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

*/

//----------------------------------------------------------------------------------------------------------------------

// #pragma mark Lexique galgasScanner

//----------------------------------------------------------------------------------------------------------------------
//
//                     P O P    U P    L I S T    D A T A                                        
//
//----------------------------------------------------------------------------------------------------------------------

/* static const UInt16 gPopUpData_0_galgasScanner_1580 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_before, 0,
  galgasScanner_1__7B_, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1603 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_after, 0,
  galgasScanner_1__7B_, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1628 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_map, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1657 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_boolset, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1683 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_list, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1715 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_sortedlist, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1741 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_enum, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1768 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_class, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1796 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_extern, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1824 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_struct, 0,
  galgasScanner_1__40_type, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1859 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_rule, 0,
  galgasScanner_1__3C_non_5F_terminal_3E_, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1890 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_proc, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1921 [6] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_1966 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_func, 0,
  galgasScanner_1__25_attribute, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2010 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_filewrapper, 0,
  galgasScanner_1_identifier, 0,
  galgasScanner_1_in, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2067 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2121 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2163 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_method, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2220 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2275 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2317 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_getter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2374 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_abstract, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2429 [10] = {
  0, // Leading character count to strip
  galgasScanner_1_override, 0,
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2471 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_setter, 0,
  galgasScanner_1__40_type, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2520 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_syntax, 0,
  galgasScanner_1_extension, 0,
  galgasScanner_1_identifier, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2557 [8] = {
  0, // Leading character count to strip
  galgasScanner_1_case, 0,
  galgasScanner_1__2E_, 0,
  galgasScanner_1__22_string_22_, 0,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2590 [4] = {
  1, // Leading character count to strip
  galgasScanner_1_commentMark, 32,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2622 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1__21_, 65535,
  0
} ; */

/* static const UInt16 gPopUpData_0_galgasScanner_2658 [6] = {
  0, // Leading character count to strip
  galgasScanner_1__24_terminal_24_, 0,
  galgasScanner_1_error, 65535,
  0
} ; */

 /* static const UInt16 * gPopUpData_0_galgasScanner [30] = {
  gPopUpData_0_galgasScanner_1580,
  gPopUpData_0_galgasScanner_1603,
  gPopUpData_0_galgasScanner_1628,
  gPopUpData_0_galgasScanner_1657,
  gPopUpData_0_galgasScanner_1683,
  gPopUpData_0_galgasScanner_1715,
  gPopUpData_0_galgasScanner_1741,
  gPopUpData_0_galgasScanner_1768,
  gPopUpData_0_galgasScanner_1796,
  gPopUpData_0_galgasScanner_1824,
  gPopUpData_0_galgasScanner_1859,
  gPopUpData_0_galgasScanner_1890,
  gPopUpData_0_galgasScanner_1921,
  gPopUpData_0_galgasScanner_1966,
  gPopUpData_0_galgasScanner_2010,
  gPopUpData_0_galgasScanner_2067,
  gPopUpData_0_galgasScanner_2121,
  gPopUpData_0_galgasScanner_2163,
  gPopUpData_0_galgasScanner_2220,
  gPopUpData_0_galgasScanner_2275,
  gPopUpData_0_galgasScanner_2317,
  gPopUpData_0_galgasScanner_2374,
  gPopUpData_0_galgasScanner_2429,
  gPopUpData_0_galgasScanner_2471,
  gPopUpData_0_galgasScanner_2520,
  gPopUpData_0_galgasScanner_2557,
  gPopUpData_0_galgasScanner_2590,
  gPopUpData_0_galgasScanner_2622,
  gPopUpData_0_galgasScanner_2658,
  NULL
} ; */

//----------------------------------------------------------------------------------------------------------------------
//                            Lexique interface
//----------------------------------------------------------------------------------------------------------------------

fileprivate let gfont_galgasScanner = EBGenericPreferenceProperty <NSFont> (
  defaultValue: NSFont (name: "Courier", size: 13.0)!,
  prefKey: "FontFor_" + galgasScanner_lexiqueIdentifier ()
)

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gColors_galgasScanner : [EBGenericPreferenceProperty <NSColor>] = [
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-keywordsStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-delimitersStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-selectorStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-terminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-nonTerminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-integerStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-bigintStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-floatStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-characterStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-stringStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-typeNameStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-attributeStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-commentStyle")
]

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gBoldStyle_galgasScanner : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-selectorStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-terminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-nonTerminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-bigintStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-floatStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-characterStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-typeNameStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-attributeStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-commentStyle")
]

//----------------------------------------------------------------------------------------------------------------------
  
class SWIFT_Tokenizer_0_galgasScanner : SWIFT_Lexique_galgasScanner, SWIFT_Tokenizer_Protocol {

//- (const UInt16 * *) popupListData ;

//- (NSUInteger) textMacroCount ;

//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBGenericPreferenceProperty <NSFont> { return gfont_galgasScanner }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {
    return gColors_galgasScanner [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gBoldStyle_galgasScanner [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tabItemTitle () -> String {
    return "Source GALGAS"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  func blockComment () -> String {
    return "#"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//----------------------------------------------------------------------------------------------------------------------

/* @implementation OC_Tokenizer_0_galgasScanner

//----------------------------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_0_galgasScanner ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 7 ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  "  public let @aType mAnAttribute\n"
  "}\n",
    @"enum @aType {\n"
  "  constant1, constant2\n"
  "}\n",
    @"list @type {\n"
  "  public let @aType mAnAttribute\n"
  "}\n",
    @"list @type {\n"
  "  public let @aType mAnAttribute\n"
  "}\n"
  "listmap @myListMap (@aList)\n",
    @"map @type {\n"
  "  public let @aType mAnAttribute\n"
  "  insert insertKey error message \"the '%K' key is already declared in %L\"\n"
  "  search searchKey error message \"there is no '%K' key\"\n"
  "}\n",
    @"sortedlist @type {\n"
  "  public let @string mFirstAttribute\n"
  "  public let @bool mSecondAttribute\n"
  "}{\n"
  "  mFirstAttribute >, mSecondAttribute <\n"
  "}\n",
    @"struct @type {\n"
  "  public let @aType mAnAttribute\n"
  "}\n",
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------

@end */

//----------------------------------------------------------------------------------------------------------------------

// #pragma mark Lexique galgasTemplateScanner

//----------------------------------------------------------------------------------------------------------------------
//
//                     P O P    U P    L I S T    D A T A                                        
//
//----------------------------------------------------------------------------------------------------------------------

 /* static const UInt16 * gPopUpData_1_galgasTemplateScanner [1] = {
  NULL
} ; */

//----------------------------------------------------------------------------------------------------------------------
//                            Lexique interface
//----------------------------------------------------------------------------------------------------------------------

fileprivate let gfont_galgasTemplateScanner = EBGenericPreferenceProperty <NSFont> (
  defaultValue: NSFont (name: "Courier", size: 13.0)!,
  prefKey: "FontFor_" + galgasTemplateScanner_lexiqueIdentifier ()
)

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gColors_galgasTemplateScanner : [EBGenericPreferenceProperty <NSColor>] = [
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-keywordsStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-delimitersStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-selectorStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-terminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-nonTerminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-integerStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-bigintStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-floatStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-characterStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-stringStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-typeNameStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-attributeStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasTemplateScanner-commentStyle")
]

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gBoldStyle_galgasTemplateScanner : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-selectorStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-terminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-nonTerminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-bigintStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-floatStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-characterStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-typeNameStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-attributeStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasTemplateScanner-commentStyle")
]

//----------------------------------------------------------------------------------------------------------------------
  
class SWIFT_Tokenizer_1_galgasTemplateScanner : SWIFT_Lexique_galgasTemplateScanner, SWIFT_Tokenizer_Protocol {

//- (const UInt16 * *) popupListData ;

//- (NSUInteger) textMacroCount ;

//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBGenericPreferenceProperty <NSFont> { return gfont_galgasTemplateScanner }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {
    return gColors_galgasTemplateScanner [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gBoldStyle_galgasTemplateScanner [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tabItemTitle () -> String {
    return "Template"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  func blockComment () -> String {
    return ""
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//----------------------------------------------------------------------------------------------------------------------

/* @implementation OC_Tokenizer_1_galgasTemplateScanner

//----------------------------------------------------------------------------------------------------------------------

- (const UInt16 * *) popupListData {
  return gPopUpData_1_galgasTemplateScanner ;
}

//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//----------------------------------------------------------------------------------------------------------------------

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

@end */



//----------------------------------------------------------------------------------------------------------------------

func tokenizerFor (extension inExtension : String) -> SWIFT_Tokenizer_Protocol? {
  var result : SWIFT_Tokenizer_Protocol? = nil
  if inExtension == "galgas" {
    result = SWIFT_Tokenizer_0_galgasScanner ()
  }else if inExtension == "galgasProject" {
    result = SWIFT_Tokenizer_0_galgasScanner ()
  }else if inExtension == "galgasTemplate" {
    result = SWIFT_Tokenizer_1_galgasTemplateScanner ()
  }else if inExtension == "ggs" {
    result = SWIFT_Tokenizer_0_galgasScanner ()
  }else if inExtension == "ggsTemplate" {
    result = SWIFT_Tokenizer_1_galgasTemplateScanner ()
  }
  return result
}

//----------------------------------------------------------------------------------------------------------------------

func tokenizers () -> [SWIFT_Tokenizer_Protocol] {
  return [
    SWIFT_Tokenizer_0_galgasScanner (),
    SWIFT_Tokenizer_1_galgasTemplateScanner ()
  ]
}

//----------------------------------------------------------------------------------------------------------------------

func buildRunOption () -> String {
  return ""
}

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


