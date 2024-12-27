//
//  Created by Pierre Molinaro on 08/10/2023.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

fileprivate let CHECK_RANGE_ARRAY = false

//--------------------------------------------------------------------------------------------------

fileprivate func DEBUG_PRINT (_ inString : String) {
  if CHECK_RANGE_ARRAY {
    Swift.print (inString)
  }
}

//--------------------------------------------------------------------------------------------------

extension SWIFT_SingleDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func computeLexicalColoring (_ inEditedRange : NSRange, _ inChangeInLength : Int) {
    if let tokenizer = self.mTokenizer {
//      self.mTextStorage.font = tokenizer.font.propval
      let lineRange = (self.mTextStorage.string as NSString).lineRange (for: inEditedRange)
      DEBUG_PRINT ("inEditedRange \(inEditedRange), inChangeInLength \(inChangeInLength) -> lineRange \(lineRange)")
    //---------------------------------------- Remove edited token from range array
      var tokenRangeInsertionIndex = 0
      var foundEditedRange = false
      var firstEditedLocation = lineRange.location
      var afterLastEditedLocation = lineRange.location + lineRange.length
    //--- Preserve token before edited range
      while !foundEditedRange && (tokenRangeInsertionIndex < self.mTokenRangeArray.count) {
        let r = self.mTokenRangeArray [tokenRangeInsertionIndex]
        foundEditedRange = (r.range.location + r.range.length) >= lineRange.location
        if foundEditedRange {
          firstEditedLocation = min (firstEditedLocation, r.range.location)
        }else{
          tokenRangeInsertionIndex += 1
        }
      }
      DEBUG_PRINT ("  foundEditedRange \(foundEditedRange), tokenRangeInsertionIndex \(tokenRangeInsertionIndex)")
    //--- Remove tokens within edited range
      if foundEditedRange {
        var foundRangeToMove = false
        while !foundRangeToMove && (tokenRangeInsertionIndex < self.mTokenRangeArray.count) {
          let r = self.mTokenRangeArray [tokenRangeInsertionIndex]
          foundRangeToMove = r.range.location > (lineRange.location + lineRange.length)
          if !foundRangeToMove {
            self.mTokenRangeArray.remove (at: tokenRangeInsertionIndex)
            DEBUG_PRINT ("  REMOVED at \(tokenRangeInsertionIndex) : \(r)")
          }
        }
        DEBUG_PRINT ("  self.mTokenRangeArray.count \(self.mTokenRangeArray.count), tokenRangeInsertionIndex \(tokenRangeInsertionIndex)")
      //--- Translate token after edited range
        if foundRangeToMove {
          var idx = tokenRangeInsertionIndex
          while idx < self.mTokenRangeArray.count {
            let r = self.mTokenRangeArray [idx]
            self.mTokenRangeArray [idx] = SWIFT_Token (
              range: NSRange (location: r.range.location + inChangeInLength, length: r.range.length),
              tokenCode: r.tokenCode,
              templateDelimiterIndex: r.templateDelimiterIndex
            )
            idx += 1
          }
        }
      }
   //--- Loop over edited range for scanning tokens
      var templateDelimiterIndex : Int? = nil
      if tokenRangeInsertionIndex > 0, (tokenRangeInsertionIndex - 1) < self.mTokenRangeArray.count {
        templateDelimiterIndex = self.mTokenRangeArray [tokenRangeInsertionIndex - 1].templateDelimiterIndex
      }
      tokenizer.set (
        sourceString: self.mTextStorage.string,
        location: firstEditedLocation,
        templateDelimiterIndex: templateDelimiterIndex
      )
      var loop = true
      var attributesArray = [([NSAttributedString.Key : Any], NSRange)] ()
      while loop && (tokenizer.currentLocation < (self.mTextStorage.string as NSString).length) {
        let s : SWIFT_Token = tokenizer.parseLexicalTokenForLexicalColoring ()
        if s.tokenCode > 0 {
          while tokenRangeInsertionIndex < self.mTokenRangeArray.count, (s.range.location + s.range.length) < NSMaxRange (self.mTokenRangeArray [tokenRangeInsertionIndex].range) {
            self.mTokenRangeArray.remove (at: tokenRangeInsertionIndex)
          }
          if tokenRangeInsertionIndex < self.mTokenRangeArray.count, s == self.mTokenRangeArray [tokenRangeInsertionIndex] {
            loop = false
          }else{
            self.mTokenRangeArray.insert (s, at: tokenRangeInsertionIndex)
            DEBUG_PRINT ("  inserted at \(tokenRangeInsertionIndex) : \(s), \"\((self.mTextStorage.string as NSString).substring (with: s.range))\"")
            tokenRangeInsertionIndex += 1
            afterLastEditedLocation = max (afterLastEditedLocation, s.range.location + s.range.length)
            let styleIndex = tokenizer.styleIndexFor (token: s.tokenCode)
            if styleIndex > 0 {
              attributesArray.append ((tokenizer.attributes (fromStyleIndex: styleIndex), s.range))
            }
          }
        }
      }
    //--- Set default attributes to edited range
      let fontManager = NSFontManager.shared
      var font = fontManager.convert (
        tokenizer.font.propval,
        toHaveTrait: tokenizer.bold (forStyle: 0).propval ? .boldFontMask : .unboldFontMask
      )
      font = fontManager.convert (
        font,
        toHaveTrait: tokenizer.italic (forStyle: 0).propval ? .italicFontMask : .unitalicFontMask
      )
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (tokenizer.lineHeight.propval) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .foregroundColor : tokenizer.color (forStyle: 0).propval,
        .font : font,
        .paragraphStyle : ps
      ]
      let modifiedRange =  NSRange (location: firstEditedLocation, length: afterLastEditedLocation - firstEditedLocation)
      self.mTextStorage.addAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply new attributes
      for (attributes, range) in attributesArray {
        self.mTextStorage.addAttributes (attributes, range: range)
      }
    //--- IMPORTANT! This provides a default font to non represented glyphs
      self.mTextStorage.fixFontAttribute (in: modifiedRange)
    //--- Update display
      self.updateEntryPopUpButtons (tokenizer.popupListData ())
    //--- Check that range array is correct
      if CHECK_RANGE_ARRAY {
        tokenizer.set (sourceString: self.mTextStorage.string, location: 0, templateDelimiterIndex: nil)
        var tokenRangeArray = [SWIFT_Token] ()
        while tokenizer.currentLocation < (self.mTextStorage.string as NSString).length {
          let s : SWIFT_Token = tokenizer.parseLexicalTokenForLexicalColoring ()
          if s.tokenCode > 0 {
            tokenRangeArray.append (s)
          }
        }
        var ok = true
        let n = min (self.mTokenRangeArray.count, tokenRangeArray.count)
        var idx = 0
        while idx < n {
          if self.mTokenRangeArray [idx] == tokenRangeArray [idx] {
            Swift.print ("  OK \(idx) : \(tokenRangeArray [idx]), \"\((self.mTextStorage.string as NSString).substring (with: tokenRangeArray [idx].range))\"")
          }else{
            Swift.print ("  ERROR \(idx) : mTokenRangeArray \(self.mTokenRangeArray [idx]), tokenRangeArray \(tokenRangeArray [idx]), \"\((self.mTextStorage.string as NSString).substring (with: tokenRangeArray [idx].range))\"")
            ok = false
            idx = n
          }
          idx += 1
        }
        self.mTokenRangeArray = tokenRangeArray
        if self.mTokenRangeArray.count != tokenRangeArray.count {
          Swift.print ("  ERROR self.mTokenRangeArray \(self.mTokenRangeArray.count), tokenRangeArray \(tokenRangeArray.count)")
          ok = false
        }
        if !ok {
          Swift.print ("BEEP!")
          NSSound.beep ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
