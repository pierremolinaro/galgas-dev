//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutTextField
//--------------------------------------------------------------------------------------------------

public class AutoLayoutTextField : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  User information
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var mTextFieldUserInfo : Any? = nil // Not used, freely available for user

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (minWidth inWidth : Int, size inSize : NSControl.ControlSize) {
    super.init (minWidth: inWidth, bold: true, size: inSize)

    self.mCocoaTextField.alignment = .left
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func textDidChange () {
    super.textDidChange ()
    self.mValueController?.updateModel (withValue: self.mCocoaTextField.stringValue)
//    if self.isContinuous {
//      self.ebAction (nil)
//    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  value binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mValueController : EBGenericReadWritePropertyController <String>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_value (_ inModel : EBObservableMutableProperty <String>, sendContinously inContinuous : Bool) -> Self {
    self.mCocoaTextField.isContinuous = inContinuous
    self.mValueController = EBGenericReadWritePropertyController <String> (
      observedObject: inModel,
      callBack: { [weak self] in self?.updateOutlet (inModel) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func updateOutlet (_ inModel : EBObservableProperty <String>) {
    switch inModel.selection {
    case .empty :
      self.mCocoaTextField.placeholderString = "No Selection"
      self.stringValue = ""
//      self.enable (fromValueBinding: false, self.enabledBindingController ())
    case .multiple :
      self.mCocoaTextField.placeholderString = "Multiple Selection"
      self.stringValue = ""
//      self.enable (fromValueBinding: true, self.enabledBindingController ())
    case .single (let propertyValue) :
      self.mCocoaTextField.placeholderString = nil
      self.stringValue = propertyValue
//      self.enable (fromValueBinding: true, self.enabledBindingController ())
    }
    self.invalidateSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
