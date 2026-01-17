//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 17/01/2026.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

struct LineStartAndEndLocations {

  let startLocation : Int
  let endLocation : Int

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (for inString : String, at inLocation : Int) {
    let str = inString as NSString
    var startLocation = 0
    var endLocation = 0
    str.enumerateSubstrings (in: NSRange (location: 0, length: str.length), options: .byLines) { (_, range, _, stopPtr) in
      startLocation = range.location
      endLocation = range.location + range.length
      if endLocation >= inLocation {
        stopPtr.pointee = true
      }
    }
    self.startLocation = startLocation
    self.endLocation = endLocation
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
