//
//  SWIFT_Lexique.swift
//  essai-editeur-texte-swift
//
//  Created by Pierre Molinaro on 10/01/2023.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public enum ASCII : UInt8 {
  case lineFeed = 0x0A
  case carriageReturn = 0x0D

  case space = 0x20
  case exclamation = 0x21 // !
  case quotation = 0x22 // "
  case pound = 0x23 // #
  case dollar = 0x24 // $
  case perCent = 0x25 // %
  case ampersand = 0x26 // &
  case apostrophe = 0x27 // '
  case leftParenthesis = 0x28 // (
  case rightParenthesis = 0x29 // )
  case asterisk = 0x2A // *
  case plus = 0x2B // +
  case comma = 0x2C // ,
  case minus = 0x2D // -
  case period = 0x2E // ;
  case slash = 0x2F // /

  case zero = 0x30
  case one = 0x31
  case two = 0x32
  case three = 0x33
  case four = 0x34
  case five = 0x35
  case six = 0x36
  case seven = 0x37
  case eight = 0x38
  case nine = 0x39

  case colon = 0x3A // :
  case semicolon = 0x3B // ;
  case lessThan = 0x3C // <
  case equal = 0x3D // =
  case greaterThan = 0x3E // >
  case question = 0x3F // ?
  case at = 0x40 // @

  case A = 0x41
  case B = 0x42
  case C = 0x43
  case D = 0x44
  case E = 0x45
  case F = 0x46
  case G = 0x47
  case H = 0x48
  case I = 0x49
  case J = 0x4A
  case K = 0x4B
  case L = 0x4C
  case M = 0x4D
  case N = 0x4E
  case O = 0x4F
  case P = 0x50
  case Q = 0x51
  case R = 0x52
  case S = 0x53
  case T = 0x54
  case U = 0x55
  case V = 0x56
  case W = 0x57
  case X = 0x58
  case Y = 0x59
  case Z = 0x5A

  case leftBracket = 0x5B // [
  case baskSlah = 0x5E // \
  case rightBracket = 0x5F // ]
  case baskApostrophe = 0x60 // `

  case a = 0x61
  case b = 0x62
  case c = 0x63
  case d = 0x64
  case e = 0x65
  case f = 0x66
  case g = 0x67
  case h = 0x68
  case i = 0x69
  case j = 0x6A
  case k = 0x6B
  case l = 0x6C
  case m = 0x6D
  case n = 0x6E
  case o = 0x6F
  case p = 0x70
  case q = 0x71
  case r = 0x72
  case s = 0x73
  case t = 0x74
  case u = 0x75
  case v = 0x76
  case w = 0x77
  case x = 0x78
  case y = 0x79
  case z = 0x7A

  case leftBrace = 0x7B // {
  case verticalBar = 0x7C // |
  case rightBrace = 0x7D // }
  case tilde = 0x7E // ~
}

//--------------------------------------------------------------------------------------------------

struct ScanningPointStructForCocoa {
  let previousChar : UInt32
  let currentChar : UInt32
  let currentLocation : Int
}

//--------------------------------------------------------------------------------------------------

class SWIFT_Scanner {

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

