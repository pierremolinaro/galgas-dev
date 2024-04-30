//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//   LEXIQUE galgasScanner3
//--------------------------------------------------------------------------------------------------

fileprivate let gFont_galgasScanner3 = EBGenericPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + galgasScanner3_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

fileprivate let gLineHeight_galgasScanner3 = EBGenericPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + galgasScanner3_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

fileprivate let gColors_galgasScanner3 : [EBGenericPreferenceProperty <NSColor>] = [
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-keywordsStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-delimitersStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-selectorStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-terminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-nonTerminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-integerStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-bigintStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-floatStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-characterStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-stringStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-typeNameStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-attributeStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner3-commentStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_galgasScanner3_lexical_error"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_galgasScanner3_template")
]

//--------------------------------------------------------------------------------------------------

fileprivate let gBoldStyle_galgasScanner3 : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-selectorStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-terminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-nonTerminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-bigintStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-floatStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-characterStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-typeNameStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-attributeStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_galgasScanner3_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner3_template")
]

//--------------------------------------------------------------------------------------------------

fileprivate let gItalicStyle_galgasScanner3 : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-selectorStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-terminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-nonTerminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-bigintStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-floatStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-characterStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-typeNameStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-attributeStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner3_template")
]

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

