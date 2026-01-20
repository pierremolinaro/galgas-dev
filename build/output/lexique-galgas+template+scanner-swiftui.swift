//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------

fileprivate let kTemplateReplacementArray_galgasTemplateScanner : [String] = [
  "\\%",
  "\\n",
  "\\\\"
]

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------

fileprivate let kTemplateDefinitionArray_galgasTemplateScanner : [TemplateDelimiter] = [
  TemplateDelimiter (startString: "%", endString: "%", discardStartString: true)
]

//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark
//--------------------------------------------------------------------------------------------------

fileprivate let kEndOfScriptInTemplateArray_galgasTemplateScanner : [Bool] = [
  false /* identifier */,
  false /* double.xxx */,
  false /* literalInt */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* comment */,
  false /* commentMark */,
  false /* @type */,
  false /* ?selector: */,
  false /* ? */,
  false /* ?!selector: */,
  false /* ?! */,
  false /* !selector: */,
  false /* ! */,
  false /* !?selector: */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* abstract */,
  false /* after */,
  false /* as */,
  false /* bang */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* cast */,
  false /* case */,
  false /* class */,
  false /* default */,
  false /* dict */,
  false /* do */,
  false /* drop */,
  false /* else */,
  false /* elsif */,
  false /* end */,
  false /* enum */,
  false /* error */,
  false /* extension */,
  false /* extern */,
  false /* false */,
  false /* fileprivate */,
  false /* filewrapper */,
  false /* for */,
  false /* final */,
  false /* fixit */,
  false /* func */,
  false /* getter */,
  false /* grammar */,
  false /* graph */,
  false /* guard */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* init */,
  false /* insert */,
  false /* is */,
  false /* json */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* message */,
  false /* method */,
  false /* mod */,
  false /* mutating */,
  false /* nil */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* parse */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* remove */,
  false /* repeat */,
  false /* replace */,
  false /* rewind */,
  false /* rule */,
  false /* search */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* setter */,
  false /* sortedlist */,
  false /* spoil */,
  false /* struct */,
  false /* style */,
  false /* super */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* typealias */,
  false /* unused */,
  false /* valueclass */,
  false /* var */,
  false /* warning */,
  false /* weak */,
  false /* while */,
  false /* with */,
  false /* %app-source */,
  false /* %applicationBundleBase */,
  false /* %clonable */,
  false /* %codeblocks-linux32 */,
  false /* %codeblocks-linux64 */,
  false /* %codeblocks-windows */,
  false /* %comparable */,
  false /* %equatable */,
  false /* %from */,
  false /* %generatedInSeparateFile */,
  false /* %initArgLabel */,
  false /* %libpmAtPath */,
  false /* %MacSwiftApp */,
  false /* %macCodeSign */,
  false /* %makefile-macosx */,
  false /* %makefile-unix */,
  false /* %makefile-x86linux32-on-macosx */,
  false /* %makefile-x86linux64-on-macosx */,
  false /* %makefile-arm64-linux-on-macosx */,
  false /* %makefile-win32-on-macosx */,
  false /* %nonAtomicSelection */,
  false /* %once */,
  false /* %preserved */,
  false /* %quietOutputByDefault */,
  false /* %searchSubscript */,
  false /* %templateEndMark */,
  false /* %translate */,
  false /* %usefull */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* ++= */,
  false /* . */,
  false /* ... */,
  false /* ..< */,
  false /* @{ */,
  false /* @( */,
  false /* @[ */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* &= */,
  false /* |= */,
  false /* ^= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* -- */,
  false /* ++ */,
  false /* &-- */,
  false /* &++ */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */
]


//--------------------------------------------------------------------------------------------------

/* func galgasTemplateScanner_lexiqueIdentifier () -> String {
  return "galgasTemplateScanner"
} */

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_galgasTemplateScanner : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_galgasTemplateScanner")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_galgasTemplateScanner")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_galgasTemplateScanner")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_galgasTemplateScanner-keywordsStyle")
  private var mColorFor_keywordsStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-keywordsStyle")
  private var mBoldFor_keywordsStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-keywordsStyle")
  private var mItalicFor_keywordsStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-selectorStyle")
  private var mColorFor_selectorStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-selectorStyle")
  private var mBoldFor_selectorStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-selectorStyle")
  private var mItalicFor_selectorStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-terminalStyle")
  private var mColorFor_terminalStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-terminalStyle")
  private var mBoldFor_terminalStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-terminalStyle")
  private var mItalicFor_terminalStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-nonTerminalStyle")
  private var mColorFor_nonTerminalStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-nonTerminalStyle")
  private var mBoldFor_nonTerminalStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-nonTerminalStyle")
  private var mItalicFor_nonTerminalStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-floatStyle")
  private var mColorFor_floatStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-floatStyle")
  private var mBoldFor_floatStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-floatStyle")
  private var mItalicFor_floatStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-characterStyle")
  private var mColorFor_characterStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-characterStyle")
  private var mBoldFor_characterStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-characterStyle")
  private var mItalicFor_characterStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-typeNameStyle")
  private var mColorFor_typeNameStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-typeNameStyle")
  private var mBoldFor_typeNameStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-typeNameStyle")
  private var mItalicFor_typeNameStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-attributeStyle")
  private var mColorFor_attributeStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-attributeStyle")
  private var mBoldFor_attributeStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-attributeStyle")
  private var mItalicFor_attributeStyle : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_galgasTemplateScanner-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner-commentStyle")
  private var mItalicFor_commentStyle : Bool = false


  @AppStorage("ColorFor_galgasTemplateScanner_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_galgasTemplateScanner_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_galgasTemplateScanner_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_galgasTemplateScanner_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_galgasTemplateScanner_template")
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
//   Template Scanner Class
//--------------------------------------------------------------------------------------------------

