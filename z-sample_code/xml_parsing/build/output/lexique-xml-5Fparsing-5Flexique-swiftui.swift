//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE xml_parsing_lexique
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_xml_parsing_lexique : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_xml_parsing_lexique")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_xml_parsing_lexique")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_xml_parsing_lexique")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_xml_parsing_lexique-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_xml_parsing_lexique-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_xml_parsing_lexique-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_xml_parsing_lexique-nameStyle")
  private var mColorFor_nameStyle : Color = .black

  @AppStorage("BoldFor_xml_parsing_lexique-nameStyle")
  private var mBoldFor_nameStyle : Bool = false

  @AppStorage("ItalicFor_xml_parsing_lexique-nameStyle")
  private var mItalicFor_nameStyle : Bool = false

  @AppStorage("ColorFor_xml_parsing_lexique-attributeValue")
  private var mColorFor_attributeValue : Color = .black

  @AppStorage("BoldFor_xml_parsing_lexique-attributeValue")
  private var mBoldFor_attributeValue : Bool = false

  @AppStorage("ItalicFor_xml_parsing_lexique-attributeValue")
  private var mItalicFor_attributeValue : Bool = false

  @AppStorage("ColorFor_xml_parsing_lexique-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_xml_parsing_lexique-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_xml_parsing_lexique-commentStyle")
  private var mItalicFor_commentStyle : Bool = false

  @AppStorage("ColorFor_xml_parsing_lexique-textStyle")
  private var mColorFor_textStyle : Color = .black

  @AppStorage("BoldFor_xml_parsing_lexique-textStyle")
  private var mBoldFor_textStyle : Bool = false

  @AppStorage("ItalicFor_xml_parsing_lexique-textStyle")
  private var mItalicFor_textStyle : Bool = false


  @AppStorage("ColorFor_xml_parsing_lexique_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_xml_parsing_lexique_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_xml_parsing_lexique_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_xml_parsing_lexique_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_xml_parsing_lexique_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_xml_parsing_lexique_template")
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
      LabeledContent ("Delimiter") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitersStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitersStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitersStyle)
        }
      }
      LabeledContent ("Name") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_nameStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_nameStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_nameStyle)
        }
      }
      LabeledContent ("Attribute value") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_attributeValue).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_attributeValue)
          Toggle ("Italic", isOn: self.$mItalicFor_attributeValue)
        }
      }
      LabeledContent ("Comment") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Text") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_textStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_textStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_textStyle)
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

