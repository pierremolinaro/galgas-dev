//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public final class AutoLayoutLabel : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mBold : Bool

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // INIT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (bold inBold : Bool, size inSize : NSControl.ControlSize) {
    self.mBold = inBold

    super.init (minWidth: 0, bold: inBold, size: inSize)

    self.mCocoaTextField.isBezeled = false
    self.mCocoaTextField.isBordered = false
    self.mCocoaTextField.drawsBackground = false
    self.mCocoaTextField.isEnabled = true
    self.mCocoaTextField.isEditable = false
    self.mCocoaTextField.controlSize = inSize
  //  self.usesSingleLineMode = true
    let fontSize = NSFont.systemFontSize (for: self.mCocoaTextField.controlSize)
    self.mCocoaTextField.font = inBold ? NSFont.boldSystemFont (ofSize: fontSize) : NSFont.systemFont (ofSize: fontSize)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // SET TEXT color
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func setTextColor (_ inTextColor : NSColor) -> Self {
    self.mCocoaTextField.textColor = inTextColor
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // setRedTextColor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func setRedTextColor () -> Self {
    self.mCocoaTextField.textColor = .red
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  $textColor binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mColorController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_textColor (_ inObject : EBObservableProperty <NSColor>) -> Self {
    self.mColorController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.updateColor (from: inObject.selection) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateColor (from inObjectSelection : EBSelection <NSColor>) {
    switch inObjectSelection {
    case .empty, .multiple :
      ()
    case .single (let v) :
      self.mCocoaTextField.textColor = v
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  $size binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSizeController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_size (_ inObject : EBObservableProperty <NSControl.ControlSize>) -> Self {
    self.mSizeController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.updateSize (from: inObject.selection) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateSize (from inObjectSelection : EBSelection <NSControl.ControlSize>) {
    switch inObjectSelection {
    case .empty, .multiple :
      ()
    case .single (let v) :
      self.mCocoaTextField.controlSize = v
      let fontSize = NSFont.systemFontSize (for: self.mCocoaTextField.controlSize)
      self.mCocoaTextField.font = self.mBold
        ? NSFont.boldSystemFont (ofSize: fontSize)
        : NSFont.systemFont (ofSize: fontSize)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  $title binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mTitleController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_title (_ inObject : EBObservableProperty <String>) -> Self {
    self.mTitleController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.update (from: inObject.selection) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func update (from inObjectSelection : EBSelection <String>) {
    switch inObjectSelection {
    case .empty :
      self.mCocoaTextField.placeholderString = "No Selection"
      self.stringValue = ""
    case .single (let v) :
      self.mCocoaTextField.placeholderString = nil
      self.stringValue = v
    case .multiple :
      self.mCocoaTextField.placeholderString = "Multiple Selection"
      self.stringValue = ""
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

