//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class AutoLayoutHorizontalStackView : BaseStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private var mGutterArray = [HorizontalStackGutter] ()
//  var gutters : [HorizontalStackGutter] { self.mGutterArray }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public final func appendGutter () -> Self {
//    return self.appendView (HorizontalStackGutter ())
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func appendFlexibleSpace () -> Self {
    return self.appendView (BaseView ())
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func appendSeparator (ignoreVerticalMargins inFlag : Bool = true) -> Self {
    let separator = HorizontalStackSeparator (ignoreVerticalMargins: inFlag)
    return self.appendView (separator)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func prependSeparator (ignoreVerticalMargins inFlag : Bool = true) -> Self {
//    let separator = HorizontalStackSeparator (ignoreVerticalMargins: inFlag)
//    return self.prependView (separator)
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Facilities
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func appendViewPreceededByFlexibleSpace (_ inView : NSView) -> Self {
//    let hStack = AutoLayoutVerticalStackView ()
//      .appendFlexibleSpace ()
//      .appendView (inView)
//    self.addSubview (hStack)
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func appendViewSurroundedByFlexibleSpaces (_ inView : NSView) -> Self {
//    let hStack = AutoLayoutVerticalStackView ()
//      .appendFlexibleSpace ()
//      .appendView (inView)
//      .appendFlexibleSpace ()
//    self.addSubview (hStack)
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  class final func viewFollowedByFlexibleSpace (_ inView : NSView) -> AutoLayoutHorizontalStackView {
//    return AutoLayoutHorizontalStackView ().appendView (inView).appendFlexibleSpace ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout Features
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var layoutFeatures : LayoutFeatures {
    if let lf = self.mLayoutFeaturesCache {
      return lf
    }else{
      var minHeight = 0.0
      var optionalAboveBelowLastBottomBaseLine : (CGFloat, CGFloat)? = nil
      var cumulatedWidth = 0.0
      var hsr : HorizontalStretchingResistance = .highest
      var vsr = VerticalStretchingResistance.lowest
      let visibleSubViews = self.visibleSubViews
      for view in visibleSubViews {
        hsr = min (hsr, view.hStretchingResistance)
        vsr = max (vsr, view.vStretchingResistance)
        minHeight = max (minHeight, view.smallestSize.height)
        switch view.vAlignment {
        case .bottom, .center, .top, .fill, .fillIgnoringMargins :
          ()
        case .lastBaseline (let baseLine) :
          let aboveBelow = optionalAboveBelowLastBottomBaseLine ?? (0.0, 0.0)
          optionalAboveBelowLastBottomBaseLine = (max (aboveBelow.0, baseLine), max (aboveBelow.1, view.smallestSize.height - baseLine))
        }
        cumulatedWidth += view.smallestSize.width
      }
      if visibleSubViews.count > 1 {
        cumulatedWidth += self.mSpacing * Double (visibleSubViews.count - 1)
      }
      if let aboveBelow = optionalAboveBelowLastBottomBaseLine {
        minHeight = max (minHeight, aboveBelow.0 + aboveBelow.1)
      }
      let verticalAlignment : VerticalAlignmentInHorizontalStack
      if let b = optionalAboveBelowLastBottomBaseLine?.0 {
        verticalAlignment = .lastBaseline (b)
      }else{
        verticalAlignment = .fill
      }
    //--- Add margins
      minHeight += self.mTopMargin + self.mBottomMargin
      cumulatedWidth += self.mLeftMargin + self.mRightMargin
    //---
      let lf = LayoutFeatures (
        smallestSize: NSSize (width: cumulatedWidth, height: minHeight),
        hAlignment: .fill,
        hStretchingResistance: hsr,
        vAlignment: verticalAlignment,
        vStretchingResistance: vsr
      )
      self.mLayoutFeaturesCache = lf
      return lf
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLayoutFeaturesCache : LayoutFeatures? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // invalidateSimpleLayout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func invalidateSimpleLayout () {
    self.mLayoutFeaturesCache = nil
    super.invalidateSimpleLayout ()
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func computeSimpleLayout (withFrame inFrame : NSRect) {
    super.computeSimpleLayout (withFrame: inFrame)
    let bounds = self.cocoaView.bounds
    let visibleSubViews = self.visibleSubViews
    if visibleSubViews.count > 0 {
    //--- Count views with smaller h stretching resistance
      var n = 0
      var smallestStrechingResistance = HorizontalStretchingResistance.highest
      for view in visibleSubViews {
        if view.hStretchingResistance == smallestStrechingResistance {
          n += 1
        }else if view.hStretchingResistance < smallestStrechingResistance {
          smallestStrechingResistance = view.hStretchingResistance
          n = 1
        }
      }
      let rabY = bounds.height - self.layoutFeatures.smallestSize.height
      var x = self.mLeftMargin
      for view in visibleSubViews {
        let viewYOffset : CGFloat
        var viewHeight = view.smallestSize.height
        switch view.vAlignment {
        case .bottom :
          viewYOffset = self.mBottomMargin
        case .center :
          viewYOffset = (bounds.height + self.mBottomMargin - view.smallestSize.height) / 2.0
        case .top :
          viewYOffset = bounds.height - view.smallestSize.height - self.mTopMargin
        case .fill :
          viewYOffset = self.mBottomMargin
          viewHeight = bounds.height - self.mTopMargin - self.mBottomMargin
        case .fillIgnoringMargins :
          viewYOffset = 0.0
          viewHeight = bounds.height
       case .lastBaseline (let baseLine) :
          viewYOffset = self.mBottomMargin
                      + rabY / 2.0
                      + self.layoutFeatures.vAlignment.lastBaselineOrZero
                      - baseLine
        }
        var viewWidth = view.smallestSize.width
        if view.hStretchingResistance == smallestStrechingResistance {
          viewWidth += (bounds.width - self.layoutFeatures.smallestSize.width) / Double (n)
        }
        let frame = NSRect (
          x: x,
          y: viewYOffset,
          width: viewWidth,
          height: viewHeight
        )
        view.computeSimpleLayout (withFrame: frame)
        x += viewWidth + self.mSpacing
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { self.layoutFeatures.smallestSize }

  public override var hAlignment : HorizontalAlignmentInVerticalStack { self.layoutFeatures.hAlignment }

  public override var hStretchingResistance : HorizontalStretchingResistance { self.layoutFeatures.hStretchingResistance }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { self.layoutFeatures.vAlignment }

  public override var vStretchingResistance : VerticalStretchingResistance { self.layoutFeatures.vStretchingResistance }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
