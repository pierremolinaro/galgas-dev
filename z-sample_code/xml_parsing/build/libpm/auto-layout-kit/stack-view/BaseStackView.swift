//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

@MainActor open class BaseStackView : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (hAlignment inHorizontalDisposition : HorizontalAlignmentInVerticalStack = .fill,
               vAlignment inVerticalDisposition : VerticalAlignmentInHorizontalStack = .fill) {
    self.mHorizontalAlignment = inHorizontalDisposition
    self.mVerticalAlignment = inVerticalDisposition
    super.init ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  MARGINS
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private(set) var mLeftMargin = Margin.regular.floatValue
  private(set) var mRightMargin = Margin.regular.floatValue
  private(set) var mTopMargin = Margin.regular.floatValue
  private(set) var mBottomMargin = Margin.regular.floatValue
  private(set) var mSpacing = Spacing.regular.floatValue

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (spacing inValue : Spacing) -> Self {
    self.mSpacing = inValue.floatValue
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (margins inValue : Margin) -> Self {
    let v = inValue.floatValue
    self.mLeftMargin   = v
    self.mBottomMargin = v
    self.mTopMargin    = v
    self.mRightMargin  = v
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (topMargin inValue : Margin) -> Self {
    self.mTopMargin = inValue.floatValue
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (bottomMargin inValue : Margin) -> Self {
    self.mBottomMargin = inValue.floatValue
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (leftMargin inValue : Margin) -> Self {
    self.mLeftMargin = inValue.floatValue
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (rightMargin inValue : Margin) -> Self {
    self.mRightMargin = inValue.floatValue
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout Features
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mHorizontalAlignment : HorizontalAlignmentInVerticalStack
  let mVerticalAlignment : VerticalAlignmentInHorizontalStack

//  public var smallestSize : NSSize { .zero }

  public override var hAlignment : HorizontalAlignmentInVerticalStack { self.mHorizontalAlignment }

//  public override var hStretchingResistance : HorizontalStretchingResistance { self.mHStretching }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { self.mVerticalAlignment }

//  public override var vStretchingResistance : VerticalStretchingResistance { self.mVStretching }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
