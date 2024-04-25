//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//   LEXIQUE galgasScanner4
//--------------------------------------------------------------------------------------------------

fileprivate let gFont_galgasScanner4 = EBGenericPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + galgasScanner4_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

fileprivate let gLineHeight_galgasScanner4 = EBGenericPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + galgasScanner4_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

fileprivate let gColors_galgasScanner4 : [EBGenericPreferenceProperty <NSColor>] = [
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-keywordsStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-delimitersStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-selectorStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-terminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-nonTerminalStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-integerStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-bigintStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-floatStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-characterStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-stringStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-typeNameStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-attributeStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_galgasScanner4-commentStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_galgasScanner4_lexical_error"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_galgasScanner4_template")
]

//--------------------------------------------------------------------------------------------------

fileprivate let gBoldStyle_galgasScanner4 : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-selectorStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-terminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-nonTerminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-bigintStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-floatStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-characterStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-typeNameStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-attributeStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_galgasScanner4_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_galgasScanner4_template")
]

//--------------------------------------------------------------------------------------------------

fileprivate let gItalicStyle_galgasScanner4 : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-selectorStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-terminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-nonTerminalStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-bigintStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-floatStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-characterStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-typeNameStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-attributeStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_galgasScanner4_template")
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

