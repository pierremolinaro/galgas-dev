//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public final class AutoLayoutStaticLabel : BaseTextField {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // INIT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (title inTitle : String,
               bold inBold : Bool,
               size inSize : NSControl.ControlSize,
               alignment inAlignment : NSTextAlignment) {
    super.init (minWidth: 0, bold: inBold, size: inSize)

    self.mCocoaTextField.stringValue = inTitle
    self.mCocoaTextField.isBezeled = false
    self.mCocoaTextField.isBordered = false
    self.mCocoaTextField.drawsBackground = false

    self.mCocoaTextField.isEditable = false
    self.mCocoaTextField.alignment = inAlignment
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // SET TEXT color
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setTextColor (_ inTextColor : NSColor) -> Self {
    self.mCocoaTextField.textColor = inTextColor
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setOrangeTextColor () -> Self {
    self.mCocoaTextField.textColor = .orange
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setRedTextColor () -> Self {
    self.mCocoaTextField.textColor = .red
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