  final func testForCharWithFunction (_ inFunction : (UInt32) -> Bool) -> Bool {
    let ok = inFunction (self.mCurrentChar)
    if ok {
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

  final func findTemplateDelimiterIndex (_ inTemplateDelimiterArray : [SWIFT_TemplateDelimiter]) -> Int? {
    var templateIndex = 0
    var found = false
    while templateIndex < inTemplateDelimiterArray.count, !found {
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
  //  Functions overriden in a subclass
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage: NSTextStorage) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                          editedRange inEditedRange : NSRange,
                                          changeInLength inDelta : Int) {
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
  let chars = String (c).lowercased ().unicodeScalars
  return chars.first!.value
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterCharacterIntoString (_ ioScanningOk : inout Bool,
                                                     _ ioStr : inout String,
                                                     _ inUnicodeCharacter : UInt32) {
  if let char = Unicode.Scalar (inUnicodeCharacter) {
    ioStr += String (char)
  }else{
    ioScanningOk = false
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_prependCharacter (_ ioScanningOk : inout Bool,
                                             _ ioStr : inout String,
                                             _ inUnicodeCharacter : UInt32) {
  if let char = Unicode.Scalar (inUnicodeCharacter) {
    ioStr.insert (Character (char), at: ioStr.startIndex)
  }else{
    ioScanningOk = false
  }
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

func scanner_cocoa_routine_convertDecimalStringIntoUInt (_ ioScanningOk : inout Bool,
                                                         _ inString : String,
                                                         _ outValue : inout UInt32) {
  outValue = 0
  var ok = true
  let max = UInt32.max / 10
  let nsString = inString as NSString
  var idx = 0
  while idx < nsString.length, ok {
    let c : UInt16 = nsString.character (at: idx)
    idx += 1
    if (c < UInt16 (ASCII.zero.rawValue)) || (c > UInt16 (ASCII.nine.rawValue)) {
      ioScanningOk = false
      ok = false
    }else{
      let digit = c - UInt16 (ASCII.zero.rawValue)
      if outValue > max {
        ioScanningOk = false
        ok = false
      }else if (outValue == max) && (digit > (UInt32.max % 10)) {
        ioScanningOk = false
        ok = false
      }else{
        outValue = outValue * 10 + UInt32 (digit)
      }
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

func scanner_cocoa_routine_enterDigitIntoUInt (_ ioScanningOk : inout Bool,
                                               _ inUnicodeCharacter : UInt32,
                                               _ ioValue : inout UInt32) {
  var v = UInt64 (ioValue) * 10
  if (inUnicodeCharacter >= UInt16 (ASCII.zero.rawValue)) && (inUnicodeCharacter <= UInt16 (ASCII.nine.rawValue)) {
     v += UInt64 (inUnicodeCharacter - UInt32 (ASCII.zero.rawValue))
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

func scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (_ ioScanningOk : inout Bool,
                                                            _ ioValue : inout UInt32,
                                                            _ inUnicodeCharacter : UInt32) {
  var hexDigitValue : UInt32? = nil
  if (inUnicodeCharacter >= UInt16 (ASCII.zero.rawValue)) && (inUnicodeCharacter <= UInt16 (ASCII.nine.rawValue)) {
    hexDigitValue = inUnicodeCharacter - UInt32 (ASCII.zero.rawValue)
  }else if (inUnicodeCharacter >= UInt16 (ASCII.A.rawValue)) && (inUnicodeCharacter <= UInt16 (ASCII.F.rawValue)) {
    hexDigitValue = inUnicodeCharacter - UInt32 (ASCII.A.rawValue)
  }else if (inUnicodeCharacter >= UInt16 (ASCII.a.rawValue)) && (inUnicodeCharacter <= UInt16 (ASCII.f.rawValue)) {
    hexDigitValue = inUnicodeCharacter - UInt32 (ASCII.a.rawValue)
  }
  if let v = hexDigitValue {
    var tempo : UInt32 = ioValue * 16
    tempo += v
    if tempo > 255 {
      ioScanningOk = false
    }else{
      ioValue = tempo
    }
  }else{
    ioScanningOk = false
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterBinDigitIntoUInt (_ ioScanningOk : inout Bool,
                                                  _ inUnicodeCharacter : UInt32,
                                                  _ ioValue : inout UInt32) {
  if (inUnicodeCharacter < UInt32 (ASCII.zero.rawValue)) || (inUnicodeCharacter > UInt32 (ASCII.nine.rawValue)) {
    ioScanningOk = false
  }else{
    let max = UInt32.max >> 1
    if ioValue > max {
      ioScanningOk = false
    }else{
      let bit = inUnicodeCharacter - UInt32 (ASCII.zero.rawValue)
      ioValue = (ioValue << 1) | bit
    }
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterHexDigitIntoUInt64 (_ ioScanningOk : inout Bool,
                                                    _ inUnicodeCharacter : UInt32,
                                                    _ ioValue : inout UInt64) {
  var hexDigitValue : UInt64? = nil
  if (inUnicodeCharacter >= UInt32 (ASCII.zero.rawValue)) && (inUnicodeCharacter <= UInt32 (ASCII.nine.rawValue)) {
    hexDigitValue = UInt64 (inUnicodeCharacter - UInt32 (ASCII.zero.rawValue))
  }else if (inUnicodeCharacter >= UInt32 (ASCII.A.rawValue)) && (inUnicodeCharacter <= UInt32 (ASCII.F.rawValue)) {
    hexDigitValue = UInt64 (inUnicodeCharacter - UInt32 (ASCII.A.rawValue))
  }else if (inUnicodeCharacter >= UInt32 (ASCII.a.rawValue)) && (inUnicodeCharacter <= UInt32 (ASCII.f.rawValue)) {
    hexDigitValue = UInt64 (inUnicodeCharacter - UInt32 (ASCII.a.rawValue))
  }
  if let digit = hexDigitValue {
    let max = UInt64.max >> 4
    if ioValue > max {
      ioScanningOk = false
    }else{
      ioValue = (ioValue << 4) | digit
    }
  }else{
    ioScanningOk = false
  }
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_enterDigitIntoUInt64 (_ ioScanningOk : inout Bool,
                                                 _ inUnicodeCharacter : UInt32,
                                                 _ ioValue : inout UInt64) {
  if (inUnicodeCharacter < UInt32 (ASCII.zero.rawValue)) || (inUnicodeCharacter > UInt32 (ASCII.nine.rawValue)) {
    ioScanningOk = false
  }else{
    let digit = UInt64 (inUnicodeCharacter - UInt32 (ASCII.zero.rawValue))
    let max = UInt64.max / 10
    if ioValue > max {
      ioScanningOk = false
    }else if (ioValue == max) && (digit > 5) {
      ioScanningOk = false
    }else{
      ioValue = ioValue * 10 + digit
    }
  }
}

//--------------------------------------------------------------------------------------------------

fileprivate let kHTMLtoUnicodeConversionArray : [(String, Int)] = [
  ("AElig", 0xC6),
  ("Aacute", 0xC1),
  ("Abreve", 0x102),
  ("Acirc", 0xC2),
  ("Agrave", 0xC0),
  ("Amacr", 0x100),
  ("Aogon", 0x104),
  ("Aring", 0xC5),
  ("Atilde", 0xC3),
  ("Auml", 0xC4),
  ("Cacute", 0x106),
  ("Ccaron", 0x10C),
  ("Ccedil", 0xC7),
  ("Ccirc", 0x108),
  ("Cdot", 0x10A),
  ("Dcaron", 0x10E),
  ("Dstrok", 0x110),
  ("ENG", 0x14A),
  ("ETH", 0xD0),
  ("Eacute", 0xC9),
  ("Ecaron", 0x11A),
  ("Ecirc", 0xCA),
  ("Edot", 0x116),
  ("Egrave", 0xC8),
  ("Emacr", 0x112),
  ("Eogon", 0x118),
  ("Euml", 0xCB),
  ("Gbreve", 0x11E),
  ("Gcedil", 0x122),
  ("Gcirc", 0x11C),
  ("Gdot", 0x120),
  ("Hcirc", 0x124),
  ("Hstrok", 0x126),
  ("IJlig", 0x132),
  ("Iacute", 0xCD),
  ("Icirc", 0xCE),
  ("Idot", 0x130),
  ("Igrave", 0xCC),
  ("Imacr", 0x12A),
  ("Iogon", 0x12E),
  ("Itilde", 0x128),
  ("Iuml", 0xCF),
  ("Jcirc", 0x134),
  ("Kcedil", 0x136),
  ("Lacute", 0x139),
  ("Lcaron", 0x13D),
  ("Lcedil", 0x13B),
  ("Lmidot", 0x13F),
  ("Lstrok", 0x141),
  ("Nacute", 0x143),
  ("Ncaron", 0x147),
  ("Ncedil", 0x145),
  ("Ntilde", 0xD1),
  ("OElig", 0x152),
  ("Oacute", 0xD3),
  ("Ocirc", 0xD4),
  ("Odblac", 0x150),
  ("Ograve", 0xD2),
  ("Omacr", 0x14C),
  ("Oslash", 0xD8),
  ("Otilde", 0xD5),
  ("Ouml", 0xD6),
  ("Racute", 0x154),
  ("Rcaron", 0x158),
  ("Rcedil", 0x156),
  ("Sacute", 0x15A),
  ("Scaron", 0x160),
  ("Scedil", 0x15E),
  ("Scirc", 0x15C),
  ("THORN", 0xDE),
  ("Tcaron", 0x164),
  ("Tcedil", 0x162),
  ("Tstrok", 0x166),
  ("Uacute", 0xDA),
  ("Ubreve", 0x16C),
  ("Ucirc", 0xDB),
  ("Udblac", 0x170),
  ("Ugrave", 0xD9),
  ("Umacr", 0x16A),
  ("Uogon", 0x172),
  ("Uring", 0x16E),
  ("Utilde", 0x168),
  ("Uuml", 0xDC),
  ("Wcirc", 0x174),
  ("Yacute", 0xDD),
  ("Ycirc", 0x176),
  ("Yuml", 0x178),
  ("Zacute", 0x179),
  ("Zcaron", 0x17D),
  ("Zdot", 0x17B),
  ("aacute", 0xE1),
  ("abreve", 0x103),
  ("acirc", 0xE2),
  ("aelig", 0xE6),
  ("agrave", 0xE0),
  ("amacr", 0x101),
  ("amp", 0x26),
  ("aogon", 0x105),
  ("apos", 0x2BC),
  ("aring", 0xE5),
  ("ast", 0x2A),
  ("atilde", 0xE3),
  ("auml", 0xE4),
  ("brvbar", 0xA6),
  ("bsol", 0x5C),
  ("cacute", 0x107),
  ("ccaron", 0x10D),
  ("ccedil", 0xE7),
  ("ccirc", 0x109),
  ("cdot", 0x10B),
  ("cent", 0xA2),
  ("colon", 0x3A),
  ("comma", 0x2C),
  ("commat", 0x40),
  ("copy", 0xA9),
  ("curren", 0xA4),
  ("darr", 0x2193),
  ("dcaron", 0x10F),
  ("deg", 0xB0),
  ("divide", 0xF7),
  ("dollar", 0x24),
  ("dstrok", 0x111),
  ("eacute", 0xE9),
  ("ecaron", 0x11B),
  ("ecirc", 0xEA),
  ("edot", 0x117),
  ("egrave", 0xE8),
  ("emacr", 0x113),
  ("eng", 0x14B),
  ("eogon", 0x119),
  ("equals", 0x3D),
  ("eth", 0xF0),
  ("euml", 0xEB),
  ("excl", 0x21),
  ("frac12", 0xBD),
  ("frac14", 0xBC),
  ("frac18", 0x215B),
  ("frac34", 0xBE),
  ("frac38", 0x215C),
  ("frac58", 0x215D),
  ("frac78", 0x215E),
  ("gacute", 0x1F5),
  ("gbreve", 0x11F),
  ("gcedil", 0x123),
  ("gcirc", 0x11D),
  ("gdot", 0x121),
  ("gt", 0x3E),
  ("half", 0xBD),
  ("hcirc", 0x125),
  ("horbar", 0x2015),
  ("hstrok", 0x127),
  ("hyphen", 0x2D),
  ("iacute", 0xED),
  ("icirc", 0xEE),
  ("iexcl", 0xA1),
  ("igrave", 0xEC),
  ("ijlig", 0x133),
  ("imacr", 0x12B),
  ("inodot", 0x131),
  ("iogon", 0x12F),
  ("iquest", 0xBF),
  ("itilde", 0x129),
  ("iuml", 0xEF),
  ("jcirc", 0x135),
  ("kcedil", 0x137),
  ("kgreen", 0x138),
  ("lacute", 0x13A),
  ("laquo", 0xAB),
  ("larr", 0x2190),
  ("lcaron", 0x13E),
  ("lcedil", 0x13C),
  ("lcub", 0x7B),
  ("ldquo", 0x201C),
  ("lmidot", 0x140),
  ("lowbar", 0x5F),
  ("lpar", 0x28),
  ("lsqb", 0x5B),
  ("lsquo", 0x2018),
  ("lstrok", 0x142),
  ("lt", 0x3C),
  ("micro", 0xB5),
  ("middot", 0xB7),
  ("nacute", 0x144),
  ("napos", 0x149),
  ("nbsp", 0xA0),
  ("ncaron", 0x148),
  ("ncedil", 0x146),
  ("not", 0xAC),
  ("ntilde", 0xF1),
  ("num", 0x23),
  ("oacute", 0xF3),
  ("ocirc", 0xF4),
  ("odblac", 0x151),
  ("oelig", 0x153),
  ("ograve", 0xF2),
  ("ohm", 0x2126),
  ("omacr", 0x14D),
  ("ordf", 0xAA),
  ("ordm", 0xBA),
  ("oslash", 0xF8),
  ("otilde", 0xF5),
  ("ouml", 0xF6),
  ("para", 0xB6),
  ("percnt", 0x25),
  ("period", 0x2E),
  ("plus", 0x2B),
  ("plusmn", 0xB1),
  ("pound", 0xA3),
  ("quest", 0x3F),
  ("quot", 0x22),
  ("racute", 0x155),
  ("raquo", 0xBB),
  ("rarr", 0x2192),
  ("rcaron", 0x159),
  ("rcedil", 0x157),
  ("rcub", 0x7D),
  ("rdquo", 0x201D),
  ("reg", 0xAE),
  ("rpar", 0x29),
  ("rsqb", 0x5D),
  ("rsquo", 0x2019),
  ("sacute", 0x15B),
  ("scaron", 0x161),
  ("scedil", 0x15F),
  ("scirc", 0x15D),
  ("sect", 0xA7),
  ("semi", 0x3B),
  ("shy", 0xAD),
  ("sol", 0x2F),
  ("sung", 0x266A),
  ("sup1", 0xB9),
  ("sup2", 0xB2),
  ("sup3", 0xB3),
  ("szlig", 0xDF),
  ("tcaron", 0x165),
  ("tcedil", 0x163),
  ("thorn", 0xFE),
  ("times", 0xD7),
  ("trade", 0x2122),
  ("tstrok", 0x167),
  ("uacute", 0xFA),
  ("uarr", 0x2191),
  ("ubreve", 0x16D),
  ("ucirc", 0xFB),
  ("udblac", 0x171),
  ("ugrave", 0xF9),
  ("umacr", 0x16B),
  ("uogon", 0x173),
  ("uring", 0x16F),
  ("utilde", 0x169),
  ("uuml", 0xFC),
  ("verbar", 0x7C),
  ("wcirc", 0x175),
  ("yacute", 0xFD),
  ("ycirc", 0x177),
  ("yen", 0xA5),
  ("yuml", 0xFF),
  ("zacute", 0x17A),
  ("zcaron", 0x17E),
  ("zdot", 0x17C)
]

//--------------------------------------------------------------------------------------------------

fileprivate func unicodeCharacterFromHTMLSequence (_ inString : String) -> UInt32 {
  var idx = 0
  while idx < kHTMLtoUnicodeConversionArray.count {
    if kHTMLtoUnicodeConversionArray [idx].0 == inString {
      return UInt32 (kHTMLtoUnicodeConversionArray [idx].1)
    }
    idx += 1
  }
  return 0 // Means not found
}

//--------------------------------------------------------------------------------------------------

func scanner_cocoa_routine_convertHTMLSequenceToUnicodeCharacter (_ ioScanningOk : inout Bool,
                                                                  _ ioStringValue : inout String,
                                                                  _ outUnicodeCharacter : inout UInt32) {
  outUnicodeCharacter = unicodeCharacterFromHTMLSequence (ioStringValue) ;
  if outUnicodeCharacter == 0 {
    ioScanningOk = false
  }
  ioStringValue = ""
}

//--------------------------------------------------------------------------------------------------
