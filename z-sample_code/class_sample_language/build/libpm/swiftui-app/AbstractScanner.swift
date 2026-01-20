//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 10/01/2023.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct ScanningPointStructForCocoa {
  let previousChar : UInt32
  let currentChar : UInt32
  let currentLocation : Int
}

//--------------------------------------------------------------------------------------------------

class AbstractScanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private final var mSourceString = NSString ()
  private final var mCurrentLocation = 0
  private final var mCurrentChar : UInt32 = 0
  private final var mPreviousChar : UInt32 = 0
  final var mEndTemplateDelimiterIndex : Int? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var currentChar : UInt32 { return self.mCurrentChar }
  final var previousChar : UInt32 { return self.mPreviousChar }
  final var currentLocation : Int { return mCurrentLocation }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func resetScannerLocation (withString inString : NSString) {
    self.mSourceString = inString
    self.mCurrentLocation = 0
    self.mCurrentChar = (inString.length > 0) ? UInt32 (inString.character (at: 0)) : 0
    self.mPreviousChar = 0
    self.mEndTemplateDelimiterIndex = nil
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func resetScanner (withString inString : NSString,
                           location inStartLocation : Int,
                           templateDelimiterIndex inIndex : Int?) {
    self.mSourceString = inString
    self.mCurrentLocation = inStartLocation
    self.mEndTemplateDelimiterIndex = inIndex
    if self.mCurrentLocation < self.mSourceString.length {
      self.mCurrentChar = UInt32 (self.mSourceString.character (at: self.mCurrentLocation))
    }else{
      self.mCurrentChar = 0
    }
    self.mPreviousChar = 0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func savedScanningPoint () -> ScanningPointStructForCocoa {
    return ScanningPointStructForCocoa (previousChar: self.mPreviousChar, currentChar: self.mCurrentChar, currentLocation: self.mCurrentLocation)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func restoreScanningPoint (_ inSavedScanningPoint : ScanningPointStructForCocoa) {
    self.mPreviousChar = inSavedScanningPoint.previousChar
    self.mCurrentChar = inSavedScanningPoint.currentChar
    self.mCurrentLocation = inSavedScanningPoint.currentLocation
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func testForChar_isUnicodeLetter () -> Bool {
    let ok = ((0x61 <= self.mCurrentChar) && (self.mCurrentChar <= 0x7A)) ||
         ((0x41 <= self.mCurrentChar) && (self.mCurrentChar <= 0x5A)) ||
         (0xB5 == self.mCurrentChar) ||
         ((0xC0 <= self.mCurrentChar) && (self.mCurrentChar <= 0xD6)) ||
         ((0xD8 <= self.mCurrentChar) && (self.mCurrentChar <= 0xF6)) ||
         ((0xF8 <= self.mCurrentChar) && (self.mCurrentChar <= 0x2B4)) ||
         ((0x38E <= self.mCurrentChar) && (self.mCurrentChar <= 0x3A1)) ||
         ((0x3A3 <= self.mCurrentChar) && (self.mCurrentChar <= 0x3F5)) ||
         ((0x3F7 <= self.mCurrentChar) && (self.mCurrentChar <= 0x481)) ||
         ((0x48A <= self.mCurrentChar) && (self.mCurrentChar <= 0x523))
    if (ok) {
      self.advance ()
    }
    return ok
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func testForInputChar (_ inUnicodeCharacter : UInt32) -> Bool {
    let ok = self.mCurrentChar == inUnicodeCharacter
    if ok {
      self.advance ()
    }
    return ok
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func testForInputFromChar (_ inFirstUnicodeCharacter : UInt32, toChar inLastUnicodeCharacter : UInt32) -> Bool {
    let ok =  (inFirstUnicodeCharacter <= self.mCurrentChar) && (self.mCurrentChar <= inLastUnicodeCharacter)
    if ok {
      self.advance ()
    }
    return ok
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func testForInputString (_ inTestedString : String, advance inFlag : Bool) -> Bool {
    let testedString = inTestedString as NSString
    let testedStringLength = testedString.length
    var result = false
    if (self.mCurrentLocation + testedStringLength) <= self.mSourceString.length {
      result = true
      var idx = 0
      while result && (idx < testedStringLength) {
        result = testedString.character (at: idx) == self.mSourceString.character (at: self.mCurrentLocation + idx)
        idx += 1
      }
      if result && inFlag {
        for _ in 0 ..< testedStringLength {
          self.advance ()
        }
      }
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func notTestForInputString (_ inTestedString : String, error ioScanningOk : inout Bool) -> Bool {
    var loop = false
    let testedString = inTestedString as NSString
    if (self.mCurrentLocation + testedString.length) <= self.mSourceString.length {
      var same = true
      var idx = 0
      while same && (idx < testedString.length) {
        same = testedString.character (at: idx) == self.mSourceString.character (at: self.mCurrentLocation + idx)
        idx += 1
      }
      loop = !same
    //--- Advance if found
      if loop {
        self.advance ()
      }else{
        for _ in 0 ..< testedString.length {
          self.advance ()
        }
      }
    }else{
      ioScanningOk = false
    }
    return loop
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func advance () {
    if (self.mCurrentLocation + 1) < self.mSourceString.length {
      self.mPreviousChar = self.mCurrentChar
      self.mCurrentLocation += 1
      self.mCurrentChar = UInt32 (self.mSourceString.character (at: self.mCurrentLocation))
    }else{
      self.mCurrentLocation = self.mSourceString.length
      self.mPreviousChar = self.mCurrentChar
      self.mCurrentChar = 0
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func searchForReplacementPattern (_ inReplacementPatternArray : [String]) {
    var found = false
    var idx = 0
    while (idx < inReplacementPatternArray.count) && !found {
      let s = inReplacementPatternArray [idx] as NSString
      var stringMatch = true
      var i = 0
      while (i < s.length) && stringMatch {
        stringMatch = s.character (at: i) == self.mSourceString.character (at: self.mCurrentLocation + i)
        i += 1
      }
      if stringMatch {
        found = true
        self.mCurrentLocation += s.length
        self.mPreviousChar = UInt32 (mSourceString.character (at: self.mCurrentLocation - 1))
        self.mCurrentChar = UInt32 (mSourceString.character (at: mCurrentLocation))
      }
      idx += 1
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func findTemplateDelimiterIndex (_ inTemplateDelimiterArray : [TemplateDelimiter]) -> Int? {
    var templateIndex = 0
    var found = false
    while templateIndex < inTemplateDelimiterArray.count, !found {
      let td : TemplateDelimiter = inTemplateDelimiterArray [templateIndex]
      found = self.testForInputString (td.startString, advance: td.discardStartString)
      templateIndex += 1
    }
    templateIndex -= 1
    if found {
      return templateIndex
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func updateEntryPopUpButtons (_ inTokenArray : [LexicalToken]) -> [IdentifiableAttributedString] {
    let popupListData = self.popUpDefinitionList ().sorted { $0.count > $1.count }
    let defaultAttributesContainer = AttributeContainer ([.font : NSFont.systemFont (ofSize: 11.0)])
    let specialAttributesContainer = AttributeContainer ([.font : NSFont.boldSystemFont (ofSize: 11.0)])
    var menuItemList = [IdentifiableAttributedString] ()
    menuItemList.append (IdentifiableAttributedString (id: 0, attributedString: AttributedString ("--", attributes: defaultAttributesContainer)))
    var tokenWithRangeIndex = 0
    while tokenWithRangeIndex < inTokenArray.count {
      var popUpDataListIndex = 0
      var found = false
      while !found, popUpDataListIndex < popupListData.count {
        let popUpData = popupListData [popUpDataListIndex]
        popUpDataListIndex += 1
        var matched = true
        var idx = 1
        var testedTokenRangeIndex = tokenWithRangeIndex
        while matched, idx < popUpData.count {
          matched = testedTokenRangeIndex < inTokenArray.count
          if matched {
            matched = inTokenArray [testedTokenRangeIndex].tokenCode == popUpData [idx]
          }
          idx += 2
          testedTokenRangeIndex += 1
        }
        if matched {
          found = true
          var title = ""
          idx = 1
          testedTokenRangeIndex = tokenWithRangeIndex
          let displayFlags = popUpData [0]
          while idx < popUpData.count {
            let r = inTokenArray [tokenWithRangeIndex].range
            let s = self.mSourceString.substring (with: r)
            title += " " + s
            idx += 2
            tokenWithRangeIndex += 1
          }
          let at = AttributedString (
            title,
            attributes: (displayFlags == 0) ? defaultAttributesContainer : specialAttributesContainer
          )
          let location = inTokenArray [testedTokenRangeIndex].range.location
          let s = IdentifiableAttributedString (id: location, attributedString: at)
          menuItemList.append (s)
        }
      }
      tokenWithRangeIndex += 1
    }
    return menuItemList
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Functions overriden in a subclass
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func popUpDefinitionList () -> [[UInt16]] {
    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func popUpMenuItems () -> [IdentifiableAttributedString] {
    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] { [] }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func blockComment () -> String? { nil }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage: NSTextStorage) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                          editedRange inEditedRange : NSRange,
                                          changeInLength inDelta : Int,
                                          popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                       granularity inGranularity : NSSelectionGranularity,
                       nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    return inTextViewComputedRange
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
