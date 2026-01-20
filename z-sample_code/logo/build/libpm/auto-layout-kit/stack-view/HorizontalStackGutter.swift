//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class HorizontalStackGutter : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { NSSize (width: 4.0, height: 0.0) }

//  public var hAlignment : HorizontalAlignmentInVerticalStack { .fill }

  public override var hStretchingResistance : HorizontalStretchingResistance { .highest }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { .fill }

//  public var vStretchingResistance : VerticalStretchingResistance { .lowest }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

