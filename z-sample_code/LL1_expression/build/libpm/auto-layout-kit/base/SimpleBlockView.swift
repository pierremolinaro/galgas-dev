//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 07/12/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class SimpleBlockView : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (_ inHorizontalAlignment : HorizontalAlignmentInVerticalStack,
               _ inVerticalAlignment : VerticalAlignmentInHorizontalStack) {
    self.mHorizontalAlignment = inHorizontalAlignment
    self.mVerticalAlignment = inVerticalAlignment
    super.init (withCocoaView: NSViewWithBackground ())
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mHorizontalAlignment : HorizontalAlignmentInVerticalStack
  private let mVerticalAlignment : VerticalAlignmentInHorizontalStack

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { NSSize (width: 50.0, height: 15.0) }

  public override var hAlignment : HorizontalAlignmentInVerticalStack { self.mHorizontalAlignment }

  public override var hStretchingResistance : HorizontalStretchingResistance { .high }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { self.mVerticalAlignment }

  public override var vStretchingResistance : VerticalStretchingResistance { .high }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

private class NSViewWithBackground : NSView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  override var frame : NSRect {
//    get { super.frame }
//    set { super.frame = newValue ; Swift.print (super.frame) }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func draw (_ inDirtyRect : NSRect) {
    super.draw (inDirtyRect)
    NSColor.systemRed.setFill ()
    self.bounds.fill ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
