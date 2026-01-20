//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutIntField
//--------------------------------------------------------------------------------------------------

public final class AutoLayoutIntField : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mNumberFormatter = NumberFormatter ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (minWidth inWidth : Int, size inSize : NSControl.ControlSize) {
    super.init (minWidth: inWidth, bold: true, size: inSize)
  //--- Number formatter
    self.mNumberFormatter.formatterBehavior = .behavior10_4
    self.mNumberFormatter.numberStyle = .decimal
    self.mNumberFormatter.localizesFormat = true
    self.mNumberFormatter.minimumFractionDigits = 0
    self.mNumberFormatter.maximumFractionDigits = 0
    self.mNumberFormatter.isLenient = true
    self.mCocoaTextField.formatter = self.mNumberFormatter
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -····················

  final func setMin (_ inMin : Int) -> Self {
    self.mNumberFormatter.minimum = NSNumber (value: inMin)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func setMax (_ inMax : Int) -> Self {
    self.mNumberFormatter.maximum = NSNumber (value: inMax)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func set (format inFormatString : String) -> Self {
    self.mNumberFormatter.format = inFormatString
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func textDidChange () {
    super.textDidChange ()
    if let inputString = self.mCocoaTextField.currentEditor()?.string,
       let numberFormatter = self.mCocoaTextField.formatter as? NumberFormatter {
      let optionalNumber = numberFormatter.number (from: inputString)
      if let number = optionalNumber, self.mCocoaTextField.isContinuous {
        let value = Int (number.doubleValue.rounded ())
        self.mValueController?.updateModel (withValue: value)
      }
      self.mCocoaTextField.setDrawBackground (optionalNumber == nil)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  $value binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mValueController : EBGenericReadWritePropertyController <Int>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_value (_ inObject : EBObservableMutableProperty <Int>,
                                sendContinously inSendContinously : Bool) -> Self {
    self.mCocoaTextField.isContinuous = inSendContinously
    self.mValueController = EBGenericReadWritePropertyController <Int> (
      observedObject: inObject,
      callBack: { [weak self] in self?.update (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func update (from inObject : EBObservableProperty <Int>) {
    let selection = inObject.selection // TOUJOURS lire la sélection
    if self.mCocoaTextField.currentEditor () == nil {
      self.mCocoaTextField.setDrawBackground (false)
      switch selection {
      case .empty :
        self.enable (fromValueBinding: false)
        self.mCocoaTextField.placeholderString = "No Selection"
        self.stringValue = ""
      case .single (let v) :
        self.enable (fromValueBinding: true)
        self.mCocoaTextField.placeholderString = nil
        self.mCocoaTextField.intValue = Int32 (v)
      case .multiple :
        self.enable (fromValueBinding: false)
        self.mCocoaTextField.placeholderString = "Multiple Selection"
        self.stringValue = ""
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
