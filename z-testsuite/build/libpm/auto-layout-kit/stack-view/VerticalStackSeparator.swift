//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class VerticalStackSeparator : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mIgnoreVerticalMargins : Bool
  private let mCocoaSeparator : NSBox

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (ignoreVerticalMargins inFlag : Bool) {
    self.mIgnoreVerticalMargins = inFlag
    let s = NSSize (width: 10, height: 0) // width > height means horizontal separator
    self.mCocoaSeparator = NSBox (frame: NSRect (origin: NSPoint (), size: s))
    super.init (withCocoaView: self.mCocoaSeparator)
    self.mCocoaSeparator.boxType = .separator
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { NSSize (width: 0.0, height: 1.0) }

  public override var hAlignment : HorizontalAlignmentInVerticalStack {
    self.mIgnoreVerticalMargins ? .fillIgnoringMargins : .fill
  }

//  public override var hStretchingResistance : HorizontalStretchingResistance { .highest }

//  public var vAlignment : VerticalAlignmentInHorizontalStack { .fill }

  public override var vStretchingResistance : VerticalStretchingResistance { .highest }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
