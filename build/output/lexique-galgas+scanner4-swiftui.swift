//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE galgasScanner4
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_galgasScanner4 : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_galgasScanner4")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_galgasScanner4")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_galgasScanner4")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_galgasScanner4-keywordsStyle")
  private var mColorFor_keywordsStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-keywordsStyle")
  private var mBoldFor_keywordsStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-keywordsStyle")
  private var mItalicFor_keywordsStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-selectorStyle")
  private var mColorFor_selectorStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-selectorStyle")
  private var mBoldFor_selectorStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-selectorStyle")
  private var mItalicFor_selectorStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-terminalStyle")
  private var mColorFor_terminalStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-terminalStyle")
  private var mBoldFor_terminalStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-terminalStyle")
  private var mItalicFor_terminalStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-nonTerminalStyle")
  private var mColorFor_nonTerminalStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-nonTerminalStyle")
  private var mBoldFor_nonTerminalStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-nonTerminalStyle")
  private var mItalicFor_nonTerminalStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-floatStyle")
  private var mColorFor_floatStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-floatStyle")
  private var mBoldFor_floatStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-floatStyle")
  private var mItalicFor_floatStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-characterStyle")
  private var mColorFor_characterStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-characterStyle")
  private var mBoldFor_characterStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-characterStyle")
  private var mItalicFor_characterStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-typeNameStyle")
  private var mColorFor_typeNameStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-typeNameStyle")
  private var mBoldFor_typeNameStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-typeNameStyle")
  private var mItalicFor_typeNameStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-attributeStyle")
  private var mColorFor_attributeStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-attributeStyle")
  private var mBoldFor_attributeStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-attributeStyle")
  private var mItalicFor_attributeStyle : Bool = false

  @AppStorage("ColorFor_galgasScanner4-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_galgasScanner4-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_galgasScanner4-commentStyle")
  private var mItalicFor_commentStyle : Bool = false


  @AppStorage("ColorFor_galgasScanner4_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_galgasScanner4_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_galgasScanner4_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_galgasScanner4_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_galgasScanner4_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_galgasScanner4_template")
  private var mItalicFor_template : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    Form {
      LabeledContent ("Font") { CustomFontPicker (fontBinding: self.$mFont) }
      Picker("Line Height", selection: self.$mLineHeight) {
        Text("1.0").tag(10)
        Text("1.1").tag(11)
        Text("1.2").tag(12)
        Text("1.5").tag(15)
        Text("1.7").tag(17)
        Text("2.0").tag(20)
      }.pickerStyle(.automatic)
      ColorPicker ("Default Color", selection: self.$mDefaultColor)
      LabeledContent ("Keywords") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_keywordsStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_keywordsStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_keywordsStyle)
        }
      }
      LabeledContent ("Delimiters") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitersStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitersStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitersStyle)
        }
      }
      LabeledContent ("Selectors") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_selectorStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_selectorStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_selectorStyle)
        }
      }
      LabeledContent ("Terminal Symbols") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_terminalStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_terminalStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_terminalStyle)
        }
      }
      LabeledContent ("Non Terminal Symbols") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_nonTerminalStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_nonTerminalStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_nonTerminalStyle)
        }
      }
      LabeledContent ("Integer Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_integerStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_integerStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_integerStyle)
        }
      }
      LabeledContent ("Floating Point Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_floatStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_floatStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_floatStyle)
        }
      }
      LabeledContent ("Character Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_characterStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_characterStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_characterStyle)
        }
      }
      LabeledContent ("String Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_stringStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_stringStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_stringStyle)
        }
      }
      LabeledContent ("Type Names (@...)") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_typeNameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_typeNameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_typeNameStyle)
        }
      }
      LabeledContent ("Attributes (%...)") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_attributeStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_attributeStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_attributeStyle)
        }
      }
      LabeledContent ("Comments") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Lexical Error") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_lexical_error).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_lexical_error)
          Toggle ("Italic", isOn: self.$mItalicFor_lexical_error)
        }
      }
      LabeledContent ("Template") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_template).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_template)
          Toggle ("Italic", isOn: self.$mItalicFor_template)
        }
      }
    }.padding (20)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

#Preview {
  SettingViewFor_galgasScanner4 ()
}

//--------------------------------------------------------------------------------------------------