let galgasScanner4_1_ : UInt16 = 0
let galgasScanner4_1_identifier : UInt16 = 1
let galgasScanner4_1_double_2E_xxx : UInt16 = 2
let galgasScanner4_1_literalInt : UInt16 = 3
let galgasScanner4_1__2E_ : UInt16 = 4
let galgasScanner4_1__2E__2E__2E_ : UInt16 = 5
let galgasScanner4_1__2E__2E__3C_ : UInt16 = 6
let galgasScanner4_1__40_type : UInt16 = 7
let galgasScanner4_1__27_char_27_ : UInt16 = 8
let galgasScanner4_1__24_terminal_24_ : UInt16 = 9
let galgasScanner4_1_comment : UInt16 = 10
let galgasScanner4_1_commentMark : UInt16 = 11
let galgasScanner4_1__3F_selector_3A_ : UInt16 = 12
let galgasScanner4_1__3F_ : UInt16 = 13
let galgasScanner4_1__3F__21_selector_3A_ : UInt16 = 14
let galgasScanner4_1__3F__21_ : UInt16 = 15
let galgasScanner4_1__21_selector_3A_ : UInt16 = 16
let galgasScanner4_1__21_ : UInt16 = 17
let galgasScanner4_1__21__3F_selector_3A_ : UInt16 = 18
let galgasScanner4_1__21__3F_ : UInt16 = 19
let galgasScanner4_1__3C_ : UInt16 = 20
let galgasScanner4_1__3C__3D_ : UInt16 = 21
let galgasScanner4_1__3C__3C_ : UInt16 = 22
let galgasScanner4_1__3C_non_5F_terminal_3E_ : UInt16 = 23
let galgasScanner4_1__22_string_22_ : UInt16 = 24
let galgasScanner4_1_abstract : UInt16 = 25
let galgasScanner4_1_after : UInt16 = 26
let galgasScanner4_1_as : UInt16 = 27
let galgasScanner4_1_before : UInt16 = 28
let galgasScanner4_1_between : UInt16 = 29
let galgasScanner4_1_block : UInt16 = 30
let galgasScanner4_1_boolset : UInt16 = 31
let galgasScanner4_1_case : UInt16 = 32
let galgasScanner4_1_class : UInt16 = 33
let galgasScanner4_1_default : UInt16 = 34
let galgasScanner4_1_dict : UInt16 = 35
let galgasScanner4_1_do : UInt16 = 36
let galgasScanner4_1_drop : UInt16 = 37
let galgasScanner4_1_else : UInt16 = 38
let galgasScanner4_1_elsif : UInt16 = 39
let galgasScanner4_1_end : UInt16 = 40
let galgasScanner4_1_enum : UInt16 = 41
let galgasScanner4_1_error : UInt16 = 42
let galgasScanner4_1_extension : UInt16 = 43
let galgasScanner4_1_extern : UInt16 = 44
let galgasScanner4_1_false : UInt16 = 45
let galgasScanner4_1_fileprivate : UInt16 = 46
let galgasScanner4_1_filewrapper : UInt16 = 47
let galgasScanner4_1_final : UInt16 = 48
let galgasScanner4_1_for : UInt16 = 49
let galgasScanner4_1_fixit : UInt16 = 50
let galgasScanner4_1_func : UInt16 = 51
let galgasScanner4_1_grammar : UInt16 = 52
let galgasScanner4_1_graph : UInt16 = 53
let galgasScanner4_1_gui : UInt16 = 54
let galgasScanner4_1_if : UInt16 = 55
let galgasScanner4_1_in : UInt16 = 56
let galgasScanner4_1_indexing : UInt16 = 57
let galgasScanner4_1_init : UInt16 = 58
let galgasScanner4_1_is : UInt16 = 59
let galgasScanner4_1_label : UInt16 = 60
let galgasScanner4_1_let : UInt16 = 61
let galgasScanner4_1_lexique : UInt16 = 62
let galgasScanner4_1_list : UInt16 = 63
let galgasScanner4_1_log : UInt16 = 64
let galgasScanner4_1_loop : UInt16 = 65
let galgasScanner4_1_map : UInt16 = 66
let galgasScanner4_1_mod : UInt16 = 67
let galgasScanner4_1_mutating : UInt16 = 68
let galgasScanner4_1_nil : UInt16 = 69
let galgasScanner4_1_not : UInt16 = 70
let galgasScanner4_1_on : UInt16 = 71
let galgasScanner4_1_operator : UInt16 = 72
let galgasScanner4_1_option : UInt16 = 73
let galgasScanner4_1_or : UInt16 = 74
let galgasScanner4_1_override : UInt16 = 75
let galgasScanner4_1_package : UInt16 = 76
let galgasScanner4_1_parse : UInt16 = 77
let galgasScanner4_1_public : UInt16 = 78
let galgasScanner4_1_protected : UInt16 = 79
let galgasScanner4_1_private : UInt16 = 80
let galgasScanner4_1_proc : UInt16 = 81
let galgasScanner4_1_project : UInt16 = 82
let galgasScanner4_1_repeat : UInt16 = 83
let galgasScanner4_1_rewind : UInt16 = 84
let galgasScanner4_1_rule : UInt16 = 85
let galgasScanner4_1_select : UInt16 = 86
let galgasScanner4_1_self : UInt16 = 87
let galgasScanner4_1_send : UInt16 = 88
let galgasScanner4_1_sortedlist : UInt16 = 89
let galgasScanner4_1_spoil : UInt16 = 90
let galgasScanner4_1_super : UInt16 = 91
let galgasScanner4_1_struct : UInt16 = 92
let galgasScanner4_1_style : UInt16 = 93
let galgasScanner4_1_switch : UInt16 = 94
let galgasScanner4_1_syntax : UInt16 = 95
let galgasScanner4_1_tag : UInt16 = 96
let galgasScanner4_1_template : UInt16 = 97
let galgasScanner4_1_then : UInt16 = 98
let galgasScanner4_1_true : UInt16 = 99
let galgasScanner4_1_typealias : UInt16 = 100
let galgasScanner4_1_unused : UInt16 = 101
let galgasScanner4_1_var : UInt16 = 102
let galgasScanner4_1_warning : UInt16 = 103
let galgasScanner4_1_while : UInt16 = 104
let galgasScanner4_1_with : UInt16 = 105
let galgasScanner4_1__25_app_2D_link : UInt16 = 106
let galgasScanner4_1__25_app_2D_source : UInt16 = 107
let galgasScanner4_1__25_applicationBundleBase : UInt16 = 108
let galgasScanner4_1__25_clonable : UInt16 = 109
let galgasScanner4_1__25_codeblocks_2D_linux_33__32_ : UInt16 = 110
let galgasScanner4_1__25_codeblocks_2D_linux_36__34_ : UInt16 = 111
let galgasScanner4_1__25_codeblocks_2D_windows : UInt16 = 112
let galgasScanner4_1__25_comparable : UInt16 = 113
let galgasScanner4_1__25_equatable : UInt16 = 114
let galgasScanner4_1__25_errorMessage : UInt16 = 115
let galgasScanner4_1__25_from : UInt16 = 116
let galgasScanner4_1__25_generatedInSeparateFile : UInt16 = 117
let galgasScanner4_1__25_initArgLabel : UInt16 = 118
let galgasScanner4_1__25_insertAfter : UInt16 = 119
let galgasScanner4_1__25_insertBefore : UInt16 = 120
let galgasScanner4_1__25_insertOrReplaceSetter : UInt16 = 121
let galgasScanner4_1__25_insertSetter : UInt16 = 122
let galgasScanner4_1__25_libpmAtPath : UInt16 = 123
let galgasScanner4_1__25_macCodeSign : UInt16 = 124
let galgasScanner4_1__25_makefile_2D_macosx : UInt16 = 125
let galgasScanner4_1__25_makefile_2D_unix : UInt16 = 126
let galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx : UInt16 = 127
let galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx : UInt16 = 128
let galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx : UInt16 = 129
let galgasScanner4_1__25_MacOS : UInt16 = 130
let galgasScanner4_1__25_MacOSDeployment : UInt16 = 131
let galgasScanner4_1__25_nonAtomicSelection : UInt16 = 132
let galgasScanner4_1__25_once : UInt16 = 133
let galgasScanner4_1__25_preserved : UInt16 = 134
let galgasScanner4_1__25_quietOutputByDefault : UInt16 = 135
let galgasScanner4_1__25_replaceBy : UInt16 = 136
let galgasScanner4_1__25_remove : UInt16 = 137
let galgasScanner4_1__25_removeSetter : UInt16 = 138
let galgasScanner4_1__25_searchMethod : UInt16 = 139
let galgasScanner4_1__25_searchString : UInt16 = 140
let galgasScanner4_1__25_tool_2D_source : UInt16 = 141
let galgasScanner4_1__25_templateEndMark : UInt16 = 142
let galgasScanner4_1__25_templateReplacement : UInt16 = 143
let galgasScanner4_1__25_testGetters : UInt16 = 144
let galgasScanner4_1__25_translate : UInt16 = 145
let galgasScanner4_1__25_usefull : UInt16 = 146
let galgasScanner4_1__2A_ : UInt16 = 147
let galgasScanner4_1__2C_ : UInt16 = 148
let galgasScanner4_1__2B_ : UInt16 = 149
let galgasScanner4_1__26__2B_ : UInt16 = 150
let galgasScanner4_1__26__2D_ : UInt16 = 151
let galgasScanner4_1__26__2A_ : UInt16 = 152
let galgasScanner4_1__26__2F_ : UInt16 = 153
let galgasScanner4_1__3E_ : UInt16 = 154
let galgasScanner4_1__3B_ : UInt16 = 155
let galgasScanner4_1__3A_ : UInt16 = 156
let galgasScanner4_1__3A__3E_ : UInt16 = 157
let galgasScanner4_1__2D_ : UInt16 = 158
let galgasScanner4_1__28_ : UInt16 = 159
let galgasScanner4_1__29_ : UInt16 = 160
let galgasScanner4_1__2D__3E_ : UInt16 = 161
let galgasScanner4_1__3D__3D_ : UInt16 = 162
let galgasScanner4_1__3D_ : UInt16 = 163
let galgasScanner4_1__26__26_ : UInt16 = 164
let galgasScanner4_1__5B_ : UInt16 = 165
let galgasScanner4_1__5D_ : UInt16 = 166
let galgasScanner4_1__2B__3D_ : UInt16 = 167
let galgasScanner4_1__2D__3D_ : UInt16 = 168
let galgasScanner4_1__2A__3D_ : UInt16 = 169
let galgasScanner4_1__2F__3D_ : UInt16 = 170
let galgasScanner4_1__2F_ : UInt16 = 171
let galgasScanner4_1__21__3D_ : UInt16 = 172
let galgasScanner4_1__3E__3D_ : UInt16 = 173
let galgasScanner4_1__26_ : UInt16 = 174
let galgasScanner4_1__7B_ : UInt16 = 175
let galgasScanner4_1__7D_ : UInt16 = 176
let galgasScanner4_1__60_ : UInt16 = 177
let galgasScanner4_1__7C__7C_ : UInt16 = 178
let galgasScanner4_1__7C_ : UInt16 = 179
let galgasScanner4_1__5E_ : UInt16 = 180
let galgasScanner4_1__3E__3E_ : UInt16 = 181
let galgasScanner4_1__7E_ : UInt16 = 182
let galgasScanner4_1__2D__2D_ : UInt16 = 183
let galgasScanner4_1__2B__2B_ : UInt16 = 184
let galgasScanner4_1__26__2D__2D_ : UInt16 = 185
let galgasScanner4_1__26__2B__2B_ : UInt16 = 186
let galgasScanner4_1__3D__3D__3D_ : UInt16 = 187
let galgasScanner4_1__21__3D__3D_ : UInt16 = 188
let galgasScanner4_1__3F__5E_ : UInt16 = 189
let galgasScanner4_1__21__5E_ : UInt16 = 190
let galgasScanner4_2_ERROR : UInt16 = 191
let galgasScanner4_2_TEMPLATE : UInt16 = 192

