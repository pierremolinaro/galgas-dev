//--------------------------------------------------------------------------------------------------
//  SWIFT_String+extension.swift
//  Created by Pierre Molinaro on 19/03/2025.
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

public extension String {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func nsSubstring (with inSelectedRange: NSRange) -> String {
    let s = self as NSString
//    if inSelectedRange.location < 0 {
//      ()
//    }else if (inSelectedRange.upperBound > s.length) {
//      ()
//    }
    return s.substring (with: inSelectedRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
