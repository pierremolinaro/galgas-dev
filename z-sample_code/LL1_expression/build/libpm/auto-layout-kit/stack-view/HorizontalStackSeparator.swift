//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class HorizontalStackSeparator : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mIgnoreVerticalMargins : Bool
  private let mCocoaSeparator : NSBox

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (ignoreVerticalMargins inFlag : Bool) {
    self.mIgnoreVerticalMargins = inFlag
    let s = NSSize (width: 0, height: 10) // width < height means vertical separator
    self.mCocoaSeparator = NSBox (frame: NSRect (origin: NSPoint (), size: s))
    super.init (withCocoaView: self.mCocoaSeparator)
    self.mCocoaSeparator.boxType = .separator
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { NSSize (width: 1.0, height: 0.0) }

//  public var hAlignment : HorizontalAlignmentInVerticalStack { .fill }

  public override var hStretchingResistance : HorizontalStretchingResistance { .highest }

  public override var vAlignment : VerticalAlignmentInHorizontalStack {
    self.mIgnoreVerticalMargins ? .fillIgnoringMargins : .fill
  }

//  public var vStretchingResistance : VerticalStretchingResistance { .lowest }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
