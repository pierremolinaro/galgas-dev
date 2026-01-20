//--------------------------------------------------------------------------------------------------
//
//  Created by Pierre Molinaro on 28/04/2024.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class AutoLayoutColorWell : BaseControl {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mColorWell : NSColorWell

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (minWidth inMinWidth : Int, size inSize : NSControl.ControlSize) {
    self.mColorWell = NSColorWell (frame: .zero)
    super.init (cocoaControl: self.mColorWell, size: inSize)
    _ = self.setMinWidth (inMinWidth)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   runAction
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func runAction () {
    self.mColorController?.updateModel (withValue: self.mColorWell.color)
    super.runAction ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var hStretchingResistance : HorizontalStretchingResistance { .high }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var vAlignment : VerticalAlignmentInHorizontalStack { .fill }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  color binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_color (_ inObject : EBObservableMutableProperty <NSColor>) -> Self {
    NSColorPanel.shared.showsAlpha = true
    NSColorPanel.shared.isContinuous = false
    self.mColorController = EBGenericReadWritePropertyController <NSColor> (
      observedObject: inObject,
      callBack: { [weak self] in self?.updateColor (from: inObject)  }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func updateColor (from inObject : EBObservableProperty <NSColor>) {
    switch inObject.selection {
    case .empty, .multiple :
      self.enable (fromValueBinding: false)
    case .single (let v) :
      self.enable (fromValueBinding: true)
      self.mColorWell.color = v
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mColorController : EBGenericReadWritePropertyController <NSColor>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