//--------------------------------------------------------------------------------------------------

func galgasScanner4_lexiqueIdentifier () -> String {
  return "galgasScanner4"
}

//--------------------------------------------------------------------------------------------------

func galgasScanner4_styleNameFor (styleIndex inIndex : UInt8) -> String {
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

func galgasScanner4_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "galgasScanner4", // 0
    "galgasScanner4-keywordsStyle", // 1
    "galgasScanner4-delimitersStyle", // 2
    "galgasScanner4-selectorStyle", // 3
    "galgasScanner4-terminalStyle", // 4
    "galgasScanner4-nonTerminalStyle", // 5
    "galgasScanner4-integerStyle", // 6
    "galgasScanner4-bigintStyle", // 7
    "galgasScanner4-floatStyle", // 8
    "galgasScanner4-characterStyle", // 9
    "galgasScanner4-stringStyle", // 10
    "galgasScanner4-typeNameStyle", // 11
    "galgasScanner4-attributeStyle", // 12
    "galgasScanner4-commentStyle", // 13
    "galgasScanner4.ERROR", // 14
    "galgasScanner4.TEMPLATE" // 15
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class SWIFT_Lexique_galgasScanner4 : SWIFT_Lexique {

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
    return galgasScanner4_lexiqueIdentifier ()
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 190
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBGenericPreferenceProperty <NSFont> { return gFont_galgasScanner4 }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_galgasScanner4 }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {
    return gColors_galgasScanner4 [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gBoldStyle_galgasScanner4 [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gItalicStyle_galgasScanner4 [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : galgasScanner4_1_identifier
      8, // 2 : galgasScanner4_1_double_2E_xxx
      7, // 3 : galgasScanner4_1_literalInt
      2, // 4 : galgasScanner4_1__2E_
      2, // 5 : galgasScanner4_1__2E__2E__2E_
      2, // 6 : galgasScanner4_1__2E__2E__3C_
      11, // 7 : galgasScanner4_1__40_type
      9, // 8 : galgasScanner4_1__27_char_27_
      4, // 9 : galgasScanner4_1__24_terminal_24_
      13, // 10 : galgasScanner4_1_comment
      13, // 11 : galgasScanner4_1_commentMark
      3, // 12 : galgasScanner4_1__3F_selector_3A_
      2, // 13 : galgasScanner4_1__3F_
      3, // 14 : galgasScanner4_1__3F__21_selector_3A_
      2, // 15 : galgasScanner4_1__3F__21_
      3, // 16 : galgasScanner4_1__21_selector_3A_
      2, // 17 : galgasScanner4_1__21_
      3, // 18 : galgasScanner4_1__21__3F_selector_3A_
      2, // 19 : galgasScanner4_1__21__3F_
      2, // 20 : galgasScanner4_1__3C_
      2, // 21 : galgasScanner4_1__3C__3D_
      2, // 22 : galgasScanner4_1__3C__3C_
      5, // 23 : galgasScanner4_1__3C_non_5F_terminal_3E_
      10, // 24 : galgasScanner4_1__22_string_22_
      1, // 25 : galgasScanner4_1_abstract
      1, // 26 : galgasScanner4_1_after
      1, // 27 : galgasScanner4_1_as
      1, // 28 : galgasScanner4_1_before
      1, // 29 : galgasScanner4_1_between
      1, // 30 : galgasScanner4_1_block
      1, // 31 : galgasScanner4_1_boolset
      1, // 32 : galgasScanner4_1_case
      1, // 33 : galgasScanner4_1_class
      1, // 34 : galgasScanner4_1_default
      1, // 35 : galgasScanner4_1_dict
      1, // 36 : galgasScanner4_1_do
      1, // 37 : galgasScanner4_1_drop
      1, // 38 : galgasScanner4_1_else
      1, // 39 : galgasScanner4_1_elsif
      1, // 40 : galgasScanner4_1_end
      1, // 41 : galgasScanner4_1_enum
      1, // 42 : galgasScanner4_1_error
      1, // 43 : galgasScanner4_1_extension
      1, // 44 : galgasScanner4_1_extern
      1, // 45 : galgasScanner4_1_false
      1, // 46 : galgasScanner4_1_fileprivate
      1, // 47 : galgasScanner4_1_filewrapper
      1, // 48 : galgasScanner4_1_final
      1, // 49 : galgasScanner4_1_for
      1, // 50 : galgasScanner4_1_fixit
      1, // 51 : galgasScanner4_1_func
      1, // 52 : galgasScanner4_1_grammar
      1, // 53 : galgasScanner4_1_graph
      1, // 54 : galgasScanner4_1_gui
      1, // 55 : galgasScanner4_1_if
      1, // 56 : galgasScanner4_1_in
      1, // 57 : galgasScanner4_1_indexing
      1, // 58 : galgasScanner4_1_init
      1, // 59 : galgasScanner4_1_is
      1, // 60 : galgasScanner4_1_label
      1, // 61 : galgasScanner4_1_let
      1, // 62 : galgasScanner4_1_lexique
      1, // 63 : galgasScanner4_1_list
      1, // 64 : galgasScanner4_1_log
      1, // 65 : galgasScanner4_1_loop
      1, // 66 : galgasScanner4_1_map
      1, // 67 : galgasScanner4_1_mod
      1, // 68 : galgasScanner4_1_mutating
      1, // 69 : galgasScanner4_1_nil
      1, // 70 : galgasScanner4_1_not
      1, // 71 : galgasScanner4_1_on
      1, // 72 : galgasScanner4_1_operator
      1, // 73 : galgasScanner4_1_option
      1, // 74 : galgasScanner4_1_or
      1, // 75 : galgasScanner4_1_override
      1, // 76 : galgasScanner4_1_package
      1, // 77 : galgasScanner4_1_parse
      1, // 78 : galgasScanner4_1_public
      1, // 79 : galgasScanner4_1_protected
      1, // 80 : galgasScanner4_1_private
      1, // 81 : galgasScanner4_1_proc
      1, // 82 : galgasScanner4_1_project
      1, // 83 : galgasScanner4_1_repeat
      1, // 84 : galgasScanner4_1_rewind
      1, // 85 : galgasScanner4_1_rule
      1, // 86 : galgasScanner4_1_select
      1, // 87 : galgasScanner4_1_self
      1, // 88 : galgasScanner4_1_send
      1, // 89 : galgasScanner4_1_sortedlist
      1, // 90 : galgasScanner4_1_spoil
      1, // 91 : galgasScanner4_1_super
      1, // 92 : galgasScanner4_1_struct
      1, // 93 : galgasScanner4_1_style
      1, // 94 : galgasScanner4_1_switch
      1, // 95 : galgasScanner4_1_syntax
      1, // 96 : galgasScanner4_1_tag
      1, // 97 : galgasScanner4_1_template
      1, // 98 : galgasScanner4_1_then
      1, // 99 : galgasScanner4_1_true
      1, // 100 : galgasScanner4_1_typealias
      1, // 101 : galgasScanner4_1_unused
      1, // 102 : galgasScanner4_1_var
      1, // 103 : galgasScanner4_1_warning
      1, // 104 : galgasScanner4_1_while
      1, // 105 : galgasScanner4_1_with
      12, // 106 : galgasScanner4_1__25_app_2D_link
      12, // 107 : galgasScanner4_1__25_app_2D_source
      12, // 108 : galgasScanner4_1__25_applicationBundleBase
      12, // 109 : galgasScanner4_1__25_clonable
      12, // 110 : galgasScanner4_1__25_codeblocks_2D_linux_33__32_
      12, // 111 : galgasScanner4_1__25_codeblocks_2D_linux_36__34_
      12, // 112 : galgasScanner4_1__25_codeblocks_2D_windows
      12, // 113 : galgasScanner4_1__25_comparable
      12, // 114 : galgasScanner4_1__25_equatable
      12, // 115 : galgasScanner4_1__25_errorMessage
      12, // 116 : galgasScanner4_1__25_from
      12, // 117 : galgasScanner4_1__25_generatedInSeparateFile
      12, // 118 : galgasScanner4_1__25_initArgLabel
      12, // 119 : galgasScanner4_1__25_insertAfter
      12, // 120 : galgasScanner4_1__25_insertBefore
      12, // 121 : galgasScanner4_1__25_insertOrReplaceSetter
      12, // 122 : galgasScanner4_1__25_insertSetter
      12, // 123 : galgasScanner4_1__25_libpmAtPath
      12, // 124 : galgasScanner4_1__25_macCodeSign
      12, // 125 : galgasScanner4_1__25_makefile_2D_macosx
      12, // 126 : galgasScanner4_1__25_makefile_2D_unix
      12, // 127 : galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx
      12, // 128 : galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx
      12, // 129 : galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx
      12, // 130 : galgasScanner4_1__25_MacOS
      12, // 131 : galgasScanner4_1__25_MacOSDeployment
      12, // 132 : galgasScanner4_1__25_nonAtomicSelection
      12, // 133 : galgasScanner4_1__25_once
      12, // 134 : galgasScanner4_1__25_preserved
      12, // 135 : galgasScanner4_1__25_quietOutputByDefault
      12, // 136 : galgasScanner4_1__25_replaceBy
      12, // 137 : galgasScanner4_1__25_remove
      12, // 138 : galgasScanner4_1__25_removeSetter
      12, // 139 : galgasScanner4_1__25_searchMethod
      12, // 140 : galgasScanner4_1__25_searchString
      12, // 141 : galgasScanner4_1__25_tool_2D_source
      12, // 142 : galgasScanner4_1__25_templateEndMark
      12, // 143 : galgasScanner4_1__25_templateReplacement
      12, // 144 : galgasScanner4_1__25_testGetters
      12, // 145 : galgasScanner4_1__25_translate
      12, // 146 : galgasScanner4_1__25_usefull
      2, // 147 : galgasScanner4_1__2A_
      2, // 148 : galgasScanner4_1__2C_
      2, // 149 : galgasScanner4_1__2B_
      2, // 150 : galgasScanner4_1__26__2B_
      2, // 151 : galgasScanner4_1__26__2D_
      2, // 152 : galgasScanner4_1__26__2A_
      2, // 153 : galgasScanner4_1__26__2F_
      2, // 154 : galgasScanner4_1__3E_
      2, // 155 : galgasScanner4_1__3B_
      2, // 156 : galgasScanner4_1__3A_
      2, // 157 : galgasScanner4_1__3A__3E_
      2, // 158 : galgasScanner4_1__2D_
      2, // 159 : galgasScanner4_1__28_
      2, // 160 : galgasScanner4_1__29_
      2, // 161 : galgasScanner4_1__2D__3E_
      2, // 162 : galgasScanner4_1__3D__3D_
      2, // 163 : galgasScanner4_1__3D_
      2, // 164 : galgasScanner4_1__26__26_
      2, // 165 : galgasScanner4_1__5B_
      2, // 166 : galgasScanner4_1__5D_
      2, // 167 : galgasScanner4_1__2B__3D_
      2, // 168 : galgasScanner4_1__2D__3D_
      2, // 169 : galgasScanner4_1__2A__3D_
      2, // 170 : galgasScanner4_1__2F__3D_
      2, // 171 : galgasScanner4_1__2F_
      2, // 172 : galgasScanner4_1__21__3D_
      2, // 173 : galgasScanner4_1__3E__3D_
      2, // 174 : galgasScanner4_1__26_
      2, // 175 : galgasScanner4_1__7B_
      2, // 176 : galgasScanner4_1__7D_
      2, // 177 : galgasScanner4_1__60_
      2, // 178 : galgasScanner4_1__7C__7C_
      2, // 179 : galgasScanner4_1__7C_
      2, // 180 : galgasScanner4_1__5E_
      2, // 181 : galgasScanner4_1__3E__3E_
      2, // 182 : galgasScanner4_1__7E_
      2, // 183 : galgasScanner4_1__2D__2D_
      2, // 184 : galgasScanner4_1__2B__2B_
      2, // 185 : galgasScanner4_1__26__2D__2D_
      2, // 186 : galgasScanner4_1__26__2B__2B_
      2, // 187 : galgasScanner4_1__3D__3D__3D_
      2, // 188 : galgasScanner4_1__21__3D__3D_
      2, // 189 : galgasScanner4_1__3F__5E_
      2, // 190 : galgasScanner4_1__21__5E_
      14, // 191 : galgasScanner4_2_ERROR
      15  // 192 : galgasScanner4_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : galgasScanner4_1_identifier
      true, // 2 : galgasScanner4_1_double_2E_xxx
      true, // 3 : galgasScanner4_1_literalInt
      true, // 4 : galgasScanner4_1__2E_
      true, // 5 : galgasScanner4_1__2E__2E__2E_
      true, // 6 : galgasScanner4_1__2E__2E__3C_
      true, // 7 : galgasScanner4_1__40_type
      true, // 8 : galgasScanner4_1__27_char_27_
      true, // 9 : galgasScanner4_1__24_terminal_24_
      false, // 10 : galgasScanner4_1_comment
      false, // 11 : galgasScanner4_1_commentMark
      true, // 12 : galgasScanner4_1__3F_selector_3A_
      true, // 13 : galgasScanner4_1__3F_
      true, // 14 : galgasScanner4_1__3F__21_selector_3A_
      true, // 15 : galgasScanner4_1__3F__21_
      true, // 16 : galgasScanner4_1__21_selector_3A_
      true, // 17 : galgasScanner4_1__21_
      true, // 18 : galgasScanner4_1__21__3F_selector_3A_
      true, // 19 : galgasScanner4_1__21__3F_
      true, // 20 : galgasScanner4_1__3C_
      true, // 21 : galgasScanner4_1__3C__3D_
      true, // 22 : galgasScanner4_1__3C__3C_
      true, // 23 : galgasScanner4_1__3C_non_5F_terminal_3E_
      false, // 24 : galgasScanner4_1__22_string_22_
      true, // 25 : galgasScanner4_1_abstract
      true, // 26 : galgasScanner4_1_after
      true, // 27 : galgasScanner4_1_as
      true, // 28 : galgasScanner4_1_before
      true, // 29 : galgasScanner4_1_between
      true, // 30 : galgasScanner4_1_block
      true, // 31 : galgasScanner4_1_boolset
      true, // 32 : galgasScanner4_1_case
      true, // 33 : galgasScanner4_1_class
      true, // 34 : galgasScanner4_1_default
      true, // 35 : galgasScanner4_1_dict
      true, // 36 : galgasScanner4_1_do
      true, // 37 : galgasScanner4_1_drop
      true, // 38 : galgasScanner4_1_else
      true, // 39 : galgasScanner4_1_elsif
      true, // 40 : galgasScanner4_1_end
      true, // 41 : galgasScanner4_1_enum
      true, // 42 : galgasScanner4_1_error
      true, // 43 : galgasScanner4_1_extension
      true, // 44 : galgasScanner4_1_extern
      true, // 45 : galgasScanner4_1_false
      true, // 46 : galgasScanner4_1_fileprivate
      true, // 47 : galgasScanner4_1_filewrapper
      true, // 48 : galgasScanner4_1_final
      true, // 49 : galgasScanner4_1_for
      true, // 50 : galgasScanner4_1_fixit
      true, // 51 : galgasScanner4_1_func
      true, // 52 : galgasScanner4_1_grammar
      true, // 53 : galgasScanner4_1_graph
      true, // 54 : galgasScanner4_1_gui
      true, // 55 : galgasScanner4_1_if
      true, // 56 : galgasScanner4_1_in
      true, // 57 : galgasScanner4_1_indexing
      true, // 58 : galgasScanner4_1_init
      true, // 59 : galgasScanner4_1_is
      true, // 60 : galgasScanner4_1_label
      true, // 61 : galgasScanner4_1_let
      true, // 62 : galgasScanner4_1_lexique
      true, // 63 : galgasScanner4_1_list
      true, // 64 : galgasScanner4_1_log
      true, // 65 : galgasScanner4_1_loop
      true, // 66 : galgasScanner4_1_map
      true, // 67 : galgasScanner4_1_mod
      true, // 68 : galgasScanner4_1_mutating
      true, // 69 : galgasScanner4_1_nil
      true, // 70 : galgasScanner4_1_not
      true, // 71 : galgasScanner4_1_on
      true, // 72 : galgasScanner4_1_operator
      true, // 73 : galgasScanner4_1_option
      true, // 74 : galgasScanner4_1_or
      true, // 75 : galgasScanner4_1_override
      true, // 76 : galgasScanner4_1_package
      true, // 77 : galgasScanner4_1_parse
      true, // 78 : galgasScanner4_1_public
      true, // 79 : galgasScanner4_1_protected
      true, // 80 : galgasScanner4_1_private
      true, // 81 : galgasScanner4_1_proc
      true, // 82 : galgasScanner4_1_project
      true, // 83 : galgasScanner4_1_repeat
      true, // 84 : galgasScanner4_1_rewind
      true, // 85 : galgasScanner4_1_rule
      true, // 86 : galgasScanner4_1_select
      true, // 87 : galgasScanner4_1_self
      true, // 88 : galgasScanner4_1_send
      true, // 89 : galgasScanner4_1_sortedlist
      true, // 90 : galgasScanner4_1_spoil
      true, // 91 : galgasScanner4_1_super
      true, // 92 : galgasScanner4_1_struct
      true, // 93 : galgasScanner4_1_style
      true, // 94 : galgasScanner4_1_switch
      true, // 95 : galgasScanner4_1_syntax
      true, // 96 : galgasScanner4_1_tag
      true, // 97 : galgasScanner4_1_template
      true, // 98 : galgasScanner4_1_then
      true, // 99 : galgasScanner4_1_true
      true, // 100 : galgasScanner4_1_typealias
      true, // 101 : galgasScanner4_1_unused
      true, // 102 : galgasScanner4_1_var
      true, // 103 : galgasScanner4_1_warning
      true, // 104 : galgasScanner4_1_while
      true, // 105 : galgasScanner4_1_with
      true, // 106 : galgasScanner4_1__25_app_2D_link
      true, // 107 : galgasScanner4_1__25_app_2D_source
      true, // 108 : galgasScanner4_1__25_applicationBundleBase
      true, // 109 : galgasScanner4_1__25_clonable
      true, // 110 : galgasScanner4_1__25_codeblocks_2D_linux_33__32_
      true, // 111 : galgasScanner4_1__25_codeblocks_2D_linux_36__34_
      true, // 112 : galgasScanner4_1__25_codeblocks_2D_windows
      true, // 113 : galgasScanner4_1__25_comparable
      true, // 114 : galgasScanner4_1__25_equatable
      true, // 115 : galgasScanner4_1__25_errorMessage
      true, // 116 : galgasScanner4_1__25_from
      true, // 117 : galgasScanner4_1__25_generatedInSeparateFile
      true, // 118 : galgasScanner4_1__25_initArgLabel
      true, // 119 : galgasScanner4_1__25_insertAfter
      true, // 120 : galgasScanner4_1__25_insertBefore
      true, // 121 : galgasScanner4_1__25_insertOrReplaceSetter
      true, // 122 : galgasScanner4_1__25_insertSetter
      true, // 123 : galgasScanner4_1__25_libpmAtPath
      true, // 124 : galgasScanner4_1__25_macCodeSign
      true, // 125 : galgasScanner4_1__25_makefile_2D_macosx
      true, // 126 : galgasScanner4_1__25_makefile_2D_unix
      true, // 127 : galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx
      true, // 128 : galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx
      true, // 129 : galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx
      true, // 130 : galgasScanner4_1__25_MacOS
      true, // 131 : galgasScanner4_1__25_MacOSDeployment
      true, // 132 : galgasScanner4_1__25_nonAtomicSelection
      true, // 133 : galgasScanner4_1__25_once
      true, // 134 : galgasScanner4_1__25_preserved
      true, // 135 : galgasScanner4_1__25_quietOutputByDefault
      true, // 136 : galgasScanner4_1__25_replaceBy
      true, // 137 : galgasScanner4_1__25_remove
      true, // 138 : galgasScanner4_1__25_removeSetter
      true, // 139 : galgasScanner4_1__25_searchMethod
      true, // 140 : galgasScanner4_1__25_searchString
      true, // 141 : galgasScanner4_1__25_tool_2D_source
      true, // 142 : galgasScanner4_1__25_templateEndMark
      true, // 143 : galgasScanner4_1__25_templateReplacement
      true, // 144 : galgasScanner4_1__25_testGetters
      true, // 145 : galgasScanner4_1__25_translate
      true, // 146 : galgasScanner4_1__25_usefull
      true, // 147 : galgasScanner4_1__2A_
      true, // 148 : galgasScanner4_1__2C_
      true, // 149 : galgasScanner4_1__2B_
      true, // 150 : galgasScanner4_1__26__2B_
      true, // 151 : galgasScanner4_1__26__2D_
      true, // 152 : galgasScanner4_1__26__2A_
      true, // 153 : galgasScanner4_1__26__2F_
      true, // 154 : galgasScanner4_1__3E_
      true, // 155 : galgasScanner4_1__3B_
      true, // 156 : galgasScanner4_1__3A_
      true, // 157 : galgasScanner4_1__3A__3E_
      true, // 158 : galgasScanner4_1__2D_
      true, // 159 : galgasScanner4_1__28_
      true, // 160 : galgasScanner4_1__29_
      true, // 161 : galgasScanner4_1__2D__3E_
      true, // 162 : galgasScanner4_1__3D__3D_
      true, // 163 : galgasScanner4_1__3D_
      true, // 164 : galgasScanner4_1__26__26_
      true, // 165 : galgasScanner4_1__5B_
      true, // 166 : galgasScanner4_1__5D_
      true, // 167 : galgasScanner4_1__2B__3D_
      true, // 168 : galgasScanner4_1__2D__3D_
      true, // 169 : galgasScanner4_1__2A__3D_
      true, // 170 : galgasScanner4_1__2F__3D_
      true, // 171 : galgasScanner4_1__2F_
      true, // 172 : galgasScanner4_1__21__3D_
      true, // 173 : galgasScanner4_1__3E__3D_
      true, // 174 : galgasScanner4_1__26_
      true, // 175 : galgasScanner4_1__7B_
      true, // 176 : galgasScanner4_1__7D_
      true, // 177 : galgasScanner4_1__60_
      true, // 178 : galgasScanner4_1__7C__7C_
      true, // 179 : galgasScanner4_1__7C_
      true, // 180 : galgasScanner4_1__5E_
      true, // 181 : galgasScanner4_1__3E__3E_
      true, // 182 : galgasScanner4_1__7E_
      true, // 183 : galgasScanner4_1__2D__2D_
      true, // 184 : galgasScanner4_1__2B__2B_
      true, // 185 : galgasScanner4_1__26__2D__2D_
      true, // 186 : galgasScanner4_1__26__2B__2B_
      true, // 187 : galgasScanner4_1__3D__3D__3D_
      true, // 188 : galgasScanner4_1__21__3D__3D_
      true, // 189 : galgasScanner4_1__3F__5E_
      true, // 190 : galgasScanner4_1__21__5E_
      false, // 191 : galgasScanner4_2_ERROR
      false  // 192 : galgasScanner4_2_TEMPLATE
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
    return galgasScanner4_styleNameFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return galgasScanner4_styleIdentifierFor (styleIndex: inIndex)
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
        tokenCode = search_into_galgasScanner_34__galgasKeyWordList (mLexicalAttribute_identifierString) ;
      }
      if tokenCode == 0 {
        tokenCode = galgasScanner4_1_identifier ;
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
        tokenCode = galgasScanner4_1_literalInt
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
        tokenCode = galgasScanner4_1_double_2E_xxx
      }else{
        scanner_cocoa_routine_convertDecimalStringIntoBigInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_bigintValue)
        tokenCode = galgasScanner4_1_literalInt
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
        tokenCode = galgasScanner4_1_double_2E_xxx
      }else{
        if scanningOk && (self.testForInputString ("..", advance: true)) {
          tokenCode = galgasScanner4_1__2E__2E__2E_
        }else if scanningOk && (self.testForInputString (".<", advance: true)) {
          tokenCode = galgasScanner4_1__2E__2E__3C_
        }else{
          tokenCode = galgasScanner4_1__2E_
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
      tokenCode = galgasScanner4_1__40_type
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
        tokenCode = search_into_galgasScanner_34__attributeKeyWordList (mLexicalAttribute_tokenString) ;
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
        tokenCode = galgasScanner4_1__27_char_27_
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
      tokenCode = galgasScanner4_1__24_terminal_24_
    }else if scanningOk && (self.testForInputChar (35)) {
      if scanningOk && (self.testForInputChar (33)) {
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner4_1_commentMark
      }else{
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:1114111)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner4_1_comment
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
        tokenCode = galgasScanner4_1_commentMark
      }else{
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:1114111)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner4_1_comment
      }
    }else if scanningOk && self.testForInputString ("===", advance: true) {
      tokenCode = galgasScanner4_1__3D__3D__3D_
    }else if scanningOk && self.testForInputString ("&--", advance: true) {
      tokenCode = galgasScanner4_1__26__2D__2D_
    }else if scanningOk && self.testForInputString ("&++", advance: true) {
      tokenCode = galgasScanner4_1__26__2B__2B_
    }else if scanningOk && self.testForInputString ("!==", advance: true) {
      tokenCode = galgasScanner4_1__21__3D__3D_
    }else if scanningOk && self.testForInputString ("||", advance: true) {
      tokenCode = galgasScanner4_1__7C__7C_
    }else if scanningOk && self.testForInputString ("\?^", advance: true) {
      tokenCode = galgasScanner4_1__3F__5E_
    }else if scanningOk && self.testForInputString (">>", advance: true) {
      tokenCode = galgasScanner4_1__3E__3E_
    }else if scanningOk && self.testForInputString (">=", advance: true) {
      tokenCode = galgasScanner4_1__3E__3D_
    }else if scanningOk && self.testForInputString ("==", advance: true) {
      tokenCode = galgasScanner4_1__3D__3D_
    }else if scanningOk && self.testForInputString (":>", advance: true) {
      tokenCode = galgasScanner4_1__3A__3E_
    }else if scanningOk && self.testForInputString ("/=", advance: true) {
      tokenCode = galgasScanner4_1__2F__3D_
    }else if scanningOk && self.testForInputString ("->", advance: true) {
      tokenCode = galgasScanner4_1__2D__3E_
    }else if scanningOk && self.testForInputString ("-=", advance: true) {
      tokenCode = galgasScanner4_1__2D__3D_
    }else if scanningOk && self.testForInputString ("--", advance: true) {
      tokenCode = galgasScanner4_1__2D__2D_
    }else if scanningOk && self.testForInputString ("+=", advance: true) {
      tokenCode = galgasScanner4_1__2B__3D_
    }else if scanningOk && self.testForInputString ("++", advance: true) {
      tokenCode = galgasScanner4_1__2B__2B_
    }else if scanningOk && self.testForInputString ("*=", advance: true) {
      tokenCode = galgasScanner4_1__2A__3D_
    }else if scanningOk && self.testForInputString ("&/", advance: true) {
      tokenCode = galgasScanner4_1__26__2F_
    }else if scanningOk && self.testForInputString ("&-", advance: true) {
      tokenCode = galgasScanner4_1__26__2D_
    }else if scanningOk && self.testForInputString ("&+", advance: true) {
      tokenCode = galgasScanner4_1__26__2B_
    }else if scanningOk && self.testForInputString ("&*", advance: true) {
      tokenCode = galgasScanner4_1__26__2A_
    }else if scanningOk && self.testForInputString ("&&", advance: true) {
      tokenCode = galgasScanner4_1__26__26_
    }else if scanningOk && self.testForInputString ("!^", advance: true) {
      tokenCode = galgasScanner4_1__21__5E_
    }else if scanningOk && self.testForInputString ("!=", advance: true) {
      tokenCode = galgasScanner4_1__21__3D_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = galgasScanner4_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = galgasScanner4_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = galgasScanner4_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = galgasScanner4_1__7B_
    }else if scanningOk && self.testForInputString ("`", advance: true) {
      tokenCode = galgasScanner4_1__60_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = galgasScanner4_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = galgasScanner4_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = galgasScanner4_1__5B_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = galgasScanner4_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = galgasScanner4_1__3D_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = galgasScanner4_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = galgasScanner4_1__3A_
    }else if scanningOk && self.testForInputString ("/", advance: true) {
      tokenCode = galgasScanner4_1__2F_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = galgasScanner4_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = galgasScanner4_1__2C_
    }else if scanningOk && self.testForInputString ("+", advance: true) {
      tokenCode = galgasScanner4_1__2B_
    }else if scanningOk && self.testForInputString ("*", advance: true) {
      tokenCode = galgasScanner4_1__2A_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = galgasScanner4_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = galgasScanner4_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = galgasScanner4_1__26_
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
          tokenCode = galgasScanner4_1__3F__21_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationExclamationMark)
          tokenCode = galgasScanner4_1__3F__21_
        }
      }else{
        tokenCode = galgasScanner4_1__3F__21_
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
          tokenCode = galgasScanner4_1__3F_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationMark)
          tokenCode = galgasScanner4_1__3F_
        }
      }else{
        tokenCode = galgasScanner4_1__3F_
      }
    }else if scanningOk && (self.testForInputString ("!\?", advance: true)) {
      let locationForTag_onlyExclamationInterrogationMark = self.savedScanningPoint ()
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
          tokenCode = galgasScanner4_1__21__3F_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationInterrogationMark)
          tokenCode = galgasScanner4_1__21__3F_
        }
      }else{
        tokenCode = galgasScanner4_1__21__3F_
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
          tokenCode = galgasScanner4_1__21_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationMark)
          tokenCode = galgasScanner4_1__21_
        }
      }else{
        tokenCode = galgasScanner4_1__21_
      }
    }else if scanningOk && (self.testForInputChar (60)) {
      let locationForTag_onlyInfDelimiter = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (61)) {
        tokenCode = galgasScanner4_1__3C__3D_
      }else if scanningOk && (self.testForInputChar (60)) {
        tokenCode = galgasScanner4_1__3C__3C_
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
          tokenCode = galgasScanner4_1__3C_non_5F_terminal_3E_
        }else{
          self.restoreScanningPoint (locationForTag_onlyInfDelimiter)
          tokenCode = galgasScanner4_1__3C_
        }
      }else{
        tokenCode = galgasScanner4_1__3C_
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
        tokenCode = galgasScanner4_1__22_string_22_
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = galgasScanner4_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = galgasScanner4_2_TEMPLATE
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

fileprivate func search_into_galgasScanner_34__attributeKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "from" : galgasScanner4_1__25_from,
    "once" : galgasScanner4_1__25_once,
    "MacOS" : galgasScanner4_1__25_MacOS,
    "remove" : galgasScanner4_1__25_remove,
    "usefull" : galgasScanner4_1__25_usefull,
    "app-link" : galgasScanner4_1__25_app_2D_link,
    "clonable" : galgasScanner4_1__25_clonable,
    "equatable" : galgasScanner4_1__25_equatable,
    "preserved" : galgasScanner4_1__25_preserved,
    "replaceBy" : galgasScanner4_1__25_replaceBy,
    "translate" : galgasScanner4_1__25_translate,
    "app-source" : galgasScanner4_1__25_app_2D_source,
    "comparable" : galgasScanner4_1__25_comparable,
    "insertAfter" : galgasScanner4_1__25_insertAfter,
    "libpmAtPath" : galgasScanner4_1__25_libpmAtPath,
    "macCodeSign" : galgasScanner4_1__25_macCodeSign,
    "testGetters" : galgasScanner4_1__25_testGetters,
    "tool-source" : galgasScanner4_1__25_tool_2D_source,
    "errorMessage" : galgasScanner4_1__25_errorMessage,
    "initArgLabel" : galgasScanner4_1__25_initArgLabel,
    "insertBefore" : galgasScanner4_1__25_insertBefore,
    "insertSetter" : galgasScanner4_1__25_insertSetter,
    "removeSetter" : galgasScanner4_1__25_removeSetter,
    "searchMethod" : galgasScanner4_1__25_searchMethod,
    "searchString" : galgasScanner4_1__25_searchString,
    "makefile-unix" : galgasScanner4_1__25_makefile_2D_unix,
    "MacOSDeployment" : galgasScanner4_1__25_MacOSDeployment,
    "makefile-macosx" : galgasScanner4_1__25_makefile_2D_macosx,
    "templateEndMark" : galgasScanner4_1__25_templateEndMark,
    "codeblocks-linux32" : galgasScanner4_1__25_codeblocks_2D_linux_33__32_,
    "codeblocks-linux64" : galgasScanner4_1__25_codeblocks_2D_linux_36__34_,
    "codeblocks-windows" : galgasScanner4_1__25_codeblocks_2D_windows,
    "nonAtomicSelection" : galgasScanner4_1__25_nonAtomicSelection,
    "templateReplacement" : galgasScanner4_1__25_templateReplacement,
    "quietOutputByDefault" : galgasScanner4_1__25_quietOutputByDefault,
    "applicationBundleBase" : galgasScanner4_1__25_applicationBundleBase,
    "insertOrReplaceSetter" : galgasScanner4_1__25_insertOrReplaceSetter,
    "generatedInSeparateFile" : galgasScanner4_1__25_generatedInSeparateFile,
    "makefile-win32-on-macosx" : galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx,
    "makefile-x86linux32-on-macosx" : galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx,
    "makefile-x86linux64-on-macosx" : galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx
  ]
  return dictionary [inSearchedString, default: galgasScanner4_1_]
}

