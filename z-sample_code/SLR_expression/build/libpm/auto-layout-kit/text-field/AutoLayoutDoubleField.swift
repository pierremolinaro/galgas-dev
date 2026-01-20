//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutDoubleField
//--------------------------------------------------------------------------------------------------

public final class AutoLayoutDoubleField : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (width inWidth : Int, size inSize : NSControl.ControlSize) {
    super.init (minWidth: inWidth, bold: true, size: inSize)
  //--- Number formatter
    self.mNumberFormatter.formatterBehavior = .behavior10_4
    self.mNumberFormatter.numberStyle = .decimal
    self.mNumberFormatter.localizesFormat = true
    self.mNumberFormatter.minimumFractionDigits = 2
    self.mNumberFormatter.maximumFractionDigits = 2
    self.mNumberFormatter.isLenient = true
    self.mCocoaTextField.formatter = self.mNumberFormatter
  //--- Target
//    self.mCocoaTextField.target = self
//    self.mCocoaTextField.action = #selector (Self.valueDidChangeAction (_:))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Number formatter
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mNumberFormatter = NumberFormatter ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (min inMin : Int) -> Self {
    self.mNumberFormatter.minimum = NSNumber (value: inMin)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (max inMax : Int) -> Self {
    self.mNumberFormatter.maximum = NSNumber (value: inMax)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (format inFormatString : String) -> Self {
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
        let value = number.doubleValue
        self.mValueController?.updateModel (withValue: value)
      }
      self.mCocoaTextField.setDrawBackground (optionalNumber == nil)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @objc fileprivate func valueDidChangeAction (_ inUnusedSender : Any?) {
//    if let formatter = self.mCocoaTextField.formatter as? NumberFormatter,
//       let outletValueNumber = formatter.number (from: self.stringValue) {
//      let value = outletValueNumber.doubleValue
//      self.mValueController?.updateModel (withValue: value)
//    }else if let v = self.mValueController?.value {
//      self.mCocoaTextField.setDrawBackground (false)
//      self.mCocoaTextField.doubleValue = v
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  $value binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mValueController : EBGenericReadWritePropertyController <Double>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_value (_ inObject : EBObservableMutableProperty <Double>, sendContinously : Bool) -> Self {
    self.mCocoaTextField.isContinuous = sendContinously
    self.mValueController = EBGenericReadWritePropertyController <Double> (
      observedObject: inObject,
      callBack: { [weak self] in self?.update (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func update (from inObject : EBObservableMutableProperty <Double>) {
    let selection = inObject.selection // TOUJOURS lire la sélection
    if self.mCocoaTextField.currentEditor () == nil {
      self.mCocoaTextField.setDrawBackground (false)
      switch selection {
      case .empty :
//        self.enable (fromValueBinding: false, self.enabledBindingController ())
        self.mCocoaTextField.placeholderString = "No Selection"
        self.stringValue = ""
      case .single (let v) :
//        Swift.print ("updateOutlet, single \(v)")
//        self.enable (fromValueBinding: true, self.enabledBindingController ())
        self.mCocoaTextField.placeholderString = nil
        self.mCocoaTextField.doubleValue = CGFloat (v)
      case .multiple :
//        Swift.print ("multiple, empty")
//        self.enable (fromValueBinding: true, self.enabledBindingController ())
        self.mCocoaTextField.placeholderString = "Multiple Selection"
        self.mCocoaTextField.stringValue = ""
      }
//    }else{
//      Swift.print ("Editor not nil")
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
