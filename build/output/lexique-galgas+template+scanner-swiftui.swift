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
  false /* before */,
  false /* between */,
  false /* block */,
  false /* optionset */,
  false /* case */,
  false /* class */,
  false /* default */,
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
  false /* final */,
  false /* for */,
  false /* fixit */,
  false /* func */,
  false /* grammar */,
  false /* graph */,
  false /* guard */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* init */,
  false /* is */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* loop */,
  false /* map */,
  false /* mutating */,
  false /* nil */,
  false /* not */,
  false /* on */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* package */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* repeat */,
  false /* rewind */,
  false /* rule */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* sortedarray */,
  false /* spoil */,
  false /* super */,
  false /* struct */,
  false /* style */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* var */,
  false /* warning */,
  false /* while */,
  false /* with */,
  false /* #applicationBundleBase */,
  false /* #clonable */,
  false /* #comparable */,
  false /* #equatable */,
  false /* #errorMessage */,
  false /* #from */,
  false /* #generatedInSeparateFile */,
  false /* #initArgLabel */,
  false /* #insertAfter */,
  false /* #insertBefore */,
  false /* #insertOrReplaceSetter */,
  false /* #insertSetter */,
  false /* #nonAtomicSelection */,
  false /* #preserved */,
  false /* #quietOutputByDefault */,
  false /* #replaceBy */,
  false /* #remove */,
  false /* #removeSetter */,
  false /* #replaceSetter */,
  false /* #searchMethod */,
  false /* #searchSubscript */,
  false /* #searchString */,
  false /* #templateEndMark */,
  false /* #templateReplacement */,
  false /* #translatable */,
  false /* #unused */,
  false /* #usefull */,
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
  false /* % */,
  false /* [ */,
  false /* ] */,
  false /* ++= */,
  false /* . */,
  false /* @( */,
  false /* ... */,
  false /* ..< */,
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
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
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
//   Template Scanner Class
//--------------------------------------------------------------------------------------------------

class ScannerFor_galgasTemplateScanner : ScannerFor_galgasScanner4 {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func isTemplateLexique () -> Bool { true }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*  override func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
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
  } */

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
        tokenCode: galgasScanner4_2_TEMPLATE,
        templateDelimiterIndex: self.mEndTemplateDelimiterIndex
      )
    }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


