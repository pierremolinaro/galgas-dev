//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   BaseTextField
//--------------------------------------------------------------------------------------------------

public class BaseTextField : BaseControl {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final let mCocoaTextField : InternalNSTextField
  private final var mWidth : CGFloat

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // https://www.generacodice.com/en/articolo/4221090/how-to-let-nstextfield-grow-with-the-text-in-auto-layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private final var mAutomaticallyAdjustHeight = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public convenience init (minWidth inMinWidth : Int,
//                           bold inBold : Bool,
//                           size inSize : NSControl.ControlSize) {
//    self.init (
//      minWidth: inMinWidth,
//      bold: inBold,
//      size: inSize,
//      cocoaTextField: InternalNSTextField ()
//    )
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (minWidth inMinWidth : Int,
               bold inBold : Bool,
               size inSize : NSControl.ControlSize) {
    self.mWidth = CGFloat (inMinWidth)
    self.mCocoaTextField = InternalNSTextField ()
    super.init (cocoaControl: self.mCocoaTextField, size: inSize)
    noteObjectAllocation (self)

//    self.mCocoaTextField.controlSize = inSize
    let size = NSFont.systemFontSize (for: self.mCocoaTextField.controlSize)
    self.mCocoaTextField.font = inBold
      ? NSFont.boldSystemFont (ofSize: size)
      : NSFont.systemFont (ofSize: size)
    self.mCocoaTextField.alignment = .center

    self.mCocoaTextField.cell?.sendsActionOnEndEditing = true // Send an action when focus is lost

    self.mCocoaTextField.mBaseTextField = self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // NE PAS DÉFINIR acceptsFirstResponder, SINON UN CHAMP SANS SÉLECTION RESTE ACTIF
  //  final override var acceptsFirstResponder: Bool { return true }
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (alignment inAlignment : NSTextAlignment) -> Self {
    self.mCocoaTextField.alignment = inAlignment
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mTextDidChangeAction : ((String) -> Void)? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setTextDidChangeAction (_ inAction : @escaping (String) -> Void) -> Self {
    self.mTextDidChangeAction = inAction
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func textDidChange () {
    self.mTextDidChangeAction? (self.mCocoaTextField.stringValue)
    self.invalidateSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   String Value
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var stringValue : String {
    get { self.mCocoaTextField.stringValue }
    set { self.mCocoaTextField.stringValue = newValue ; self.invalidateSimpleLayout () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize {
    var s = self.mCocoaTextField.fittingSize
    s.width = max (s.width, self.mWidth)
    return s
  }

  public override var hStretchingResistance : HorizontalStretchingResistance { .high }

  public override var vAlignment : VerticalAlignmentInHorizontalStack {
    let size = self.smallestSize
    let r = NSRect (origin: .zero, size: size)
    let alignmentRect = self.mCocoaTextField.alignmentRect (forFrame: r)
    let baseLine = self.mCocoaTextField.lastBaselineOffsetFromBottom + alignmentRect.origin.y
    return .lastBaseline (baseLine)
  }

  public override var vStretchingResistance : VerticalStretchingResistance { .high }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

class InternalNSTextField : NSTextField, NSTextFieldDelegate { //, NSControlTextEditingDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  weak var mBaseTextField : BaseTextField? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
    noteObjectAllocation (self)
    self.delegate = self // NSTextFieldDelegate
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

  final func automaticallyAdjustHeight (maxWidth inMaxWidth : Int) -> Self {
 //   self.mAutomaticallyAdjustHeight = true
    self.preferredMaxLayoutWidth = CGFloat (inMaxWidth)
    self.cell?.wraps = true
    self.lineBreakMode = .byWordWrapping
    self.mBaseTextField?.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func textDidChange (_ inNotification : Notification) {
    super.textDidChange (inNotification)
    self.mBaseTextField?.textDidChange ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mDrawBackground = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setDrawBackground (_ inFlag : Bool) {
    if self.mDrawBackground != inFlag {
      self.mDrawBackground = inFlag
      self.needsDisplay = true
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  By Default, super.intrinsicContentSize.width is -1, meaning the text field is invisible
  //  So we need to define intrinsicContentSize.width explicitly
  //  super.intrinsicContentSize.height is valid (19.0 for small size, 22.0 for regular size, ...)-
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public override var intrinsicContentSize : NSSize {
//    var s = super.intrinsicContentSize
//    if let w = self.mWidth {
//      s.width = w
//    }
//    if self.mAutomaticallyAdjustHeight, let cell = self.cell {
//      var frame = self.frame
//    //--- Make the frame very high, while keeping the width
//      frame.size.height = CGFloat.greatestFiniteMagnitude
//    //--- Calculate new height within the frame with practically infinite height.
//      s.height = cell.cellSize (forBounds: frame).height
//    }
//    return s
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:    NSTextFieldDelegate delegate function
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func control (_ control : NSControl,
                             didFailToFormatString string : String,
                             errorDescription error : String?) -> Bool {
    return true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:   NSControlTextEditingDelegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func control (_ control: NSControl,
                             textView: NSTextView,
                             doCommandBy inCommandSelector: Selector) -> Bool {
    if inCommandSelector == #selector (NSPopUpButton.insertLineBreak (_:)) {
      return true
    }else if inCommandSelector == #selector (NSPopUpButton.insertNewlineIgnoringFieldEditor (_:)) {
      return true
    }else{
      return false
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draw (_ inDirtyRect : NSRect) {
    super.draw (inDirtyRect)
    if self.mDrawBackground {
      NSColor.systemRed.withAlphaComponent (0.25).setFill ()
      NSBezierPath.fill (self.bounds)
    }
  }
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