let galgasScanner3_1_ : UInt16 = 0
let galgasScanner3_1_identifier : UInt16 = 1
let galgasScanner3_1_double_2E_xxx : UInt16 = 2
let galgasScanner3_1_literalInt : UInt16 = 3
let galgasScanner3_1__2E_ : UInt16 = 4
let galgasScanner3_1__2E__2E__2E_ : UInt16 = 5
let galgasScanner3_1__2E__2E__3C_ : UInt16 = 6
let galgasScanner3_1__40_type : UInt16 = 7
let galgasScanner3_1__27_char_27_ : UInt16 = 8
let galgasScanner3_1__24_terminal_24_ : UInt16 = 9
let galgasScanner3_1_comment : UInt16 = 10
let galgasScanner3_1_commentMark : UInt16 = 11
let galgasScanner3_1__3F_selector_3A_ : UInt16 = 12
let galgasScanner3_1__3F_ : UInt16 = 13
let galgasScanner3_1__3F__21_selector_3A_ : UInt16 = 14
let galgasScanner3_1__3F__21_ : UInt16 = 15
let galgasScanner3_1__21_selector_3A_ : UInt16 = 16
let galgasScanner3_1__21_ : UInt16 = 17
let galgasScanner3_1__21__3F_selector_3A_ : UInt16 = 18
let galgasScanner3_1__21__3F_ : UInt16 = 19
let galgasScanner3_1__3C_ : UInt16 = 20
let galgasScanner3_1__3C__3D_ : UInt16 = 21
let galgasScanner3_1__3C__3C_ : UInt16 = 22
let galgasScanner3_1__3C_non_5F_terminal_3E_ : UInt16 = 23
let galgasScanner3_1__22_string_22_ : UInt16 = 24
let galgasScanner3_1_abstract : UInt16 = 25
let galgasScanner3_1_after : UInt16 = 26
let galgasScanner3_1_as : UInt16 = 27
let galgasScanner3_1_bang : UInt16 = 28
let galgasScanner3_1_before : UInt16 = 29
let galgasScanner3_1_between : UInt16 = 30
let galgasScanner3_1_block : UInt16 = 31
let galgasScanner3_1_boolset : UInt16 = 32
let galgasScanner3_1_cast : UInt16 = 33
let galgasScanner3_1_case : UInt16 = 34
let galgasScanner3_1_class : UInt16 = 35
let galgasScanner3_1_default : UInt16 = 36
let galgasScanner3_1_dict : UInt16 = 37
let galgasScanner3_1_do : UInt16 = 38
let galgasScanner3_1_drop : UInt16 = 39
let galgasScanner3_1_else : UInt16 = 40
let galgasScanner3_1_elsif : UInt16 = 41
let galgasScanner3_1_end : UInt16 = 42
let galgasScanner3_1_enum : UInt16 = 43
let galgasScanner3_1_error : UInt16 = 44
let galgasScanner3_1_extension : UInt16 = 45
let galgasScanner3_1_extern : UInt16 = 46
let galgasScanner3_1_false : UInt16 = 47
let galgasScanner3_1_fileprivate : UInt16 = 48
let galgasScanner3_1_filewrapper : UInt16 = 49
let galgasScanner3_1_for : UInt16 = 50
let galgasScanner3_1_final : UInt16 = 51
let galgasScanner3_1_fixit : UInt16 = 52
let galgasScanner3_1_func : UInt16 = 53
let galgasScanner3_1_getter : UInt16 = 54
let galgasScanner3_1_grammar : UInt16 = 55
let galgasScanner3_1_graph : UInt16 = 56
let galgasScanner3_1_gui : UInt16 = 57
let galgasScanner3_1_if : UInt16 = 58
let galgasScanner3_1_in : UInt16 = 59
let galgasScanner3_1_indexing : UInt16 = 60
let galgasScanner3_1_init : UInt16 = 61
let galgasScanner3_1_insert : UInt16 = 62
let galgasScanner3_1_is : UInt16 = 63
let galgasScanner3_1_label : UInt16 = 64
let galgasScanner3_1_let : UInt16 = 65
let galgasScanner3_1_lexique : UInt16 = 66
let galgasScanner3_1_list : UInt16 = 67
let galgasScanner3_1_log : UInt16 = 68
let galgasScanner3_1_loop : UInt16 = 69
let galgasScanner3_1_map : UInt16 = 70
let galgasScanner3_1_message : UInt16 = 71
let galgasScanner3_1_method : UInt16 = 72
let galgasScanner3_1_mod : UInt16 = 73
let galgasScanner3_1_mutating : UInt16 = 74
let galgasScanner3_1_nil : UInt16 = 75
let galgasScanner3_1_not : UInt16 = 76
let galgasScanner3_1_on : UInt16 = 77
let galgasScanner3_1_operator : UInt16 = 78
let galgasScanner3_1_option : UInt16 = 79
let galgasScanner3_1_or : UInt16 = 80
let galgasScanner3_1_override : UInt16 = 81
let galgasScanner3_1_parse : UInt16 = 82
let galgasScanner3_1_public : UInt16 = 83
let galgasScanner3_1_protected : UInt16 = 84
let galgasScanner3_1_private : UInt16 = 85
let galgasScanner3_1_proc : UInt16 = 86
let galgasScanner3_1_project : UInt16 = 87
let galgasScanner3_1_refclass : UInt16 = 88
let galgasScanner3_1_remove : UInt16 = 89
let galgasScanner3_1_repeat : UInt16 = 90
let galgasScanner3_1_replace : UInt16 = 91
let galgasScanner3_1_rewind : UInt16 = 92
let galgasScanner3_1_rule : UInt16 = 93
let galgasScanner3_1_search : UInt16 = 94
let galgasScanner3_1_select : UInt16 = 95
let galgasScanner3_1_self : UInt16 = 96
let galgasScanner3_1_send : UInt16 = 97
let galgasScanner3_1_setter : UInt16 = 98
let galgasScanner3_1_sortedlist : UInt16 = 99
let galgasScanner3_1_spoil : UInt16 = 100
let galgasScanner3_1_struct : UInt16 = 101
let galgasScanner3_1_style : UInt16 = 102
let galgasScanner3_1_super : UInt16 = 103
let galgasScanner3_1_switch : UInt16 = 104
let galgasScanner3_1_syntax : UInt16 = 105
let galgasScanner3_1_tag : UInt16 = 106
let galgasScanner3_1_template : UInt16 = 107
let galgasScanner3_1_then : UInt16 = 108
let galgasScanner3_1_true : UInt16 = 109
let galgasScanner3_1_typealias : UInt16 = 110
let galgasScanner3_1_unused : UInt16 = 111
let galgasScanner3_1_valueclass : UInt16 = 112
let galgasScanner3_1_var : UInt16 = 113
let galgasScanner3_1_warning : UInt16 = 114
let galgasScanner3_1_weak : UInt16 = 115
let galgasScanner3_1_while : UInt16 = 116
let galgasScanner3_1_with : UInt16 = 117
let galgasScanner3_1__25_app_2D_link : UInt16 = 118
let galgasScanner3_1__25_app_2D_source : UInt16 = 119
let galgasScanner3_1__25_applicationBundleBase : UInt16 = 120
let galgasScanner3_1__25_clonable : UInt16 = 121
let galgasScanner3_1__25_codeblocks_2D_linux_33__32_ : UInt16 = 122
let galgasScanner3_1__25_codeblocks_2D_linux_36__34_ : UInt16 = 123
let galgasScanner3_1__25_codeblocks_2D_windows : UInt16 = 124
let galgasScanner3_1__25_comparable : UInt16 = 125
let galgasScanner3_1__25_equatable : UInt16 = 126
let galgasScanner3_1__25_from : UInt16 = 127
let galgasScanner3_1__25_generatedInSeparateFile : UInt16 = 128
let galgasScanner3_1__25_initArgLabel : UInt16 = 129
let galgasScanner3_1__25_libpmAtPath : UInt16 = 130
let galgasScanner3_1__25_MacOS : UInt16 = 131
let galgasScanner3_1__25_MacOSDeployment : UInt16 = 132
let galgasScanner3_1__25_macCodeSign : UInt16 = 133
let galgasScanner3_1__25_makefile_2D_macosx : UInt16 = 134
let galgasScanner3_1__25_makefile_2D_unix : UInt16 = 135
let galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx : UInt16 = 136
let galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx : UInt16 = 137
let galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx : UInt16 = 138
let galgasScanner3_1__25_nonAtomicSelection : UInt16 = 139
let galgasScanner3_1__25_once : UInt16 = 140
let galgasScanner3_1__25_preserved : UInt16 = 141
let galgasScanner3_1__25_quietOutputByDefault : UInt16 = 142
let galgasScanner3_1__25_templateEndMark : UInt16 = 143
let galgasScanner3_1__25_tool_2D_source : UInt16 = 144
let galgasScanner3_1__25_translate : UInt16 = 145
let galgasScanner3_1__25_usefull : UInt16 = 146
let galgasScanner3_1__2A_ : UInt16 = 147
let galgasScanner3_1__2C_ : UInt16 = 148
let galgasScanner3_1__2B_ : UInt16 = 149
let galgasScanner3_1__26__2B_ : UInt16 = 150
let galgasScanner3_1__26__2D_ : UInt16 = 151
let galgasScanner3_1__26__2A_ : UInt16 = 152
let galgasScanner3_1__26__2F_ : UInt16 = 153
let galgasScanner3_1__3E_ : UInt16 = 154
let galgasScanner3_1__3B_ : UInt16 = 155
let galgasScanner3_1__3A_ : UInt16 = 156
let galgasScanner3_1__3A__3E_ : UInt16 = 157
let galgasScanner3_1__2D_ : UInt16 = 158
let galgasScanner3_1__28_ : UInt16 = 159
let galgasScanner3_1__29_ : UInt16 = 160
let galgasScanner3_1__2D__3E_ : UInt16 = 161
let galgasScanner3_1__3D__3D_ : UInt16 = 162
let galgasScanner3_1__3D_ : UInt16 = 163
let galgasScanner3_1__26__26_ : UInt16 = 164
let galgasScanner3_1__5B_ : UInt16 = 165
let galgasScanner3_1__5D_ : UInt16 = 166
let galgasScanner3_1__2B__3D_ : UInt16 = 167
let galgasScanner3_1__2D__3D_ : UInt16 = 168
let galgasScanner3_1__2A__3D_ : UInt16 = 169
let galgasScanner3_1__2F__3D_ : UInt16 = 170
let galgasScanner3_1__26__3D_ : UInt16 = 171
let galgasScanner3_1__7C__3D_ : UInt16 = 172
let galgasScanner3_1__5E__3D_ : UInt16 = 173
let galgasScanner3_1__2F_ : UInt16 = 174
let galgasScanner3_1__21__3D_ : UInt16 = 175
let galgasScanner3_1__3E__3D_ : UInt16 = 176
let galgasScanner3_1__26_ : UInt16 = 177
let galgasScanner3_1__7B_ : UInt16 = 178
let galgasScanner3_1__7D_ : UInt16 = 179
let galgasScanner3_1__60_ : UInt16 = 180
let galgasScanner3_1__7C__7C_ : UInt16 = 181
let galgasScanner3_1__7C_ : UInt16 = 182
let galgasScanner3_1__5E_ : UInt16 = 183
let galgasScanner3_1__3E__3E_ : UInt16 = 184
let galgasScanner3_1__7E_ : UInt16 = 185
let galgasScanner3_1__2D__2D_ : UInt16 = 186
let galgasScanner3_1__2B__2B_ : UInt16 = 187
let galgasScanner3_1__26__2D__2D_ : UInt16 = 188
let galgasScanner3_1__26__2B__2B_ : UInt16 = 189
let galgasScanner3_1__3D__3D__3D_ : UInt16 = 190
let galgasScanner3_1__21__3D__3D_ : UInt16 = 191
let galgasScanner3_1__3F__5E_ : UInt16 = 192
let galgasScanner3_1__21__5E_ : UInt16 = 193
let galgasScanner3_1__A7__5B_ : UInt16 = 194
let galgasScanner3_2_ERROR : UInt16 = 195
let galgasScanner3_2_TEMPLATE : UInt16 = 196