class ScannerFor_xml_parsing_lexique : AbstractScanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [LexicalToken] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func popUpDefinitionList () -> [[UInt16]] {
    return gPopUpData_xml_parsing_lexique
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func blockComment () -> String? {
    return gBlockComment_xml_parsing_lexique
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

  private var mLexicalAttribute_tokenString : String = ""

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return xml_parsing_lexique_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 10
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      4, // 1 : xml_parsing_lexique_1_comment
      2, // 2 : xml_parsing_lexique_1_name
      3, // 3 : xml_parsing_lexique_1_value
      1, // 4 : xml_parsing_lexique_1__3C_
      1, // 5 : xml_parsing_lexique_1__3C__3F_
      1, // 6 : xml_parsing_lexique_1__3E_
      1, // 7 : xml_parsing_lexique_1__3F__3E_
      1, // 8 : xml_parsing_lexique_1__2F__3E_
      1, // 9 : xml_parsing_lexique_1__3C__2F_
      1, // 10 : xml_parsing_lexique_1__3D_
      6, // 11 : xml_parsing_lexique_2_ERROR
      7  // 12 : xml_parsing_lexique_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : xml_parsing_lexique_1_comment
      true, // 2 : xml_parsing_lexique_1_name
      true, // 3 : xml_parsing_lexique_1_value
      true, // 4 : xml_parsing_lexique_1__3C_
      true, // 5 : xml_parsing_lexique_1__3C__3F_
      true, // 6 : xml_parsing_lexique_1__3E_
      true, // 7 : xml_parsing_lexique_1__3F__3E_
      true, // 8 : xml_parsing_lexique_1__2F__3E_
      true, // 9 : xml_parsing_lexique_1__3C__2F_
      true, // 10 : xml_parsing_lexique_1__3D_
      false, // 11 : xml_parsing_lexique_2_ERROR
      false  // 12 : xml_parsing_lexique_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func indexingTitles () -> [String] {

    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 5
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return xml_parsing_lexique_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return xml_parsing_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  final var mLineHeight : Int = 12
  final var mDefaultColor : Color = .black
  final var mColorFor_delimitersStyle : Color = .black
  final var mBoldFor_delimitersStyle : Bool = false
  final var mItalicFor_delimitersStyle : Bool = false
  final var mColorFor_nameStyle : Color = .black
  final var mBoldFor_nameStyle : Bool = false
  final var mItalicFor_nameStyle : Bool = false
  final var mColorFor_attributeValue : Color = .black
  final var mBoldFor_attributeValue : Bool = false
  final var mItalicFor_attributeValue : Bool = false
  final var mColorFor_commentStyle : Color = .black
  final var mBoldFor_commentStyle : Bool = false
  final var mItalicFor_commentStyle : Bool = false
  final var mColorFor_textStyle : Color = .black
  final var mBoldFor_textStyle : Bool = false
  final var mItalicFor_textStyle : Bool = false
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
    if let s = ud.string (forKey: "FontFor_xml_parsing_lexique"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_xml_parsing_lexique"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_xml_parsing_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_xml_parsing_lexique-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_xml_parsing_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_xml_parsing_lexique-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique-nameStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_nameStyle != v {
        self.mColorFor_nameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_xml_parsing_lexique-nameStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_xml_parsing_lexique-nameStyle")
      if self.mBoldFor_nameStyle != v {
        self.mBoldFor_nameStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_xml_parsing_lexique-nameStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_xml_parsing_lexique-nameStyle")
      if self.mItalicFor_nameStyle != v {
        self.mItalicFor_nameStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique-attributeValue"), let v = Color (rawValue: s) {
      if self.mColorFor_attributeValue != v {
        self.mColorFor_attributeValue = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_xml_parsing_lexique-attributeValue") != nil {
      let v = ud.bool (forKey: "BoldFor_xml_parsing_lexique-attributeValue")
      if self.mBoldFor_attributeValue != v {
        self.mBoldFor_attributeValue = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_xml_parsing_lexique-attributeValue") != nil {
      let v = ud.bool (forKey: "ItalicFor_xml_parsing_lexique-attributeValue")
      if self.mItalicFor_attributeValue != v {
        self.mItalicFor_attributeValue = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_xml_parsing_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_xml_parsing_lexique-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_xml_parsing_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_xml_parsing_lexique-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique-textStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_textStyle != v {
        self.mColorFor_textStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_xml_parsing_lexique-textStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_xml_parsing_lexique-textStyle")
      if self.mBoldFor_textStyle != v {
        self.mBoldFor_textStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_xml_parsing_lexique-textStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_xml_parsing_lexique-textStyle")
      if self.mItalicFor_textStyle != v {
        self.mItalicFor_textStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_xml_parsing_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_xml_parsing_lexique_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_xml_parsing_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_xml_parsing_lexique_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_xml_parsing_lexique_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_xml_parsing_lexique_template") != nil {
      let v = ud.bool (forKey: "BoldFor_xml_parsing_lexique_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_xml_parsing_lexique_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_xml_parsing_lexique_template")
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
    //--- Attributes for nameStyle
      if self.mColorFor_nameStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_nameStyle)
      }
      if self.mBoldFor_nameStyle && self.mItalicFor_nameStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_nameStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_nameStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for attributeValue
      if self.mColorFor_attributeValue != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_attributeValue)
      }
      if self.mBoldFor_attributeValue && self.mItalicFor_attributeValue {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_attributeValue {
        attributes [.font] = boldFont
      }else if self.mItalicFor_attributeValue {
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
    //--- Attributes for textStyle
      if self.mColorFor_textStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_textStyle)
      }
      if self.mBoldFor_textStyle && self.mItalicFor_textStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_textStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_textStyle {
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
        if idx > 0, idx < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [idx - 1] {
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
                                                   popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {
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
      let newToken = LexicalToken (
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
      let token : LexicalToken = self.parseLexicalTokenForLexicalColoring ()
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
          if styleIndex > 0, styleIndex < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
    ioPopupMenuItems = self.updateEntryPopUpButtons (self.mTokenArray)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> LexicalToken {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_tokenString = ""
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForInputString ("<!--", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputString ("&amp;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 38)
        }else if scanningOk && (self.testForInputString ("&lt;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 60)
        }else if scanningOk && (self.testForInputString ("&gt;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 62)
        }else if scanningOk && (self.testForInputString ("&quot;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
        }else if scanningOk && (self.testForInputString ("&apos;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 39)
        }else if scanningOk && (self.testForInputFromChar (1, toChar:44) || self.testForInputFromChar (46, toChar:1114111)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else if scanningOk && (self.notTestForInputString ("-->", error: &scanningOk)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 45)
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = xml_parsing_lexique_1_comment
    }else if scanningOk && self.testForInputString ("?>", advance: true) {
      tokenCode = xml_parsing_lexique_1__3F__3E_
    }else if scanningOk && self.testForInputString ("<?", advance: true) {
      tokenCode = xml_parsing_lexique_1__3C__3F_
    }else if scanningOk && self.testForInputString ("</", advance: true) {
      tokenCode = xml_parsing_lexique_1__3C__2F_
    }else if scanningOk && self.testForInputString ("/>", advance: true) {
      tokenCode = xml_parsing_lexique_1__2F__3E_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = xml_parsing_lexique_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = xml_parsing_lexique_1__3D_
    }else if scanningOk && self.testForInputString ("<", advance: true) {
      tokenCode = xml_parsing_lexique_1__3C_
    }else if scanningOk && (self.testForChar_isUnicodeLetter ()) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = xml_parsing_lexique_1_name
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputString ("&amp;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 38)
        }else if scanningOk && (self.testForInputString ("&lt;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 60)
        }else if scanningOk && (self.testForInputString ("&gt;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 62)
        }else if scanningOk && (self.testForInputString ("&quot;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
        }else if scanningOk && (self.testForInputString ("&apos;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 39)
        }else if scanningOk && (self.notTestForInputString ("\"", error: &scanningOk)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = xml_parsing_lexique_1_value
    }else if scanningOk && (self.testForInputChar (39)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputString ("&amp;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 38)
        }else if scanningOk && (self.testForInputString ("&lt;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 60)
        }else if scanningOk && (self.testForInputString ("&gt;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 62)
        }else if scanningOk && (self.testForInputString ("&quot;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
        }else if scanningOk && (self.testForInputString ("&apos;", advance: true)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 39)
        }else if scanningOk && (self.notTestForInputString ("'", error: &scanningOk)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = xml_parsing_lexique_1_value
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = xml_parsing_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = xml_parsing_lexique_2_TEMPLATE
      self.advance ()
    }
    return LexicalToken (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}



//--------------------------------------------------------------------------------------------------

func xml_parsing_lexique_lexiqueIdentifier () -> String {
  return "xml_parsing_lexique"
}

//--------------------------------------------------------------------------------------------------

func xml_parsing_lexique_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Delimiter", // 1
    "Name", // 2
    "Attribute value", // 3
    "Comment", // 4
    "Text", // 5
    "Lexical error", // 6
    "Template" // 7
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------

func xml_parsing_lexique_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "xml_parsing_lexique", // 0
    "xml_parsing_lexique-delimitersStyle", // 1
    "xml_parsing_lexique-nameStyle", // 2
    "xml_parsing_lexique-attributeValue", // 3
    "xml_parsing_lexique-commentStyle", // 4
    "xml_parsing_lexique-textStyle", // 5
    "xml_parsing_lexique.ERROR", // 6
    "xml_parsing_lexique.TEMPLATE" // 7
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------

fileprivate let kTemplateReplacementArray_xml_5F_parsing_5F_lexique : [String] = [
  "&amp;",
  "&lt;",
  "&gt;",
  "&quot;",
  "&apos;",
  "&#"
]


//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------

fileprivate let kTemplateDefinitionArray_xml_5F_parsing_5F_lexique : [SWIFT_TemplateDelimiter] = [
  SWIFT_TemplateDelimiter (startString: "<", endString: "", discardStartString: false)
]


//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

let xml_parsing_lexique_1_ : UInt16 = 0
let xml_parsing_lexique_1_comment : UInt16 = 1
let xml_parsing_lexique_1_name : UInt16 = 2
let xml_parsing_lexique_1_value : UInt16 = 3
let xml_parsing_lexique_1__3C_ : UInt16 = 4
let xml_parsing_lexique_1__3C__3F_ : UInt16 = 5
let xml_parsing_lexique_1__3E_ : UInt16 = 6
let xml_parsing_lexique_1__3F__3E_ : UInt16 = 7
let xml_parsing_lexique_1__2F__3E_ : UInt16 = 8
let xml_parsing_lexique_1__3C__2F_ : UInt16 = 9
let xml_parsing_lexique_1__3D_ : UInt16 = 10
let xml_parsing_lexique_2_ERROR : UInt16 = 11
let xml_parsing_lexique_2_TEMPLATE : UInt16 = 12

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


