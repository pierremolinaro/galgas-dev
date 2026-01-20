//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

open class AutoLayoutVerticalStackView : BaseStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func appendFlexibleSpace () -> Self {
    return self.appendView (BaseView ())
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func appendSeparator (ignoreVerticalMargins inFlag : Bool = true) -> Self {
    return self.appendView (VerticalStackSeparator (ignoreVerticalMargins: inFlag))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout Features
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var layoutFeatures : LayoutFeatures {
    if let lf = self.mLayoutFeaturesCache {
      return lf
    }else{
    //--- Compute layout features
      var minWidth = 0.0
      var cumulatedHeight = 0.0
      var vsr = VerticalStretchingResistance.highest
      var hsr = HorizontalStretchingResistance.lowest
      let visibleSubViews = self.visibleSubViews
      for view in visibleSubViews {
        hsr = max (hsr, view.hStretchingResistance)
        vsr = min (vsr, view.vStretchingResistance)
        minWidth = max (minWidth, view.smallestSize.width)
        cumulatedHeight += view.smallestSize.height
      }
      if visibleSubViews.count > 1 {
        cumulatedHeight += self.mSpacing * Double (visibleSubViews.count - 1)
      }
    //--- Add margins
      cumulatedHeight += self.mTopMargin + self.mBottomMargin
      minWidth += self.mLeftMargin + self.mRightMargin
    //---
//      let verticalAlignment : VerticalAlignmentInHorizontalStack
      let lf = LayoutFeatures (
        smallestSize: NSSize (width: minWidth, height: cumulatedHeight),
        hAlignment: .fill,
        hStretchingResistance: hsr,
        vAlignment: .fill,
        vStretchingResistance: vsr
      )
      self.mLayoutFeaturesCache = lf
      return lf
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLayoutFeaturesCache : LayoutFeatures? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func invalidateSimpleLayout () {
    self.mLayoutFeaturesCache = nil
    super.invalidateSimpleLayout ()
  }


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  open override var smallestSize : NSSize { self.layoutFeatures.smallestSize }

  open override var hAlignment : HorizontalAlignmentInVerticalStack { self.layoutFeatures.hAlignment }

  open override var hStretchingResistance : HorizontalStretchingResistance { self.layoutFeatures.hStretchingResistance }

  open override var vAlignment : VerticalAlignmentInHorizontalStack { self.layoutFeatures.vAlignment }

  open override var vStretchingResistance : VerticalStretchingResistance { self.layoutFeatures.vStretchingResistance }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func computeSimpleLayout (withFrame inFrame2 : NSRect) {
    super.computeSimpleLayout (withFrame: inFrame2)
    let visibleSubViews = self.visibleSubViews
    if visibleSubViews.count > 0 {
    //--- Count views with smaller v stretching resistance
      var n = 0
      var smallestStrechingResistance = VerticalStretchingResistance.highest
      for view in visibleSubViews {
        if view.vStretchingResistance == smallestStrechingResistance {
          n += 1
        }else if view.vStretchingResistance < smallestStrechingResistance {
          smallestStrechingResistance = view.vStretchingResistance
          n = 1
        }
      }
      let bounds = self.cocoaView.bounds
      var y = self.mBottomMargin
      for view in visibleSubViews.reversed () {
        if !view.isHidden {
          let viewXOffset : CGFloat
          var viewWidth = view.smallestSize.width
          switch view.hAlignment {
          case .left :
            viewXOffset = self.mLeftMargin
          case .center :
            viewXOffset = (bounds.width + self.mLeftMargin - view.smallestSize.width) / 2.0
          case .right :
            viewXOffset = bounds.width - view.smallestSize.width - self.mRightMargin
          case .fill :
            viewXOffset = self.mLeftMargin
            viewWidth = bounds.width - self.mLeftMargin - self.mRightMargin
          case .fillIgnoringMargins :
            viewXOffset = 0.0
            viewWidth = bounds.width
          }
          var viewHeight = view.smallestSize.height
          if view.vStretchingResistance == smallestStrechingResistance {
            viewHeight += ((bounds.height - self.layoutFeatures.smallestSize.height) / Double (n))
          }
          let frame = NSRect (
            x: viewXOffset,
            y: y,
            width: viewWidth,
            height: viewHeight
          )
          view.computeSimpleLayout (withFrame: frame)
          y += viewHeight + self.mSpacing
        }
      }
    }
  }


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
