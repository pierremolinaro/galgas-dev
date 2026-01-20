//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutDoubleObserverField
//--------------------------------------------------------------------------------------------------

public final class AutoLayoutDoubleObserverField : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mNumberFormatter = NumberFormatter ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (width inWidth : Int, bold inBold : Bool, size inSize : NSControl.ControlSize) {
    super.init (minWidth: inWidth, bold: inBold, size: inSize)

    self.mCocoaTextField.isBezeled = false
    self.mCocoaTextField.isBordered = false
    self.mCocoaTextField.drawsBackground = false
    self.mCocoaTextField.isEditable = false
  //--- Number formatter
    self.mNumberFormatter.formatterBehavior = .behavior10_4
    self.mNumberFormatter.numberStyle = .decimal
    self.mNumberFormatter.localizesFormat = true
    self.mNumberFormatter.minimumFractionDigits = 2
    self.mNumberFormatter.maximumFractionDigits = 2
    self.mNumberFormatter.isLenient = true
    self.mCocoaTextField.formatter = self.mNumberFormatter
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  $value binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mValueController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_observedValue (_ inObject : EBObservableProperty <Double>) -> Self {
    self.mValueController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.update (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func update (from inObject : EBObservableProperty <Double>) {
    let selection = inObject.selection // TOUJOURS lire la sélection
    switch selection {
    case .empty :
//        Swift.print ("updateOutlet, empty")
      self.enable (fromValueBinding: false)
      self.mCocoaTextField.placeholderString = "No Selection"
      self.stringValue = ""
    case .single (let v) :
      self.enable (fromValueBinding: true)
      self.mCocoaTextField.placeholderString = nil
      self.mCocoaTextField.doubleValue = CGFloat (v)
    case .multiple :
//        Swift.print ("multiple, empty")
      self.enable (fromValueBinding: true)
      self.mCocoaTextField.placeholderString = "Multiple Selection"
      self.stringValue = ""
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
