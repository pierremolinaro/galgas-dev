//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//----------------------------------------------------------------------------------------------------------------------
//   LEXIQUE galgasScanner
//----------------------------------------------------------------------------------------------------------------------

fileprivate let gFont_galgasScanner = EBGenericPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + galgasScanner_lexiqueIdentifier ()
)

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gLineHeight_galgasScanner = EBGenericPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + galgasScanner_lexiqueIdentifier ()
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
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner-commentStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_galgasScanner_lexical_error"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_galgasScanner_template")
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
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_galgasScanner_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner_template")
]

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gItalicStyle_galgasScanner : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-selectorStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-terminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-nonTerminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-bigintStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-floatStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-characterStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-typeNameStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-attributeStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner_template")
]

//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//----------------------------------------------------------------------------------------------------------------------

let galgasScanner_1_ : UInt16 = 0
let galgasScanner_1_identifier : UInt16 = 1
let galgasScanner_1_double_2E_xxx : UInt16 = 2
let galgasScanner_1_literalInt : UInt16 = 3
let galgasScanner_1__2E_ : UInt16 = 4
let galgasScanner_1__2E__2E__2E_ : UInt16 = 5
let galgasScanner_1__2E__2E__3C_ : UInt16 = 6
let galgasScanner_1__40_type : UInt16 = 7
let galgasScanner_1__25_attribute : UInt16 = 8
let galgasScanner_1__27_char_27_ : UInt16 = 9
let galgasScanner_1__24_terminal_24_ : UInt16 = 10
let galgasScanner_1__3F_ : UInt16 = 11
let galgasScanner_1__3F__21_ : UInt16 = 12
let galgasScanner_1__21_ : UInt16 = 13
let galgasScanner_1__21__3F_ : UInt16 = 14
let galgasScanner_1__3C_ : UInt16 = 15
let galgasScanner_1__3C__3D_ : UInt16 = 16
let galgasScanner_1__3C__3C_ : UInt16 = 17
let galgasScanner_1__3C_non_5F_terminal_3E_ : UInt16 = 18
let galgasScanner_1__22_string_22_ : UInt16 = 19
let galgasScanner_1_comment : UInt16 = 20
let galgasScanner_1_commentMark : UInt16 = 21
let galgasScanner_1_abstract : UInt16 = 22
let galgasScanner_1_after : UInt16 = 23
let galgasScanner_1_array : UInt16 = 24
let galgasScanner_1_as : UInt16 = 25
let galgasScanner_1_bang : UInt16 = 26
let galgasScanner_1_before : UInt16 = 27
let galgasScanner_1_between : UInt16 = 28
let galgasScanner_1_block : UInt16 = 29
let galgasScanner_1_boolset : UInt16 = 30
let galgasScanner_1_cast : UInt16 = 31
let galgasScanner_1_case : UInt16 = 32
let galgasScanner_1_class : UInt16 = 33
let galgasScanner_1_constructor : UInt16 = 34
let galgasScanner_1_default : UInt16 = 35
let galgasScanner_1_dict : UInt16 = 36
let galgasScanner_1_do : UInt16 = 37
let galgasScanner_1_drop : UInt16 = 38
let galgasScanner_1_else : UInt16 = 39
let galgasScanner_1_elsif : UInt16 = 40
let galgasScanner_1_end : UInt16 = 41
let galgasScanner_1_enum : UInt16 = 42
let galgasScanner_1_error : UInt16 = 43
let galgasScanner_1_extension : UInt16 = 44
let galgasScanner_1_extern : UInt16 = 45
let galgasScanner_1_false : UInt16 = 46
let galgasScanner_1_filewrapper : UInt16 = 47
let galgasScanner_1_for : UInt16 = 48
let galgasScanner_1_fixit : UInt16 = 49
let galgasScanner_1_func : UInt16 = 50
let galgasScanner_1_getter : UInt16 = 51
let galgasScanner_1_grammar : UInt16 = 52
let galgasScanner_1_graph : UInt16 = 53
let galgasScanner_1_gui : UInt16 = 54
let galgasScanner_1_if : UInt16 = 55
let galgasScanner_1_in : UInt16 = 56
let galgasScanner_1_indexing : UInt16 = 57
let galgasScanner_1_insert : UInt16 = 58
let galgasScanner_1_is : UInt16 = 59
let galgasScanner_1_label : UInt16 = 60
let galgasScanner_1_let : UInt16 = 61
let galgasScanner_1_lexique : UInt16 = 62
let galgasScanner_1_list : UInt16 = 63
let galgasScanner_1_listmap : UInt16 = 64
let galgasScanner_1_log : UInt16 = 65
let galgasScanner_1_loop : UInt16 = 66
let galgasScanner_1_map : UInt16 = 67
let galgasScanner_1_message : UInt16 = 68
let galgasScanner_1_method : UInt16 = 69
let galgasScanner_1_mod : UInt16 = 70
let galgasScanner_1_mutating : UInt16 = 71
let galgasScanner_1_not : UInt16 = 72
let galgasScanner_1_on : UInt16 = 73
let galgasScanner_1_operator : UInt16 = 74
let galgasScanner_1_option : UInt16 = 75
let galgasScanner_1_or : UInt16 = 76
let galgasScanner_1_override : UInt16 = 77
let galgasScanner_1_parse : UInt16 = 78
let galgasScanner_1_public : UInt16 = 79
let galgasScanner_1_private : UInt16 = 80
let galgasScanner_1_proc : UInt16 = 81
let galgasScanner_1_project : UInt16 = 82
let galgasScanner_1_refclass : UInt16 = 83
let galgasScanner_1_remove : UInt16 = 84
let galgasScanner_1_replace : UInt16 = 85
let galgasScanner_1_repeat : UInt16 = 86
let galgasScanner_1_rewind : UInt16 = 87
let galgasScanner_1_rule : UInt16 = 88
let galgasScanner_1_search : UInt16 = 89
let galgasScanner_1_select : UInt16 = 90
let galgasScanner_1_self : UInt16 = 91
let galgasScanner_1_send : UInt16 = 92
let galgasScanner_1_setter : UInt16 = 93
let galgasScanner_1_sortedlist : UInt16 = 94
let galgasScanner_1_struct : UInt16 = 95
let galgasScanner_1_style : UInt16 = 96
let galgasScanner_1_switch : UInt16 = 97
let galgasScanner_1_syntax : UInt16 = 98
let galgasScanner_1_tag : UInt16 = 99
let galgasScanner_1_template : UInt16 = 100
let galgasScanner_1_then : UInt16 = 101
let galgasScanner_1_true : UInt16 = 102
let galgasScanner_1_unused : UInt16 = 103
let galgasScanner_1_var : UInt16 = 104
let galgasScanner_1_valueclass : UInt16 = 105
let galgasScanner_1_warning : UInt16 = 106
let galgasScanner_1_while : UInt16 = 107
let galgasScanner_1_with : UInt16 = 108
let galgasScanner_1__2A_ : UInt16 = 109
let galgasScanner_1__2C_ : UInt16 = 110
let galgasScanner_1__2B_ : UInt16 = 111
let galgasScanner_1__26__2B_ : UInt16 = 112
let galgasScanner_1__26__2D_ : UInt16 = 113
let galgasScanner_1__26__2A_ : UInt16 = 114
let galgasScanner_1__26__2F_ : UInt16 = 115
let galgasScanner_1__3E_ : UInt16 = 116
let galgasScanner_1__3B_ : UInt16 = 117
let galgasScanner_1__3A_ : UInt16 = 118
let galgasScanner_1__3A__3E_ : UInt16 = 119
let galgasScanner_1__2D_ : UInt16 = 120
let galgasScanner_1__28_ : UInt16 = 121
let galgasScanner_1__29_ : UInt16 = 122
let galgasScanner_1__2D__3E_ : UInt16 = 123
let galgasScanner_1__3D__3D_ : UInt16 = 124
let galgasScanner_1__3D_ : UInt16 = 125
let galgasScanner_1__26__26_ : UInt16 = 126
let galgasScanner_1__5B_ : UInt16 = 127
let galgasScanner_1__5D_ : UInt16 = 128
let galgasScanner_1__2B__3D_ : UInt16 = 129
let galgasScanner_1__2D__3D_ : UInt16 = 130
let galgasScanner_1__2A__3D_ : UInt16 = 131
let galgasScanner_1__2F__3D_ : UInt16 = 132
let galgasScanner_1__2F_ : UInt16 = 133
let galgasScanner_1__21__3D_ : UInt16 = 134
let galgasScanner_1__3E__3D_ : UInt16 = 135
let galgasScanner_1__26_ : UInt16 = 136
let galgasScanner_1__7B_ : UInt16 = 137
let galgasScanner_1__7D_ : UInt16 = 138
let galgasScanner_1__60_ : UInt16 = 139
let galgasScanner_1__7C__7C_ : UInt16 = 140
let galgasScanner_1__7C_ : UInt16 = 141
let galgasScanner_1__5E_ : UInt16 = 142
let galgasScanner_1__3E__3E_ : UInt16 = 143
let galgasScanner_1__7E_ : UInt16 = 144
let galgasScanner_1__2D__2D_ : UInt16 = 145
let galgasScanner_1__2B__2B_ : UInt16 = 146
let galgasScanner_1__26__2D__2D_ : UInt16 = 147
let galgasScanner_1__26__2B__2B_ : UInt16 = 148
let galgasScanner_1__3D__3D__3D_ : UInt16 = 149
let galgasScanner_1__21__3D__3D_ : UInt16 = 150
let galgasScanner_1__3F__5E_ : UInt16 = 151
let galgasScanner_1__21__5E_ : UInt16 = 152
let galgasScanner_2_ERROR : UInt16 = 153
let galgasScanner_2_TEMPLATE : UInt16 = 154

