//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 19/01/2026.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

extension String {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lineRange (forLineNumber inLineNumber : Int) -> NSRange {
    let str = self as NSString
    var resultRange = NSRange (location: 0, length: 0)
    var lineCount = 1
    str.enumerateSubstrings (in: NSRange (location: 0, length: str.length), options: .byLines) { (_, range, _, stopPtr) in
      resultRange = range
      if lineCount == inLineNumber {
        stopPtr.pointee = true
      }
      lineCount += 1
    }
    return resultRange
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
