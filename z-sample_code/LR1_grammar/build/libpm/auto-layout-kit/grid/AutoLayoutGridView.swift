//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class AutoLayoutGridView : BaseStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mRowArray = [[BaseView?]] (repeating: [], count: 1)

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override public func appendView (_ inView : BaseView) -> Self {
    self.mRowArray [self.mRowArray.count - 1].append (inView)
    return super.appendView (inView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendRow () -> Self {
    self.mRowArray.append ([])
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func removeView (_ inView : BaseView) {
    super.removeView (inView)
    for row in 0 ..< self.rowCount {
      var array = self.mRowArray [row]
      for i in 0 ..< array.count {
        if array [i] === inView {
          array [i] = nil
        }
      }
      self.mRowArray [row] = array
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var rowCount : Int { self.mRowArray.count }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var columnCount : Int {
    var n = 0
    for row in self.mRowArray {
      n = max (n, row.count)
    }
    return n
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func viewAt (x inColumn : Int , y inRow : Int) -> BaseView? {
    if (inRow >= 0) && (inRow < self.mRowArray.count) {
      let row = self.mRowArray [inRow]
      if (inColumn >= 0) && (inColumn < row.count) {
        return row [inColumn]
      }else{
        return nil
      }
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout Features
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLayoutFeaturesCache : LayoutFeatures? = nil
  private var mColumnMinWidth = [CGFloat] ()
  private var mRowMinHeight = [CGFloat] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var layoutFeatures : LayoutFeatures {
    if let lf = self.mLayoutFeaturesCache {
      return lf
    }else{
    //--- Compute column width
      var viewHSR : HorizontalStretchingResistance = .highest
      self.mColumnMinWidth.removeAll (keepingCapacity: true)
      for column in 0 ..< self.columnCount {
        var hsr : HorizontalStretchingResistance = .lowest
        var minColumnWidth = 0.0
        for row in 0 ..< self.rowCount {
          if let view = self.viewAt (x: column, y: row), !view.isHidden {
            minColumnWidth = max (minColumnWidth, view.smallestSize.width)
            hsr = max (hsr, view.hStretchingResistance)
          }
        }
        viewHSR = min (viewHSR, hsr)
        self.mColumnMinWidth.append (minColumnWidth)
      }
    //--- Compute row height
      var viewVSR : VerticalStretchingResistance = .highest
      self.mRowMinHeight.removeAll (keepingCapacity: true)
      for row in 0 ..< self.rowCount {
        var minRowHeight = 0.0
        var vsr : VerticalStretchingResistance = .lowest
        for column in 0 ..< self.columnCount {
          if let view = self.viewAt (x: column, y: row), !view.isHidden {
            minRowHeight = max (minRowHeight, view.smallestSize.height)
            vsr = max (vsr, view.vStretchingResistance)
          }
        }
        viewVSR = min (viewVSR, vsr)
        self.mRowMinHeight.append (minRowHeight)
      }
    //--- Compute smallest size
      var smallestWidth = self.mLeftMargin + self.mRightMargin
      for w in self.mColumnMinWidth {
        smallestWidth += w
      }
      if self.columnCount > 1 {
        smallestWidth += self.mSpacing * Double (self.columnCount - 1)
      }
      var smallestHeight = self.mTopMargin + self.mBottomMargin
      for h in self.mRowMinHeight {
        smallestHeight += h
      }
      if self.rowCount > 1 {
        smallestHeight += self.mSpacing * Double (self.rowCount - 1)
      }
    //--- Compute horizontal stretching resistance
//      for rowViewArray in self.mRowArray {
//        var minHeight = 0.0
//        var optionalAboveBelowLastBottomBaseLine : (CGFloat, CGFloat)? = nil
//        var cumulatedWidth = 0.0
//        var hsr : HorizontalStretchingResistance = .highest
//        var vsr = VerticalStretchingResistance.highest
//        let visibleSubViews = self.visibleSubViews
//        for view in rowViewArray {
//          hsr = min (hsr, view.hStretchingResistance)
//          vsr = max (vsr, view.vStretchingResistance)
//          minHeight = max (minHeight, view.smallestSize.height)
//          switch view.vAlignment {
//          case .bottom, .center, .top, .fill, .fillIgnoringMargins :
//            ()
//          case .lastBaseline (let baseLine) :
//            let aboveBelow = optionalAboveBelowLastBottomBaseLine ?? (0.0, 0.0)
//            optionalAboveBelowLastBottomBaseLine = (max (aboveBelow.0, baseLine), max (aboveBelow.1, view.smallestSize.height - baseLine))
//          }
//          cumulatedWidth += view.smallestSize.width
//        }
//      }
//      if visibleSubViews.count > 1 {
//        cumulatedWidth += self.mSpacing * Double (visibleSubViews.count - 1)
//      }
//      if let aboveBelow = optionalAboveBelowLastBottomBaseLine {
//        minHeight = max (minHeight, aboveBelow.0 + aboveBelow.1)
//      }
//      let verticalAlignment : VerticalAlignmentInHorizontalStack
//      if let b = optionalAboveBelowLastBottomBaseLine?.0 {
//        verticalAlignment = .lastBaseline (b)
//      }else{
//        verticalAlignment = .fill
//      }
//    //--- Add margins
//      minHeight += self.mTopMargin + self.mBottomMargin
//      cumulatedWidth += self.mLeftMargin + self.mRightMargin
    //---
      let lf = LayoutFeatures (
        smallestSize: NSSize (width: smallestWidth, height: smallestHeight),
        hAlignment: .fill,
        hStretchingResistance: viewHSR,
        vAlignment: .fill,
        vStretchingResistance: viewVSR
      )
      self.mLayoutFeaturesCache = lf
      return lf
    }
  }

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
    var y = bounds.maxY - self.mTopMargin
    for row in 0 ..< self.rowCount {
      let height = self.mRowMinHeight [row]
      y -= height
      var x = self.mLeftMargin
      for column in 0 ..< self.columnCount {
        if let view = self.viewAt (x: column, y: row), !view.isHidden {
          let width = self.mColumnMinWidth [column]
          let frame = NSRect (x: x, y: y, width: width, height: height)
          view.computeSimpleLayout (withFrame: frame)
          x += width + self.mSpacing
        }
      }
      y -= self.mSpacing
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { self.layoutFeatures.smallestSize }

  public override var hAlignment : HorizontalAlignmentInVerticalStack { self.layoutFeatures.hAlignment }

  public override var hStretchingResistance : HorizontalStretchingResistance { self.layoutFeatures.hStretchingResistance }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { self.layoutFeatures.vAlignment }

  public override var vStretchingResistance : VerticalStretchingResistance { self.layoutFeatures.vStretchingResistance }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public override func computeSimpleLayout (withFrame inFrame : NSRect) {
//    super.computeSimpleLayout (withFrame: inFrame)
//    var frame = self.mCocoaView.bounds
//    frame.origin.x += self.mLeftMargin
//    frame.size.width -= self.mLeftMargin + self.mRightMargin
//    frame.origin.y += self.mBottomMargin
//    frame.size.height -= self.mTopMargin + self.mBottomMargin
//    self.mHStackHierarchy?.computeSimpleHorizontalLayout (withFrame: frame)
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
