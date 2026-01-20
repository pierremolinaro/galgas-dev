//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 28/04/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class SpinningProgressIndicator : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCocoaProgressIndicator : NSProgressIndicator
  private let mSize : CGFloat

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (size inSize : Int, displayedWhenStopped inFlag : Bool) {
    self.mCocoaProgressIndicator = NSProgressIndicator (frame: .zero)
    self.mSize = CGFloat (inSize)
    self.mCocoaProgressIndicator.isIndeterminate = true
    self.mCocoaProgressIndicator.style = .spinning
    self.mCocoaProgressIndicator.sizeToFit ()
    self.mCocoaProgressIndicator.isDisplayedWhenStopped = inFlag
    super.init (withCocoaView: self.mCocoaProgressIndicator)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func startAnimation () {
    self.mCocoaProgressIndicator.startAnimation (nil)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func stopAnimation () {
    self.mCocoaProgressIndicator.stopAnimation (nil)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { NSSize (width: self.mSize, height: self.mSize) }

  public override var hAlignment : HorizontalAlignmentInVerticalStack { .fill }

  public override var hStretchingResistance : HorizontalStretchingResistance { .high }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { .fill }

  public override var vStretchingResistance : VerticalStretchingResistance { .high }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
