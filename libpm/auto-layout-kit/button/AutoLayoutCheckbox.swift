//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public final class AutoLayoutCheckbox : AutoLayoutButton {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (title inTitle : String,
               size inSize : NSControl.ControlSize,
               adoptPushButtonStyle inFlag : Bool = false) {
    super.init (title: inTitle, size: inSize)

    if inFlag {
      self.mCocoaButton.bezelStyle = .rounded
      self.mCocoaButton.setButtonType (.pushOnPushOff)
    }else{
      self.mCocoaButton.setButtonType (.switch)
    }
    self.mCocoaButton.title = inTitle
    self.mCocoaButton.font = NSFont.systemFont (ofSize: NSFont.systemFontSize (for: self.mCocoaButton.controlSize))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mWidth : CGFloat? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func set (width inWidth : Int) -> Self {
    self.mWidth = CGFloat (inWidth)
//    self.usesSingleLineMode = !inMultiLine
//    self.cell?.truncatesLastVisibleLine = !inMultiLine
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func set (toolTip inToolTip : String) -> Self {
    self.mCocoaButton.toolTip = inToolTip
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func set (checked inChecked : Bool) -> Self {
    self.mCocoaButton.state = inChecked ? .on : .off
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  value binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

   override func runAction () {
     super.runAction ()
     self.mValueController?.updateModel (withValue: self.mCocoaButton.state == NSControl.StateValue.on)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate var mValueController : EBGenericReadWritePropertyController <Bool>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_value (_ inObject : EBObservableMutableProperty <Bool>) -> Self {
    self.mValueController = EBGenericReadWritePropertyController <Bool> (
      observedObject: inObject,
      callBack: { [weak self] in self?.updateValue (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func updateValue (from inObject : EBObservableProperty <Bool>) {
    let enableCheckbox : Bool
    switch inObject.selection {
    case .empty :
      self.mCocoaButton.state = NSControl.StateValue.off
      enableCheckbox = false
    case .multiple :
      self.mCocoaButton.allowsMixedState = true
      self.mCocoaButton.state = NSControl.StateValue.mixed
      enableCheckbox = false
    case .single (let v) :
      self.mCocoaButton.allowsMixedState = false
      self.mCocoaButton.state = v ? NSControl.StateValue.on : NSControl.StateValue.off
      enableCheckbox = true
    }
    self.enable (fromValueBinding: enableCheckbox)
    // && !mMaintainDisabled, self.enabledBindingController ())
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
