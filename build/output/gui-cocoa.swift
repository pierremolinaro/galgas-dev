//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                
//--------------------------------------------------------------------------------------------------

/*
NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"GGSUpdateCocoaGalgas", [GGSUpdateCocoaGalgas class], nil],
    nil
  ] ;
}


*/
//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

NSDictionary * indexingDescriptorDictionary (void) {
  return [NSDictionary dictionaryWithObjectsAndKeys: @"build/indexes", @"galgasProject", @"*-build/indexes", @"ggsproject", nil] ;
}

//--------------------------------------------------------------------------------------------------
//
//                       Command Line Options                                                    
//
//--------------------------------------------------------------------------------------------------

// #import "option-galgas-5Fcli-5Foptions-cocoa.h"

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

fileprivate let gPopUpData_0_galgasScanner_33_ : [[UInt16]] = [
  [0, // Leading character count to strip
    galgasScanner3_1_before, 0,
    galgasScanner3_1__7B_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_after, 0,
    galgasScanner3_1__7B_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_map, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_boolset, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_list, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_sortedlist, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_enum, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_class, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_extern, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_struct, 0,
    galgasScanner3_1__40_type, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_rule, 0,
    galgasScanner3_1__3C_non_5F_terminal_3E_, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_proc, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_once, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_once, 0,
    galgasScanner3_1__25_usefull, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_usefull, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_func, 0,
    galgasScanner3_1__25_usefull, 0,
    galgasScanner3_1__25_once, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_filewrapper, 0,
    galgasScanner3_1_identifier, 0,
    galgasScanner3_1_in, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_method, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_method, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_method, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_getter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_getter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_getter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_abstract, 0,
    galgasScanner3_1_setter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_override, 0,
    galgasScanner3_1_setter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_setter, 0,
    galgasScanner3_1__40_type, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_syntax, 0,
    galgasScanner3_1_extension, 0,
    galgasScanner3_1_identifier, 0
  ],
  [0, // Leading character count to strip
    galgasScanner3_1_case, 0,
    galgasScanner3_1__2E_, 0,
    galgasScanner3_1__22_string_22_, 0
  ],
  [1, // Leading character count to strip
    galgasScanner3_1_commentMark, 32
  ],
  [0, // Leading character count to strip
    galgasScanner3_1__24_terminal_24_, 0,
    galgasScanner3_1__21_selector_3A_, 65535
  ],
  [0, // Leading character count to strip
    galgasScanner3_1__24_terminal_24_, 0,
    galgasScanner3_1_error, 65535
  ]
]

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------
  
class SWIFT_Tokenizer_0_galgasScanner3 : SWIFT_Lexique_galgasScanner3, SWIFT_Tokenizer_Protocol {

//- (NSUInteger) textMacroCount ;

//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func popupListData () -> [[UInt16]] {
    return gPopUpData_0_galgasScanner_33_
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tabItemTitle () -> String {
    return "Source GALGAS 3"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  func blockComment () -> String {
    return "#"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {
    let fontManager = NSFontManager.shared
    var font = fontManager.convert (
      self.font.propval,
      toHaveTrait: self.bold (forStyle: inStyleIndex).propval ? .boldFontMask : .unboldFontMask
    )
    font = fontManager.convert (
      font,
      toHaveTrait: self.italic (forStyle: inStyleIndex).propval ? .italicFontMask : .unitalicFontMask
    )
    let result : [NSAttributedString.Key : Any] = [
      .foregroundColor : self.color (forStyle: inStyleIndex).propval,
      .font : font
    ]
    return result
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

/* @implementation OC_Tokenizer_0_galgasScanner3

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 6 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [7] = {
    @"Class",
    @"Enum",
    @"List",
    @"Map",
    @"Sorted List",
    @"Struct",
    nullptr
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
    nullptr
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end */

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

fileprivate let gPopUpData_1_galgasScanner_34_ : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------
  
class SWIFT_Tokenizer_1_galgasScanner4 : SWIFT_Lexique_galgasScanner4, SWIFT_Tokenizer_Protocol {

//- (NSUInteger) textMacroCount ;

//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func popupListData () -> [[UInt16]] {
    return gPopUpData_1_galgasScanner_34_
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tabItemTitle () -> String {
    return "Source GALGAS 4"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  func blockComment () -> String {
    return "//"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {
    let fontManager = NSFontManager.shared
    var font = fontManager.convert (
      self.font.propval,
      toHaveTrait: self.bold (forStyle: inStyleIndex).propval ? .boldFontMask : .unboldFontMask
    )
    font = fontManager.convert (
      font,
      toHaveTrait: self.italic (forStyle: inStyleIndex).propval ? .italicFontMask : .unitalicFontMask
    )
    let result : [NSAttributedString.Key : Any] = [
      .foregroundColor : self.color (forStyle: inStyleIndex).propval,
      .font : font
    ]
    return result
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

/* @implementation OC_Tokenizer_1_galgasScanner4

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    nullptr
  } ;
  return kTextMacroTitle [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    nullptr
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end */

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

fileprivate let gPopUpData_2_galgasTemplateScanner : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------
  
class SWIFT_Tokenizer_2_galgasTemplateScanner : SWIFT_Lexique_galgasTemplateScanner, SWIFT_Tokenizer_Protocol {

//- (NSUInteger) textMacroCount ;

//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func popupListData () -> [[UInt16]] {
    return gPopUpData_2_galgasTemplateScanner
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

  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {
    let fontManager = NSFontManager.shared
    var font = fontManager.convert (
      self.font.propval,
      toHaveTrait: self.bold (forStyle: inStyleIndex).propval ? .boldFontMask : .unboldFontMask
    )
    font = fontManager.convert (
      font,
      toHaveTrait: self.italic (forStyle: inStyleIndex).propval ? .italicFontMask : .unitalicFontMask
    )
    let result : [NSAttributedString.Key : Any] = [
      .foregroundColor : self.color (forStyle: inStyleIndex).propval,
      .font : font
    ]
    return result
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

/* @implementation OC_Tokenizer_2_galgasTemplateScanner

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    nullptr
  } ;
  return kTextMacroTitle [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    nullptr
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end */



//--------------------------------------------------------------------------------------------------
//   Global functions
//--------------------------------------------------------------------------------------------------

func tokenizerFor (extension inExtension : String) -> SWIFT_Tokenizer_Protocol? {
  var result : SWIFT_Tokenizer_Protocol? = nil
  if inExtension == "galgas" {
    result = SWIFT_Tokenizer_0_galgasScanner3 ()
  }else if inExtension == "galgasProject" {
    result = SWIFT_Tokenizer_0_galgasScanner3 ()
  }else if inExtension == "galgasTemplate" {
    result = SWIFT_Tokenizer_2_galgasTemplateScanner ()
  }else if inExtension == "ggs" {
    result = SWIFT_Tokenizer_1_galgasScanner4 ()
  }else if inExtension == "ggsTemplate" {
    result = SWIFT_Tokenizer_2_galgasTemplateScanner ()
  }else if inExtension == "ggsproject" {
    result = SWIFT_Tokenizer_1_galgasScanner4 ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------

func tokenizers () -> [SWIFT_Tokenizer_Protocol] {
  return [
    SWIFT_Tokenizer_0_galgasScanner3 (),
    SWIFT_Tokenizer_1_galgasScanner4 (),
    SWIFT_Tokenizer_2_galgasTemplateScanner ()
  ]
}

//--------------------------------------------------------------------------------------------------

func buildRunOption () -> String {
  return ""
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


