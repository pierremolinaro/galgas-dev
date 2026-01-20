//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public extension NSWindow {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setRootView (_ inView : BaseView) {
    let rootView = RootView (view: inView)
    self.contentView = rootView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func triggerDecoration () {
    if let view = self.contentView as? RootView {
      view.triggerDecoration ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate let DEBUG_FLEXIBLE_SPACE_FILL_COLOR      = NSColor.systemGreen.withAlphaComponent (0.25)
fileprivate let DEBUG_LAST_BASELINE_COLOR            = NSColor.systemPink
fileprivate let DEBUG_LAST_STACK_VIEW_BASELINE_COLOR = NSColor.systemBlue
fileprivate let DEBUG_FRAME_STROKE_COLOR             = NSColor.systemOrange
fileprivate let DEBUG_MARGIN_COLOR                   = NSColor.systemYellow.withAlphaComponent (0.5)
fileprivate let DEBUG_KEY_CHAIN_STROKE_COLOR         = NSColor.systemPurple
fileprivate let GUTTER_FILL_COLOR                    = NSColor.systemBrown

//--------------------------------------------------------------------------------------------------
//  Show view current settings
//--------------------------------------------------------------------------------------------------

fileprivate let SHOW_VIEW_SETTINGS_PREFERENCES_KEY = "debug.show.view.settings"

@MainActor fileprivate var gShowViewCurrentSettings = UserDefaults.standard.bool (forKey: SHOW_VIEW_SETTINGS_PREFERENCES_KEY)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

@MainActor func getShowViewCurrentSettings () -> Bool {
  return gShowViewCurrentSettings
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

@MainActor func setShowViewCurrentSettings (_ inFlag : Bool) {
  if gShowViewCurrentSettings != inFlag {
    gShowViewCurrentSettings = inFlag
    UserDefaults.standard.setValue (inFlag, forKey: SHOW_VIEW_SETTINGS_PREFERENCES_KEY)
    for window in NSApplication.shared.windows {
      if let mainView = window.contentView as? RootView {
        mainView.updateTrackingAreas ()
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//  Debug Responder Chain
//--------------------------------------------------------------------------------------------------

fileprivate let DEBUG_RESPONDER_CHAIN_PREFERENCES_KEY = "debug.responder.chain"

@MainActor fileprivate var gDebugResponderChain = UserDefaults.standard.bool (forKey: DEBUG_RESPONDER_CHAIN_PREFERENCES_KEY)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

@MainActor func getDebugResponderChain () -> Bool {
  return gDebugResponderChain
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

@MainActor func setDebugResponderChain (_ inFlag : Bool) {
  if gDebugResponderChain != inFlag {
    gDebugResponderChain = inFlag
    UserDefaults.standard.setValue (inFlag, forKey: DEBUG_RESPONDER_CHAIN_PREFERENCES_KEY)
    for window in NSApplication.shared.windows {
      window.triggerDecoration ()
    }
  }
}

//--------------------------------------------------------------------------------------------------
//  Debug Autolayout
//--------------------------------------------------------------------------------------------------

fileprivate let DEBUG_AUTOLAYOUT_PREFERENCES_KEY = "debug.autolayout"

@MainActor fileprivate var gDebugAutoLayout = UserDefaults.standard.bool (forKey: DEBUG_AUTOLAYOUT_PREFERENCES_KEY)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

@MainActor func getDebugAutoLayout () -> Bool {
  return gDebugAutoLayout
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

@MainActor func setDebugAutoLayout (_ inFlag : Bool) {
  if gDebugAutoLayout != inFlag {
    gDebugAutoLayout = inFlag
    UserDefaults.standard.setValue (inFlag, forKey: DEBUG_AUTOLAYOUT_PREFERENCES_KEY)
    for window in NSApplication.shared.windows {
      window.triggerDecoration ()
    }
  }
}

//--------------------------------------------------------------------------------------------------

@MainActor func buildResponderKeyChainForWindowThatContainsView (_ inView : NSView?) {
  if let windowContentView = inView?.window?.contentView as? RootView {
    windowContentView.triggerNextKeyViewSettingComputation ()
  }
}

//--------------------------------------------------------------------------------------------------

fileprivate final class RootView : NSView, InvalidatedLayoutDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mHiliteView : FilePrivateHiliteView
  private let mUserRootView : BaseView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (view inView : BaseView) {
    self.mUserRootView = inView
    self.mHiliteView = FilePrivateHiliteView (rootView: inView)
    super.init (frame: .zero)
    noteObjectAllocation (self)
    self.autoresizesSubviews = true
    inView.cocoaView.autoresizingMask = [.width, .height]
    self.addSubview (inView.cocoaView)
    self.mHiliteView.autoresizingMask = [.width, .height]
    self.addSubview (self.mHiliteView)

    inView.invalidatedLayoutDelegate = self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder: NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // InvalidatedLayoutDelegate protocol
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mComputeLayoutTriggered = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func layoutHasBeenInvalidated (for inView : BaseView) {
    if !self.mComputeLayoutTriggered {
      self.mComputeLayoutTriggered = true
      DispatchQueue.main.async {
        self.computeSimpleLayout ()
        self.mComputeLayoutTriggered = false
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func viewDidMoveToWindow () {
    super.viewDidMoveToWindow ()
    self.computeSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func resizeSubviews (withOldSize inOldSize : NSSize) {
    super.resizeSubviews (withOldSize: inOldSize)
    self.computeSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func computeSimpleLayout () {
    if let w = self.window {
    //--- Min Size
      w.contentMinSize = self.mUserRootView.smallestSize
    //--- Max size
      var windowMaxSize = NSSize (
        width: CGFloat.greatestFiniteMagnitude,
        height: CGFloat.greatestFiniteMagnitude
      )
      if self.mUserRootView.hStretchingResistance >= .high {
        windowMaxSize.width = self.mUserRootView.smallestSize.width
      }
      if self.mUserRootView.vStretchingResistance >= .high {
        windowMaxSize.height = self.mUserRootView.smallestSize.height
      }
      w.contentMaxSize = windowMaxSize
    //--- Current Size
      var currentSize = self.bounds.size
      currentSize.width = max (currentSize.width, self.mUserRootView.smallestSize.width)
      currentSize.width = min (currentSize.width, windowMaxSize.width)
      currentSize.height = max (currentSize.height, self.mUserRootView.smallestSize.height)
      currentSize.height = min (currentSize.height, windowMaxSize.height)
      w.setContentSize (currentSize)
    //---
      self.mUserRootView.computeSimpleLayout (withFrame: NSRect (origin: .zero, size: currentSize))
      self.triggerDecoration ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func triggerDecoration () {
    self.mHiliteView.needsDisplay = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mNextKeyViewSettingComputationHasBeenTriggered = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func triggerNextKeyViewSettingComputation () {
    if !self.mNextKeyViewSettingComputationHasBeenTriggered {
      self.mNextKeyViewSettingComputationHasBeenTriggered = true
      DispatchQueue.main.async {
        self.mNextKeyViewSettingComputationHasBeenTriggered = false
        var currentView : NSView? = nil
        var optionalLastView : NSView? = nil
        self.buildAutoLayoutKeyViewChain (self, &currentView, &optionalLastView)
        if let lastView = optionalLastView {
          _ = self.setAutoLayoutFirstKeyViewInChain (self, lastView)
        }
        self.mHiliteView.needsDisplay = true
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func buildAutoLayoutKeyViewChain (_ inView : NSView,
                                            _ ioCurrentNextKeyView : inout NSView?,
                                            _ outLastView : inout NSView?) {
    for view in inView.subviews.reversed () {
      if !view.isHidden {
        if view.canBecomeKeyView && view.acceptsFirstResponder {
          if outLastView == nil {
            outLastView = view
          }
          view.nextKeyView = ioCurrentNextKeyView
          ioCurrentNextKeyView = view
        }else{
          self.buildAutoLayoutKeyViewChain (view, &ioCurrentNextKeyView, &outLastView)
        }
      }else{
        view.nextResponder = nil
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func setAutoLayoutFirstKeyViewInChain (_ inView : NSView,
                                                     _ inLastView : NSView) -> Bool {
    for view in inView.subviews {
      if !view.isHidden {
        if view.canBecomeKeyView && view.acceptsFirstResponder {
          inLastView.nextKeyView = view
          self.window?.initialFirstResponder = view
          return true
        }else{
          let found = self.setAutoLayoutFirstKeyViewInChain (view, inLastView)
          if found {
            return true
          }
        }
      }
    }
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   DISPLAY VIEW CURRENT SETTINGS
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var mTrackingArea : NSTrackingArea? = nil
  var mCurrentTrackedView : BaseView? = nil
  var mDisplayWindow : NSWindow? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func updateTrackingAreas () { // This is required for receiving mouse moved and mouseExited events
  //--- Remove current tracking area
    if let trackingArea = self.mTrackingArea {
      self.removeTrackingArea (trackingArea)
    }
  //--- Add Updated tracking area (.activeInKeyWindow is required, otherwise crash)
    if getShowViewCurrentSettings () || getDebugAutoLayout () {
      let trackingArea = NSTrackingArea (
        rect: self.bounds,
        options: [.mouseEnteredAndExited, .mouseMoved, .activeInKeyWindow],
        owner: self,
        userInfo: nil
      )
      self.addTrackingArea (trackingArea)
      self.mTrackingArea = trackingArea
    }
  //---
    super.updateTrackingAreas ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func findSubView (in inView: BaseView, at inPoint : NSPoint) -> BaseView? {
    for view in inView.subViews.reversed () {
      if !view.isHidden {
        let p = view.cocoaView.convert (inPoint, from: inView.cocoaView)
        let v = self.findSubView (in: view, at: p)
        if v != nil {
          return v
        }
      }
    }
    if inView.cocoaView.bounds.contains (inPoint) {
      return inView
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseMoved (with inEvent : NSEvent) {
    if getShowViewCurrentSettings () {
      let windowContentView = self.mUserRootView
      let mouseLocation = windowContentView.cocoaView.convert (inEvent.locationInWindow, from: nil)
      let optionalView = self.findSubView (in: windowContentView, at: mouseLocation)
      if optionalView !== self.mCurrentTrackedView {
        self.mCurrentTrackedView = optionalView
        self.mDisplayWindow?.orderOut (nil)
        self.mDisplayWindow = nil
        if let view = optionalView {
          self.mDisplayWindow = buildHelperWindow (forView: view)
          self.mDisplayWindow?.orderFront (nil)
        }
      }
      var p = self.window!.convertPoint (toScreen: inEvent.locationInWindow)
      p.x += 10.0
      p.y += 10.0
      self.mDisplayWindow?.setFrameOrigin (p)
    }
    super.mouseMoved (with: inEvent)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func mouseExited (with inEvent : NSEvent) {
    self.mCurrentTrackedView = nil
    self.mDisplayWindow?.orderOut (nil)
    self.mDisplayWindow = nil
    super.mouseExited (with: inEvent)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func buildHelperWindow (forView inView : BaseView) -> NSWindow {
    let window = NSPanel (
      contentRect: NSRect (x: 0, y: 0, width: 10, height: 10),
      styleMask: [.utilityWindow, .borderless, .resizable],
      backing: .buffered,
      defer: false,
      screen: self.window?.screen
    )
    window.backgroundColor = NSColor.white
    window.isOpaque = true
    window.isExcludedFromWindowsMenu = true
    let mainView = FilePrivateHelperView (configuredWithView: inView)
    window.minSize = mainView.frame.size
    window.maxSize = mainView.frame.size
    window.setContentSize (mainView.frame.size)
    window.contentView = mainView
    return window
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class FilePrivateHelperView : NSView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (configuredWithView inView : BaseView) {
    super.init (frame: .zero)
    var y : CGFloat = 0.0
    var maxWidth : CGFloat = 0.0
    self.appendTextField (titled: "Frame: \(inView.cocoaView.frame)", y: &y, maxWidth: &maxWidth)
    self.appendTextField (titled: "v alignment: \(inView.vAlignment)", y: &y, maxWidth: &maxWidth)
    self.appendTextField (titled: "v Stretching Resistance: \(inView.vStretchingResistance)", y: &y, maxWidth: &maxWidth)
    self.appendTextField (titled: "h alignment: \(inView.hAlignment)", y: &y, maxWidth: &maxWidth)
    self.appendTextField (titled: "h Stretching Resistance: \(inView.hStretchingResistance)", y: &y, maxWidth: &maxWidth)
    self.appendTextField (titled: "Smallest Size: \(inView.smallestSize)", y: &y, maxWidth: &maxWidth)
    self.appendTextField (titled: "Class: \(String (describing: type (of: inView)))", y: &y, maxWidth: &maxWidth)
//    self.appendTextField (titled: "Baseline View: " + baseline)
//    self.appendTextField (titled: "acceptsFirstResponder: \(inView.acceptsFirstResponder)")
//    self.appendTextField (titled: "canBecomeKeyView: \(inView.canBecomeKeyView)")
//    self.appendTextField (titled: "h Compression Resistance: \(inView.contentCompressionResistancePriority (for: .horizontal).rawValue)")
//    self.appendTextField (titled: "v Compression Resistance: \(inView.contentCompressionResistancePriority (for: .vertical).rawValue)")
    let size = NSSize (width: maxWidth, height: y)
    self.frame = NSRect (origin: .zero, size: size)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder: NSCoder) {
    fatalError("init(coder:) has not been implemented")
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendTextField (titled inString : String,
                                y ioY : inout CGFloat,
                                maxWidth ioWidth : inout CGFloat) {
    let view = NSTextField (frame: .zero)
    view.isBezeled = false
    view.isBordered = false
    view.drawsBackground = true
    view.isEnabled = true
    view.isEditable = false
    view.alignment = .left
    view.font = NSFont.systemFont (ofSize: NSFont.systemFontSize)
    view.stringValue = inString
    let s = view.intrinsicContentSize
    let r = NSRect (origin: NSPoint (x: 0.0, y: ioY), size: s)
    view.frame = r
    ioY += r.height
    ioWidth = max (ioWidth, r.width)
    self.addSubview (view)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Constraints
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private var mNewConstraints = [NSLayoutConstraint] ()
//  private var mCurrentConstraints = [NSLayoutConstraint] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  override func updateConstraints () {
//  //--- Remove all constraints
//    self.removeConstraints (self.mCurrentConstraints)
//  //--- Build constraints
//    self.mCurrentConstraints = self.mNewConstraints
//  //--- Apply constaints
//    self.addConstraints (self.mCurrentConstraints)
//  //--- This should the last instruction: call super method
//    super.updateConstraints ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class FilePrivateHiliteView : NSView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mRootView : BaseView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (rootView inRootView : BaseView) {
    self.mRootView = inRootView
    super.init (frame: .zero)
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override var isOpaque : Bool { return false }
  override var isFlipped : Bool { false } // Y axis is ascending
  override var acceptsFirstResponder : Bool { false }
  override var canBecomeKeyView : Bool { false }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func hitTest (_ inUnusedPoint : NSPoint) -> NSView? {
    return nil
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draw (_ inDirtyRect : NSRect) {
    if getDebugAutoLayout () {
      self.decorateViewRects (self.mRootView)
    }
    if getDebugResponderChain () {
      let strokeBP = NSBezierPath ()
      let filledBP = NSBezierPath ()
      var optionalResponder = self.window?.initialFirstResponder
      var responderSet = Set <ObjectIdentifier> ()
      while let responder = optionalResponder, !responderSet.contains (ObjectIdentifier (responder)) {
        responderSet.insert (ObjectIdentifier (responder))
        let r = responder.convert (responder.bounds, to: self)
        strokeBP.appendRect (r)
        let optionalNextResponder = responder.nextKeyView
        if let nextResponder = optionalNextResponder {
          strokeBP.move (to: responder.convert (responder.bounds.center, to: nil))
          let p = nextResponder.convert (nextResponder.bounds.center, to: nil)
          strokeBP.addArrow (withFilledPath: filledBP, to: p, arrowSize: 6.0)
        }
        optionalResponder = optionalNextResponder
//        loop = optionalResponder !== self.window?.initialFirstResponder
      }
      DEBUG_KEY_CHAIN_STROKE_COLOR.withAlphaComponent (0.125).setStroke ()
      strokeBP.lineWidth = 11.0
      strokeBP.stroke ()
      DEBUG_KEY_CHAIN_STROKE_COLOR.setStroke ()
      strokeBP.lineWidth = 1.0
      strokeBP.stroke ()
      DEBUG_KEY_CHAIN_STROKE_COLOR.setFill ()
      filledBP.fill ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func decorateViewRects (_ inView : BaseView) {
    let cocoaView = inView.cocoaView
    if !cocoaView.frame.isEmpty {
      let viewFrame = self.convert (cocoaView.alignmentRect (forFrame: cocoaView.bounds), from: cocoaView)
      let viewVisibleRect = self.convert (cocoaView.visibleRect, from: cocoaView)
      if let stackView = inView as? BaseStackView { // Draw margins
        DEBUG_MARGIN_COLOR.setFill ()
        if stackView.mBottomMargin > 0.0 {
          var r = viewFrame
          r.size.height = stackView.mBottomMargin
          NSBezierPath.fill (r.intersection (viewVisibleRect))
        }
        if stackView.mTopMargin > 0.0 {
          var r = viewFrame
          r.origin.y += r.size.height - stackView.mTopMargin
          r.size.height = stackView.mTopMargin
          NSBezierPath.fill (r.intersection (viewVisibleRect))
        }
        if stackView.mLeftMargin > 0.0 {
          var r = viewFrame
          r.size.width = stackView.mLeftMargin
          NSBezierPath.fill (r.intersection (viewVisibleRect))
        }
        if stackView.mRightMargin > 0.0 {
          var r = viewFrame
          r.origin.x += r.size.width - stackView.mRightMargin
          r.size.width = stackView.mRightMargin
          NSBezierPath.fill (r.intersection (viewVisibleRect))
        }
      }else if inView is HorizontalStackGutter {
        GUTTER_FILL_COLOR.setFill ()
        NSBezierPath.fill (viewFrame.intersection (viewVisibleRect))
      }else if type (of: inView) == BaseView.self {
        DEBUG_FLEXIBLE_SPACE_FILL_COLOR.setFill ()
        NSBezierPath.fill (viewFrame.intersection (viewVisibleRect))
      }
    //--- Frame
      do{
        let bp = NSBezierPath (rect: viewFrame.intersection (viewVisibleRect))
        bp.lineWidth = 1.0
        bp.lineJoinStyle = .round
        DEBUG_FRAME_STROKE_COLOR.setStroke ()
        bp.stroke ()
      }
    //--- Last baseline
      if let controlView = cocoaView as? NSControl {
        let representativeViewFrame = self.convert (controlView.alignmentRect (forFrame: controlView.bounds), from: controlView)
        let p = NSPoint (
          x: viewFrame.origin.x,
          y: representativeViewFrame.origin.y + controlView.lastBaselineOffsetFromBottom
        )
        let bp = NSBezierPath ()
        bp.move (to: p)
        bp.relativeLine (to: NSPoint (x: viewFrame.width, y: 0.0))
        DEBUG_LAST_BASELINE_COLOR.setStroke ()
        bp.stroke ()
      }
    //---
      if let scrollView = inView as? BaseScrollView {
        self.decorateViewRects (scrollView.mContentView)
      }
    //--- Explore subviews
      for view in inView.subViews {
        if !view.isHidden {
          self.decorateViewRects (view)
        }
      }
    }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
