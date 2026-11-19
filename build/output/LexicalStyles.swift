//--------------------------------------------------------------------------------------------------
//   EDITOR SETTING VIEW
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct EditorSettingView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mUnused = false

  @AppStorage("FontForSource")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightForSource")
  private var mLineHeight : Int = 12

  @AppStorage("ColorForSource")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorForSource-keywordsStyle")
  private var mColorFor_keywordsStyle : Color = .black

  @AppStorage("BoldForSource-keywordsStyle")
  private var mBoldFor_keywordsStyle : Bool = false

  @AppStorage("ItalicForSource-keywordsStyle")
  private var mItalicFor_keywordsStyle : Bool = false

  @AppStorage("ColorForSource-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldForSource-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicForSource-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorForSource-selectorStyle")
  private var mColorFor_selectorStyle : Color = .black

  @AppStorage("BoldForSource-selectorStyle")
  private var mBoldFor_selectorStyle : Bool = false

  @AppStorage("ItalicForSource-selectorStyle")
  private var mItalicFor_selectorStyle : Bool = false

  @AppStorage("ColorForSource-terminalStyle")
  private var mColorFor_terminalStyle : Color = .black

  @AppStorage("BoldForSource-terminalStyle")
  private var mBoldFor_terminalStyle : Bool = false

  @AppStorage("ItalicForSource-terminalStyle")
  private var mItalicFor_terminalStyle : Bool = false

  @AppStorage("ColorForSource-nonTerminalStyle")
  private var mColorFor_nonTerminalStyle : Color = .black

  @AppStorage("BoldForSource-nonTerminalStyle")
  private var mBoldFor_nonTerminalStyle : Bool = false

  @AppStorage("ItalicForSource-nonTerminalStyle")
  private var mItalicFor_nonTerminalStyle : Bool = false

  @AppStorage("ColorForSource-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldForSource-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicForSource-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorForSource-floatStyle")
  private var mColorFor_floatStyle : Color = .black

  @AppStorage("BoldForSource-floatStyle")
  private var mBoldFor_floatStyle : Bool = false

  @AppStorage("ItalicForSource-floatStyle")
  private var mItalicFor_floatStyle : Bool = false

  @AppStorage("ColorForSource-characterStyle")
  private var mColorFor_characterStyle : Color = .black

  @AppStorage("BoldForSource-characterStyle")
  private var mBoldFor_characterStyle : Bool = false

  @AppStorage("ItalicForSource-characterStyle")
  private var mItalicFor_characterStyle : Bool = false

  @AppStorage("ColorForSource-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldForSource-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicForSource-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorForSource-typeNameStyle")
  private var mColorFor_typeNameStyle : Color = .black

  @AppStorage("BoldForSource-typeNameStyle")
  private var mBoldFor_typeNameStyle : Bool = false

  @AppStorage("ItalicForSource-typeNameStyle")
  private var mItalicFor_typeNameStyle : Bool = false

  @AppStorage("ColorForSource-attributeStyle")
  private var mColorFor_attributeStyle : Color = .black

  @AppStorage("BoldForSource-attributeStyle")
  private var mBoldFor_attributeStyle : Bool = false

  @AppStorage("ItalicForSource-attributeStyle")
  private var mItalicFor_attributeStyle : Bool = false

  @AppStorage("ColorForSource-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldForSource-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicForSource-commentStyle")
  private var mItalicFor_commentStyle : Bool = false


  @AppStorage("ColorForSource_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldForSource_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicForSource_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorForSourceForSource_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldForSource_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicForSource_template")
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
      LabeledContent ("Default Color") {
        HStack {
          ColorPicker ("", selection: self.$mDefaultColor).labelsHidden ()
          Toggle ("Bold", isOn: self.$mUnused).hidden () // Hidden, unused
          Toggle ("Italic", isOn: self.$mUnused).hidden () // Hidden, unused
        }
      }
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
      LabeledContent ("Attributes (#...)") {
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

struct LexicalStyleSnapShot {
  fileprivate(set) var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  fileprivate(set) var mLineHeight : Int = 12
  fileprivate(set) var mDefaultColor : Color = .black
  fileprivate var mColorFor_keywordsStyle : Color = .black
  fileprivate var mBoldFor_keywordsStyle : Bool = false
  fileprivate var mItalicFor_keywordsStyle : Bool = false
  fileprivate var mColorFor_delimitersStyle : Color = .black
  fileprivate var mBoldFor_delimitersStyle : Bool = false
  fileprivate var mItalicFor_delimitersStyle : Bool = false
  fileprivate var mColorFor_selectorStyle : Color = .black
  fileprivate var mBoldFor_selectorStyle : Bool = false
  fileprivate var mItalicFor_selectorStyle : Bool = false
  fileprivate var mColorFor_terminalStyle : Color = .black
  fileprivate var mBoldFor_terminalStyle : Bool = false
  fileprivate var mItalicFor_terminalStyle : Bool = false
  fileprivate var mColorFor_nonTerminalStyle : Color = .black
  fileprivate var mBoldFor_nonTerminalStyle : Bool = false
  fileprivate var mItalicFor_nonTerminalStyle : Bool = false
  fileprivate var mColorFor_integerStyle : Color = .black
  fileprivate var mBoldFor_integerStyle : Bool = false
  fileprivate var mItalicFor_integerStyle : Bool = false
  fileprivate var mColorFor_floatStyle : Color = .black
  fileprivate var mBoldFor_floatStyle : Bool = false
  fileprivate var mItalicFor_floatStyle : Bool = false
  fileprivate var mColorFor_characterStyle : Color = .black
  fileprivate var mBoldFor_characterStyle : Bool = false
  fileprivate var mItalicFor_characterStyle : Bool = false
  fileprivate var mColorFor_stringStyle : Color = .black
  fileprivate var mBoldFor_stringStyle : Bool = false
  fileprivate var mItalicFor_stringStyle : Bool = false
  fileprivate var mColorFor_typeNameStyle : Color = .black
  fileprivate var mBoldFor_typeNameStyle : Bool = false
  fileprivate var mItalicFor_typeNameStyle : Bool = false
  fileprivate var mColorFor_attributeStyle : Color = .black
  fileprivate var mBoldFor_attributeStyle : Bool = false
  fileprivate var mItalicFor_attributeStyle : Bool = false
  fileprivate var mColorFor_commentStyle : Color = .black
  fileprivate var mBoldFor_commentStyle : Bool = false
  fileprivate var mItalicFor_commentStyle : Bool = false
  fileprivate var mColorFor_lexical_error : Color = .red
  fileprivate var mBoldFor_lexical_error : Bool = false
  fileprivate var mItalicFor_lexical_error : Bool = false
  fileprivate var mColorFor_template : Color = .gray
  fileprivate var mBoldFor_template : Bool = false
  fileprivate var mItalicFor_template : Bool = false
  fileprivate(set) var mAttributeArray = [[NSAttributedString.Key : Any]?] ()
}

//--------------------------------------------------------------------------------------------------

func stylesDidChange (_ ioLexicalStyleSnapShot : inout LexicalStyleSnapShot) -> Bool {
  var didChange = false
  let ud = UserDefaults.standard
  if let s = ud.string (forKey: "FontForSource"), let v = CustomFont (rawValue: s) {
    if ioLexicalStyleSnapShot.mFont != v {
      ioLexicalStyleSnapShot.mFont = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "LineHeightForSource"), let v = Int (s) {
    if ioLexicalStyleSnapShot.mLineHeight != v {
      ioLexicalStyleSnapShot.mLineHeight = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mDefaultColor != v {
      ioLexicalStyleSnapShot.mDefaultColor = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-keywordsStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_keywordsStyle != v {
      ioLexicalStyleSnapShot.mColorFor_keywordsStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-keywordsStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-keywordsStyle")
    if ioLexicalStyleSnapShot.mBoldFor_keywordsStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_keywordsStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-keywordsStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-keywordsStyle")
    if ioLexicalStyleSnapShot.mItalicFor_keywordsStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_keywordsStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-delimitersStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_delimitersStyle != v {
      ioLexicalStyleSnapShot.mColorFor_delimitersStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-delimitersStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-delimitersStyle")
    if ioLexicalStyleSnapShot.mBoldFor_delimitersStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_delimitersStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-delimitersStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-delimitersStyle")
    if ioLexicalStyleSnapShot.mItalicFor_delimitersStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_delimitersStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-selectorStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_selectorStyle != v {
      ioLexicalStyleSnapShot.mColorFor_selectorStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-selectorStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-selectorStyle")
    if ioLexicalStyleSnapShot.mBoldFor_selectorStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_selectorStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-selectorStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-selectorStyle")
    if ioLexicalStyleSnapShot.mItalicFor_selectorStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_selectorStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-terminalStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_terminalStyle != v {
      ioLexicalStyleSnapShot.mColorFor_terminalStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-terminalStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-terminalStyle")
    if ioLexicalStyleSnapShot.mBoldFor_terminalStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_terminalStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-terminalStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-terminalStyle")
    if ioLexicalStyleSnapShot.mItalicFor_terminalStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_terminalStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-nonTerminalStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_nonTerminalStyle != v {
      ioLexicalStyleSnapShot.mColorFor_nonTerminalStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-nonTerminalStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-nonTerminalStyle")
    if ioLexicalStyleSnapShot.mBoldFor_nonTerminalStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_nonTerminalStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-nonTerminalStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-nonTerminalStyle")
    if ioLexicalStyleSnapShot.mItalicFor_nonTerminalStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_nonTerminalStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-integerStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_integerStyle != v {
      ioLexicalStyleSnapShot.mColorFor_integerStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-integerStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-integerStyle")
    if ioLexicalStyleSnapShot.mBoldFor_integerStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_integerStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-integerStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-integerStyle")
    if ioLexicalStyleSnapShot.mItalicFor_integerStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_integerStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-floatStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_floatStyle != v {
      ioLexicalStyleSnapShot.mColorFor_floatStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-floatStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-floatStyle")
    if ioLexicalStyleSnapShot.mBoldFor_floatStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_floatStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-floatStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-floatStyle")
    if ioLexicalStyleSnapShot.mItalicFor_floatStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_floatStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-characterStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_characterStyle != v {
      ioLexicalStyleSnapShot.mColorFor_characterStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-characterStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-characterStyle")
    if ioLexicalStyleSnapShot.mBoldFor_characterStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_characterStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-characterStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-characterStyle")
    if ioLexicalStyleSnapShot.mItalicFor_characterStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_characterStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-stringStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_stringStyle != v {
      ioLexicalStyleSnapShot.mColorFor_stringStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-stringStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-stringStyle")
    if ioLexicalStyleSnapShot.mBoldFor_stringStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_stringStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-stringStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-stringStyle")
    if ioLexicalStyleSnapShot.mItalicFor_stringStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_stringStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-typeNameStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_typeNameStyle != v {
      ioLexicalStyleSnapShot.mColorFor_typeNameStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-typeNameStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-typeNameStyle")
    if ioLexicalStyleSnapShot.mBoldFor_typeNameStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_typeNameStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-typeNameStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-typeNameStyle")
    if ioLexicalStyleSnapShot.mItalicFor_typeNameStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_typeNameStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-attributeStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_attributeStyle != v {
      ioLexicalStyleSnapShot.mColorFor_attributeStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-attributeStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-attributeStyle")
    if ioLexicalStyleSnapShot.mBoldFor_attributeStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_attributeStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-attributeStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-attributeStyle")
    if ioLexicalStyleSnapShot.mItalicFor_attributeStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_attributeStyle = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorForSource-commentStyle"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_commentStyle != v {
      ioLexicalStyleSnapShot.mColorFor_commentStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldForSource-commentStyle") != nil {
    let v = ud.bool (forKey: "BoldForSource-commentStyle")
    if ioLexicalStyleSnapShot.mBoldFor_commentStyle != v {
      ioLexicalStyleSnapShot.mBoldFor_commentStyle = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicForSource-commentStyle") != nil {
    let v = ud.bool (forKey: "ItalicForSource-commentStyle")
    if ioLexicalStyleSnapShot.mItalicFor_commentStyle != v {
      ioLexicalStyleSnapShot.mItalicFor_commentStyle = v
      didChange = true
    }
  }
    if let s = ud.string (forKey: "ColorFor_lexical_error"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_lexical_error != v {
      ioLexicalStyleSnapShot.mColorFor_lexical_error = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldFor_lexical_error") != nil {
    let v = ud.bool (forKey: "BoldFor_lexical_error")
    if ioLexicalStyleSnapShot.mBoldFor_lexical_error != v {
      ioLexicalStyleSnapShot.mBoldFor_lexical_error = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicFor_lexical_error") != nil {
    let v = ud.bool (forKey: "ItalicFor_lexical_error")
    if ioLexicalStyleSnapShot.mItalicFor_lexical_error != v {
      ioLexicalStyleSnapShot.mItalicFor_lexical_error = v
      didChange = true
    }
  }
  if let s = ud.string (forKey: "ColorFor_template"), let v = Color (rawValue: s) {
    if ioLexicalStyleSnapShot.mColorFor_template != v {
      ioLexicalStyleSnapShot.mColorFor_template = v
      didChange = true
    }
  }
  if ud.string (forKey: "BoldFor_template") != nil {
    let v = ud.bool (forKey: "BoldFor_template")
    if ioLexicalStyleSnapShot.mBoldFor_template != v {
      ioLexicalStyleSnapShot.mBoldFor_template = v
      didChange = true
    }
  }
  if ud.string (forKey: "ItalicFor_template") != nil {
    let v = ud.bool (forKey: "ItalicFor_template")
    if ioLexicalStyleSnapShot.mItalicFor_template != v {
      ioLexicalStyleSnapShot.mItalicFor_template = v
      didChange = true
    }
  }
//--- Update mAttributeArray ?
  if didChange {
    let fontManager = NSFontManager.shared
    let boldFont = fontManager.convert (ioLexicalStyleSnapShot.mFont.nsFont, toHaveTrait: .boldFontMask)
    let italicFont = fontManager.convert (ioLexicalStyleSnapShot.mFont.nsFont, toHaveTrait: .italicFontMask)
    let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)
    ioLexicalStyleSnapShot.mAttributeArray.removeAll (keepingCapacity: true)
    var attributes = [NSAttributedString.Key : Any] ()
  //--- Attributes for keywordsStyle
    if ioLexicalStyleSnapShot.mColorFor_keywordsStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_keywordsStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_keywordsStyle && ioLexicalStyleSnapShot.mItalicFor_keywordsStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_keywordsStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_keywordsStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for delimitersStyle
    if ioLexicalStyleSnapShot.mColorFor_delimitersStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_delimitersStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_delimitersStyle && ioLexicalStyleSnapShot.mItalicFor_delimitersStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_delimitersStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_delimitersStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for selectorStyle
    if ioLexicalStyleSnapShot.mColorFor_selectorStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_selectorStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_selectorStyle && ioLexicalStyleSnapShot.mItalicFor_selectorStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_selectorStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_selectorStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for terminalStyle
    if ioLexicalStyleSnapShot.mColorFor_terminalStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_terminalStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_terminalStyle && ioLexicalStyleSnapShot.mItalicFor_terminalStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_terminalStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_terminalStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for nonTerminalStyle
    if ioLexicalStyleSnapShot.mColorFor_nonTerminalStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_nonTerminalStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_nonTerminalStyle && ioLexicalStyleSnapShot.mItalicFor_nonTerminalStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_nonTerminalStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_nonTerminalStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for integerStyle
    if ioLexicalStyleSnapShot.mColorFor_integerStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_integerStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_integerStyle && ioLexicalStyleSnapShot.mItalicFor_integerStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_integerStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_integerStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for floatStyle
    if ioLexicalStyleSnapShot.mColorFor_floatStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_floatStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_floatStyle && ioLexicalStyleSnapShot.mItalicFor_floatStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_floatStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_floatStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for characterStyle
    if ioLexicalStyleSnapShot.mColorFor_characterStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_characterStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_characterStyle && ioLexicalStyleSnapShot.mItalicFor_characterStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_characterStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_characterStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for stringStyle
    if ioLexicalStyleSnapShot.mColorFor_stringStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_stringStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_stringStyle && ioLexicalStyleSnapShot.mItalicFor_stringStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_stringStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_stringStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for typeNameStyle
    if ioLexicalStyleSnapShot.mColorFor_typeNameStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_typeNameStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_typeNameStyle && ioLexicalStyleSnapShot.mItalicFor_typeNameStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_typeNameStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_typeNameStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for attributeStyle
    if ioLexicalStyleSnapShot.mColorFor_attributeStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_attributeStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_attributeStyle && ioLexicalStyleSnapShot.mItalicFor_attributeStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_attributeStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_attributeStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Attributes for commentStyle
    if ioLexicalStyleSnapShot.mColorFor_commentStyle != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_commentStyle)
    }
    if ioLexicalStyleSnapShot.mBoldFor_commentStyle && ioLexicalStyleSnapShot.mItalicFor_commentStyle {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_commentStyle {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_commentStyle {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Lexical error
    if ioLexicalStyleSnapShot.mColorFor_lexical_error != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_lexical_error)
    }
    if ioLexicalStyleSnapShot.mBoldFor_lexical_error && ioLexicalStyleSnapShot.mItalicFor_lexical_error {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_lexical_error {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_lexical_error {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
    attributes.removeAll (keepingCapacity: true)
  //--- Template
    if ioLexicalStyleSnapShot.mColorFor_template != ioLexicalStyleSnapShot.mDefaultColor {
      attributes [.foregroundColor] = NSColor (ioLexicalStyleSnapShot.mColorFor_template)
    }
    if ioLexicalStyleSnapShot.mBoldFor_template && ioLexicalStyleSnapShot.mItalicFor_template {
      attributes [.font] = boldItalicFont
    }else if ioLexicalStyleSnapShot.mBoldFor_template {
      attributes [.font] = boldFont
    }else if ioLexicalStyleSnapShot.mItalicFor_template {
      attributes [.font] = italicFont
    }
    ioLexicalStyleSnapShot.mAttributeArray.append (attributes.isEmpty ? nil : attributes)
  }
//---
  return didChange
}

//--------------------------------------------------------------------------------------------------
