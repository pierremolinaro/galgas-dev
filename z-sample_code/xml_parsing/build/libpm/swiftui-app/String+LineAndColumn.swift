//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 12/01/2026.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

struct LineAndColumn {

  let line : Int
  let column : Int

}

//--------------------------------------------------------------------------------------------------

extension String {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lineAndColumn (forLocation inLocation : Int) -> LineAndColumn {
    let str = self as NSString
    var lineCount = 1
    var columnCount = 1
    str.enumerateSubstrings (in: NSRange (location: 0, length: str.length), options: .byLines) { (_, range, _, stopPtr) in
      if (range.location + range.length) > inLocation {
        stopPtr.pointee = true
        lineCount -= 1
        columnCount = inLocation - range.location + 1
      }
      lineCount += 1
    }
    return LineAndColumn (line: lineCount, column: columnCount)
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