class ScannerFor_galgasTemplateScanner : ScannerFor_galgasScanner3 {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func isTemplateLexique () -> Bool { true }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_galgasTemplateScanner"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_galgasTemplateScanner"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-keywordsStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_keywordsStyle != v {
        self.mColorFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-keywordsStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-keywordsStyle")
      if self.mBoldFor_keywordsStyle != v {
        self.mBoldFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-keywordsStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-keywordsStyle")
      if self.mItalicFor_keywordsStyle != v {
        self.mItalicFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-selectorStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_selectorStyle != v {
        self.mColorFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-selectorStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-selectorStyle")
      if self.mBoldFor_selectorStyle != v {
        self.mBoldFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-selectorStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-selectorStyle")
      if self.mItalicFor_selectorStyle != v {
        self.mItalicFor_selectorStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-terminalStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_terminalStyle != v {
        self.mColorFor_terminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-terminalStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-terminalStyle")
      if self.mBoldFor_terminalStyle != v {
        self.mBoldFor_terminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-terminalStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-terminalStyle")
      if self.mItalicFor_terminalStyle != v {
        self.mItalicFor_terminalStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-nonTerminalStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_nonTerminalStyle != v {
        self.mColorFor_nonTerminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-nonTerminalStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-nonTerminalStyle")
      if self.mBoldFor_nonTerminalStyle != v {
        self.mBoldFor_nonTerminalStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-nonTerminalStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-nonTerminalStyle")
      if self.mItalicFor_nonTerminalStyle != v {
        self.mItalicFor_nonTerminalStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-floatStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_floatStyle != v {
        self.mColorFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-floatStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-floatStyle")
      if self.mBoldFor_floatStyle != v {
        self.mBoldFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-floatStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-floatStyle")
      if self.mItalicFor_floatStyle != v {
        self.mItalicFor_floatStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-characterStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_characterStyle != v {
        self.mColorFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-characterStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-characterStyle")
      if self.mBoldFor_characterStyle != v {
        self.mBoldFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-characterStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-characterStyle")
      if self.mItalicFor_characterStyle != v {
        self.mItalicFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-typeNameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_typeNameStyle != v {
        self.mColorFor_typeNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-typeNameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-typeNameStyle")
      if self.mBoldFor_typeNameStyle != v {
        self.mBoldFor_typeNameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-typeNameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-typeNameStyle")
      if self.mItalicFor_typeNameStyle != v {
        self.mItalicFor_typeNameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-attributeStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_attributeStyle != v {
        self.mColorFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-attributeStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-attributeStyle")
      if self.mBoldFor_attributeStyle != v {
        self.mBoldFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-attributeStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-attributeStyle")
      if self.mItalicFor_attributeStyle != v {
        self.mItalicFor_attributeStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasTemplateScanner_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_galgasTemplateScanner_template") != nil {
      let v = ud.bool (forKey: "BoldFor_galgasTemplateScanner_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_galgasTemplateScanner_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_galgasTemplateScanner_template")
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
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func parseLexicalTokenForLexicalColoring () -> LexicalToken {
    let startLocation = self.currentLocation
    if let idx = self.mEndTemplateDelimiterIndex,
       self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {
      self.mEndTemplateDelimiterIndex = nil
    }
    if self.mEndTemplateDelimiterIndex != nil {
      return super.parseLexicalTokenForLexicalColoring ()
    }else{ // In template string, find code start string
      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {
        var idx = 0
        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {
          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {
            self.mEndTemplateDelimiterIndex = idx
          }
          idx += 1
        }
        if self.mEndTemplateDelimiterIndex == nil {
          self.advance ()
        }
      }
      return LexicalToken (
        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
        tokenCode: galgasScanner3_2_TEMPLATE,
        templateDelimiterIndex: self.mEndTemplateDelimiterIndex
      )
    }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


