//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutIntObserverField
//--------------------------------------------------------------------------------------------------

public final class AutoLayoutIntObserverField : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mNumberFormatter = NumberFormatter ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (bold inBold : Bool, size inSize : NSControl.ControlSize) {
    super.init (minWidth: 0, bold: inBold, size: inSize)

    self.mCocoaTextField.isBezeled = false
    self.mCocoaTextField.isBordered = false
    self.mCocoaTextField.drawsBackground = false
    self.mCocoaTextField.isEditable = false
//--- Number formatter
    self.mNumberFormatter.formatterBehavior = .behavior10_4
    self.mNumberFormatter.numberStyle = .decimal
    self.mNumberFormatter.localizesFormat = true
    self.mNumberFormatter.minimumFractionDigits = 0
    self.mNumberFormatter.maximumFractionDigits = 0
    self.mNumberFormatter.isLenient = true
    self.mCocoaTextField.formatter = self.mNumberFormatter
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func set (format inFormatString : String) -> Self {
    self.mNumberFormatter.format = inFormatString
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  observedValue binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_observedValue (_ inObject : EBObservableProperty <Int>) -> Self {
    self.mController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack:  { [weak self] in self?.update (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func update (from model : EBObservableProperty <Int>) {
    switch model.selection {
    case .empty :
      self.enable (fromValueBinding: false)
      self.mCocoaTextField.placeholderString = "—"
      self.stringValue = ""
    case .single (let v) :
      self.enable (fromValueBinding: true)
      self.mCocoaTextField.placeholderString = nil
      self.mCocoaTextField.intValue = Int32 (v)
    case .multiple :
      self.enable (fromValueBinding: false)
      self.mCocoaTextField.placeholderString = "Multiple Selection"
      self.mCocoaTextField.stringValue = ""
    }
    self.invalidateSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
