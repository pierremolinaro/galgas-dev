//
//  SWIFT_LineColumn.swift
//  galgas-ide
//
//  Created by Pierre Molinaro on 12/01/2026.
//
//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 12/01/2026.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

struct SWIFT_LineColumn {

  let line : Int
  let column : Int

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (for inString : String, at inLocation : Int) {
    let str = inString as NSString
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
    self.line = lineCount
    self.column = columnCount
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
