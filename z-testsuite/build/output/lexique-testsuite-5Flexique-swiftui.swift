//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE testsuite_lexique
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_testsuite_lexique : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_testsuite_lexique")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_testsuite_lexique")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_testsuite_lexique")
  private var mDefaultColor : Color = .black


  @AppStorage("ColorFor_testsuite_lexique_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_testsuite_lexique_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_testsuite_lexique_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_testsuite_lexique_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_testsuite_lexique_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_testsuite_lexique_template")
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

class ScannerFor_testsuite_lexique : AbstractScanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [LexicalToken] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func popUpDefinitionList () -> [[UInt16]] {
    return gPopUpData_testsuite_lexique
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func lineComment () -> String? {
    return gLineComment_testsuite_lexique
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


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return testsuite_lexique_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      1, // 1 : testsuite_lexique_2_ERROR
      2  // 2 : testsuite_lexique_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      false, // 1 : testsuite_lexique_2_ERROR
      false  // 2 : testsuite_lexique_2_TEMPLATE
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
    return 0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return testsuite_lexique_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return testsuite_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  final var mLineHeight : Int = 12
  final var mDefaultColor : Color = .black
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
    if let s = ud.string (forKey: "FontFor_testsuite_lexique"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_testsuite_lexique"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_testsuite_lexique"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_testsuite_lexique_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_testsuite_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_testsuite_lexique_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_testsuite_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_testsuite_lexique_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_testsuite_lexique_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_testsuite_lexique_template") != nil {
      let v = ud.bool (forKey: "BoldFor_testsuite_lexique_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_testsuite_lexique_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_testsuite_lexique_template")
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
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
if self.testForInputChar (0) { // End of source text ?
      tokenCode = testsuite_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = testsuite_lexique_2_TEMPLATE
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

func testsuite_lexique_lexiqueIdentifier () -> String {
  return "testsuite_lexique"
}

//--------------------------------------------------------------------------------------------------

func testsuite_lexique_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Lexical error", // 1
    "Template" // 2
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------

func testsuite_lexique_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "testsuite_lexique", // 0
    "testsuite_lexique.ERROR", // 1
    "testsuite_lexique.TEMPLATE" // 2
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

let testsuite_lexique_1_ : UInt16 = 0
let testsuite_lexique_2_ERROR : UInt16 = 1
let testsuite_lexique_2_TEMPLATE : UInt16 = 2

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


