//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutSearchField
//--------------------------------------------------------------------------------------------------

public class AutoLayoutSearchField : BaseControl {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final let mCocoaTextField : InternalNSSearchField
  private final var mWidth : CGFloat

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (minWidth inMinWidth : Int,
               bold inBold : Bool,
               size inSize : NSControl.ControlSize) {
    self.mWidth = CGFloat (inMinWidth)
    self.mCocoaTextField = InternalNSSearchField ()
    super.init (cocoaControl: self.mCocoaTextField, size: inSize)
    noteObjectAllocation (self)

    let size = NSFont.systemFontSize (for: self.mCocoaTextField.controlSize)
    self.mCocoaTextField.font = inBold
      ? NSFont.boldSystemFont (ofSize: size)
      : NSFont.systemFont (ofSize: size)
    self.mCocoaTextField.alignment = .center

//    self.mCocoaTextField.cell?.sendsActionOnEndEditing = true // Send an action when focus is lost

    self.mCocoaTextField.mBaseTextField = self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func setRecentsAutosaveName (_ inName : String) -> Self {
    self.mCocoaTextField.recentsAutosaveName = inName
    return self
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

  public final func setSearchMenuTemplate (cellMenu inMenu : NSMenu) -> Self {
    if let searchCell = self.mCocoaTextField.cell as? NSSearchFieldCell {
      searchCell.searchMenuTemplate = inMenu
    }
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
//    self.mTextDidChangeAction? (self.mCocoaTextField.stringValue)
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var hStretchingResistance : HorizontalStretchingResistance { .high }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var vAlignment : VerticalAlignmentInHorizontalStack {
    let size = self.smallestSize
    let r = NSRect (origin: .zero, size: size)
    let alignmentRect = self.mCocoaTextField.alignmentRect (forFrame: r)
    let baseLine = self.mCocoaTextField.lastBaselineOffsetFromBottom + alignmentRect.origin.y
    return .lastBaseline (baseLine)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var vStretchingResistance : VerticalStretchingResistance { .high }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

class InternalNSSearchField : NSSearchField, NSSearchFieldDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  weak var mBaseTextField : AutoLayoutSearchField? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
    noteObjectAllocation (self)
    self.delegate = self // NSSearchFieldDelegate
    self.sendsWholeSearchString = true
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

}

//--------------------------------------------------------------------------------------------------
