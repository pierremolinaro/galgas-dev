//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public enum VerticalAlignmentInHorizontalStack : Sendable {
  case top
  case center
  case bottom
  case fill
  case fillIgnoringMargins
  case lastBaseline (CGFloat)

  var lastBaselineOrZero : CGFloat {
    switch self {
    case .top, .center, .bottom, .fill, .fillIgnoringMargins : return 0.0
    case .lastBaseline (let b) : return b
    }
  }
}

//--------------------------------------------------------------------------------------------------
