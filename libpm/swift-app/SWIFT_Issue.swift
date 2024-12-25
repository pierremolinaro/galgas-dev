//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 25/12/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

struct SWIFT_Issue {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let fileURL : URL
  let line : Int
  let startColumn : Int
  let length : Int
  let message : String
  let kind : Self.Kind
  let locationInBuildLogTextView : Int

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var color : NSColor {
    switch self.kind {
    case .warning : return .orange
    case .error : return .red
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum Kind { case warning ; case error }

}

//--------------------------------------------------------------------------------------------------
