//
//  SWIFT_Lexique.swift
//  essai-editeur-texte-swift
//
//  Created by Pierre Molinaro on 10/01/2023.
//
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

struct ScanningPointStructForCocoa {
  let previousChar : UInt32
  let currentChar : UInt32
  let currentLocation : Int
}

//--------------------------------------------------------------------------------------------------

@MainActor class SWIFT_Lexique {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSourceString = NSString ()
  private var mCurrentLocation = 0
  private var mCurrentChar : UInt32 = 0
  private var mPreviousChar : UInt32 = 0
  var mEndTemplateDelimiterIndex : Int? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var currentChar : UInt32 { return self.mCurrentChar }
  var previousChar : UInt32 { return self.mPreviousChar }
  var currentLocation : Int { return mCurrentLocation }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func set (sourceString inString : String, location inStartLocation : Int, templateDelimiterIndex inIndex : Int?) {
    self.mSourceString = inString as NSString
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

  func savedScanningPoint () -> ScanningPointStructForCocoa {
    return ScanningPointStructForCocoa (previousChar: self.mPreviousChar, currentChar: self.mCurrentChar, currentLocation: self.mCurrentLocation)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func restoreScanningPoint (_ inSavedScanningPoint : ScanningPointStructForCocoa) {
    self.mPreviousChar = inSavedScanningPoint.previousChar
    self.mCurrentChar = inSavedScanningPoint.currentChar
    self.mCurrentLocation = inSavedScanningPoint.currentLocation
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func testForCharWithFunction (_ inFunction : (UInt32) -> Bool) -> Bool {
    let ok = inFunction (self.mCurrentChar)
    if ok {
      self.advance ()
    }
    return ok
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func testForInputChar (_ inUnicodeCharacter : UInt32) -> Bool {
    let ok = self.mCurrentChar == inUnicodeCharacter
    if ok {
      self.advance ()
    }
    return ok
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func testForInputFromChar (_ inFirstUnicodeCharacter : UInt32, toChar inLastUnicodeCharacter : UInt32) -> Bool {
    let ok =  (inFirstUnicodeCharacter <= self.mCurrentChar) && (self.mCurrentChar <= inLastUnicodeCharacter)
    if ok {
      self.advance ()
    }
    return ok
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func testForInputString (_ inTestedString : String, advance inFlag : Bool) -> Bool {
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

  func notTestForInputString (_ inTestedString : String, error ioScanningOk : inout Bool) -> Bool {
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
    return loop ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func advance () {
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

  func searchForReplacementPattern (_ inReplacementPatternArray : [String]) {
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

  func findTemplateDelimiterIndex (_ inTemplateDelimiterArray : [SWIFT_TemplateDelimiter]) -> Int? {
    var templateIndex = 0
    var found = false
    while (templateIndex < inTemplateDelimiterArray.count) && !found {
      let td : SWIFT_TemplateDelimiter = inTemplateDelimiterArray [templateIndex]
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

}

//--------------------------------------------------------------------------------------------------
//MARK: Lexical functions
//--------------------------------------------------------------------------------------------------

func isUnicodeLetter (_ inUnicodeCharacter : UInt32) -> Bool {
  return ((0x61 <= inUnicodeCharacter) && (inUnicodeCharacter <= 0x7A)) ||
         ((0x41 <= inUnicodeCharacter) && (inUnicodeCharacter <= 0x5A)) ||
         (0xB5 == inUnicodeCharacter) ||
         ((0xC0 <= inUnicodeCharacter) && (inUnicodeCharacter <= 0xD6)) ||
         ((0xD8 <= inUnicodeCharacter) && (inUnicodeCharacter <= 0xF6)) ||
         ((0xF8 <= inUnicodeCharacter) && (inUnicodeCharacter <= 0x2B4)) ||
         ((0x38E <= inUnicodeCharacter) && (inUnicodeCharacter <= 0x3A1)) ||
         ((0x3A3 <= inUnicodeCharacter) && (inUnicodeCharacter <= 0x3F5)) ||
         ((0x3F7 <= inUnicodeCharacter) && (inUnicodeCharacter <= 0x481)) ||
         ((0x48A <= inUnicodeCharacter) && (inUnicodeCharacter <= 0x523))
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_function_toLower (_ inUnicodeCharacter : UInt32) -> UInt32 {
  let c = Unicode.Scalar (inUnicodeCharacter)!
  let chars = String( c).lowercased ().unicodeScalars
  return chars.first!.value
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterCharacterIntoString (_ ioScanningOk : inout Bool,
                                                     _ ioStr : inout String,
                                                     _ inUnicodeCharacter : UInt32) {
  ioStr += String (Unicode.Scalar (inUnicodeCharacter)!)
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterDecimalDigitIntoBigInt (_ ioScanningOk : inout Bool,
                                                        _ inUnicodeChar : UInt32,
                                                        _ ioBigIntegerString : inout String) {
  if inUnicodeChar >= UInt32 (ASCII.zero.rawValue), inUnicodeChar <= UInt32 (ASCII.nine.rawValue) {
    ioBigIntegerString += String (Unicode.Scalar (inUnicodeChar)!)
  }else{
    ioScanningOk = false
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterHexDigitIntoBigInt (_ ioScanningOk : inout Bool,
                                                    _ inUnicodeChar : UInt32,
                                                    _ ioBigIntegerString : inout String) {
  if inUnicodeChar >= UInt32 (ASCII.zero.rawValue), inUnicodeChar <= UInt32 (ASCII.nine.rawValue) {
    ioBigIntegerString += String (Unicode.Scalar (inUnicodeChar)!)
  }else if inUnicodeChar >= UInt32 (ASCII.A.rawValue), inUnicodeChar <= UInt32 (ASCII.F.rawValue) {
    ioBigIntegerString += String (Unicode.Scalar (inUnicodeChar)!)
  }else if inUnicodeChar >= UInt32 (ASCII.a.rawValue), inUnicodeChar <= UInt32 (ASCII.f.rawValue) {
    ioBigIntegerString += String (Unicode.Scalar (inUnicodeChar)!)
  }else{
    ioScanningOk = false
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterBinaryDigitIntoBigInt (_ ioScanningOk : inout Bool,
                                                       _ inUnicodeChar : UInt32,
                                                       _ ioBigIntegerString : inout String) {
  if inUnicodeChar >= UInt32 (ASCII.zero.rawValue), inUnicodeChar <= UInt32 (ASCII.one.rawValue) {
    ioBigIntegerString += String (Unicode.Scalar (inUnicodeChar)!)
  }else{
    ioScanningOk = false
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_convertHexStringIntoBigInt (_ ioScanningOk : inout Bool,
                                                       _ inString : String,
                                                       _ outBigIntString : inout String) {
  let sourceString = inString as NSString
  for idx in 0 ..< sourceString.length {
    let c = sourceString.character (at: idx)
    if (c >= UInt16 (ASCII.zero.rawValue)) && (c <= UInt16 (ASCII.nine.rawValue)) {
      outBigIntString += String (Unicode.Scalar (c)!)
    }else if (c >= UInt16 (ASCII.A.rawValue)) && (c <= UInt16 (ASCII.F.rawValue)) {
      outBigIntString += String (Unicode.Scalar (c)!)
    }else if (c >= UInt16 (ASCII.a.rawValue)) && (c <= UInt16 (ASCII.f.rawValue)) {
      outBigIntString += String (Unicode.Scalar (c)!)
    }else{
      ioScanningOk = false
    }
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_convertDecimalStringIntoBigInt (_ ioScanningOk : inout Bool,
                                                           _ inString : String,
                                                           _ outBigIntString : inout String) {
  let sourceString = inString as NSString
  for idx in 0 ..< sourceString.length {
    let c = sourceString.character (at: idx)
    if (c >= UInt16 (ASCII.zero.rawValue)) && (c <= UInt16 (ASCII.nine.rawValue)) {
      outBigIntString += String (Unicode.Scalar (c)!)
    }else{
      ioScanningOk = false
    }
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_convertStringToDouble (_ ioScanningOk : inout Bool,
                                                  _ inString : String,
                                                  _ outDouble : inout Double) {
  if let d = Double (inString) {
    outDouble = d
  }else{
    ioScanningOk = false
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterCharacterIntoCharacter (_ ioScanningOk : inout Bool,
                                                        _ outUnicodeCharacter : inout UInt32,
                                                        _ inUnicodeCharacter : UInt32) {
  outUnicodeCharacter = inUnicodeCharacter
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterHexDigitIntoUInt (_ ioScanningOk : inout Bool,
                                                  _ inUnicodeCharacter : UInt32,
                                                  _ ioValue : inout UInt32) {
  var v = UInt64 (ioValue) * 16
  if (inUnicodeCharacter >= UInt16 (ASCII.zero.rawValue)) && (inUnicodeCharacter <= UInt16 (ASCII.nine.rawValue)) {
     v += UInt64 (inUnicodeCharacter - UInt32 (ASCII.zero.rawValue))
  }else if (inUnicodeCharacter >= UInt16 (ASCII.A.rawValue)) && (inUnicodeCharacter <= UInt16 (ASCII.F.rawValue)) {
     v += UInt64 (inUnicodeCharacter - UInt32 (ASCII.A.rawValue))
  }else if (inUnicodeCharacter >= UInt16 (ASCII.a.rawValue)) && (inUnicodeCharacter <= UInt16 (ASCII.f.rawValue)) {
     v += UInt64 (inUnicodeCharacter - UInt32 (ASCII.a.rawValue))
  }else{
    ioScanningOk = false
  }
  if ioScanningOk {
    if v <= UInt32.max {
      ioValue = UInt32 (v)
    }else{
      ioScanningOk = false
    }
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (_ ioScanningOk : inout Bool,
                                                               _ inValue : inout UInt32,
                                                               _ outUnicodeCharacter : inout UInt32) {
  outUnicodeCharacter = inValue
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_resetString (_ ioScanningOk : inout Bool,
                                        _ outString : inout String) {
  outString = ""
}

//--------------------------------------------------------------------------------------------------
