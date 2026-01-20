//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   BaseScrollView
//--------------------------------------------------------------------------------------------------

public class BaseScrollView : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final let mScrollView : InternalCocoaScrollView
  final let mContentView : BaseView
  final let mMinSize : NSSize
  final let mHStretchingResistance : HorizontalStretchingResistance
  final let mVStretchingResistance : VerticalStretchingResistance

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (contentView inContentView : BaseView,
               horizontalScroller inHorizontalScroller : Bool,
               verticalScroller inVerticalScroller : Bool,
               minWidth inMinWidth : Int,
               minHeight inMinHeight : Int,
               hStretchingResistance inHStretching : HorizontalStretchingResistance,
               vStretchingResistance inVStretching : VerticalStretchingResistance) {
    self.mMinSize = NSSize (width: CGFloat (inMinWidth), height: CGFloat (inMinHeight))
    self.mHStretchingResistance = inHStretching
    self.mVStretchingResistance = inVStretching
    self.mContentView = inContentView
    self.mScrollView = InternalCocoaScrollView ()
    super.init (withCocoaView: self.mScrollView)

    self.mScrollView.drawsBackground = false // Scroll view has no background
    self.mScrollView.documentView = inContentView.cocoaView
    self.mScrollView.hasHorizontalScroller = inHorizontalScroller
    self.mScrollView.hasVerticalScroller = inVerticalScroller
    self.mScrollView.automaticallyAdjustsContentInsets = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (drawsBackground inFlag : Bool) -> Self {
    self.mScrollView.drawsBackground = inFlag
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { self.mMinSize }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var hStretchingResistance : HorizontalStretchingResistance {
    self.mHStretchingResistance
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var vStretchingResistance : VerticalStretchingResistance {
    self.mVStretchingResistance
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func invalidateSimpleLayout () {
    super.invalidateSimpleLayout ()
    self.mContentView.invalidateSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override public func computeSimpleLayout (withFrame inFrame: NSRect) {
    super.computeSimpleLayout (withFrame: inFrame)
    let r = NSRect (origin: .zero, size: self.mContentView.smallestSize)
    self.mContentView.computeSimpleLayout (withFrame: r)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