//--------------------------------------------------------------------------------------------------
//
//             Key words table 'galgasKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_galgasScanner_34__galgasKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "as" : galgasScanner4_1_as,
    "do" : galgasScanner4_1_do,
    "if" : galgasScanner4_1_if,
    "in" : galgasScanner4_1_in,
    "is" : galgasScanner4_1_is,
    "on" : galgasScanner4_1_on,
    "or" : galgasScanner4_1_or,
    "end" : galgasScanner4_1_end,
    "for" : galgasScanner4_1_for,
    "gui" : galgasScanner4_1_gui,
    "let" : galgasScanner4_1_let,
    "log" : galgasScanner4_1_log,
    "map" : galgasScanner4_1_map,
    "mod" : galgasScanner4_1_mod,
    "nil" : galgasScanner4_1_nil,
    "not" : galgasScanner4_1_not,
    "tag" : galgasScanner4_1_tag,
    "var" : galgasScanner4_1_var,
    "case" : galgasScanner4_1_case,
    "dict" : galgasScanner4_1_dict,
    "drop" : galgasScanner4_1_drop,
    "else" : galgasScanner4_1_else,
    "enum" : galgasScanner4_1_enum,
    "func" : galgasScanner4_1_func,
    "init" : galgasScanner4_1_init,
    "list" : galgasScanner4_1_list,
    "loop" : galgasScanner4_1_loop,
    "proc" : galgasScanner4_1_proc,
    "rule" : galgasScanner4_1_rule,
    "self" : galgasScanner4_1_self,
    "send" : galgasScanner4_1_send,
    "then" : galgasScanner4_1_then,
    "true" : galgasScanner4_1_true,
    "with" : galgasScanner4_1_with,
    "after" : galgasScanner4_1_after,
    "block" : galgasScanner4_1_block,
    "class" : galgasScanner4_1_class,
    "elsif" : galgasScanner4_1_elsif,
    "error" : galgasScanner4_1_error,
    "false" : galgasScanner4_1_false,
    "final" : galgasScanner4_1_final,
    "fixit" : galgasScanner4_1_fixit,
    "graph" : galgasScanner4_1_graph,
    "label" : galgasScanner4_1_label,
    "parse" : galgasScanner4_1_parse,
    "spoil" : galgasScanner4_1_spoil,
    "style" : galgasScanner4_1_style,
    "super" : galgasScanner4_1_super,
    "while" : galgasScanner4_1_while,
    "before" : galgasScanner4_1_before,
    "extern" : galgasScanner4_1_extern,
    "option" : galgasScanner4_1_option,
    "public" : galgasScanner4_1_public,
    "repeat" : galgasScanner4_1_repeat,
    "rewind" : galgasScanner4_1_rewind,
    "select" : galgasScanner4_1_select,
    "struct" : galgasScanner4_1_struct,
    "switch" : galgasScanner4_1_switch,
    "syntax" : galgasScanner4_1_syntax,
    "unused" : galgasScanner4_1_unused,
    "between" : galgasScanner4_1_between,
    "boolset" : galgasScanner4_1_boolset,
    "default" : galgasScanner4_1_default,
    "grammar" : galgasScanner4_1_grammar,
    "lexique" : galgasScanner4_1_lexique,
    "package" : galgasScanner4_1_package,
    "private" : galgasScanner4_1_private,
    "project" : galgasScanner4_1_project,
    "warning" : galgasScanner4_1_warning,
    "abstract" : galgasScanner4_1_abstract,
    "indexing" : galgasScanner4_1_indexing,
    "mutating" : galgasScanner4_1_mutating,
    "operator" : galgasScanner4_1_operator,
    "override" : galgasScanner4_1_override,
    "template" : galgasScanner4_1_template,
    "extension" : galgasScanner4_1_extension,
    "protected" : galgasScanner4_1_protected,
    "typealias" : galgasScanner4_1_typealias,
    "sortedlist" : galgasScanner4_1_sortedlist,
    "fileprivate" : galgasScanner4_1_fileprivate,
    "filewrapper" : galgasScanner4_1_filewrapper
  ]
  return dictionary [inSearchedString, default: galgasScanner4_1_]
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


