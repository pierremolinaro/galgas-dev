//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

fileprivate let DIVIDER_WIDTH : CGFloat = 10.0

//--------------------------------------------------------------------------------------------------
//   AutoLayoutHorizontalSplitView
//--------------------------------------------------------------------------------------------------

public class AutoLayoutHorizontalSplitView : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCocoaHSplitView = InternalCocoaHorizontalSplitView ()
  fileprivate var mXDividerArray = [XDivider] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override init () {
    super.init (withCocoaView: self.mCocoaHSplitView)
    self.mCocoaHSplitView.myHSplitView = self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func dividerDragged (dividerIndex inDividerIndex : Int,
                       dividerNewLeft inDividerNewX : CGFloat) {
    let visibleSubViews = self.visibleSubViews
    self.mXDividerArray [inDividerIndex].xCurrent = inDividerNewX
    var idx = inDividerIndex
    while idx > 0 {
      idx -= 1
      let maxCurrentDividerX = self.mXDividerArray [idx+1].xCurrent - visibleSubViews [idx+1].smallestSize.width - DIVIDER_WIDTH
      if self.mXDividerArray [idx].xCurrent > maxCurrentDividerX {
        self.mXDividerArray [idx].xCurrent = maxCurrentDividerX
      }
    }
    idx = inDividerIndex + 1
    while idx < self.mXDividerArray.count {
      let minCurrentDividerX = self.mXDividerArray [idx-1].xCurrent + visibleSubViews [idx].smallestSize.width - DIVIDER_WIDTH
      if self.mXDividerArray [idx].xCurrent < minCurrentDividerX {
        self.mXDividerArray [idx].xCurrent = minCurrentDividerX
      }
      idx += 1
    }
    self.computeSimpleLayout (withFrame: self.mCocoaHSplitView.frame)
  }

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
        cumulatedWidth += DIVIDER_WIDTH * Double (visibleSubViews.count - 1)
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
    if visibleSubViews.count == 0 { // No view
      self.mXDividerArray.removeAll (keepingCapacity: true)
    }else if visibleSubViews.count == 1 { // Only one view
      self.mXDividerArray.removeAll (keepingCapacity: true)
      visibleSubViews [0].computeSimpleLayout (withFrame: bounds)
    }else if visibleSubViews.count > 1 { // Several viewx
      var dividerMinX = 0.0
      let rabY = bounds.height - self.layoutFeatures.smallestSize.height
      var left = 0.0
      for idx in 0 ..< visibleSubViews.count {
        let view = visibleSubViews [idx]
        let viewYOffset : CGFloat
        var viewHeight = view.smallestSize.height
        switch view.vAlignment {
        case .bottom :
          viewYOffset = 0.0
        case .center :
          viewYOffset = (bounds.height - view.smallestSize.height) / 2.0
        case .top :
          viewYOffset = bounds.height - view.smallestSize.height
        case .fill :
          viewYOffset = 0.0
          viewHeight = bounds.height
        case .fillIgnoringMargins :
          viewYOffset = 0.0
          viewHeight = bounds.height
       case .lastBaseline (let baseLine) :
          viewYOffset = rabY / 2.0
                      + self.layoutFeatures.vAlignment.lastBaselineOrZero
                      - baseLine
        }
        if idx == (visibleSubViews.count - 1) { // Last view
          let frame = NSRect (
            x: left,
            y: viewYOffset,
            width: bounds.width - left,
            height: viewHeight
          )
          view.computeSimpleLayout (withFrame: frame)
        }else{
          dividerMinX += view.smallestSize.width
          let dividerMaxX = dividerMinX + inFrame.width - self.layoutFeatures.smallestSize.width
          if idx < self.mXDividerArray.count {
            self.mXDividerArray [idx].xMin = dividerMinX
            self.mXDividerArray [idx].xMax = dividerMaxX
            if self.mXDividerArray [idx].xCurrent < dividerMinX {
              self.mXDividerArray [idx].xCurrent = dividerMinX
            }
            if self.mXDividerArray [idx].xCurrent > dividerMaxX {
              self.mXDividerArray [idx].xCurrent = dividerMaxX
            }
          }else{
            let d = XDivider (
              xMin: dividerMinX,
              xCurrent: left + view.smallestSize.width,
              xMax: dividerMaxX
            )
            self.mXDividerArray.append (d)
          }
          let frame = NSRect (
            x: left,
            y: viewYOffset,
            width: self.mXDividerArray [idx].xCurrent - left,
            height: viewHeight
          )
          view.computeSimpleLayout (withFrame: frame)
          left = self.mXDividerArray [idx].xCurrent + DIVIDER_WIDTH
          dividerMinX = DIVIDER_WIDTH
        }
      }
      let n = self.mXDividerArray.count - visibleSubViews.count + 1
      if n > 0 {
        self.mXDividerArray.removeLast (n)
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

fileprivate struct XDivider {
  var xMin : CGFloat
  var xCurrent : CGFloat
  var xMax : CGFloat
}

//--------------------------------------------------------------------------------------------------

fileprivate class InternalCocoaHorizontalSplitView : NSView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  weak var myHSplitView : AutoLayoutHorizontalSplitView? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init?(coder: NSCoder) {
    fatalError("init(coder:) has not been implemented")
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override var canBecomeKeyView : Bool { false }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draw (_ inDirtyRect: NSRect) {
    if let xDividerArray = self.myHSplitView?.mXDividerArray {
      let bounds = self.bounds
      for d in xDividerArray {
        var r = NSRect (x: d.xCurrent, y: bounds.origin.y, width: DIVIDER_WIDTH, height: bounds.height)
        if !r.isEmpty {
          NSColor.separatorColor.setStroke ()
          NSBezierPath.stroke (r)
        }
        let s : CGFloat = DIVIDER_WIDTH * 3.0 / 5.0
        r = NSRect (
          x: d.xCurrent + (DIVIDER_WIDTH - s) / 2.0,
          y: bounds.midY - s / 2.0,
          width: s,
          height: s
        )
        if !r.isEmpty {
          NSColor.separatorColor.setFill ()
          let bp = NSBezierPath (ovalIn: r)
          bp.fill ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Tracking mouse moved events
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var mTrackingArea : NSTrackingArea? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func updateTrackingAreas () { // This is required for receiving mouse moved and mouseExited events
  //--- Remove current tracking area
    if let trackingArea = self.mTrackingArea {
      self.removeTrackingArea (trackingArea)
    }
  //--- Add Updated tracking area
    let trackingArea = NSTrackingArea (
      rect: self.bounds,
      options: [.mouseEnteredAndExited, .mouseMoved, .activeInKeyWindow],
      owner: self,
      userInfo: nil
    )
    self.addTrackingArea (trackingArea)
    self.mTrackingArea = trackingArea
  //---
    super.updateTrackingAreas ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  override func mouseEntered (with inEvent : NSEvent) {
//    NSCursor.resizeUpDown.set ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseExited (with inEvent : NSEvent) {
    NSCursor.arrow.set ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateCursor (forMouseLocationInWindow inMouseLocationInWindow : NSPoint) {
    if let xDividerArray = self.myHSplitView?.mXDividerArray {
      let xMouse = self.convert (inMouseLocationInWindow, from: nil).x
      for d in xDividerArray {
        if (xMouse >= d.xCurrent) && (xMouse <= (d.xCurrent + DIVIDER_WIDTH)) {
          let canMoveLeft = d.xCurrent > d.xMin
          let canMoveRight = d.xCurrent < d.xMax
          if canMoveLeft && canMoveRight {
            NSCursor.resizeLeftRight.set ()
          }else if canMoveLeft {
            NSCursor.resizeLeft.set ()
          }else if canMoveRight {
            NSCursor.resizeRight.set ()
          }else{
            NSCursor.arrow.set ()
          }
          return
        }
      }
    }
    NSCursor.arrow.set ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseMoved (with inEvent : NSEvent) {
    self.updateCursor (forMouseLocationInWindow: inEvent.locationInWindow)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Mouse
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mInitialMouseDownOffsetFromDividerLeft : CGFloat = 0.0
  private var mMouseDownDividerIndex : Int? = nil

  // · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · · ·

  override func mouseDown (with inEvent : NSEvent) {
    if let xDividerArray = self.myHSplitView?.mXDividerArray {
      self.mMouseDownDividerIndex = nil
      let xMouse = self.convert (inEvent.locationInWindow, from: nil).x
      for i in 0 ..< xDividerArray.count {
        let x = xDividerArray [i].xCurrent
        if (xMouse >= x) && (xMouse <= (x + DIVIDER_WIDTH)) {
          self.mMouseDownDividerIndex = i
          self.mInitialMouseDownOffsetFromDividerLeft = xMouse - x
          return
        }
      }
    }
    super.mouseDown (with: inEvent)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseDragged (with inEvent : NSEvent) {
    if let dividerIndex = self.mMouseDownDividerIndex {
      let xMouse = self.convert (inEvent.locationInWindow, from: nil).x
      self.myHSplitView?.dividerDragged (
        dividerIndex: dividerIndex,
        dividerNewLeft: xMouse - self.mInitialMouseDownOffsetFromDividerLeft
      )
      self.updateCursor (forMouseLocationInWindow: inEvent.locationInWindow)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseUp (with inEvent : NSEvent) {
    NSCursor.arrow.set ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