//--------------------------------------------------------------------------------------------------

func galgasScanner3_lexiqueIdentifier () -> String {
  return "galgasScanner3"
}

//--------------------------------------------------------------------------------------------------

func galgasScanner3_styleNameFor (styleIndex inIndex : UInt8) -> String {
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

//--------------------------------------------------------------------------------------------------

func galgasScanner3_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "galgasScanner3", // 0
    "galgasScanner3-keywordsStyle", // 1
    "galgasScanner3-delimitersStyle", // 2
    "galgasScanner3-selectorStyle", // 3
    "galgasScanner3-terminalStyle", // 4
    "galgasScanner3-nonTerminalStyle", // 5
    "galgasScanner3-integerStyle", // 6
    "galgasScanner3-bigintStyle", // 7
    "galgasScanner3-floatStyle", // 8
    "galgasScanner3-characterStyle", // 9
    "galgasScanner3-stringStyle", // 10
    "galgasScanner3-typeNameStyle", // 11
    "galgasScanner3-attributeStyle", // 12
    "galgasScanner3-commentStyle", // 13
    "galgasScanner3.ERROR", // 14
    "galgasScanner3.TEMPLATE" // 15
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class SWIFT_Lexique_galgasScanner3 : SWIFT_Lexique {

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
    return galgasScanner3_lexiqueIdentifier ()
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 194
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBGenericPreferenceProperty <NSFont> { return gFont_galgasScanner3 }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_galgasScanner3 }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {
    return gColors_galgasScanner3 [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gBoldStyle_galgasScanner3 [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gItalicStyle_galgasScanner3 [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : galgasScanner3_1_identifier
      8, // 2 : galgasScanner3_1_double_2E_xxx
      7, // 3 : galgasScanner3_1_literalInt
      2, // 4 : galgasScanner3_1__2E_
      2, // 5 : galgasScanner3_1__2E__2E__2E_
      2, // 6 : galgasScanner3_1__2E__2E__3C_
      11, // 7 : galgasScanner3_1__40_type
      9, // 8 : galgasScanner3_1__27_char_27_
      4, // 9 : galgasScanner3_1__24_terminal_24_
      13, // 10 : galgasScanner3_1_comment
      13, // 11 : galgasScanner3_1_commentMark
      3, // 12 : galgasScanner3_1__3F_selector_3A_
      2, // 13 : galgasScanner3_1__3F_
      3, // 14 : galgasScanner3_1__3F__21_selector_3A_
      2, // 15 : galgasScanner3_1__3F__21_
      3, // 16 : galgasScanner3_1__21_selector_3A_
      2, // 17 : galgasScanner3_1__21_
      3, // 18 : galgasScanner3_1__21__3F_selector_3A_
      2, // 19 : galgasScanner3_1__21__3F_
      2, // 20 : galgasScanner3_1__3C_
      2, // 21 : galgasScanner3_1__3C__3D_
      2, // 22 : galgasScanner3_1__3C__3C_
      5, // 23 : galgasScanner3_1__3C_non_5F_terminal_3E_
      10, // 24 : galgasScanner3_1__22_string_22_
      1, // 25 : galgasScanner3_1_abstract
      1, // 26 : galgasScanner3_1_after
      1, // 27 : galgasScanner3_1_as
      1, // 28 : galgasScanner3_1_bang
      1, // 29 : galgasScanner3_1_before
      1, // 30 : galgasScanner3_1_between
      1, // 31 : galgasScanner3_1_block
      1, // 32 : galgasScanner3_1_boolset
      1, // 33 : galgasScanner3_1_cast
      1, // 34 : galgasScanner3_1_case
      1, // 35 : galgasScanner3_1_class
      1, // 36 : galgasScanner3_1_default
      1, // 37 : galgasScanner3_1_dict
      1, // 38 : galgasScanner3_1_do
      1, // 39 : galgasScanner3_1_drop
      1, // 40 : galgasScanner3_1_else
      1, // 41 : galgasScanner3_1_elsif
      1, // 42 : galgasScanner3_1_end
      1, // 43 : galgasScanner3_1_enum
      1, // 44 : galgasScanner3_1_error
      1, // 45 : galgasScanner3_1_extension
      1, // 46 : galgasScanner3_1_extern
      1, // 47 : galgasScanner3_1_false
      1, // 48 : galgasScanner3_1_fileprivate
      1, // 49 : galgasScanner3_1_filewrapper
      1, // 50 : galgasScanner3_1_for
      1, // 51 : galgasScanner3_1_final
      1, // 52 : galgasScanner3_1_fixit
      1, // 53 : galgasScanner3_1_func
      1, // 54 : galgasScanner3_1_getter
      1, // 55 : galgasScanner3_1_grammar
      1, // 56 : galgasScanner3_1_graph
      1, // 57 : galgasScanner3_1_gui
      1, // 58 : galgasScanner3_1_if
      1, // 59 : galgasScanner3_1_in
      1, // 60 : galgasScanner3_1_indexing
      1, // 61 : galgasScanner3_1_init
      1, // 62 : galgasScanner3_1_insert
      1, // 63 : galgasScanner3_1_is
      1, // 64 : galgasScanner3_1_label
      1, // 65 : galgasScanner3_1_let
      1, // 66 : galgasScanner3_1_lexique
      1, // 67 : galgasScanner3_1_list
      1, // 68 : galgasScanner3_1_log
      1, // 69 : galgasScanner3_1_loop
      1, // 70 : galgasScanner3_1_map
      1, // 71 : galgasScanner3_1_message
      1, // 72 : galgasScanner3_1_method
      1, // 73 : galgasScanner3_1_mod
      1, // 74 : galgasScanner3_1_mutating
      1, // 75 : galgasScanner3_1_nil
      1, // 76 : galgasScanner3_1_not
      1, // 77 : galgasScanner3_1_on
      1, // 78 : galgasScanner3_1_operator
      1, // 79 : galgasScanner3_1_option
      1, // 80 : galgasScanner3_1_or
      1, // 81 : galgasScanner3_1_override
      1, // 82 : galgasScanner3_1_parse
      1, // 83 : galgasScanner3_1_public
      1, // 84 : galgasScanner3_1_protected
      1, // 85 : galgasScanner3_1_private
      1, // 86 : galgasScanner3_1_proc
      1, // 87 : galgasScanner3_1_project
      1, // 88 : galgasScanner3_1_refclass
      1, // 89 : galgasScanner3_1_remove
      1, // 90 : galgasScanner3_1_repeat
      1, // 91 : galgasScanner3_1_replace
      1, // 92 : galgasScanner3_1_rewind
      1, // 93 : galgasScanner3_1_rule
      1, // 94 : galgasScanner3_1_search
      1, // 95 : galgasScanner3_1_select
      1, // 96 : galgasScanner3_1_self
      1, // 97 : galgasScanner3_1_send
      1, // 98 : galgasScanner3_1_setter
      1, // 99 : galgasScanner3_1_sortedlist
      1, // 100 : galgasScanner3_1_spoil
      1, // 101 : galgasScanner3_1_struct
      1, // 102 : galgasScanner3_1_style
      1, // 103 : galgasScanner3_1_super
      1, // 104 : galgasScanner3_1_switch
      1, // 105 : galgasScanner3_1_syntax
      1, // 106 : galgasScanner3_1_tag
      1, // 107 : galgasScanner3_1_template
      1, // 108 : galgasScanner3_1_then
      1, // 109 : galgasScanner3_1_true
      1, // 110 : galgasScanner3_1_typealias
      1, // 111 : galgasScanner3_1_unused
      1, // 112 : galgasScanner3_1_valueclass
      1, // 113 : galgasScanner3_1_var
      1, // 114 : galgasScanner3_1_warning
      1, // 115 : galgasScanner3_1_weak
      1, // 116 : galgasScanner3_1_while
      1, // 117 : galgasScanner3_1_with
      12, // 118 : galgasScanner3_1__25_app_2D_link
      12, // 119 : galgasScanner3_1__25_app_2D_source
      12, // 120 : galgasScanner3_1__25_applicationBundleBase
      12, // 121 : galgasScanner3_1__25_clonable
      12, // 122 : galgasScanner3_1__25_codeblocks_2D_linux_33__32_
      12, // 123 : galgasScanner3_1__25_codeblocks_2D_linux_36__34_
      12, // 124 : galgasScanner3_1__25_codeblocks_2D_windows
      12, // 125 : galgasScanner3_1__25_comparable
      12, // 126 : galgasScanner3_1__25_equatable
      12, // 127 : galgasScanner3_1__25_from
      12, // 128 : galgasScanner3_1__25_generatedInSeparateFile
      12, // 129 : galgasScanner3_1__25_initArgLabel
      12, // 130 : galgasScanner3_1__25_libpmAtPath
      12, // 131 : galgasScanner3_1__25_MacOS
      12, // 132 : galgasScanner3_1__25_MacOSDeployment
      12, // 133 : galgasScanner3_1__25_macCodeSign
      12, // 134 : galgasScanner3_1__25_makefile_2D_macosx
      12, // 135 : galgasScanner3_1__25_makefile_2D_unix
      12, // 136 : galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx
      12, // 137 : galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx
      12, // 138 : galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx
      12, // 139 : galgasScanner3_1__25_nonAtomicSelection
      12, // 140 : galgasScanner3_1__25_once
      12, // 141 : galgasScanner3_1__25_preserved
      12, // 142 : galgasScanner3_1__25_quietOutputByDefault
      12, // 143 : galgasScanner3_1__25_templateEndMark
      12, // 144 : galgasScanner3_1__25_tool_2D_source
      12, // 145 : galgasScanner3_1__25_translate
      12, // 146 : galgasScanner3_1__25_usefull
      2, // 147 : galgasScanner3_1__2A_
      2, // 148 : galgasScanner3_1__2C_
      2, // 149 : galgasScanner3_1__2B_
      2, // 150 : galgasScanner3_1__26__2B_
      2, // 151 : galgasScanner3_1__26__2D_
      2, // 152 : galgasScanner3_1__26__2A_
      2, // 153 : galgasScanner3_1__26__2F_
      2, // 154 : galgasScanner3_1__3E_
      2, // 155 : galgasScanner3_1__3B_
      2, // 156 : galgasScanner3_1__3A_
      2, // 157 : galgasScanner3_1__3A__3E_
      2, // 158 : galgasScanner3_1__2D_
      2, // 159 : galgasScanner3_1__28_
      2, // 160 : galgasScanner3_1__29_
      2, // 161 : galgasScanner3_1__2D__3E_
      2, // 162 : galgasScanner3_1__3D__3D_
      2, // 163 : galgasScanner3_1__3D_
      2, // 164 : galgasScanner3_1__26__26_
      2, // 165 : galgasScanner3_1__5B_
      2, // 166 : galgasScanner3_1__5D_
      2, // 167 : galgasScanner3_1__2B__3D_
      2, // 168 : galgasScanner3_1__2D__3D_
      2, // 169 : galgasScanner3_1__2A__3D_
      2, // 170 : galgasScanner3_1__2F__3D_
      2, // 171 : galgasScanner3_1__26__3D_
      2, // 172 : galgasScanner3_1__7C__3D_
      2, // 173 : galgasScanner3_1__5E__3D_
      2, // 174 : galgasScanner3_1__2F_
      2, // 175 : galgasScanner3_1__21__3D_
      2, // 176 : galgasScanner3_1__3E__3D_
      2, // 177 : galgasScanner3_1__26_
      2, // 178 : galgasScanner3_1__7B_
      2, // 179 : galgasScanner3_1__7D_
      2, // 180 : galgasScanner3_1__60_
      2, // 181 : galgasScanner3_1__7C__7C_
      2, // 182 : galgasScanner3_1__7C_
      2, // 183 : galgasScanner3_1__5E_
      2, // 184 : galgasScanner3_1__3E__3E_
      2, // 185 : galgasScanner3_1__7E_
      2, // 186 : galgasScanner3_1__2D__2D_
      2, // 187 : galgasScanner3_1__2B__2B_
      2, // 188 : galgasScanner3_1__26__2D__2D_
      2, // 189 : galgasScanner3_1__26__2B__2B_
      2, // 190 : galgasScanner3_1__3D__3D__3D_
      2, // 191 : galgasScanner3_1__21__3D__3D_
      2, // 192 : galgasScanner3_1__3F__5E_
      2, // 193 : galgasScanner3_1__21__5E_
      2, // 194 : galgasScanner3_1__A7__5B_
      14, // 195 : galgasScanner3_2_ERROR
      15  // 196 : galgasScanner3_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : galgasScanner3_1_identifier
      true, // 2 : galgasScanner3_1_double_2E_xxx
      true, // 3 : galgasScanner3_1_literalInt
      true, // 4 : galgasScanner3_1__2E_
      true, // 5 : galgasScanner3_1__2E__2E__2E_
      true, // 6 : galgasScanner3_1__2E__2E__3C_
      true, // 7 : galgasScanner3_1__40_type
      true, // 8 : galgasScanner3_1__27_char_27_
      true, // 9 : galgasScanner3_1__24_terminal_24_
      false, // 10 : galgasScanner3_1_comment
      false, // 11 : galgasScanner3_1_commentMark
      true, // 12 : galgasScanner3_1__3F_selector_3A_
      true, // 13 : galgasScanner3_1__3F_
      true, // 14 : galgasScanner3_1__3F__21_selector_3A_
      true, // 15 : galgasScanner3_1__3F__21_
      true, // 16 : galgasScanner3_1__21_selector_3A_
      true, // 17 : galgasScanner3_1__21_
      true, // 18 : galgasScanner3_1__21__3F_selector_3A_
      true, // 19 : galgasScanner3_1__21__3F_
      true, // 20 : galgasScanner3_1__3C_
      true, // 21 : galgasScanner3_1__3C__3D_
      true, // 22 : galgasScanner3_1__3C__3C_
      true, // 23 : galgasScanner3_1__3C_non_5F_terminal_3E_
      false, // 24 : galgasScanner3_1__22_string_22_
      true, // 25 : galgasScanner3_1_abstract
      true, // 26 : galgasScanner3_1_after
      true, // 27 : galgasScanner3_1_as
      true, // 28 : galgasScanner3_1_bang
      true, // 29 : galgasScanner3_1_before
      true, // 30 : galgasScanner3_1_between
      true, // 31 : galgasScanner3_1_block
      true, // 32 : galgasScanner3_1_boolset
      true, // 33 : galgasScanner3_1_cast
      true, // 34 : galgasScanner3_1_case
      true, // 35 : galgasScanner3_1_class
      true, // 36 : galgasScanner3_1_default
      true, // 37 : galgasScanner3_1_dict
      true, // 38 : galgasScanner3_1_do
      true, // 39 : galgasScanner3_1_drop
      true, // 40 : galgasScanner3_1_else
      true, // 41 : galgasScanner3_1_elsif
      true, // 42 : galgasScanner3_1_end
      true, // 43 : galgasScanner3_1_enum
      true, // 44 : galgasScanner3_1_error
      true, // 45 : galgasScanner3_1_extension
      true, // 46 : galgasScanner3_1_extern
      true, // 47 : galgasScanner3_1_false
      true, // 48 : galgasScanner3_1_fileprivate
      true, // 49 : galgasScanner3_1_filewrapper
      true, // 50 : galgasScanner3_1_for
      true, // 51 : galgasScanner3_1_final
      true, // 52 : galgasScanner3_1_fixit
      true, // 53 : galgasScanner3_1_func
      true, // 54 : galgasScanner3_1_getter
      true, // 55 : galgasScanner3_1_grammar
      true, // 56 : galgasScanner3_1_graph
      true, // 57 : galgasScanner3_1_gui
      true, // 58 : galgasScanner3_1_if
      true, // 59 : galgasScanner3_1_in
      true, // 60 : galgasScanner3_1_indexing
      true, // 61 : galgasScanner3_1_init
      true, // 62 : galgasScanner3_1_insert
      true, // 63 : galgasScanner3_1_is
      true, // 64 : galgasScanner3_1_label
      true, // 65 : galgasScanner3_1_let
      true, // 66 : galgasScanner3_1_lexique
      true, // 67 : galgasScanner3_1_list
      true, // 68 : galgasScanner3_1_log
      true, // 69 : galgasScanner3_1_loop
      true, // 70 : galgasScanner3_1_map
      true, // 71 : galgasScanner3_1_message
      true, // 72 : galgasScanner3_1_method
      true, // 73 : galgasScanner3_1_mod
      true, // 74 : galgasScanner3_1_mutating
      true, // 75 : galgasScanner3_1_nil
      true, // 76 : galgasScanner3_1_not
      true, // 77 : galgasScanner3_1_on
      true, // 78 : galgasScanner3_1_operator
      true, // 79 : galgasScanner3_1_option
      true, // 80 : galgasScanner3_1_or
      true, // 81 : galgasScanner3_1_override
      true, // 82 : galgasScanner3_1_parse
      true, // 83 : galgasScanner3_1_public
      true, // 84 : galgasScanner3_1_protected
      true, // 85 : galgasScanner3_1_private
      true, // 86 : galgasScanner3_1_proc
      true, // 87 : galgasScanner3_1_project
      true, // 88 : galgasScanner3_1_refclass
      true, // 89 : galgasScanner3_1_remove
      true, // 90 : galgasScanner3_1_repeat
      true, // 91 : galgasScanner3_1_replace
      true, // 92 : galgasScanner3_1_rewind
      true, // 93 : galgasScanner3_1_rule
      true, // 94 : galgasScanner3_1_search
      true, // 95 : galgasScanner3_1_select
      true, // 96 : galgasScanner3_1_self
      true, // 97 : galgasScanner3_1_send
      true, // 98 : galgasScanner3_1_setter
      true, // 99 : galgasScanner3_1_sortedlist
      true, // 100 : galgasScanner3_1_spoil
      true, // 101 : galgasScanner3_1_struct
      true, // 102 : galgasScanner3_1_style
      true, // 103 : galgasScanner3_1_super
      true, // 104 : galgasScanner3_1_switch
      true, // 105 : galgasScanner3_1_syntax
      true, // 106 : galgasScanner3_1_tag
      true, // 107 : galgasScanner3_1_template
      true, // 108 : galgasScanner3_1_then
      true, // 109 : galgasScanner3_1_true
      true, // 110 : galgasScanner3_1_typealias
      true, // 111 : galgasScanner3_1_unused
      true, // 112 : galgasScanner3_1_valueclass
      true, // 113 : galgasScanner3_1_var
      true, // 114 : galgasScanner3_1_warning
      true, // 115 : galgasScanner3_1_weak
      true, // 116 : galgasScanner3_1_while
      true, // 117 : galgasScanner3_1_with
      true, // 118 : galgasScanner3_1__25_app_2D_link
      true, // 119 : galgasScanner3_1__25_app_2D_source
      true, // 120 : galgasScanner3_1__25_applicationBundleBase
      true, // 121 : galgasScanner3_1__25_clonable
      true, // 122 : galgasScanner3_1__25_codeblocks_2D_linux_33__32_
      true, // 123 : galgasScanner3_1__25_codeblocks_2D_linux_36__34_
      true, // 124 : galgasScanner3_1__25_codeblocks_2D_windows
      true, // 125 : galgasScanner3_1__25_comparable
      true, // 126 : galgasScanner3_1__25_equatable
      true, // 127 : galgasScanner3_1__25_from
      true, // 128 : galgasScanner3_1__25_generatedInSeparateFile
      true, // 129 : galgasScanner3_1__25_initArgLabel
      true, // 130 : galgasScanner3_1__25_libpmAtPath
      true, // 131 : galgasScanner3_1__25_MacOS
      true, // 132 : galgasScanner3_1__25_MacOSDeployment
      true, // 133 : galgasScanner3_1__25_macCodeSign
      true, // 134 : galgasScanner3_1__25_makefile_2D_macosx
      true, // 135 : galgasScanner3_1__25_makefile_2D_unix
      true, // 136 : galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx
      true, // 137 : galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx
      true, // 138 : galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx
      true, // 139 : galgasScanner3_1__25_nonAtomicSelection
      true, // 140 : galgasScanner3_1__25_once
      true, // 141 : galgasScanner3_1__25_preserved
      true, // 142 : galgasScanner3_1__25_quietOutputByDefault
      true, // 143 : galgasScanner3_1__25_templateEndMark
      true, // 144 : galgasScanner3_1__25_tool_2D_source
      true, // 145 : galgasScanner3_1__25_translate
      true, // 146 : galgasScanner3_1__25_usefull
      true, // 147 : galgasScanner3_1__2A_
      true, // 148 : galgasScanner3_1__2C_
      true, // 149 : galgasScanner3_1__2B_
      true, // 150 : galgasScanner3_1__26__2B_
      true, // 151 : galgasScanner3_1__26__2D_
      true, // 152 : galgasScanner3_1__26__2A_
      true, // 153 : galgasScanner3_1__26__2F_
      true, // 154 : galgasScanner3_1__3E_
      true, // 155 : galgasScanner3_1__3B_
      true, // 156 : galgasScanner3_1__3A_
      true, // 157 : galgasScanner3_1__3A__3E_
      true, // 158 : galgasScanner3_1__2D_
      true, // 159 : galgasScanner3_1__28_
      true, // 160 : galgasScanner3_1__29_
      true, // 161 : galgasScanner3_1__2D__3E_
      true, // 162 : galgasScanner3_1__3D__3D_
      true, // 163 : galgasScanner3_1__3D_
      true, // 164 : galgasScanner3_1__26__26_
      true, // 165 : galgasScanner3_1__5B_
      true, // 166 : galgasScanner3_1__5D_
      true, // 167 : galgasScanner3_1__2B__3D_
      true, // 168 : galgasScanner3_1__2D__3D_
      true, // 169 : galgasScanner3_1__2A__3D_
      true, // 170 : galgasScanner3_1__2F__3D_
      true, // 171 : galgasScanner3_1__26__3D_
      true, // 172 : galgasScanner3_1__7C__3D_
      true, // 173 : galgasScanner3_1__5E__3D_
      true, // 174 : galgasScanner3_1__2F_
      true, // 175 : galgasScanner3_1__21__3D_
      true, // 176 : galgasScanner3_1__3E__3D_
      true, // 177 : galgasScanner3_1__26_
      true, // 178 : galgasScanner3_1__7B_
      true, // 179 : galgasScanner3_1__7D_
      true, // 180 : galgasScanner3_1__60_
      true, // 181 : galgasScanner3_1__7C__7C_
      true, // 182 : galgasScanner3_1__7C_
      true, // 183 : galgasScanner3_1__5E_
      true, // 184 : galgasScanner3_1__3E__3E_
      true, // 185 : galgasScanner3_1__7E_
      true, // 186 : galgasScanner3_1__2D__2D_
      true, // 187 : galgasScanner3_1__2B__2B_
      true, // 188 : galgasScanner3_1__26__2D__2D_
      true, // 189 : galgasScanner3_1__26__2B__2B_
      true, // 190 : galgasScanner3_1__3D__3D__3D_
      true, // 191 : galgasScanner3_1__21__3D__3D_
      true, // 192 : galgasScanner3_1__3F__5E_
      true, // 193 : galgasScanner3_1__21__5E_
      true, // 194 : galgasScanner3_1__A7__5B_
      false, // 195 : galgasScanner3_2_ERROR
      false  // 196 : galgasScanner3_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {
    return [
      "Class Definition" /* classDefinition */,
      "Enum Definition" /* enumDefinition */,
      "Struct Definition" /* structDefinition */,
      "List Definition" /* listDefinition */,
      "Sorted List Definition" /* sortedListDefinition */,
      "Map Definition" /* mapDefinition */,
      "Dictionary Definition" /* dictionaryDefinition */,
      "Extern Type Definition" /* externTypeDefinition */,
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
    return galgasScanner3_styleNameFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return galgasScanner3_styleIdentifierFor (styleIndex: inIndex)
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
        tokenCode = search_into_galgasScanner_33__galgasKeyWordList (mLexicalAttribute_identifierString) ;
      }
      if tokenCode == 0 {
        tokenCode = galgasScanner3_1_identifier ;
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
        tokenCode = galgasScanner3_1_literalInt
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
        tokenCode = galgasScanner3_1_double_2E_xxx
      }else{
        scanner_cocoa_routine_convertDecimalStringIntoBigInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_bigintValue)
        tokenCode = galgasScanner3_1_literalInt
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
        tokenCode = galgasScanner3_1_double_2E_xxx
      }else{
        if scanningOk && (self.testForInputString ("..", advance: true)) {
          tokenCode = galgasScanner3_1__2E__2E__2E_
        }else if scanningOk && (self.testForInputString (".<", advance: true)) {
          tokenCode = galgasScanner3_1__2E__2E__3C_
        }else{
          tokenCode = galgasScanner3_1__2E_
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
      }else{
        scanningOk = false
      }
      tokenCode = galgasScanner3_1__40_type
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
      if (tokenCode == 0) {
        tokenCode = search_into_galgasScanner_33__attributeKeyWordList (mLexicalAttribute_tokenString) ;
      }
      if tokenCode == 0 {
        scanningOk = false
      }
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
        tokenCode = galgasScanner3_1__27_char_27_
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
      tokenCode = galgasScanner3_1__24_terminal_24_
    }else if scanningOk && (self.testForInputChar (35)) {
      if scanningOk && (self.testForInputChar (33)) {
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner3_1_commentMark
      }else{
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:1114111)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner3_1_comment
      }
    }else if scanningOk && (self.testForInputString ("//", advance: true)) {
      if scanningOk && (self.testForInputChar (33)) {
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner3_1_commentMark
      }else{
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:1114111)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner3_1_comment
      }
    }else if scanningOk && self.testForInputString ("===", advance: true) {
      tokenCode = galgasScanner3_1__3D__3D__3D_
    }else if scanningOk && self.testForInputString ("&--", advance: true) {
      tokenCode = galgasScanner3_1__26__2D__2D_
    }else if scanningOk && self.testForInputString ("&++", advance: true) {
      tokenCode = galgasScanner3_1__26__2B__2B_
    }else if scanningOk && self.testForInputString ("!==", advance: true) {
      tokenCode = galgasScanner3_1__21__3D__3D_
    }else if scanningOk && self.testForInputString ("§[", advance: true) {
      tokenCode = galgasScanner3_1__A7__5B_
    }else if scanningOk && self.testForInputString ("||", advance: true) {
      tokenCode = galgasScanner3_1__7C__7C_
    }else if scanningOk && self.testForInputString ("|=", advance: true) {
      tokenCode = galgasScanner3_1__7C__3D_
    }else if scanningOk && self.testForInputString ("^=", advance: true) {
      tokenCode = galgasScanner3_1__5E__3D_
    }else if scanningOk && self.testForInputString ("\?^", advance: true) {
      tokenCode = galgasScanner3_1__3F__5E_
    }else if scanningOk && self.testForInputString (">>", advance: true) {
      tokenCode = galgasScanner3_1__3E__3E_
    }else if scanningOk && self.testForInputString (">=", advance: true) {
      tokenCode = galgasScanner3_1__3E__3D_
    }else if scanningOk && self.testForInputString ("==", advance: true) {
      tokenCode = galgasScanner3_1__3D__3D_
    }else if scanningOk && self.testForInputString (":>", advance: true) {
      tokenCode = galgasScanner3_1__3A__3E_
    }else if scanningOk && self.testForInputString ("/=", advance: true) {
      tokenCode = galgasScanner3_1__2F__3D_
    }else if scanningOk && self.testForInputString ("->", advance: true) {
      tokenCode = galgasScanner3_1__2D__3E_
    }else if scanningOk && self.testForInputString ("-=", advance: true) {
      tokenCode = galgasScanner3_1__2D__3D_
    }else if scanningOk && self.testForInputString ("--", advance: true) {
      tokenCode = galgasScanner3_1__2D__2D_
    }else if scanningOk && self.testForInputString ("+=", advance: true) {
      tokenCode = galgasScanner3_1__2B__3D_
    }else if scanningOk && self.testForInputString ("++", advance: true) {
      tokenCode = galgasScanner3_1__2B__2B_
    }else if scanningOk && self.testForInputString ("*=", advance: true) {
      tokenCode = galgasScanner3_1__2A__3D_
    }else if scanningOk && self.testForInputString ("&=", advance: true) {
      tokenCode = galgasScanner3_1__26__3D_
    }else if scanningOk && self.testForInputString ("&/", advance: true) {
      tokenCode = galgasScanner3_1__26__2F_
    }else if scanningOk && self.testForInputString ("&-", advance: true) {
      tokenCode = galgasScanner3_1__26__2D_
    }else if scanningOk && self.testForInputString ("&+", advance: true) {
      tokenCode = galgasScanner3_1__26__2B_
    }else if scanningOk && self.testForInputString ("&*", advance: true) {
      tokenCode = galgasScanner3_1__26__2A_
    }else if scanningOk && self.testForInputString ("&&", advance: true) {
      tokenCode = galgasScanner3_1__26__26_
    }else if scanningOk && self.testForInputString ("!^", advance: true) {
      tokenCode = galgasScanner3_1__21__5E_
    }else if scanningOk && self.testForInputString ("!=", advance: true) {
      tokenCode = galgasScanner3_1__21__3D_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = galgasScanner3_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = galgasScanner3_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = galgasScanner3_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = galgasScanner3_1__7B_
    }else if scanningOk && self.testForInputString ("`", advance: true) {
      tokenCode = galgasScanner3_1__60_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = galgasScanner3_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = galgasScanner3_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = galgasScanner3_1__5B_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = galgasScanner3_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = galgasScanner3_1__3D_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = galgasScanner3_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = galgasScanner3_1__3A_
    }else if scanningOk && self.testForInputString ("/", advance: true) {
      tokenCode = galgasScanner3_1__2F_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = galgasScanner3_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = galgasScanner3_1__2C_
    }else if scanningOk && self.testForInputString ("+", advance: true) {
      tokenCode = galgasScanner3_1__2B_
    }else if scanningOk && self.testForInputString ("*", advance: true) {
      tokenCode = galgasScanner3_1__2A_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = galgasScanner3_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = galgasScanner3_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = galgasScanner3_1__26_
    }else if scanningOk && (self.testForInputString ("\?!", advance: true)) {
      let locationForTag_onlyInterrogationExclamationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner3_1__3F__21_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationExclamationMark)
          tokenCode = galgasScanner3_1__3F__21_
        }
      }else{
        tokenCode = galgasScanner3_1__3F__21_
      }
    }else if scanningOk && (self.testForInputChar (63)) {
      let locationForTag_onlyInterrogationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner3_1__3F_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationMark)
          tokenCode = galgasScanner3_1__3F_
        }
      }else{
        tokenCode = galgasScanner3_1__3F_
      }
    }else if scanningOk && (self.testForInputString ("!\?", advance: true)) {
      let locationForTag_onlyExclamationInterrogationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner3_1__21__3F_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationInterrogationMark)
          tokenCode = galgasScanner3_1__21__3F_
        }
      }else{
        tokenCode = galgasScanner3_1__21__3F_
      }
    }else if scanningOk && (self.testForInputChar (33)) {
      let locationForTag_onlyExclamationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner3_1__21_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationMark)
          tokenCode = galgasScanner3_1__21_
        }
      }else{
        tokenCode = galgasScanner3_1__21_
      }
    }else if scanningOk && (self.testForInputChar (60)) {
      let locationForTag_onlyInfDelimiter = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (61)) {
        tokenCode = galgasScanner3_1__3C__3D_
      }else if scanningOk && (self.testForInputChar (60)) {
        tokenCode = galgasScanner3_1__3C__3C_
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
          tokenCode = galgasScanner3_1__3C_non_5F_terminal_3E_
        }else{
          self.restoreScanningPoint (locationForTag_onlyInfDelimiter)
          tokenCode = galgasScanner3_1__3C_
        }
      }else{
        tokenCode = galgasScanner3_1__3C_
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
        tokenCode = galgasScanner3_1__22_string_22_
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = galgasScanner3_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = galgasScanner3_2_TEMPLATE
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

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------

/*

*/


//--------------------------------------------------------------------------------------------------
//
//             Key words table 'attributeKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_galgasScanner_33__attributeKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "from" : galgasScanner3_1__25_from,
    "once" : galgasScanner3_1__25_once,
    "MacOS" : galgasScanner3_1__25_MacOS,
    "usefull" : galgasScanner3_1__25_usefull,
    "app-link" : galgasScanner3_1__25_app_2D_link,
    "clonable" : galgasScanner3_1__25_clonable,
    "equatable" : galgasScanner3_1__25_equatable,
    "preserved" : galgasScanner3_1__25_preserved,
    "translate" : galgasScanner3_1__25_translate,
    "app-source" : galgasScanner3_1__25_app_2D_source,
    "comparable" : galgasScanner3_1__25_comparable,
    "libpmAtPath" : galgasScanner3_1__25_libpmAtPath,
    "macCodeSign" : galgasScanner3_1__25_macCodeSign,
    "tool-source" : galgasScanner3_1__25_tool_2D_source,
    "initArgLabel" : galgasScanner3_1__25_initArgLabel,
    "makefile-unix" : galgasScanner3_1__25_makefile_2D_unix,
    "MacOSDeployment" : galgasScanner3_1__25_MacOSDeployment,
    "makefile-macosx" : galgasScanner3_1__25_makefile_2D_macosx,
    "templateEndMark" : galgasScanner3_1__25_templateEndMark,
    "codeblocks-linux32" : galgasScanner3_1__25_codeblocks_2D_linux_33__32_,
    "codeblocks-linux64" : galgasScanner3_1__25_codeblocks_2D_linux_36__34_,
    "codeblocks-windows" : galgasScanner3_1__25_codeblocks_2D_windows,
    "nonAtomicSelection" : galgasScanner3_1__25_nonAtomicSelection,
    "quietOutputByDefault" : galgasScanner3_1__25_quietOutputByDefault,
    "applicationBundleBase" : galgasScanner3_1__25_applicationBundleBase,
    "generatedInSeparateFile" : galgasScanner3_1__25_generatedInSeparateFile,
    "makefile-win32-on-macosx" : galgasScanner3_1__25_makefile_2D_win_33__32__2D_on_2D_macosx,
    "makefile-x86linux32-on-macosx" : galgasScanner3_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx,
    "makefile-x86linux64-on-macosx" : galgasScanner3_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx
  ]
  return dictionary [inSearchedString, default: galgasScanner3_1_]
}

