//
//  UInt64+displayString.swift
//  espion-can-swiftui
//
//  Created by Pierre Molinaro on 09/10/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension UInt64 {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var displayString : String {
    var result = [String] ()
    var tmp : UInt64 = self
    while tmp >= 1000 {
      let v = tmp % 1000
      let s = "\(v / 100)\((v / 10) % 10)\(v % 10)"
      result.append (s)
      tmp /= 1000
    }
    result.append (String (tmp))
    return result.reversed ().joined (separator: " ")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
