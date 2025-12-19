//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//  AutoLayoutTextObserverView
//--------------------------------------------------------------------------------------------------

public final class AutoLayoutTextObserverView : BaseTextView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mFontSize : CGFloat

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (drawsBackground inDrawsBackground : Bool,
               size inSize : NSControl.ControlSize,
               horizontalScroller inHorizontalScroller : Bool,
               verticalScroller inVerticalScroller : Bool,
               minWidth inMinWidth : Int,
               minHeight inMinHeight : Int,
               hStretchingResistance inHStretching : HorizontalStretchingResistance,
               vStretchingResistance inVStretching : VerticalStretchingResistance) {
    switch inSize {
    case .mini :
      self.mFontSize = NSFont.smallSystemFontSize * 0.8
    case .small :
      self.mFontSize = NSFont.smallSystemFontSize
    case .regular :
      self.mFontSize = NSFont.systemFontSize
    case .large:
      self.mFontSize = NSFont.systemFontSize * 1.2
    case .extraLarge:
      self.mFontSize = NSFont.systemFontSize * 1.5
    @unknown default:
      self.mFontSize = NSFont.systemFontSize
    }
    super.init (
      drawsBackground: inDrawsBackground,
      editable: false,
      horizontalScroller: inHorizontalScroller,
      verticalScroller: inVerticalScroller,
      minWidth: inMinWidth,
      minHeight: inMinHeight,
      hStretchingResistance: inHStretching,
      vStretchingResistance: inVStretching
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private var mHeight : Int? = nil
//  private var mMaxWidth : CGFloat? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  func set (height inHeight : Int) -> Self {
//    self.mHeight = inHeight
//    self.mCocoaTextView.invalidateIntrinsicContentSize ()
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  func set (maxWidth inMaxWidth : Int) -> Self {
//    self.mMaxWidth = CGFloat (inMaxWidth)
//    self.mCocoaTextView.invalidateIntrinsicContentSize ()
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  override var intrinsicContentSize : NSSize {
//    var s = super.intrinsicContentSize
//    if let h = self.mHeight {
//      s.height = CGFloat (h)
//    }
//    if let w = self.mMaxWidth, s.width > w {
//      s.width = w
//    }
//    return s
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func setNoBackground () -> Self {
//    self.mCocoaTextView.drawsBackground = false
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func setNoVerticalScroller () -> Self {
//    self.hasVerticalScroller = false
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func setNoHorizontalScroller () -> Self {
//    self.hasHorizontalScroller = false
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func set (font inFont : NSFont) -> Self {
//    self.mCocoaTextView.font = inFont
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // setRedTextColor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func setRedTextColor () -> Self {
//    self.mCocoaTextView.textColor = .red
//    return self
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  value binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func update (from inObject : EBObservableProperty <String>) {
    switch inObject.selection {
    case .empty, .multiple :
      self.mCocoaTextView.string = ""
      self.mCocoaTextView.invalidateIntrinsicContentSize ()
    case .single (let propertyValue) :
      let currentSelectedRangeValues = self.mCocoaTextView.selectedRanges
      self.mCocoaTextView.string = propertyValue
      self.mCocoaTextView.selectedRanges = currentSelectedRangeValues
      self.mCocoaTextView.invalidateIntrinsicContentSize ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mValueController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func bind_observedValue (_ inObject : EBObservableProperty <String>) -> Self {
    self.mValueController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.update (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func clear () {
    if let ts = self.mCocoaTextView.layoutManager?.textStorage {
      let str = NSAttributedString (string: "", attributes: nil)
      ts.setAttributedString (str)
      RunLoop.current.run (until: Date ())
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendAttributedString (_ inAttributedString : NSAttributedString) {
    if let ts = self.mCocoaTextView.layoutManager?.textStorage {
      ts.append (inAttributedString)
      let endOfText = NSRange (location: ts.length, length: 0)
      self.mCocoaTextView.scrollRangeToVisible (endOfText)
      RunLoop.current.run (until: Date ())
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendMessage (_ inString : String) {
    let attributes : [NSAttributedString.Key : NSObject] = [
      NSAttributedString.Key.font : NSFont.boldSystemFont (ofSize: self.mFontSize),
      NSAttributedString.Key.foregroundColor : NSColor.black
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    self.appendAttributedString (str)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendMessage (_ inString : String, color inColor : NSColor) {
    let attributes : [NSAttributedString.Key : NSObject] = [
      NSAttributedString.Key.font : NSFont.boldSystemFont (ofSize: self.mFontSize),
      NSAttributedString.Key.foregroundColor : inColor
    ]
    let str = NSAttributedString (string: inString, attributes: attributes)
    self.appendAttributedString (str)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendCodeString (_ inString : String, color inColor : NSColor) {
    let font = NSFont.userFixedPitchFont (ofSize: self.mFontSize) ?? NSFont.boldSystemFont (ofSize: self.mFontSize)
    let attributes : [NSAttributedString.Key : NSObject] = [
      NSAttributedString.Key.font : font,
      NSAttributedString.Key.foregroundColor : inColor
    ]
    let str = NSAttributedString (string:inString, attributes: attributes)
    self.appendAttributedString (str)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendError (_ inString : String) {
    self.appendMessage (inString, color: .red)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendWarning (_ inString : String) {
    self.appendMessage (inString, color: .orange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendSuccess (_ inString : String) {
    self.appendMessage (inString, color: .blue)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
