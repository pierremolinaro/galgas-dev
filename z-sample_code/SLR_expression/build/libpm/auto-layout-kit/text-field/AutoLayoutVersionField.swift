//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public final class AutoLayoutVersionField : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (size inSize : NSControl.ControlSize) {
    super.init (minWidth: 0, bold: false, size: inSize)

    self.mCocoaTextField.isEditable = false
    self.mCocoaTextField.drawsBackground = false
    self.mCocoaTextField.isBordered = false

    self.mCocoaTextField.font = NSFont.monospacedDigitSystemFont (ofSize: NSFont.systemFontSize (for: inSize), weight: .semibold)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  version binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mVersionController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_version (_ inObject : EBObservableProperty <Int>) -> Self {
    self.mVersionController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.updateVersion (from: inObject) }
    )
     return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateVersion (from inObject : EBObservableProperty <Int>) {
    switch inObject.selection {
    case .empty, .multiple :
      self.enable (fromValueBinding: false)
      self.stringValue = "—"
    case .single (let v) :
      self.enable (fromValueBinding: true)
      self.stringValue = String (v)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  versionShouldChange binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mVersionShouldChangeController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func bind_versionShouldChange (_ inObject : EBObservableProperty <Bool>) -> Self {
    self.mVersionShouldChangeController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.updateVersionShouldChange (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // NSColor.systemBlue is not defined in 10.9
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateVersionShouldChange (from inObject : EBObservableProperty <Bool>) {
    switch inObject.selection {
    case .empty, .multiple :
      break
    case .single (let v) :
      self.mCocoaTextField.textColor = v ? .systemBlue : .black
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