//----------------------------------------------------------------------------------------------------------------------

func galgasScanner_lexiqueIdentifier () -> String {
  return "galgasScanner"
}

//----------------------------------------------------------------------------------------------------------------------

func galgasScanner_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Keywords", // 1
    "Delimiters", // 2
    "Selectors", // 3
    "Terminal Symbols", // 4
    "Non Terminal Symbols", // 5
    "Integer Constants", // 6
    "Big Integer Constants", // 7
    "Floating Point Constants", // 8
    "Character Constants", // 9
    "String Constants", // 10
    "Type Names (@...)", // 11
    "Attributes (%...)", // 12
    "Comments", // 13
    "Lexical error", // 14
    "Template" // 15
  ]
  return kStyleArray [Int (inIndex)]
}

//----------------------------------------------------------------------------------------------------------------------

func galgasScanner_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "galgasScanner", // 0
    "galgasScanner-keywordsStyle", // 1
    "galgasScanner-delimitersStyle", // 2
    "galgasScanner-selectorStyle", // 3
    "galgasScanner-terminalStyle", // 4
    "galgasScanner-nonTerminalStyle", // 5
    "galgasScanner-integerStyle", // 6
    "galgasScanner-bigintStyle", // 7
    "galgasScanner-floatStyle", // 8
    "galgasScanner-characterStyle", // 9
    "galgasScanner-stringStyle", // 10
    "galgasScanner-typeNameStyle", // 11
    "galgasScanner-attributeStyle", // 12
    "galgasScanner-commentStyle", // 13
    "galgasScanner.ERROR", // 14
    "galgasScanner.TEMPLATE" // 15
  ]
  return kStyleArray [Int (inIndex)]
}

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class SWIFT_Lexique_galgasScanner : SWIFT_Lexique {

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_bigintValue : String = ""
  private var mLexicalAttribute_charValue : UInt32 = 0
  private var mLexicalAttribute_floatValue : Double = 0.0
  private var mLexicalAttribute_identifierString : String = ""
  private var mLexicalAttribute_sint32value : Int32 = 0
  private var mLexicalAttribute_sint64value : Int64 = 0
  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0
  private var mLexicalAttribute_uint64value : UInt64 = 0

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return galgasScanner_lexiqueIdentifier ()
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 152
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBGenericPreferenceProperty <NSFont> { return gFont_galgasScanner }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_galgasScanner }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {
    return gColors_galgasScanner [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gBoldStyle_galgasScanner [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gItalicStyle_galgasScanner [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : galgasScanner_1_identifier
      8, // 2 : galgasScanner_1_double_2E_xxx
      7, // 3 : galgasScanner_1_literalInt
      2, // 4 : galgasScanner_1__2E_
      2, // 5 : galgasScanner_1__2E__2E__2E_
      2, // 6 : galgasScanner_1__2E__2E__3C_
      11, // 7 : galgasScanner_1__40_type
      12, // 8 : galgasScanner_1__25_attribute
      9, // 9 : galgasScanner_1__27_char_27_
      4, // 10 : galgasScanner_1__24_terminal_24_
      3, // 11 : galgasScanner_1__3F_
      3, // 12 : galgasScanner_1__3F__21_
      3, // 13 : galgasScanner_1__21_
      3, // 14 : galgasScanner_1__21__3F_
      2, // 15 : galgasScanner_1__3C_
      2, // 16 : galgasScanner_1__3C__3D_
      2, // 17 : galgasScanner_1__3C__3C_
      5, // 18 : galgasScanner_1__3C_non_5F_terminal_3E_
      10, // 19 : galgasScanner_1__22_string_22_
      13, // 20 : galgasScanner_1_comment
      13, // 21 : galgasScanner_1_commentMark
      1, // 22 : galgasScanner_1_abstract
      1, // 23 : galgasScanner_1_after
      1, // 24 : galgasScanner_1_array
      1, // 25 : galgasScanner_1_as
      1, // 26 : galgasScanner_1_bang
      1, // 27 : galgasScanner_1_before
      1, // 28 : galgasScanner_1_between
      1, // 29 : galgasScanner_1_block
      1, // 30 : galgasScanner_1_boolset
      1, // 31 : galgasScanner_1_cast
      1, // 32 : galgasScanner_1_case
      1, // 33 : galgasScanner_1_class
      1, // 34 : galgasScanner_1_constructor
      1, // 35 : galgasScanner_1_default
      1, // 36 : galgasScanner_1_dict
      1, // 37 : galgasScanner_1_do
      1, // 38 : galgasScanner_1_drop
      1, // 39 : galgasScanner_1_else
      1, // 40 : galgasScanner_1_elsif
      1, // 41 : galgasScanner_1_end
      1, // 42 : galgasScanner_1_enum
      1, // 43 : galgasScanner_1_error
      1, // 44 : galgasScanner_1_extension
      1, // 45 : galgasScanner_1_extern
      1, // 46 : galgasScanner_1_false
      1, // 47 : galgasScanner_1_filewrapper
      1, // 48 : galgasScanner_1_for
      1, // 49 : galgasScanner_1_fixit
      1, // 50 : galgasScanner_1_func
      1, // 51 : galgasScanner_1_getter
      1, // 52 : galgasScanner_1_grammar
      1, // 53 : galgasScanner_1_graph
      1, // 54 : galgasScanner_1_gui
      1, // 55 : galgasScanner_1_if
      1, // 56 : galgasScanner_1_in
      1, // 57 : galgasScanner_1_indexing
      1, // 58 : galgasScanner_1_insert
      1, // 59 : galgasScanner_1_is
      1, // 60 : galgasScanner_1_label
      1, // 61 : galgasScanner_1_let
      1, // 62 : galgasScanner_1_lexique
      1, // 63 : galgasScanner_1_list
      1, // 64 : galgasScanner_1_listmap
      1, // 65 : galgasScanner_1_log
      1, // 66 : galgasScanner_1_loop
      1, // 67 : galgasScanner_1_map
      1, // 68 : galgasScanner_1_message
      1, // 69 : galgasScanner_1_method
      1, // 70 : galgasScanner_1_mod
      1, // 71 : galgasScanner_1_mutating
      1, // 72 : galgasScanner_1_not
      1, // 73 : galgasScanner_1_on
      1, // 74 : galgasScanner_1_operator
      1, // 75 : galgasScanner_1_option
      1, // 76 : galgasScanner_1_or
      1, // 77 : galgasScanner_1_override
      1, // 78 : galgasScanner_1_parse
      1, // 79 : galgasScanner_1_public
      1, // 80 : galgasScanner_1_private
      1, // 81 : galgasScanner_1_proc
      1, // 82 : galgasScanner_1_project
      1, // 83 : galgasScanner_1_refclass
      1, // 84 : galgasScanner_1_remove
      1, // 85 : galgasScanner_1_replace
      1, // 86 : galgasScanner_1_repeat
      1, // 87 : galgasScanner_1_rewind
      1, // 88 : galgasScanner_1_rule
      1, // 89 : galgasScanner_1_search
      1, // 90 : galgasScanner_1_select
      1, // 91 : galgasScanner_1_self
      1, // 92 : galgasScanner_1_send
      1, // 93 : galgasScanner_1_setter
      1, // 94 : galgasScanner_1_sortedlist
      1, // 95 : galgasScanner_1_struct
      1, // 96 : galgasScanner_1_style
      1, // 97 : galgasScanner_1_switch
      1, // 98 : galgasScanner_1_syntax
      1, // 99 : galgasScanner_1_tag
      1, // 100 : galgasScanner_1_template
      1, // 101 : galgasScanner_1_then
      1, // 102 : galgasScanner_1_true
      1, // 103 : galgasScanner_1_unused
      1, // 104 : galgasScanner_1_var
      1, // 105 : galgasScanner_1_valueclass
      1, // 106 : galgasScanner_1_warning
      1, // 107 : galgasScanner_1_while
      1, // 108 : galgasScanner_1_with
      2, // 109 : galgasScanner_1__2A_
      2, // 110 : galgasScanner_1__2C_
      2, // 111 : galgasScanner_1__2B_
      2, // 112 : galgasScanner_1__26__2B_
      2, // 113 : galgasScanner_1__26__2D_
      2, // 114 : galgasScanner_1__26__2A_
      2, // 115 : galgasScanner_1__26__2F_
      2, // 116 : galgasScanner_1__3E_
      2, // 117 : galgasScanner_1__3B_
      2, // 118 : galgasScanner_1__3A_
      2, // 119 : galgasScanner_1__3A__3E_
      2, // 120 : galgasScanner_1__2D_
      2, // 121 : galgasScanner_1__28_
      2, // 122 : galgasScanner_1__29_
      2, // 123 : galgasScanner_1__2D__3E_
      2, // 124 : galgasScanner_1__3D__3D_
      2, // 125 : galgasScanner_1__3D_
      2, // 126 : galgasScanner_1__26__26_
      2, // 127 : galgasScanner_1__5B_
      2, // 128 : galgasScanner_1__5D_
      2, // 129 : galgasScanner_1__2B__3D_
      2, // 130 : galgasScanner_1__2D__3D_
      2, // 131 : galgasScanner_1__2A__3D_
      2, // 132 : galgasScanner_1__2F__3D_
      2, // 133 : galgasScanner_1__2F_
      2, // 134 : galgasScanner_1__21__3D_
      2, // 135 : galgasScanner_1__3E__3D_
      2, // 136 : galgasScanner_1__26_
      2, // 137 : galgasScanner_1__7B_
      2, // 138 : galgasScanner_1__7D_
      2, // 139 : galgasScanner_1__60_
      2, // 140 : galgasScanner_1__7C__7C_
      2, // 141 : galgasScanner_1__7C_
      2, // 142 : galgasScanner_1__5E_
      2, // 143 : galgasScanner_1__3E__3E_
      2, // 144 : galgasScanner_1__7E_
      2, // 145 : galgasScanner_1__2D__2D_
      2, // 146 : galgasScanner_1__2B__2B_
      2, // 147 : galgasScanner_1__26__2D__2D_
      2, // 148 : galgasScanner_1__26__2B__2B_
      2, // 149 : galgasScanner_1__3D__3D__3D_
      2, // 150 : galgasScanner_1__21__3D__3D_
      2, // 151 : galgasScanner_1__3F__5E_
      2, // 152 : galgasScanner_1__21__5E_
      14, // 153 : galgasScanner_2_ERROR
      15  // 154 : galgasScanner_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : galgasScanner_1_identifier
      true, // 2 : galgasScanner_1_double_2E_xxx
      true, // 3 : galgasScanner_1_literalInt
      true, // 4 : galgasScanner_1__2E_
      true, // 5 : galgasScanner_1__2E__2E__2E_
      true, // 6 : galgasScanner_1__2E__2E__3C_
      true, // 7 : galgasScanner_1__40_type
      true, // 8 : galgasScanner_1__25_attribute
      true, // 9 : galgasScanner_1__27_char_27_
      true, // 10 : galgasScanner_1__24_terminal_24_
      true, // 11 : galgasScanner_1__3F_
      true, // 12 : galgasScanner_1__3F__21_
      true, // 13 : galgasScanner_1__21_
      true, // 14 : galgasScanner_1__21__3F_
      true, // 15 : galgasScanner_1__3C_
      true, // 16 : galgasScanner_1__3C__3D_
      true, // 17 : galgasScanner_1__3C__3C_
      true, // 18 : galgasScanner_1__3C_non_5F_terminal_3E_
      false, // 19 : galgasScanner_1__22_string_22_
      false, // 20 : galgasScanner_1_comment
      false, // 21 : galgasScanner_1_commentMark
      true, // 22 : galgasScanner_1_abstract
      true, // 23 : galgasScanner_1_after
      true, // 24 : galgasScanner_1_array
      true, // 25 : galgasScanner_1_as
      true, // 26 : galgasScanner_1_bang
      true, // 27 : galgasScanner_1_before
      true, // 28 : galgasScanner_1_between
      true, // 29 : galgasScanner_1_block
      true, // 30 : galgasScanner_1_boolset
      true, // 31 : galgasScanner_1_cast
      true, // 32 : galgasScanner_1_case
      true, // 33 : galgasScanner_1_class
      true, // 34 : galgasScanner_1_constructor
      true, // 35 : galgasScanner_1_default
      true, // 36 : galgasScanner_1_dict
      true, // 37 : galgasScanner_1_do
      true, // 38 : galgasScanner_1_drop
      true, // 39 : galgasScanner_1_else
      true, // 40 : galgasScanner_1_elsif
      true, // 41 : galgasScanner_1_end
      true, // 42 : galgasScanner_1_enum
      true, // 43 : galgasScanner_1_error
      true, // 44 : galgasScanner_1_extension
      true, // 45 : galgasScanner_1_extern
      true, // 46 : galgasScanner_1_false
      true, // 47 : galgasScanner_1_filewrapper
      true, // 48 : galgasScanner_1_for
      true, // 49 : galgasScanner_1_fixit
      true, // 50 : galgasScanner_1_func
      true, // 51 : galgasScanner_1_getter
      true, // 52 : galgasScanner_1_grammar
      true, // 53 : galgasScanner_1_graph
      true, // 54 : galgasScanner_1_gui
      true, // 55 : galgasScanner_1_if
      true, // 56 : galgasScanner_1_in
      true, // 57 : galgasScanner_1_indexing
      true, // 58 : galgasScanner_1_insert
      true, // 59 : galgasScanner_1_is
      true, // 60 : galgasScanner_1_label
      true, // 61 : galgasScanner_1_let
      true, // 62 : galgasScanner_1_lexique
      true, // 63 : galgasScanner_1_list
      true, // 64 : galgasScanner_1_listmap
      true, // 65 : galgasScanner_1_log
      true, // 66 : galgasScanner_1_loop
      true, // 67 : galgasScanner_1_map
      true, // 68 : galgasScanner_1_message
      true, // 69 : galgasScanner_1_method
      true, // 70 : galgasScanner_1_mod
      true, // 71 : galgasScanner_1_mutating
      true, // 72 : galgasScanner_1_not
      true, // 73 : galgasScanner_1_on
      true, // 74 : galgasScanner_1_operator
      true, // 75 : galgasScanner_1_option
      true, // 76 : galgasScanner_1_or
      true, // 77 : galgasScanner_1_override
      true, // 78 : galgasScanner_1_parse
      true, // 79 : galgasScanner_1_public
      true, // 80 : galgasScanner_1_private
      true, // 81 : galgasScanner_1_proc
      true, // 82 : galgasScanner_1_project
      true, // 83 : galgasScanner_1_refclass
      true, // 84 : galgasScanner_1_remove
      true, // 85 : galgasScanner_1_replace
      true, // 86 : galgasScanner_1_repeat
      true, // 87 : galgasScanner_1_rewind
      true, // 88 : galgasScanner_1_rule
      true, // 89 : galgasScanner_1_search
      true, // 90 : galgasScanner_1_select
      true, // 91 : galgasScanner_1_self
      true, // 92 : galgasScanner_1_send
      true, // 93 : galgasScanner_1_setter
      true, // 94 : galgasScanner_1_sortedlist
      true, // 95 : galgasScanner_1_struct
      true, // 96 : galgasScanner_1_style
      true, // 97 : galgasScanner_1_switch
      true, // 98 : galgasScanner_1_syntax
      true, // 99 : galgasScanner_1_tag
      true, // 100 : galgasScanner_1_template
      true, // 101 : galgasScanner_1_then
      true, // 102 : galgasScanner_1_true
      true, // 103 : galgasScanner_1_unused
      true, // 104 : galgasScanner_1_var
      true, // 105 : galgasScanner_1_valueclass
      true, // 106 : galgasScanner_1_warning
      true, // 107 : galgasScanner_1_while
      true, // 108 : galgasScanner_1_with
      true, // 109 : galgasScanner_1__2A_
      true, // 110 : galgasScanner_1__2C_
      true, // 111 : galgasScanner_1__2B_
      true, // 112 : galgasScanner_1__26__2B_
      true, // 113 : galgasScanner_1__26__2D_
      true, // 114 : galgasScanner_1__26__2A_
      true, // 115 : galgasScanner_1__26__2F_
      true, // 116 : galgasScanner_1__3E_
      true, // 117 : galgasScanner_1__3B_
      true, // 118 : galgasScanner_1__3A_
      true, // 119 : galgasScanner_1__3A__3E_
      true, // 120 : galgasScanner_1__2D_
      true, // 121 : galgasScanner_1__28_
      true, // 122 : galgasScanner_1__29_
      true, // 123 : galgasScanner_1__2D__3E_
      true, // 124 : galgasScanner_1__3D__3D_
      true, // 125 : galgasScanner_1__3D_
      true, // 126 : galgasScanner_1__26__26_
      true, // 127 : galgasScanner_1__5B_
      true, // 128 : galgasScanner_1__5D_
      true, // 129 : galgasScanner_1__2B__3D_
      true, // 130 : galgasScanner_1__2D__3D_
      true, // 131 : galgasScanner_1__2A__3D_
      true, // 132 : galgasScanner_1__2F__3D_
      true, // 133 : galgasScanner_1__2F_
      true, // 134 : galgasScanner_1__21__3D_
      true, // 135 : galgasScanner_1__3E__3D_
      true, // 136 : galgasScanner_1__26_
      true, // 137 : galgasScanner_1__7B_
      true, // 138 : galgasScanner_1__7D_
      true, // 139 : galgasScanner_1__60_
      true, // 140 : galgasScanner_1__7C__7C_
      true, // 141 : galgasScanner_1__7C_
      true, // 142 : galgasScanner_1__5E_
      true, // 143 : galgasScanner_1__3E__3E_
      true, // 144 : galgasScanner_1__7E_
      true, // 145 : galgasScanner_1__2D__2D_
      true, // 146 : galgasScanner_1__2B__2B_
      true, // 147 : galgasScanner_1__26__2D__2D_
      true, // 148 : galgasScanner_1__26__2B__2B_
      true, // 149 : galgasScanner_1__3D__3D__3D_
      true, // 150 : galgasScanner_1__21__3D__3D_
      true, // 151 : galgasScanner_1__3F__5E_
      true, // 152 : galgasScanner_1__21__5E_
      false, // 153 : galgasScanner_2_ERROR
      false  // 154 : galgasScanner_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingDirectory () -> String {
    return "../build/indexes"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {
    return [
      "Class Definition" /* classDefinition */,
      "Enum Definition" /* enumDefinition */,
      "Struct Definition" /* structDefinition */,
      "List Definition" /* listDefinition */,
      "Sorted List Definition" /* sortedListDefinition */,
      "Listmap Definition" /* listmapDefinition */,
      "Map Definition" /* mapDefinition */,
      "Extern Type Definition" /* externTypeDefinition */,
      "Shared Map Entry Definition" /* mapEntryDefinition */,
      "Array Definition" /* arrayTypeDefinition */,
      "Reference as array element" /* arrayElementTypeReference */,
      "Filewrapper Definition" /* filewrapperDefinition */,
      "Filewrapper Reference" /* filewrapperReference */,
      "Graph Definition" /* graphDefinition */,
      "Class Reference as Superclass" /* classReferencedAsSuperClass */,
      "Type reference in Constructor" /* typeReferenceInConstructor */,
      "Type reference in Type Method" /* typeReferenceInTypeMethod */,
      "Routine Definition" /* routineDefinition */,
      "Routine Call" /* routineCall */,
      "Function Definition" /* functionDefinition */,
      "Function Call" /* functionCall */,
      "Terminal Declaration" /* terminalDeclaration */,
      "Terminal Reference" /* terminalReference */,
      "Rule Definition" /* ruleDefinition */,
      "Rule Reference" /* ruleReference */,
      "Abstract Extension Setter Definition" /* abstractExtensionSetterDefinition */,
      "Abstract Extension Setter Definition" /* typeReferenceAbstractExtensionSetter */,
      "Override Abstract Extension Setter Definition" /* overrideabstractExtensionSetterDefinition */,
      "Extension Setter Definition" /* extensionSetterDefinition */,
      "Extension Setter Definition" /* typeReferenceExtensionSetter */,
      "Override Extension Setter Definition" /* overrideExtensionSetterDefinition */,
      "Override Extension Setter Definition" /* typeReferenceOverrideExtensionSetterDefinition */,
      "Override Abstract Extension Setter Definition" /* typeReferenceOverrideAbstractExtensionSetter */,
      "Abstract Extension Method Definition" /* abstractExtensionMethodDefinition */,
      "Abstract Extension Method Definition" /* typeReferenceAbstractExtensionMethod */,
      "Override Abstract Extension Method Definition" /* overrideAbstractExtensionMethodDefinition */,
      "Extension Method Definition" /* extensionMethodDefinition */,
      "Extension Method Definition" /* typeReferenceExtensionMethod */,
      "Override Extension Method Definition" /* overrideExtensionMethodDefinition */,
      "Override Extension Method Definition" /* typeReferenceOverrideExtensionMethodDefinition */,
      "Override Abstract Extension Method Definition" /* typeReferenceOverrideAbstractExtensionMethod */,
      "Abstract Extension Getter Definition" /* abstractExtensionGetterDefinition */,
      "Abstract Extension Getter Definition" /* typeReferenceAbstractExtensionGetter */,
      "Override Abstract Extension Getter Definition" /* overrideAbstractExtensionGetterDefinition */,
      "Override Abstract Extension Getter Definition" /* typeReferenceOverrideAbstractExtensionGetter */,
      "Extension Getter Definition" /* extensionGetterDefinition */,
      "Extension Getter Definition" /* typeReferenceExtensionGetter */,
      "Override Extension Getter Definition" /* overrideExtensionGetterDefinition */,
      "Override Extension Getter Definition" /* typeReferenceOverrideExtensionGetter */,
      "Option Component Definition" /* optionComponentDefinition */,
      "Option Component Reference" /* optionComponentReference */,
      "Grammar Component Definition" /* grammarComponentDefinition */,
      "Grammar Component Reference" /* grammarComponentReference */,
      "Indexing Name Definition" /* indexingNameDefinition */,
      "Indexing Name Reference" /* indexingNameReference */
    ]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 13
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return galgasScanner_styleNameFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return galgasScanner_styleIdentifierFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_bigintValue = ""
    self.mLexicalAttribute_charValue = 0
    self.mLexicalAttribute_floatValue = 0.0
    self.mLexicalAttribute_identifierString = ""
    self.mLexicalAttribute_sint32value = 0
    self.mLexicalAttribute_sint64value = 0
    self.mLexicalAttribute_tokenString = ""
    self.mLexicalAttribute_uint32value = 0
    self.mLexicalAttribute_uint64value = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (self.previousChar))
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_galgasScanner_galgasKeyWordList (mLexicalAttribute_identifierString) ;
      }
      if tokenCode == 0 {
        tokenCode = galgasScanner_1_identifier ;
      }
    }else if scanningOk && (self.testForInputString ("0x", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        scanner_cocoa_routine_convertHexStringIntoBigInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_bigintValue)
        tokenCode = galgasScanner_1_literalInt
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
      scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (46)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 46)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        scanner_cocoa_routine_convertStringToDouble (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_floatValue)
        tokenCode = galgasScanner_1_double_2E_xxx
      }else{
        scanner_cocoa_routine_convertDecimalStringIntoBigInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_bigintValue)
        tokenCode = galgasScanner_1_literalInt
      }
    }else if scanningOk && (self.testForInputChar (46)) {
      if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 48)
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 46)
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        scanner_cocoa_routine_convertStringToDouble (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_floatValue)
        tokenCode = galgasScanner_1_double_2E_xxx
      }else{
        if scanningOk && (self.testForInputString ("..", advance: true)) {
          tokenCode = galgasScanner_1__2E__2E__2E_
        }else if scanningOk && (self.testForInputString (".<", advance: true)) {
          tokenCode = galgasScanner_1__2E__2E__3C_
        }else{
          tokenCode = galgasScanner_1__2E_
        }
      }
    }else if scanningOk && (self.testForInputChar (64)) {
      if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (45)) {
          while (loop && scanningOk) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
            if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
            }else{
              loop = false
            }
          }
          loop = true
        }
      }else{
        scanningOk = false
      }
      tokenCode = galgasScanner_1__40_type
    }else if scanningOk && (self.testForInputChar (37)) {
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputChar (45) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      tokenCode = galgasScanner_1__25_attribute
    }else if scanningOk && (self.testForInputChar (39)) {
      if scanningOk && (self.testForInputChar (92)) {
        if scanningOk && (self.testForInputChar (102)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 12)
        }else if scanningOk && (self.testForInputChar (110)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 10)
        }else if scanningOk && (self.testForInputChar (114)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 13)
        }else if scanningOk && (self.testForInputChar (116)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 9)
        }else if scanningOk && (self.testForInputChar (118)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 11)
        }else if scanningOk && (self.testForInputChar (92)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 92)
        }else if scanningOk && (self.testForInputChar (48)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 0)
        }else if scanningOk && (self.testForInputChar (39)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 39)
        }else if scanningOk && (self.testForInputChar (117)) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else{
            scanningOk = false
          }
        }else if scanningOk && (self.testForInputChar (85)) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                    if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                      scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                      if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                        scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                        if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                          scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                          scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                        }else{
                          scanningOk = false
                        }
                      }else{
                        scanningOk = false
                      }
                    }else{
                      scanningOk = false
                    }
                  }else{
                    scanningOk = false
                  }
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else{
            scanningOk = false
          }
        }else{
          scanningOk = false
        }
      }else if scanningOk && (self.testForInputFromChar (32, toChar:65533)) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, self.previousChar)
      }else{
        scanningOk = false
      }
      if scanningOk && (self.testForInputChar (39)) {
        tokenCode = galgasScanner_1__27_char_27_
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputChar (36)) {
      if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
          }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else{
            loop = false
          }
        }
        loop = true
      }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
          }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else{
            loop = false
          }
        }
        loop = true
      }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
          }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      if scanningOk && (self.testForInputChar (36)) {
      }else{
        scanningOk = false
      }
      tokenCode = galgasScanner_1__24_terminal_24_
    }else if scanningOk && self.testForInputString ("===", advance: true) {
      tokenCode = galgasScanner_1__3D__3D__3D_
    }else if scanningOk && self.testForInputString ("&--", advance: true) {
      tokenCode = galgasScanner_1__26__2D__2D_
    }else if scanningOk && self.testForInputString ("&++", advance: true) {
      tokenCode = galgasScanner_1__26__2B__2B_
    }else if scanningOk && self.testForInputString ("!==", advance: true) {
      tokenCode = galgasScanner_1__21__3D__3D_
    }else if scanningOk && self.testForInputString ("||", advance: true) {
      tokenCode = galgasScanner_1__7C__7C_
    }else if scanningOk && self.testForInputString ("\?^", advance: true) {
      tokenCode = galgasScanner_1__3F__5E_
    }else if scanningOk && self.testForInputString (">>", advance: true) {
      tokenCode = galgasScanner_1__3E__3E_
    }else if scanningOk && self.testForInputString (">=", advance: true) {
      tokenCode = galgasScanner_1__3E__3D_
    }else if scanningOk && self.testForInputString ("==", advance: true) {
      tokenCode = galgasScanner_1__3D__3D_
    }else if scanningOk && self.testForInputString (":>", advance: true) {
      tokenCode = galgasScanner_1__3A__3E_
    }else if scanningOk && self.testForInputString ("/=", advance: true) {
      tokenCode = galgasScanner_1__2F__3D_
    }else if scanningOk && self.testForInputString ("->", advance: true) {
      tokenCode = galgasScanner_1__2D__3E_
    }else if scanningOk && self.testForInputString ("-=", advance: true) {
      tokenCode = galgasScanner_1__2D__3D_
    }else if scanningOk && self.testForInputString ("--", advance: true) {
      tokenCode = galgasScanner_1__2D__2D_
    }else if scanningOk && self.testForInputString ("+=", advance: true) {
      tokenCode = galgasScanner_1__2B__3D_
    }else if scanningOk && self.testForInputString ("++", advance: true) {
      tokenCode = galgasScanner_1__2B__2B_
    }else if scanningOk && self.testForInputString ("*=", advance: true) {
      tokenCode = galgasScanner_1__2A__3D_
    }else if scanningOk && self.testForInputString ("&/", advance: true) {
      tokenCode = galgasScanner_1__26__2F_
    }else if scanningOk && self.testForInputString ("&-", advance: true) {
      tokenCode = galgasScanner_1__26__2D_
    }else if scanningOk && self.testForInputString ("&+", advance: true) {
      tokenCode = galgasScanner_1__26__2B_
    }else if scanningOk && self.testForInputString ("&*", advance: true) {
      tokenCode = galgasScanner_1__26__2A_
    }else if scanningOk && self.testForInputString ("&&", advance: true) {
      tokenCode = galgasScanner_1__26__26_
    }else if scanningOk && self.testForInputString ("!^", advance: true) {
      tokenCode = galgasScanner_1__21__5E_
    }else if scanningOk && self.testForInputString ("!=", advance: true) {
      tokenCode = galgasScanner_1__21__3D_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = galgasScanner_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = galgasScanner_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = galgasScanner_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = galgasScanner_1__7B_
    }else if scanningOk && self.testForInputString ("`", advance: true) {
      tokenCode = galgasScanner_1__60_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = galgasScanner_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = galgasScanner_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = galgasScanner_1__5B_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = galgasScanner_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = galgasScanner_1__3D_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = galgasScanner_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = galgasScanner_1__3A_
    }else if scanningOk && self.testForInputString ("/", advance: true) {
      tokenCode = galgasScanner_1__2F_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = galgasScanner_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = galgasScanner_1__2C_
    }else if scanningOk && self.testForInputString ("+", advance: true) {
      tokenCode = galgasScanner_1__2B_
    }else if scanningOk && self.testForInputString ("*", advance: true) {
      tokenCode = galgasScanner_1__2A_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = galgasScanner_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = galgasScanner_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = galgasScanner_1__26_
    }else if scanningOk && (self.testForInputChar (63)) {
      let locationForTag_onlyInterrogationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (33)) {
        let locationForTag_onlyExclamationInterrogationMark = self.savedScanningPoint ()
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90)) {
          while (loop && scanningOk) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
            if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
            }else{
              loop = false
            }
          }
          loop = true
          if scanningOk && (self.testForInputChar (58)) {
            tokenCode = galgasScanner_1__3F__21_
          }else{
            scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
            self.restoreScanningPoint (locationForTag_onlyExclamationInterrogationMark)
            tokenCode = galgasScanner_1__3F__21_
          }
        }else{
          tokenCode = galgasScanner_1__3F__21_
        }
      }else if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner_1__3F_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationMark)
          tokenCode = galgasScanner_1__3F_
        }
      }else{
        tokenCode = galgasScanner_1__3F_
      }
    }else if scanningOk && (self.testForInputChar (33)) {
      let locationForTag_onlyExclamationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (63)) {
        let locationForTag_onlyInterrogationExclamationMark = self.savedScanningPoint ()
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90)) {
          while (loop && scanningOk) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
            if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
            }else{
              loop = false
            }
          }
          loop = true
          if scanningOk && (self.testForInputChar (58)) {
            tokenCode = galgasScanner_1__21__3F_
          }else{
            scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
            self.restoreScanningPoint (locationForTag_onlyInterrogationExclamationMark)
            tokenCode = galgasScanner_1__21__3F_
          }
        }else{
          tokenCode = galgasScanner_1__21__3F_
        }
      }else if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner_1__21_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationMark)
          tokenCode = galgasScanner_1__21_
        }
      }else{
        tokenCode = galgasScanner_1__21_
      }
    }else if scanningOk && (self.testForInputChar (60)) {
      let locationForTag_onlyInfDelimiter = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (61)) {
        tokenCode = galgasScanner_1__3C__3D_
      }else if scanningOk && (self.testForInputChar (60)) {
        tokenCode = galgasScanner_1__3C__3C_
      }else if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (62)) {
          tokenCode = galgasScanner_1__3C_non_5F_terminal_3E_
        }else{
          self.restoreScanningPoint (locationForTag_onlyInfDelimiter)
          tokenCode = galgasScanner_1__3C_
        }
      }else{
        tokenCode = galgasScanner_1__3C_
      }
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (92)) {
          if scanningOk && (self.testForInputChar (102)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 12)
          }else if scanningOk && (self.testForInputChar (110)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 10)
          }else if scanningOk && (self.testForInputChar (114)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 13)
          }else if scanningOk && (self.testForInputChar (116)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 9)
          }else if scanningOk && (self.testForInputChar (118)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 11)
          }else if scanningOk && (self.testForInputChar (92)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputChar (34)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
          }else if scanningOk && (self.testForInputChar (39)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 39)
          }else if scanningOk && (self.testForInputChar (63)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 63)
          }else if scanningOk && (self.testForInputChar (117)) {
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                    scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                    scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, mLexicalAttribute_charValue)
                  }else{
                    scanningOk = false
                  }
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else if scanningOk && (self.testForInputChar (85)) {
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                    if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                      scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                      if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                        scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                        if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                          scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                            scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                            scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, mLexicalAttribute_charValue)
                          }else{
                            scanningOk = false
                          }
                        }else{
                          scanningOk = false
                        }
                      }else{
                        scanningOk = false
                      }
                    }else{
                      scanningOk = false
                    }
                  }else{
                    scanningOk = false
                  }
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else{
            scanningOk = false
          }
        }else if scanningOk && (self.testForInputChar (32) || self.testForInputChar (33) || self.testForInputFromChar (35, toChar:65533)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (34)) {
        tokenCode = galgasScanner_1__22_string_22_
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputChar (35)) {
      if scanningOk && (self.testForInputChar (33)) {
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner_1_commentMark
      }else{
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:1114111)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner_1_comment
      }
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = galgasScanner_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = galgasScanner_2_TEMPLATE
      self.advance ()
    }
    return SWIFT_Token (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }
  
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//----------------------------------------------------------------------------------------------------------------------

