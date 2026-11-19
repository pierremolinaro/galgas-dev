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

  @AppStorage("ColorForSource-attributeStyle")
  private var mColorFor_attributeStyle : Color = .black

  @AppStorage("BoldForSource-attributeStyle")
  private var mBoldFor_attributeStyle : Bool = false

  @AppStorage("ItalicForSource-attributeStyle")
  private var mItalicFor_attributeStyle : Bool = false

  @AppStorage("ColorForSource-characterStyle")
  private var mColorFor_characterStyle : Color = .black

  @AppStorage("BoldForSource-characterStyle")
  private var mBoldFor_characterStyle : Bool = false

  @AppStorage("ItalicForSource-characterStyle")
  private var mItalicFor_characterStyle : Bool = false

  @AppStorage("ColorForSource-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldForSource-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicForSource-commentStyle")
  private var mItalicFor_commentStyle : Bool = false

  @AppStorage("ColorForSource-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldForSource-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicForSource-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorForSource-floatStyle")
  private var mColorFor_floatStyle : Color = .black

  @AppStorage("BoldForSource-floatStyle")
  private var mBoldFor_floatStyle : Bool = false

  @AppStorage("ItalicForSource-floatStyle")
  private var mItalicFor_floatStyle : Bool = false

  @AppStorage("ColorForSource-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldForSource-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicForSource-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorForSource-keywordsStyle")
  private var mColorFor_keywordsStyle : Color = .black

  @AppStorage("BoldForSource-keywordsStyle")
  private var mBoldFor_keywordsStyle : Bool = false

  @AppStorage("ItalicForSource-keywordsStyle")
  private var mItalicFor_keywordsStyle : Bool = false

  @AppStorage("ColorForSource-nonTerminalStyle")
  private var mColorFor_nonTerminalStyle : Color = .black

  @AppStorage("BoldForSource-nonTerminalStyle")
  private var mBoldFor_nonTerminalStyle : Bool = false

  @AppStorage("ItalicForSource-nonTerminalStyle")
  private var mItalicFor_nonTerminalStyle : Bool = false

  @AppStorage("ColorForSource-selectorStyle")
  private var mColorFor_selectorStyle : Color = .black

  @AppStorage("BoldForSource-selectorStyle")
  private var mBoldFor_selectorStyle : Bool = false

  @AppStorage("ItalicForSource-selectorStyle")
  private var mItalicFor_selectorStyle : Bool = false

  @AppStorage("ColorForSource-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldForSource-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicForSource-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorForSource-terminalStyle")
  private var mColorFor_terminalStyle : Color = .black

  @AppStorage("BoldForSource-terminalStyle")
  private var mBoldFor_terminalStyle : Bool = false

  @AppStorage("ItalicForSource-terminalStyle")
  private var mItalicFor_terminalStyle : Bool = false

  @AppStorage("ColorForSource-typeNameStyle")
  private var mColorFor_typeNameStyle : Color = .black

  @AppStorage("BoldForSource-typeNameStyle")
  private var mBoldFor_typeNameStyle : Bool = false

  @AppStorage("ItalicForSource-typeNameStyle")
  private var mItalicFor_typeNameStyle : Bool = false


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
      LabeledContent ("Attributes (#...)") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_attributeStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_attributeStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_attributeStyle)
        }
      }
      LabeledContent ("Character Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_characterStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_characterStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_characterStyle)
        }
      }
      LabeledContent ("Comments") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Delimiters") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitersStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitersStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitersStyle)
        }
      }
      LabeledContent ("Floating Point Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_floatStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_floatStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_floatStyle)
        }
      }
      LabeledContent ("Integer Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_integerStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_integerStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_integerStyle)
        }
      }
      LabeledContent ("Keywords") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_keywordsStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_keywordsStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_keywordsStyle)
        }
      }
      LabeledContent ("Non Terminal Symbols") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_nonTerminalStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_nonTerminalStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_nonTerminalStyle)
        }
      }
      LabeledContent ("Selectors") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_selectorStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_selectorStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_selectorStyle)
        }
      }
      LabeledContent ("String Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_stringStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_stringStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_stringStyle)
        }
      }
      LabeledContent ("Terminal Symbols") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_terminalStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_terminalStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_terminalStyle)
        }
      }
      LabeledContent ("Type Names (@...)") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_typeNameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_typeNameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_typeNameStyle)
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
