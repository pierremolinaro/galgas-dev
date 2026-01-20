//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public struct LayoutFeatures : Sendable {
  let smallestSize : NSSize
  let hAlignment : HorizontalAlignmentInVerticalStack
  let hStretchingResistance : HorizontalStretchingResistance
  let vAlignment : VerticalAlignmentInHorizontalStack
  let vStretchingResistance : VerticalStretchingResistance
}

//--------------------------------------------------------------------------------------------------
