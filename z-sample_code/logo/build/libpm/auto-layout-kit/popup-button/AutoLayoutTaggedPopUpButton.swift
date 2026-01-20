//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutTaggedPopUpButton
//--------------------------------------------------------------------------------------------------

public final class AutoLayoutTaggedPopUpButton : BaseControl {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCocoaPopUpButton : NSPopUpButton

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (size inSize : NSControl.ControlSize) {
    self.mCocoaPopUpButton = NSPopUpButton (frame: .zero, pullsDown: false)
    super.init (cocoaControl: self.mCocoaPopUpButton, size: inSize)

    self.mCocoaPopUpButton.autoenablesItems = false
    if let cell = self.mCocoaPopUpButton.cell as? NSPopUpButtonCell {
      cell.arrowPosition = .arrowAtBottom
    }

    self.mCocoaPopUpButton.bezelStyle = .rounded
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func add (title inTitle : String, withTag inTag : Int) -> Self {
    self.mCocoaPopUpButton.addItem (withTitle: inTitle)
    self.mCocoaPopUpButton.lastItem?.tag = inTag
    self.invalidateSimpleLayout ()
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func runAction () {
    super.runAction ()
    self.mSelectedTagController?.updateModel (withValue: self.mCocoaPopUpButton.selectedTag ())
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $selectedTag binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSelectedTagController : EBGenericReadWritePropertyController <Int>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_selectedTag (_ inObject : EBObservableMutableProperty <Int>) -> Self {
    self.mSelectedTagController = EBGenericReadWritePropertyController <Int> (
      observedObject: inObject,
      callBack: { [weak self] in self?.updateTag (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateTag (from inObject : EBObservableMutableProperty <Int>) {
    switch inObject.selection {
    case .single (let v) :
      self.enable (fromValueBinding: true)
      self.mCocoaPopUpButton.selectItem (withTag: v)
    case .empty :
      self.enable (fromValueBinding: false)
    case .multiple :
      self.enable (fromValueBinding: false)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