/* - (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_bigintValue = [[NSMutableString alloc] init] ;
    mLexicalAttribute_charValue = 0 ;
    mLexicalAttribute_floatValue = 0.0 ;
    mLexicalAttribute_identifierString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_sint32value = 0 ;
    mLexicalAttribute_sint64value = 0 ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
    mLexicalAttribute_uint64value = 0 ;
  }
  return self ;
} */

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------

/*

*/


//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'galgasKeyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

fileprivate func search_into_galgasScanner_galgasKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "as" : galgasScanner_1_as,
    "do" : galgasScanner_1_do,
    "if" : galgasScanner_1_if,
    "in" : galgasScanner_1_in,
    "is" : galgasScanner_1_is,
    "on" : galgasScanner_1_on,
    "or" : galgasScanner_1_or,
    "end" : galgasScanner_1_end,
    "for" : galgasScanner_1_for,
    "gui" : galgasScanner_1_gui,
    "let" : galgasScanner_1_let,
    "log" : galgasScanner_1_log,
    "map" : galgasScanner_1_map,
    "mod" : galgasScanner_1_mod,
    "not" : galgasScanner_1_not,
    "tag" : galgasScanner_1_tag,
    "var" : galgasScanner_1_var,
    "bang" : galgasScanner_1_bang,
    "case" : galgasScanner_1_case,
    "cast" : galgasScanner_1_cast,
    "dict" : galgasScanner_1_dict,
    "drop" : galgasScanner_1_drop,
    "else" : galgasScanner_1_else,
    "enum" : galgasScanner_1_enum,
    "func" : galgasScanner_1_func,
    "list" : galgasScanner_1_list,
    "loop" : galgasScanner_1_loop,
    "proc" : galgasScanner_1_proc,
    "rule" : galgasScanner_1_rule,
    "self" : galgasScanner_1_self,
    "send" : galgasScanner_1_send,
    "then" : galgasScanner_1_then,
    "true" : galgasScanner_1_true,
    "with" : galgasScanner_1_with,
    "after" : galgasScanner_1_after,
    "array" : galgasScanner_1_array,
    "block" : galgasScanner_1_block,
    "class" : galgasScanner_1_class,
    "elsif" : galgasScanner_1_elsif,
    "error" : galgasScanner_1_error,
    "false" : galgasScanner_1_false,
    "fixit" : galgasScanner_1_fixit,
    "graph" : galgasScanner_1_graph,
    "label" : galgasScanner_1_label,
    "parse" : galgasScanner_1_parse,
    "style" : galgasScanner_1_style,
    "while" : galgasScanner_1_while,
    "before" : galgasScanner_1_before,
    "extern" : galgasScanner_1_extern,
    "getter" : galgasScanner_1_getter,
    "insert" : galgasScanner_1_insert,
    "method" : galgasScanner_1_method,
    "option" : galgasScanner_1_option,
    "public" : galgasScanner_1_public,
    "remove" : galgasScanner_1_remove,
    "repeat" : galgasScanner_1_repeat,
    "rewind" : galgasScanner_1_rewind,
    "search" : galgasScanner_1_search,
    "select" : galgasScanner_1_select,
    "setter" : galgasScanner_1_setter,
    "struct" : galgasScanner_1_struct,
    "switch" : galgasScanner_1_switch,
    "syntax" : galgasScanner_1_syntax,
    "unused" : galgasScanner_1_unused,
    "between" : galgasScanner_1_between,
    "boolset" : galgasScanner_1_boolset,
    "default" : galgasScanner_1_default,
    "grammar" : galgasScanner_1_grammar,
    "lexique" : galgasScanner_1_lexique,
    "listmap" : galgasScanner_1_listmap,
    "message" : galgasScanner_1_message,
    "private" : galgasScanner_1_private,
    "project" : galgasScanner_1_project,
    "replace" : galgasScanner_1_replace,
    "warning" : galgasScanner_1_warning,
    "abstract" : galgasScanner_1_abstract,
    "indexing" : galgasScanner_1_indexing,
    "mutating" : galgasScanner_1_mutating,
    "operator" : galgasScanner_1_operator,
    "override" : galgasScanner_1_override,
    "refclass" : galgasScanner_1_refclass,
    "template" : galgasScanner_1_template,
    "extension" : galgasScanner_1_extension,
    "sortedlist" : galgasScanner_1_sortedlist,
    "valueclass" : galgasScanner_1_valueclass,
    "constructor" : galgasScanner_1_constructor,
    "filewrapper" : galgasScanner_1_filewrapper
  ]
  return dictionary [inSearchedString, default: galgasScanner_1_]
}





//----------------------------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

/* - (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
  }
//--- Error ?
  if (! scanningOk) {
    mTokenCode = -1 ;
  }
}

*/

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


