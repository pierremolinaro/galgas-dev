//
//  Created by Pierre Molinaro on 08/10/2023.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

fileprivate let DEBUG_RANGE_ARRAY = false

//--------------------------------------------------------------------------------------------------

fileprivate func DEBUG_PRINT (_ inString : String) {
  if DEBUG_RANGE_ARRAY {
    Swift.print (inString)
  }
}

//--------------------------------------------------------------------------------------------------

extension SWIFT_SingleDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func computeLexicalColoring (editedRange inEditedRange : NSRange,
                               changeInLength inChangeInLength : Int) {
    //Swift.print ("computeLexicalColoring: inEditedRange \(inEditedRange), inChangeInLength \(inChangeInLength)")
    if let tokenizer = self.mTokenizer {
      let nsString = self.mTextStorage.string as NSString
    //---------------------------------------- Edited line range
      var editedRange = inEditedRange
      if inChangeInLength < 0 {
        editedRange.length -= inChangeInLength
      }
      if (editedRange.location + editedRange.length) > nsString.length {
        editedRange.length = nsString.length - editedRange.location
      }
      let lineRange = nsString.lineRange (for: editedRange)
      DEBUG_PRINT ("computeLexicalColoring: inEditedRange \(inEditedRange), inChangeInLength \(inChangeInLength) -> lineRange \(lineRange)")
      DEBUG_PRINT ("Edited line «\(nsString.substring (with: lineRange))»")
    //---------------------------------------- Remove edited token from range array
      DEBUG_PRINT ("  ➀ Remove tokens in line range (\(self.mTokenRangeArray.count) tokens)")
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
      DEBUG_PRINT ("    ---> foundEditedRange \(foundEditedRange), tokenRangeInsertionIndex \(tokenRangeInsertionIndex)")
    //--- Remove tokens within edited range
      if foundEditedRange {
        var loopForRemovingTokens = true
        while loopForRemovingTokens, tokenRangeInsertionIndex < self.mTokenRangeArray.count {
          let testedToken = self.mTokenRangeArray [tokenRangeInsertionIndex]
          DEBUG_PRINT ("         tested token range \(testedToken.range)")
          loopForRemovingTokens = (testedToken.range.location >= lineRange.location)
            &&
            (testedToken.range.location + testedToken.range.length) <= (lineRange.location + lineRange.length - inChangeInLength)
          if loopForRemovingTokens {
            self.mTokenRangeArray.remove (at: tokenRangeInsertionIndex)
            DEBUG_PRINT ("          removed token at \(tokenRangeInsertionIndex)")
          }
        }
        DEBUG_PRINT ("    ---> \(self.mTokenRangeArray.count) tokens")
      //--- Translate token after edited range
        var idx = tokenRangeInsertionIndex
        while idx < self.mTokenRangeArray.count {
          let r = self.mTokenRangeArray [idx]
          let newLocation = r.range.location + inChangeInLength
          self.mTokenRangeArray [idx] = SWIFT_Token (
            range: NSRange (location: newLocation, length: r.range.length),
            tokenCode: r.tokenCode,
            templateDelimiterIndex: r.templateDelimiterIndex
          )
          idx += 1
        }
      }
    //--- Set default attributes to edited range
      DEBUG_PRINT ("  ➁ Set default attributes to edited range")
      let modifiedRange =  NSRange (
        location: firstEditedLocation,
        length: afterLastEditedLocation - firstEditedLocation
      )
      DEBUG_PRINT ("    --> range \(modifiedRange)")
      if !self.mStyleAttributeArray.isEmpty {
        self.mTextStorage.setAttributes (self.mStyleAttributeArray [0], range: modifiedRange)
      }
    //--- Loop over edited range for scanning tokens
      DEBUG_PRINT ("  ➂ Loop over edited range for scanning tokens, firstEditedLocation \(firstEditedLocation)")
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
      while loop, tokenizer.currentLocation < nsString.length {
        let newToken : SWIFT_Token = tokenizer.parseLexicalTokenForLexicalColoring ()
        if newToken.tokenCode > 0 {
          if tokenRangeInsertionIndex < self.mTokenRangeArray.count,
                   newToken == self.mTokenRangeArray [tokenRangeInsertionIndex] {
            loop = false
          }else{
            self.mTokenRangeArray.insert (newToken, at: tokenRangeInsertionIndex)
            DEBUG_PRINT ("    inserted at \(tokenRangeInsertionIndex) : \(newToken), \"\(self.mTextStorage.string.nsSubstring (with: newToken.range))\"")
            tokenRangeInsertionIndex += 1
            afterLastEditedLocation = max (afterLastEditedLocation, newToken.range.location + newToken.range.length)
            let styleIndex = tokenizer.styleIndexFor (token: newToken.tokenCode)
            if styleIndex > 0, styleIndex < (self.mStyleAttributeArray.count - 1) {
              attributesArray.append ((self.mStyleAttributeArray [Int (styleIndex) + 1], newToken.range))
            }
          }
        }
      }
    //--- Apply new attributes
      DEBUG_PRINT ("  ➃ Apply \(attributesArray.count) new attributes")
      for (attributes, range) in attributesArray {
        if DEBUG_RANGE_ARRAY {
          if range.location < 0 {
            Swift.print ("  ERROR: Negative range.location \(range.location), line \(#line)")
            ()
          }else if (range.location + range.length) > nsString.length {
            Swift.print ("  ERROR: too large range \(range), string length \(nsString.length), line \(#line)")
            ()
          }
        }
        DEBUG_PRINT ("    set attributes for range \(range)")
        self.mTextStorage.addAttributes (attributes, range: range)
      }
    //--- IMPORTANT! This provides a default font to non represented glyphs
      self.mTextStorage.fixFontAttribute (in: modifiedRange)
    //--- Update entry popup buttons
      DEBUG_PRINT ("  ➄ Update entry popup buttons")
      self.updateEntryPopUpButtons (tokenizer.popupListData ())
    //--- Check that range array is correct
      DEBUG_PRINT ("  ➅ Check that range array is correct")
  //    self.checkTokenArrayIsCorrect ()
    //--- Done
      DEBUG_PRINT ("computeLexicalColoring DONE")
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func checkTokenArrayIsCorrect () {
    if DEBUG_RANGE_ARRAY, let tokenizer = self.mTokenizer {
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
          Swift.print ("  OK \(idx) : \(tokenRangeArray [idx]), \"\(self.mTextStorage.string.nsSubstring (with: tokenRangeArray [idx].range))\"")
        }else{
          Swift.print ("  ERROR \(idx) : mTokenRangeArray \(self.mTokenRangeArray [idx]), tokenRangeArray \(tokenRangeArray [idx]), \"\(self.mTextStorage.string.nsSubstring (with: tokenRangeArray [idx].range))\"")
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