class ScannerFor_galgasScanner4 : SWIFT_Scanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [SWIFT_Token] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func popupListData () -> [[UInt16]] {
    return gPopUpData_galgasScanner4
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity,
                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    var result = inTextViewComputedRange
    switch inGranularity {
    case .selectByCharacter :
      ()
    case .selectByWord :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found, self.atomicSelectionFor (token: token.tokenCode) {
          result = tokenRange
        }
      }
    case .selectByParagraph :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found {
          result = tokenRange
        }
      }
    @unknown default:
      ()
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Scanner
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_bigintValue : String = ""
  private var mLexicalAttribute_charValue : UInt32 = 0
  private var mLexicalAttribute_floatValue : Double = 0.0
  private var mLexicalAttribute_identifierString : String = ""
  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return galgasScanner4_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 201
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : galgasScanner4_1_identifier
      7, // 2 : galgasScanner4_1_double_2E_xxx
      6, // 3 : galgasScanner4_1_literalInt
      8, // 4 : galgasScanner4_1__27_char_27_
      4, // 5 : galgasScanner4_1__24_terminal_24_
      12, // 6 : galgasScanner4_1_comment
      12, // 7 : galgasScanner4_1_commentMark
      10, // 8 : galgasScanner4_1__40_type
      3, // 9 : galgasScanner4_1__3F_selector_3A_
      2, // 10 : galgasScanner4_1__3F_
      3, // 11 : galgasScanner4_1__3F__21_selector_3A_
      2, // 12 : galgasScanner4_1__3F__21_
      3, // 13 : galgasScanner4_1__21_selector_3A_
      2, // 14 : galgasScanner4_1__21_
      3, // 15 : galgasScanner4_1__21__3F_selector_3A_
      2, // 16 : galgasScanner4_1__21__3F_
      2, // 17 : galgasScanner4_1__3C_
      2, // 18 : galgasScanner4_1__3C__3D_
      2, // 19 : galgasScanner4_1__3C__3C_
      5, // 20 : galgasScanner4_1__3C_non_5F_terminal_3E_
      9, // 21 : galgasScanner4_1__22_string_22_
      1, // 22 : galgasScanner4_1_abstract
      1, // 23 : galgasScanner4_1_after
      1, // 24 : galgasScanner4_1_as
      1, // 25 : galgasScanner4_1_before
      1, // 26 : galgasScanner4_1_between
      1, // 27 : galgasScanner4_1_block
      1, // 28 : galgasScanner4_1_boolset
      1, // 29 : galgasScanner4_1_case
      1, // 30 : galgasScanner4_1_class
      1, // 31 : galgasScanner4_1_default
      1, // 32 : galgasScanner4_1_dict
      1, // 33 : galgasScanner4_1_do
      1, // 34 : galgasScanner4_1_drop
      1, // 35 : galgasScanner4_1_else
      1, // 36 : galgasScanner4_1_elsif
      1, // 37 : galgasScanner4_1_end
      1, // 38 : galgasScanner4_1_enum
      1, // 39 : galgasScanner4_1_error
      1, // 40 : galgasScanner4_1_extension
      1, // 41 : galgasScanner4_1_extern
      1, // 42 : galgasScanner4_1_false
      1, // 43 : galgasScanner4_1_fileprivate
      1, // 44 : galgasScanner4_1_filewrapper
      1, // 45 : galgasScanner4_1_final
      1, // 46 : galgasScanner4_1_for
      1, // 47 : galgasScanner4_1_fixit
      1, // 48 : galgasScanner4_1_func
      1, // 49 : galgasScanner4_1_grammar
      1, // 50 : galgasScanner4_1_graph
      1, // 51 : galgasScanner4_1_guard
      1, // 52 : galgasScanner4_1_gui
      1, // 53 : galgasScanner4_1_if
      1, // 54 : galgasScanner4_1_in
      1, // 55 : galgasScanner4_1_indexing
      1, // 56 : galgasScanner4_1_init
      1, // 57 : galgasScanner4_1_is
      1, // 58 : galgasScanner4_1_json
      1, // 59 : galgasScanner4_1_label
      1, // 60 : galgasScanner4_1_let
      1, // 61 : galgasScanner4_1_lexique
      1, // 62 : galgasScanner4_1_list
      1, // 63 : galgasScanner4_1_log
      1, // 64 : galgasScanner4_1_loop
      1, // 65 : galgasScanner4_1_map
      1, // 66 : galgasScanner4_1_mod
      1, // 67 : galgasScanner4_1_mutating
      1, // 68 : galgasScanner4_1_nil
      1, // 69 : galgasScanner4_1_not
      1, // 70 : galgasScanner4_1_on
      1, // 71 : galgasScanner4_1_operator
      1, // 72 : galgasScanner4_1_option
      1, // 73 : galgasScanner4_1_or
      1, // 74 : galgasScanner4_1_override
      1, // 75 : galgasScanner4_1_package
      1, // 76 : galgasScanner4_1_parse
      1, // 77 : galgasScanner4_1_public
      1, // 78 : galgasScanner4_1_protected
      1, // 79 : galgasScanner4_1_private
      1, // 80 : galgasScanner4_1_proc
      1, // 81 : galgasScanner4_1_project
      1, // 82 : galgasScanner4_1_repeat
      1, // 83 : galgasScanner4_1_rewind
      1, // 84 : galgasScanner4_1_rule
      1, // 85 : galgasScanner4_1_select
      1, // 86 : galgasScanner4_1_self
      1, // 87 : galgasScanner4_1_send
      1, // 88 : galgasScanner4_1_sortedlist
      1, // 89 : galgasScanner4_1_spoil
      1, // 90 : galgasScanner4_1_super
      1, // 91 : galgasScanner4_1_struct
      1, // 92 : galgasScanner4_1_style
      1, // 93 : galgasScanner4_1_switch
      1, // 94 : galgasScanner4_1_syntax
      1, // 95 : galgasScanner4_1_tag
      1, // 96 : galgasScanner4_1_template
      1, // 97 : galgasScanner4_1_then
      1, // 98 : galgasScanner4_1_true
      1, // 99 : galgasScanner4_1_typealias
      1, // 100 : galgasScanner4_1_unused
      1, // 101 : galgasScanner4_1_var
      1, // 102 : galgasScanner4_1_warning
      1, // 103 : galgasScanner4_1_weak
      1, // 104 : galgasScanner4_1_while
      1, // 105 : galgasScanner4_1_with
      11, // 106 : galgasScanner4_1__25_app_2D_link
      11, // 107 : galgasScanner4_1__25_app_2D_source
      11, // 108 : galgasScanner4_1__25_applicationBundleBase
      11, // 109 : galgasScanner4_1__25_clonable
      11, // 110 : galgasScanner4_1__25_codeblocks_2D_linux_33__32_
      11, // 111 : galgasScanner4_1__25_codeblocks_2D_linux_36__34_
      11, // 112 : galgasScanner4_1__25_codeblocks_2D_windows
      11, // 113 : galgasScanner4_1__25_comparable
      11, // 114 : galgasScanner4_1__25_equatable
      11, // 115 : galgasScanner4_1__25_errorMessage
      11, // 116 : galgasScanner4_1__25_from
      11, // 117 : galgasScanner4_1__25_generatedInSeparateFile
      11, // 118 : galgasScanner4_1__25_initArgLabel
      11, // 119 : galgasScanner4_1__25_insertAfter
      11, // 120 : galgasScanner4_1__25_insertBefore
      11, // 121 : galgasScanner4_1__25_insertOrReplaceSetter
      11, // 122 : galgasScanner4_1__25_insertSetter
      11, // 123 : galgasScanner4_1__25_libpmAtPath
      11, // 124 : galgasScanner4_1__25_macCodeSign
      11, // 125 : galgasScanner4_1__25_makefile_2D_macosx
      11, // 126 : galgasScanner4_1__25_makefile_2D_unix
      11, // 127 : galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx
      11, // 128 : galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx
      11, // 129 : galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx
      11, // 130 : galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx
      11, // 131 : galgasScanner4_1__25_MacOS
      11, // 132 : galgasScanner4_1__25_MacSwiftApp
      11, // 133 : galgasScanner4_1__25_MacOSDeployment
      11, // 134 : galgasScanner4_1__25_nonAtomicSelection
      11, // 135 : galgasScanner4_1__25_once
      11, // 136 : galgasScanner4_1__25_preserved
      11, // 137 : galgasScanner4_1__25_quietOutputByDefault
      11, // 138 : galgasScanner4_1__25_replaceBy
      11, // 139 : galgasScanner4_1__25_remove
      11, // 140 : galgasScanner4_1__25_removeSetter
      11, // 141 : galgasScanner4_1__25_replaceSetter
      11, // 142 : galgasScanner4_1__25_searchMethod
      11, // 143 : galgasScanner4_1__25_searchSubscript
      11, // 144 : galgasScanner4_1__25_searchString
      11, // 145 : galgasScanner4_1__25_tool_2D_source
      11, // 146 : galgasScanner4_1__25_templateEndMark
      11, // 147 : galgasScanner4_1__25_templateReplacement
      11, // 148 : galgasScanner4_1__25_translate
      11, // 149 : galgasScanner4_1__25_usefull
      2, // 150 : galgasScanner4_1__2A_
      2, // 151 : galgasScanner4_1__2C_
      2, // 152 : galgasScanner4_1__2B_
      2, // 153 : galgasScanner4_1__26__2B_
      2, // 154 : galgasScanner4_1__26__2D_
      2, // 155 : galgasScanner4_1__26__2A_
      2, // 156 : galgasScanner4_1__26__2F_
      2, // 157 : galgasScanner4_1__3E_
      2, // 158 : galgasScanner4_1__3B_
      2, // 159 : galgasScanner4_1__3A_
      2, // 160 : galgasScanner4_1__3A__3E_
      2, // 161 : galgasScanner4_1__2D_
      2, // 162 : galgasScanner4_1__28_
      2, // 163 : galgasScanner4_1__29_
      2, // 164 : galgasScanner4_1__2D__3E_
      2, // 165 : galgasScanner4_1__3D__3D_
      2, // 166 : galgasScanner4_1__3D_
      2, // 167 : galgasScanner4_1__26__26_
      2, // 168 : galgasScanner4_1__5B_
      2, // 169 : galgasScanner4_1__5D_
      2, // 170 : galgasScanner4_1__2B__2B__3D_
      2, // 171 : galgasScanner4_1__2E_
      2, // 172 : galgasScanner4_1__40__28_
      2, // 173 : galgasScanner4_1__2E__2E__2E_
      2, // 174 : galgasScanner4_1__2E__2E__3C_
      2, // 175 : galgasScanner4_1__2B__3D_
      2, // 176 : galgasScanner4_1__2D__3D_
      2, // 177 : galgasScanner4_1__2A__3D_
      2, // 178 : galgasScanner4_1__2F__3D_
      2, // 179 : galgasScanner4_1__26__3D_
      2, // 180 : galgasScanner4_1__7C__3D_
      2, // 181 : galgasScanner4_1__5E__3D_
      2, // 182 : galgasScanner4_1__2F_
      2, // 183 : galgasScanner4_1__21__3D_
      2, // 184 : galgasScanner4_1__3E__3D_
      2, // 185 : galgasScanner4_1__26_
      2, // 186 : galgasScanner4_1__7B_
      2, // 187 : galgasScanner4_1__7D_
      2, // 188 : galgasScanner4_1__60_
      2, // 189 : galgasScanner4_1__7C__7C_
      2, // 190 : galgasScanner4_1__7C_
      2, // 191 : galgasScanner4_1__5E_
      2, // 192 : galgasScanner4_1__3E__3E_
      2, // 193 : galgasScanner4_1__7E_
      2, // 194 : galgasScanner4_1__2D__2D_
      2, // 195 : galgasScanner4_1__2B__2B_
      2, // 196 : galgasScanner4_1__26__2D__2D_
      2, // 197 : galgasScanner4_1__26__2B__2B_
      2, // 198 : galgasScanner4_1__3D__3D__3D_
      2, // 199 : galgasScanner4_1__21__3D__3D_
      2, // 200 : galgasScanner4_1__3F__5E_
      2, // 201 : galgasScanner4_1__21__5E_
      13, // 202 : galgasScanner4_2_ERROR
      14  // 203 : galgasScanner4_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : galgasScanner4_1_identifier
      true, // 2 : galgasScanner4_1_double_2E_xxx
      true, // 3 : galgasScanner4_1_literalInt
      true, // 4 : galgasScanner4_1__27_char_27_
      true, // 5 : galgasScanner4_1__24_terminal_24_
      false, // 6 : galgasScanner4_1_comment
      false, // 7 : galgasScanner4_1_commentMark
      true, // 8 : galgasScanner4_1__40_type
      true, // 9 : galgasScanner4_1__3F_selector_3A_
      true, // 10 : galgasScanner4_1__3F_
      true, // 11 : galgasScanner4_1__3F__21_selector_3A_
      true, // 12 : galgasScanner4_1__3F__21_
      true, // 13 : galgasScanner4_1__21_selector_3A_
      true, // 14 : galgasScanner4_1__21_
      true, // 15 : galgasScanner4_1__21__3F_selector_3A_
      true, // 16 : galgasScanner4_1__21__3F_
      true, // 17 : galgasScanner4_1__3C_
      true, // 18 : galgasScanner4_1__3C__3D_
      true, // 19 : galgasScanner4_1__3C__3C_
      true, // 20 : galgasScanner4_1__3C_non_5F_terminal_3E_
      false, // 21 : galgasScanner4_1__22_string_22_
      true, // 22 : galgasScanner4_1_abstract
      true, // 23 : galgasScanner4_1_after
      true, // 24 : galgasScanner4_1_as
      true, // 25 : galgasScanner4_1_before
      true, // 26 : galgasScanner4_1_between
      true, // 27 : galgasScanner4_1_block
      true, // 28 : galgasScanner4_1_boolset
      true, // 29 : galgasScanner4_1_case
      true, // 30 : galgasScanner4_1_class
      true, // 31 : galgasScanner4_1_default
      true, // 32 : galgasScanner4_1_dict
      true, // 33 : galgasScanner4_1_do
      true, // 34 : galgasScanner4_1_drop
      true, // 35 : galgasScanner4_1_else
      true, // 36 : galgasScanner4_1_elsif
      true, // 37 : galgasScanner4_1_end
      true, // 38 : galgasScanner4_1_enum
      true, // 39 : galgasScanner4_1_error
      true, // 40 : galgasScanner4_1_extension
      true, // 41 : galgasScanner4_1_extern
      true, // 42 : galgasScanner4_1_false
      true, // 43 : galgasScanner4_1_fileprivate
      true, // 44 : galgasScanner4_1_filewrapper
      true, // 45 : galgasScanner4_1_final
      true, // 46 : galgasScanner4_1_for
      true, // 47 : galgasScanner4_1_fixit
      true, // 48 : galgasScanner4_1_func
      true, // 49 : galgasScanner4_1_grammar
      true, // 50 : galgasScanner4_1_graph
      true, // 51 : galgasScanner4_1_guard
      true, // 52 : galgasScanner4_1_gui
      true, // 53 : galgasScanner4_1_if
      true, // 54 : galgasScanner4_1_in
      true, // 55 : galgasScanner4_1_indexing
      true, // 56 : galgasScanner4_1_init
      true, // 57 : galgasScanner4_1_is
      true, // 58 : galgasScanner4_1_json
      true, // 59 : galgasScanner4_1_label
      true, // 60 : galgasScanner4_1_let
      true, // 61 : galgasScanner4_1_lexique
      true, // 62 : galgasScanner4_1_list
      true, // 63 : galgasScanner4_1_log
      true, // 64 : galgasScanner4_1_loop
      true, // 65 : galgasScanner4_1_map
      true, // 66 : galgasScanner4_1_mod
      true, // 67 : galgasScanner4_1_mutating
      true, // 68 : galgasScanner4_1_nil
      true, // 69 : galgasScanner4_1_not
      true, // 70 : galgasScanner4_1_on
      true, // 71 : galgasScanner4_1_operator
      true, // 72 : galgasScanner4_1_option
      true, // 73 : galgasScanner4_1_or
      true, // 74 : galgasScanner4_1_override
      true, // 75 : galgasScanner4_1_package
      true, // 76 : galgasScanner4_1_parse
      true, // 77 : galgasScanner4_1_public
      true, // 78 : galgasScanner4_1_protected
      true, // 79 : galgasScanner4_1_private
      true, // 80 : galgasScanner4_1_proc
      true, // 81 : galgasScanner4_1_project
      true, // 82 : galgasScanner4_1_repeat
      true, // 83 : galgasScanner4_1_rewind
      true, // 84 : galgasScanner4_1_rule
      true, // 85 : galgasScanner4_1_select
      true, // 86 : galgasScanner4_1_self
      true, // 87 : galgasScanner4_1_send
      true, // 88 : galgasScanner4_1_sortedlist
      true, // 89 : galgasScanner4_1_spoil
      true, // 90 : galgasScanner4_1_super
      true, // 91 : galgasScanner4_1_struct
      true, // 92 : galgasScanner4_1_style
      true, // 93 : galgasScanner4_1_switch
      true, // 94 : galgasScanner4_1_syntax
      true, // 95 : galgasScanner4_1_tag
      true, // 96 : galgasScanner4_1_template
      true, // 97 : galgasScanner4_1_then
      true, // 98 : galgasScanner4_1_true
      true, // 99 : galgasScanner4_1_typealias
      true, // 100 : galgasScanner4_1_unused
      true, // 101 : galgasScanner4_1_var
      true, // 102 : galgasScanner4_1_warning
      true, // 103 : galgasScanner4_1_weak
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
      true, // 129 : galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx
      true, // 130 : galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx
      true, // 131 : galgasScanner4_1__25_MacOS
      true, // 132 : galgasScanner4_1__25_MacSwiftApp
      true, // 133 : galgasScanner4_1__25_MacOSDeployment
      true, // 134 : galgasScanner4_1__25_nonAtomicSelection
      true, // 135 : galgasScanner4_1__25_once
      true, // 136 : galgasScanner4_1__25_preserved
      true, // 137 : galgasScanner4_1__25_quietOutputByDefault
      true, // 138 : galgasScanner4_1__25_replaceBy
      true, // 139 : galgasScanner4_1__25_remove
      true, // 140 : galgasScanner4_1__25_removeSetter
      true, // 141 : galgasScanner4_1__25_replaceSetter
      true, // 142 : galgasScanner4_1__25_searchMethod
      true, // 143 : galgasScanner4_1__25_searchSubscript
      true, // 144 : galgasScanner4_1__25_searchString
      true, // 145 : galgasScanner4_1__25_tool_2D_source
      true, // 146 : galgasScanner4_1__25_templateEndMark
      true, // 147 : galgasScanner4_1__25_templateReplacement
      true, // 148 : galgasScanner4_1__25_translate
      true, // 149 : galgasScanner4_1__25_usefull
      true, // 150 : galgasScanner4_1__2A_
      true, // 151 : galgasScanner4_1__2C_
      true, // 152 : galgasScanner4_1__2B_
      true, // 153 : galgasScanner4_1__26__2B_
      true, // 154 : galgasScanner4_1__26__2D_
      true, // 155 : galgasScanner4_1__26__2A_
      true, // 156 : galgasScanner4_1__26__2F_
      true, // 157 : galgasScanner4_1__3E_
      true, // 158 : galgasScanner4_1__3B_
      true, // 159 : galgasScanner4_1__3A_
      true, // 160 : galgasScanner4_1__3A__3E_
      true, // 161 : galgasScanner4_1__2D_
      true, // 162 : galgasScanner4_1__28_
      true, // 163 : galgasScanner4_1__29_
      true, // 164 : galgasScanner4_1__2D__3E_
      true, // 165 : galgasScanner4_1__3D__3D_
      true, // 166 : galgasScanner4_1__3D_
      true, // 167 : galgasScanner4_1__26__26_
      true, // 168 : galgasScanner4_1__5B_
      true, // 169 : galgasScanner4_1__5D_
      true, // 170 : galgasScanner4_1__2B__2B__3D_
      true, // 171 : galgasScanner4_1__2E_
      true, // 172 : galgasScanner4_1__40__28_
      true, // 173 : galgasScanner4_1__2E__2E__2E_
      true, // 174 : galgasScanner4_1__2E__2E__3C_
      true, // 175 : galgasScanner4_1__2B__3D_
      true, // 176 : galgasScanner4_1__2D__3D_
      true, // 177 : galgasScanner4_1__2A__3D_
      true, // 178 : galgasScanner4_1__2F__3D_
      true, // 179 : galgasScanner4_1__26__3D_
      true, // 180 : galgasScanner4_1__7C__3D_
      true, // 181 : galgasScanner4_1__5E__3D_
      true, // 182 : galgasScanner4_1__2F_
      true, // 183 : galgasScanner4_1__21__3D_
      true, // 184 : galgasScanner4_1__3E__3D_
      true, // 185 : galgasScanner4_1__26_
      true, // 186 : galgasScanner4_1__7B_
      true, // 187 : galgasScanner4_1__7D_
      true, // 188 : galgasScanner4_1__60_
      true, // 189 : galgasScanner4_1__7C__7C_
      true, // 190 : galgasScanner4_1__7C_
      true, // 191 : galgasScanner4_1__5E_
      true, // 192 : galgasScanner4_1__3E__3E_
      true, // 193 : galgasScanner4_1__7E_
      true, // 194 : galgasScanner4_1__2D__2D_
      true, // 195 : galgasScanner4_1__2B__2B_
      true, // 196 : galgasScanner4_1__26__2D__2D_
      true, // 197 : galgasScanner4_1__26__2B__2B_
      true, // 198 : galgasScanner4_1__3D__3D__3D_
      true, // 199 : galgasScanner4_1__21__3D__3D_
      true, // 200 : galgasScanner4_1__3F__5E_
      true, // 201 : galgasScanner4_1__21__5E_
      false, // 202 : galgasScanner4_2_ERROR
      false  // 203 : galgasScanner4_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 12
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return galgasScanner4_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return galgasScanner4_styleIdentifierFor (styleIndex: inIndex)
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  final var mLineHeight : Int = 12
  final var mDefaultColor : Color = .black
  final var mColorFor_keywordsStyle : Color = .black
  final var mBoldFor_keywordsStyle : Bool = false
  final var mItalicFor_keywordsStyle : Bool = false
  final var mColorFor_delimitersStyle : Color = .black
  final var mBoldFor_delimitersStyle : Bool = false
  final var mItalicFor_delimitersStyle : Bool = false
  final var mColorFor_selectorStyle : Color = .black
  final var mBoldFor_selectorStyle : Bool = false
  final var mItalicFor_selectorStyle : Bool = false
  final var mColorFor_terminalStyle : Color = .black
  final var mBoldFor_terminalStyle : Bool = false
  final var mItalicFor_terminalStyle : Bool = false
  final var mColorFor_nonTerminalStyle : Color = .black
  final var mBoldFor_nonTerminalStyle : Bool = false
  final var mItalicFor_nonTerminalStyle : Bool = false
  final var mColorFor_integerStyle : Color = .black
  final var mBoldFor_integerStyle : Bool = false
  final var mItalicFor_integerStyle : Bool = false
  final var mColorFor_floatStyle : Color = .black
  final var mBoldFor_floatStyle : Bool = false
  final var mItalicFor_floatStyle : Bool = false
  final var mColorFor_characterStyle : Color = .black
  final var mBoldFor_characterStyle : Bool = false
  final var mItalicFor_characterStyle : Bool = false
  final var mColorFor_stringStyle : Color = .black
  final var mBoldFor_stringStyle : Bool = false
  final var mItalicFor_stringStyle : Bool = false
  final var mColorFor_typeNameStyle : Color = .black
  final var mBoldFor_typeNameStyle : Bool = false
  final var mItalicFor_typeNameStyle : Bool = false
  final var mColorFor_attributeStyle : Color = .black
  final var mBoldFor_attributeStyle : Bool = false
  final var mItalicFor_attributeStyle : Bool = false
  final var mColorFor_commentStyle : Color = .black
  final var mBoldFor_commentStyle : Bool = false
  final var mItalicFor_commentStyle : Bool = false
  final var mColorFor_lexical_error : Color = .red
  final var mBoldFor_lexical_error : Bool = false
  final var mItalicFor_lexical_error : Bool = false
  final var mColorFor_template : Color = .gray
  final var mBoldFor_template : Bool = false
  final var mItalicFor_template : Bool = false
  final var mTokenAttributeArray = [[NSAttributedString.Key : Any]?] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_galgasScanner4"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_galgasScanner4"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-keywordsStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_keywordsStyle != v {
        self.mColorFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-keywordsStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-keywordsStyle")
      if self.mBoldFor_keywordsStyle != v {
        self.mBoldFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-keywordsStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-keywordsStyle")
      if self.mItalicFor_keywordsStyle != v {
        self.mItalicFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-selectorStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_selectorStyle != v {
        self.mColorFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-selectorStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-selectorStyle")
      if self.mBoldFor_selectorStyle != v {
        self.mBoldFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-selectorStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-selectorStyle")
      if self.mItalicFor_selectorStyle != v {
        self.mItalicFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-terminalStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_terminalStyle != v {
        self.mColorFor_terminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-terminalStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-terminalStyle")
      if self.mBoldFor_terminalStyle != v {
        self.mBoldFor_terminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-terminalStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-terminalStyle")
      if self.mItalicFor_terminalStyle != v {
        self.mItalicFor_terminalStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-nonTerminalStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_nonTerminalStyle != v {
        self.mColorFor_nonTerminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-nonTerminalStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-nonTerminalStyle")
      if self.mBoldFor_nonTerminalStyle != v {
        self.mBoldFor_nonTerminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-nonTerminalStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-nonTerminalStyle")
      if self.mItalicFor_nonTerminalStyle != v {
        self.mItalicFor_nonTerminalStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-floatStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_floatStyle != v {
        self.mColorFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-floatStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-floatStyle")
      if self.mBoldFor_floatStyle != v {
        self.mBoldFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-floatStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-floatStyle")
      if self.mItalicFor_floatStyle != v {
        self.mItalicFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-characterStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_characterStyle != v {
        self.mColorFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-characterStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-characterStyle")
      if self.mBoldFor_characterStyle != v {
        self.mBoldFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-characterStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-characterStyle")
      if self.mItalicFor_characterStyle != v {
        self.mItalicFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-typeNameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_typeNameStyle != v {
        self.mColorFor_typeNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-typeNameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-typeNameStyle")
      if self.mBoldFor_typeNameStyle != v {
        self.mBoldFor_typeNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-typeNameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-typeNameStyle")
      if self.mItalicFor_typeNameStyle != v {
        self.mItalicFor_typeNameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-attributeStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_attributeStyle != v {
        self.mColorFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-attributeStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-attributeStyle")
      if self.mBoldFor_attributeStyle != v {
        self.mBoldFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-attributeStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-attributeStyle")
      if self.mItalicFor_attributeStyle != v {
        self.mItalicFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner4_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasScanner4_template") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasScanner4_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasScanner4_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasScanner4_template")
      if self.mItalicFor_template != v {
        self.mItalicFor_template = v
        ioStyleDidChange = true
      }
    }
  //--- Build token attribute array
    if ioStyleDidChange {
      let fontManager = NSFontManager.shared
      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)
      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)
      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)
      self.mTokenAttributeArray.removeAll (keepingCapacity: true)
      var attributes = [NSAttributedString.Key : Any] ()
    //--- Attributes for keywordsStyle
      if self.mColorFor_keywordsStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_keywordsStyle)
      }
      if self.mBoldFor_keywordsStyle && self.mItalicFor_keywordsStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_keywordsStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_keywordsStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for delimitersStyle
      if self.mColorFor_delimitersStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_delimitersStyle)
      }
      if self.mBoldFor_delimitersStyle && self.mItalicFor_delimitersStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_delimitersStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_delimitersStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for selectorStyle
      if self.mColorFor_selectorStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_selectorStyle)
      }
      if self.mBoldFor_selectorStyle && self.mItalicFor_selectorStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_selectorStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_selectorStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for terminalStyle
      if self.mColorFor_terminalStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_terminalStyle)
      }
      if self.mBoldFor_terminalStyle && self.mItalicFor_terminalStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_terminalStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_terminalStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for nonTerminalStyle
      if self.mColorFor_nonTerminalStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_nonTerminalStyle)
      }
      if self.mBoldFor_nonTerminalStyle && self.mItalicFor_nonTerminalStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_nonTerminalStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_nonTerminalStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for integerStyle
      if self.mColorFor_integerStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_integerStyle)
      }
      if self.mBoldFor_integerStyle && self.mItalicFor_integerStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_integerStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_integerStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for floatStyle
      if self.mColorFor_floatStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_floatStyle)
      }
      if self.mBoldFor_floatStyle && self.mItalicFor_floatStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_floatStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_floatStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for characterStyle
      if self.mColorFor_characterStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_characterStyle)
      }
      if self.mBoldFor_characterStyle && self.mItalicFor_characterStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_characterStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_characterStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for stringStyle
      if self.mColorFor_stringStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_stringStyle)
      }
      if self.mBoldFor_stringStyle && self.mItalicFor_stringStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_stringStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_stringStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for typeNameStyle
      if self.mColorFor_typeNameStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_typeNameStyle)
      }
      if self.mBoldFor_typeNameStyle && self.mItalicFor_typeNameStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_typeNameStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_typeNameStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for attributeStyle
      if self.mColorFor_attributeStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_attributeStyle)
      }
      if self.mBoldFor_attributeStyle && self.mItalicFor_attributeStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_attributeStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_attributeStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for commentStyle
      if self.mColorFor_commentStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_commentStyle)
      }
      if self.mBoldFor_commentStyle && self.mItalicFor_commentStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_commentStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_commentStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Lexical error
      if self.mColorFor_lexical_error != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)
      }
      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_lexical_error {
        attributes [.font] = boldFont
      }else if self.mItalicFor_lexical_error {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Template
      if self.mColorFor_template != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_template)
      }
      if self.mBoldFor_template && self.mItalicFor_template {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_template {
        attributes [.font] = boldFont
      }else if self.mItalicFor_template {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {
    if self.mDebug { Swift.print ("performLexicalColoringAfterUserDefaultChange") }
    let start = Date ()
    var styleDidChange = false
    self.updateTokenStyleArrays (&styleDidChange)
    if styleDidChange {
      let nsString = inTextStorage.string as NSString
      let fullRange = NSRange (location: 0, length: nsString.length)
    //---- Apply default attributes
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      inTextStorage.font = defaultFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      inTextStorage.setAttributes (defaultAttributes, range: fullRange)
    //--- Apply styles
      for token in self.mTokenArray {
        let idx = Int (self.styleIndexFor (token: token.tokenCode))
        if idx > 0, let attributes = self.mTokenAttributeArray [idx - 1] {
          inTextStorage.addAttributes (attributes, range: token.range)
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  done: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                                   editedRange inEditedRange : NSRange,
                                                   changeInLength inDelta : Int,
                                                   popupData ioPopupDatas : inout [IdentifiableString]) {
    if self.mDebug { Swift.print ("performLexicalAnalysisAndColoring \(inEditedRange), delta \(inDelta)") }
    let nsString = inTextStorage.string as NSString
  //---
    var savedTokenCount = 0
    var found = false
    while savedTokenCount < self.mTokenArray.count, !found {
      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {
        savedTokenCount += 1
      }else{
        found = true
      }
    }
    if self.mDebug { Swift.print ("  savedTokenCount \(savedTokenCount), currently \(self.mTokenArray.count) tokens") }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end: \(self.mTokenArray.count) tokens") }
  //--- Translater les tokens suivants
    var i = savedTokenCount + 1
    while i < self.mTokenArray.count {
      let token = self.mTokenArray [i]
      let newToken = SWIFT_Token (
        range: NSRange (location: token.range.location + inDelta, length: token.range.length),
        tokenCode: token.tokenCode,
        templateDelimiterIndex: token.templateDelimiterIndex
      )
      self.mTokenArray [i] = newToken
      i += 1
    }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end, after delta correction: \(self.mTokenArray.count) tokens") }
  //--- Perform lexical analysis
    let start = Date ()
    if savedTokenCount == 0 {
      self.resetScannerLocation (withString: nsString)
    }else{
      self.resetScanner (
        withString: nsString,
        location: self.mTokenArray [savedTokenCount-1].range.upperBound,
        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex
      )
    }
    if self.mDebug { Swift.print ("  Scanning start location: \(self.currentLocation)") }
    var stop = false
    var insertionIndex = savedTokenCount
    while self.currentLocation < nsString.length, !stop {
      let token : SWIFT_Token = self.parseLexicalTokenForLexicalColoring ()
      if token.tokenCode > 0 { // For eliminating separators
        if self.mVerboseDebug { Swift.print ("  -> new token \(token.range) '\(nsString.substring (with: token.range))'") }
      //--- Eliminate previous tokens before new token location
        if insertionIndex < self.mTokenArray.count,
              self.mTokenArray [insertionIndex] == token,
              token.range.location > inEditedRange.upperBound {
          if self.mVerboseDebug { Swift.print ("    stop at \(insertionIndex)") }
          stop = true
        }else{
          while insertionIndex < self.mTokenArray.count,
                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {
            if self.mVerboseDebug { Swift.print ("    remove token \(self.mTokenArray [insertionIndex].range) at \(insertionIndex)") }
            self.mTokenArray.remove (at: insertionIndex)
          }
          if insertionIndex == self.mTokenArray.count {
            if self.mVerboseDebug { Swift.print ("    append token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.append (token)
            insertionIndex += 1
          }else{
            if self.mVerboseDebug {  Swift.print ("    insert token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.insert (token, at: insertionIndex)
            insertionIndex += 1
          }
        }
      }
    }
    if self.mDebug { Swift.print ("  Lexical analysis time: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  //---- Apply default attributes
    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0)
      ? 0
      : self.mTokenArray [savedTokenCount - 1].range.upperBound)
    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)
       ? nsString.length
       : self.mTokenArray [insertionIndex].range.upperBound
    )
    if self.mDebug { Swift.print ("  Attributes will change from char index \(modificationStart) to \(modificationEnd)") }
    let start2 = Date ()
    if modificationStart < modificationEnd {
      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      if self.mVerboseDebug { Swift.print ("Apply default attributes \(modifiedRange)") }
      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply styles
      var idx = 0
      stop = false
      while idx < self.mTokenArray.count, !stop { // Apply token styles
        let token = self.mTokenArray [idx]
        idx += 1
        if token.range.lowerBound >= modifiedRange.upperBound {
          stop = true
        }else if token.range.upperBound > modifiedRange.lowerBound {
          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))
          if styleIndex > 0, let attributes = self.mTokenAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
    ioPopupDatas = self.updateEntryPopUpButtons (self.mTokenArray)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_bigintValue = ""
    self.mLexicalAttribute_charValue = 0
    self.mLexicalAttribute_floatValue = 0.0
    self.mLexicalAttribute_identifierString = ""
    self.mLexicalAttribute_tokenString = ""
    self.mLexicalAttribute_uint32value = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForChar_isUnicodeLetter ()) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (self.previousChar))
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
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
    }else if scanningOk && (self.testForInputChar (37)) {
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputChar (45) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
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
    }else if scanningOk && self.testForInputString ("..<", advance: true) {
      tokenCode = galgasScanner4_1__2E__2E__3C_
    }else if scanningOk && self.testForInputString ("...", advance: true) {
      tokenCode = galgasScanner4_1__2E__2E__2E_
    }else if scanningOk && self.testForInputString ("++=", advance: true) {
      tokenCode = galgasScanner4_1__2B__2B__3D_
    }else if scanningOk && self.testForInputString ("&--", advance: true) {
      tokenCode = galgasScanner4_1__26__2D__2D_
    }else if scanningOk && self.testForInputString ("&++", advance: true) {
      tokenCode = galgasScanner4_1__26__2B__2B_
    }else if scanningOk && self.testForInputString ("!==", advance: true) {
      tokenCode = galgasScanner4_1__21__3D__3D_
    }else if scanningOk && self.testForInputString ("||", advance: true) {
      tokenCode = galgasScanner4_1__7C__7C_
    }else if scanningOk && self.testForInputString ("|=", advance: true) {
      tokenCode = galgasScanner4_1__7C__3D_
    }else if scanningOk && self.testForInputString ("^=", advance: true) {
      tokenCode = galgasScanner4_1__5E__3D_
    }else if scanningOk && self.testForInputString ("@(", advance: true) {
      tokenCode = galgasScanner4_1__40__28_
    }else if scanningOk && self.testForInputString ("?^", advance: true) {
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
    }else if scanningOk && self.testForInputString ("&=", advance: true) {
      tokenCode = galgasScanner4_1__26__3D_
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
    }else if scanningOk && self.testForInputString (".", advance: true) {
      tokenCode = galgasScanner4_1__2E_
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
    }else if scanningOk && (self.testForInputString ("?!", advance: true)) {
      let locationForTag_onlyInterrogationExclamationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
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
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
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
    }else if scanningOk && (self.testForInputString ("!?", advance: true)) {
      let locationForTag_onlyExclamationInterrogationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
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
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
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
      }else if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//             Key words table 'attributeKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_galgasScanner_34__attributeKeyWordList : [String : UInt16] = [
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
  "MacSwiftApp" : galgasScanner4_1__25_MacSwiftApp,
  "insertAfter" : galgasScanner4_1__25_insertAfter,
  "libpmAtPath" : galgasScanner4_1__25_libpmAtPath,
  "macCodeSign" : galgasScanner4_1__25_macCodeSign,
  "tool-source" : galgasScanner4_1__25_tool_2D_source,
  "errorMessage" : galgasScanner4_1__25_errorMessage,
  "initArgLabel" : galgasScanner4_1__25_initArgLabel,
  "insertBefore" : galgasScanner4_1__25_insertBefore,
  "insertSetter" : galgasScanner4_1__25_insertSetter,
  "removeSetter" : galgasScanner4_1__25_removeSetter,
  "searchMethod" : galgasScanner4_1__25_searchMethod,
  "searchString" : galgasScanner4_1__25_searchString,
  "makefile-unix" : galgasScanner4_1__25_makefile_2D_unix,
  "replaceSetter" : galgasScanner4_1__25_replaceSetter,
  "MacOSDeployment" : galgasScanner4_1__25_MacOSDeployment,
  "makefile-macosx" : galgasScanner4_1__25_makefile_2D_macosx,
  "searchSubscript" : galgasScanner4_1__25_searchSubscript,
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
  "makefile-x86linux64-on-macosx" : galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx,
  "makefile-arm64-linux-on-macosx" : galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx
]

fileprivate func search_into_galgasScanner_34__attributeKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_galgasScanner_34__attributeKeyWordList [inSearchedString, default: galgasScanner4_1_]
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_galgasScanner_34__galgasKeyWordList : [String : UInt16] = [
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
  "json" : galgasScanner4_1_json,
  "list" : galgasScanner4_1_list,
  "loop" : galgasScanner4_1_loop,
  "proc" : galgasScanner4_1_proc,
  "rule" : galgasScanner4_1_rule,
  "self" : galgasScanner4_1_self,
  "send" : galgasScanner4_1_send,
  "then" : galgasScanner4_1_then,
  "true" : galgasScanner4_1_true,
  "weak" : galgasScanner4_1_weak,
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
  "guard" : galgasScanner4_1_guard,
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

fileprivate func search_into_galgasScanner_34__galgasKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_galgasScanner_34__galgasKeyWordList [inSearchedString, default: galgasScanner4_1_]
}



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
    "Floating Point Constants", // 7
    "Character Constants", // 8
    "String Constants", // 9
    "Type Names (@...)", // 10
    "Attributes (%...)", // 11
    "Comments", // 12
    "Lexical error", // 13
    "Template" // 14
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
    "galgasScanner4-floatStyle", // 7
    "galgasScanner4-characterStyle", // 8
    "galgasScanner4-stringStyle", // 9
    "galgasScanner4-typeNameStyle", // 10
    "galgasScanner4-attributeStyle", // 11
    "galgasScanner4-commentStyle", // 12
    "galgasScanner4.ERROR", // 13
    "galgasScanner4.TEMPLATE" // 14
  ]
  return kStyleArray [Int (inIndex)]
}

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
let galgasScanner4_1__27_char_27_ : UInt16 = 4
let galgasScanner4_1__24_terminal_24_ : UInt16 = 5
let galgasScanner4_1_comment : UInt16 = 6
let galgasScanner4_1_commentMark : UInt16 = 7
let galgasScanner4_1__40_type : UInt16 = 8
let galgasScanner4_1__3F_selector_3A_ : UInt16 = 9
let galgasScanner4_1__3F_ : UInt16 = 10
let galgasScanner4_1__3F__21_selector_3A_ : UInt16 = 11
let galgasScanner4_1__3F__21_ : UInt16 = 12
let galgasScanner4_1__21_selector_3A_ : UInt16 = 13
let galgasScanner4_1__21_ : UInt16 = 14
let galgasScanner4_1__21__3F_selector_3A_ : UInt16 = 15
let galgasScanner4_1__21__3F_ : UInt16 = 16
let galgasScanner4_1__3C_ : UInt16 = 17
let galgasScanner4_1__3C__3D_ : UInt16 = 18
let galgasScanner4_1__3C__3C_ : UInt16 = 19
let galgasScanner4_1__3C_non_5F_terminal_3E_ : UInt16 = 20
let galgasScanner4_1__22_string_22_ : UInt16 = 21
let galgasScanner4_1_abstract : UInt16 = 22
let galgasScanner4_1_after : UInt16 = 23
let galgasScanner4_1_as : UInt16 = 24
let galgasScanner4_1_before : UInt16 = 25
let galgasScanner4_1_between : UInt16 = 26
let galgasScanner4_1_block : UInt16 = 27
let galgasScanner4_1_boolset : UInt16 = 28
let galgasScanner4_1_case : UInt16 = 29
let galgasScanner4_1_class : UInt16 = 30
let galgasScanner4_1_default : UInt16 = 31
let galgasScanner4_1_dict : UInt16 = 32
let galgasScanner4_1_do : UInt16 = 33
let galgasScanner4_1_drop : UInt16 = 34
let galgasScanner4_1_else : UInt16 = 35
let galgasScanner4_1_elsif : UInt16 = 36
let galgasScanner4_1_end : UInt16 = 37
let galgasScanner4_1_enum : UInt16 = 38
let galgasScanner4_1_error : UInt16 = 39
let galgasScanner4_1_extension : UInt16 = 40
let galgasScanner4_1_extern : UInt16 = 41
let galgasScanner4_1_false : UInt16 = 42
let galgasScanner4_1_fileprivate : UInt16 = 43
let galgasScanner4_1_filewrapper : UInt16 = 44
let galgasScanner4_1_final : UInt16 = 45
let galgasScanner4_1_for : UInt16 = 46
let galgasScanner4_1_fixit : UInt16 = 47
let galgasScanner4_1_func : UInt16 = 48
let galgasScanner4_1_grammar : UInt16 = 49
let galgasScanner4_1_graph : UInt16 = 50
let galgasScanner4_1_guard : UInt16 = 51
let galgasScanner4_1_gui : UInt16 = 52
let galgasScanner4_1_if : UInt16 = 53
let galgasScanner4_1_in : UInt16 = 54
let galgasScanner4_1_indexing : UInt16 = 55
let galgasScanner4_1_init : UInt16 = 56
let galgasScanner4_1_is : UInt16 = 57
let galgasScanner4_1_json : UInt16 = 58
let galgasScanner4_1_label : UInt16 = 59
let galgasScanner4_1_let : UInt16 = 60
let galgasScanner4_1_lexique : UInt16 = 61
let galgasScanner4_1_list : UInt16 = 62
let galgasScanner4_1_log : UInt16 = 63
let galgasScanner4_1_loop : UInt16 = 64
let galgasScanner4_1_map : UInt16 = 65
let galgasScanner4_1_mod : UInt16 = 66
let galgasScanner4_1_mutating : UInt16 = 67
let galgasScanner4_1_nil : UInt16 = 68
let galgasScanner4_1_not : UInt16 = 69
let galgasScanner4_1_on : UInt16 = 70
let galgasScanner4_1_operator : UInt16 = 71
let galgasScanner4_1_option : UInt16 = 72
let galgasScanner4_1_or : UInt16 = 73
let galgasScanner4_1_override : UInt16 = 74
let galgasScanner4_1_package : UInt16 = 75
let galgasScanner4_1_parse : UInt16 = 76
let galgasScanner4_1_public : UInt16 = 77
let galgasScanner4_1_protected : UInt16 = 78
let galgasScanner4_1_private : UInt16 = 79
let galgasScanner4_1_proc : UInt16 = 80
let galgasScanner4_1_project : UInt16 = 81
let galgasScanner4_1_repeat : UInt16 = 82
let galgasScanner4_1_rewind : UInt16 = 83
let galgasScanner4_1_rule : UInt16 = 84
let galgasScanner4_1_select : UInt16 = 85
let galgasScanner4_1_self : UInt16 = 86
let galgasScanner4_1_send : UInt16 = 87
let galgasScanner4_1_sortedlist : UInt16 = 88
let galgasScanner4_1_spoil : UInt16 = 89
let galgasScanner4_1_super : UInt16 = 90
let galgasScanner4_1_struct : UInt16 = 91
let galgasScanner4_1_style : UInt16 = 92
let galgasScanner4_1_switch : UInt16 = 93
let galgasScanner4_1_syntax : UInt16 = 94
let galgasScanner4_1_tag : UInt16 = 95
let galgasScanner4_1_template : UInt16 = 96
let galgasScanner4_1_then : UInt16 = 97
let galgasScanner4_1_true : UInt16 = 98
let galgasScanner4_1_typealias : UInt16 = 99
let galgasScanner4_1_unused : UInt16 = 100
let galgasScanner4_1_var : UInt16 = 101
let galgasScanner4_1_warning : UInt16 = 102
let galgasScanner4_1_weak : UInt16 = 103
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
let galgasScanner4_1__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx : UInt16 = 129
let galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx : UInt16 = 130
let galgasScanner4_1__25_MacOS : UInt16 = 131
let galgasScanner4_1__25_MacSwiftApp : UInt16 = 132
let galgasScanner4_1__25_MacOSDeployment : UInt16 = 133
let galgasScanner4_1__25_nonAtomicSelection : UInt16 = 134
let galgasScanner4_1__25_once : UInt16 = 135
let galgasScanner4_1__25_preserved : UInt16 = 136
let galgasScanner4_1__25_quietOutputByDefault : UInt16 = 137
let galgasScanner4_1__25_replaceBy : UInt16 = 138
let galgasScanner4_1__25_remove : UInt16 = 139
let galgasScanner4_1__25_removeSetter : UInt16 = 140
let galgasScanner4_1__25_replaceSetter : UInt16 = 141
let galgasScanner4_1__25_searchMethod : UInt16 = 142
let galgasScanner4_1__25_searchSubscript : UInt16 = 143
let galgasScanner4_1__25_searchString : UInt16 = 144
let galgasScanner4_1__25_tool_2D_source : UInt16 = 145
let galgasScanner4_1__25_templateEndMark : UInt16 = 146
let galgasScanner4_1__25_templateReplacement : UInt16 = 147
let galgasScanner4_1__25_translate : UInt16 = 148
let galgasScanner4_1__25_usefull : UInt16 = 149
let galgasScanner4_1__2A_ : UInt16 = 150
let galgasScanner4_1__2C_ : UInt16 = 151
let galgasScanner4_1__2B_ : UInt16 = 152
let galgasScanner4_1__26__2B_ : UInt16 = 153
let galgasScanner4_1__26__2D_ : UInt16 = 154
let galgasScanner4_1__26__2A_ : UInt16 = 155
let galgasScanner4_1__26__2F_ : UInt16 = 156
let galgasScanner4_1__3E_ : UInt16 = 157
let galgasScanner4_1__3B_ : UInt16 = 158
let galgasScanner4_1__3A_ : UInt16 = 159
let galgasScanner4_1__3A__3E_ : UInt16 = 160
let galgasScanner4_1__2D_ : UInt16 = 161
let galgasScanner4_1__28_ : UInt16 = 162
let galgasScanner4_1__29_ : UInt16 = 163
let galgasScanner4_1__2D__3E_ : UInt16 = 164
let galgasScanner4_1__3D__3D_ : UInt16 = 165
let galgasScanner4_1__3D_ : UInt16 = 166
let galgasScanner4_1__26__26_ : UInt16 = 167
let galgasScanner4_1__5B_ : UInt16 = 168
let galgasScanner4_1__5D_ : UInt16 = 169
let galgasScanner4_1__2B__2B__3D_ : UInt16 = 170
let galgasScanner4_1__2E_ : UInt16 = 171
let galgasScanner4_1__40__28_ : UInt16 = 172
let galgasScanner4_1__2E__2E__2E_ : UInt16 = 173
let galgasScanner4_1__2E__2E__3C_ : UInt16 = 174
let galgasScanner4_1__2B__3D_ : UInt16 = 175
let galgasScanner4_1__2D__3D_ : UInt16 = 176
let galgasScanner4_1__2A__3D_ : UInt16 = 177
let galgasScanner4_1__2F__3D_ : UInt16 = 178
let galgasScanner4_1__26__3D_ : UInt16 = 179
let galgasScanner4_1__7C__3D_ : UInt16 = 180
let galgasScanner4_1__5E__3D_ : UInt16 = 181
let galgasScanner4_1__2F_ : UInt16 = 182
let galgasScanner4_1__21__3D_ : UInt16 = 183
let galgasScanner4_1__3E__3D_ : UInt16 = 184
let galgasScanner4_1__26_ : UInt16 = 185
let galgasScanner4_1__7B_ : UInt16 = 186
let galgasScanner4_1__7D_ : UInt16 = 187
let galgasScanner4_1__60_ : UInt16 = 188
let galgasScanner4_1__7C__7C_ : UInt16 = 189
let galgasScanner4_1__7C_ : UInt16 = 190
let galgasScanner4_1__5E_ : UInt16 = 191
let galgasScanner4_1__3E__3E_ : UInt16 = 192
let galgasScanner4_1__7E_ : UInt16 = 193
let galgasScanner4_1__2D__2D_ : UInt16 = 194
let galgasScanner4_1__2B__2B_ : UInt16 = 195
let galgasScanner4_1__26__2D__2D_ : UInt16 = 196
let galgasScanner4_1__26__2B__2B_ : UInt16 = 197
let galgasScanner4_1__3D__3D__3D_ : UInt16 = 198
let galgasScanner4_1__21__3D__3D_ : UInt16 = 199
let galgasScanner4_1__3F__5E_ : UInt16 = 200
let galgasScanner4_1__21__5E_ : UInt16 = 201
let galgasScanner4_2_ERROR : UInt16 = 202
let galgasScanner4_2_TEMPLATE : UInt16 = 203

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