//--------------------------------------------------------------------------------------------------
//
//             Key words table 'galgasKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_galgasScanner_33__galgasKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "as" : galgasScanner3_1_as,
    "do" : galgasScanner3_1_do,
    "if" : galgasScanner3_1_if,
    "in" : galgasScanner3_1_in,
    "is" : galgasScanner3_1_is,
    "on" : galgasScanner3_1_on,
    "or" : galgasScanner3_1_or,
    "end" : galgasScanner3_1_end,
    "for" : galgasScanner3_1_for,
    "gui" : galgasScanner3_1_gui,
    "let" : galgasScanner3_1_let,
    "log" : galgasScanner3_1_log,
    "map" : galgasScanner3_1_map,
    "mod" : galgasScanner3_1_mod,
    "nil" : galgasScanner3_1_nil,
    "not" : galgasScanner3_1_not,
    "tag" : galgasScanner3_1_tag,
    "var" : galgasScanner3_1_var,
    "bang" : galgasScanner3_1_bang,
    "case" : galgasScanner3_1_case,
    "cast" : galgasScanner3_1_cast,
    "dict" : galgasScanner3_1_dict,
    "drop" : galgasScanner3_1_drop,
    "else" : galgasScanner3_1_else,
    "enum" : galgasScanner3_1_enum,
    "func" : galgasScanner3_1_func,
    "init" : galgasScanner3_1_init,
    "list" : galgasScanner3_1_list,
    "loop" : galgasScanner3_1_loop,
    "proc" : galgasScanner3_1_proc,
    "rule" : galgasScanner3_1_rule,
    "self" : galgasScanner3_1_self,
    "send" : galgasScanner3_1_send,
    "then" : galgasScanner3_1_then,
    "true" : galgasScanner3_1_true,
    "weak" : galgasScanner3_1_weak,
    "with" : galgasScanner3_1_with,
    "after" : galgasScanner3_1_after,
    "block" : galgasScanner3_1_block,
    "class" : galgasScanner3_1_class,
    "elsif" : galgasScanner3_1_elsif,
    "error" : galgasScanner3_1_error,
    "false" : galgasScanner3_1_false,
    "final" : galgasScanner3_1_final,
    "fixit" : galgasScanner3_1_fixit,
    "graph" : galgasScanner3_1_graph,
    "label" : galgasScanner3_1_label,
    "parse" : galgasScanner3_1_parse,
    "spoil" : galgasScanner3_1_spoil,
    "style" : galgasScanner3_1_style,
    "super" : galgasScanner3_1_super,
    "while" : galgasScanner3_1_while,
    "before" : galgasScanner3_1_before,
    "extern" : galgasScanner3_1_extern,
    "getter" : galgasScanner3_1_getter,
    "insert" : galgasScanner3_1_insert,
    "method" : galgasScanner3_1_method,
    "option" : galgasScanner3_1_option,
    "public" : galgasScanner3_1_public,
    "remove" : galgasScanner3_1_remove,
    "repeat" : galgasScanner3_1_repeat,
    "rewind" : galgasScanner3_1_rewind,
    "search" : galgasScanner3_1_search,
    "select" : galgasScanner3_1_select,
    "setter" : galgasScanner3_1_setter,
    "struct" : galgasScanner3_1_struct,
    "switch" : galgasScanner3_1_switch,
    "syntax" : galgasScanner3_1_syntax,
    "unused" : galgasScanner3_1_unused,
    "between" : galgasScanner3_1_between,
    "boolset" : galgasScanner3_1_boolset,
    "default" : galgasScanner3_1_default,
    "grammar" : galgasScanner3_1_grammar,
    "lexique" : galgasScanner3_1_lexique,
    "message" : galgasScanner3_1_message,
    "private" : galgasScanner3_1_private,
    "project" : galgasScanner3_1_project,
    "replace" : galgasScanner3_1_replace,
    "warning" : galgasScanner3_1_warning,
    "abstract" : galgasScanner3_1_abstract,
    "indexing" : galgasScanner3_1_indexing,
    "mutating" : galgasScanner3_1_mutating,
    "operator" : galgasScanner3_1_operator,
    "override" : galgasScanner3_1_override,
    "refclass" : galgasScanner3_1_refclass,
    "template" : galgasScanner3_1_template,
    "extension" : galgasScanner3_1_extension,
    "protected" : galgasScanner3_1_protected,
    "typealias" : galgasScanner3_1_typealias,
    "sortedlist" : galgasScanner3_1_sortedlist,
    "valueclass" : galgasScanner3_1_valueclass,
    "fileprivate" : galgasScanner3_1_fileprivate,
    "filewrapper" : galgasScanner3_1_filewrapper
  ]
  return dictionary [inSearchedString, default: galgasScanner3_1_]
}





//--------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


