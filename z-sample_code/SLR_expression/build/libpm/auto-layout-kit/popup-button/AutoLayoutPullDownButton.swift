//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutPullDownButton
//--------------------------------------------------------------------------------------------------

public class AutoLayoutPullDownButton : BaseControl {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCocoaPopUpButton : NSPopUpButton

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (title inTitle : String, size inSize : NSControl.ControlSize) {
    self.mCocoaPopUpButton = NSPopUpButton (frame: .zero, pullsDown: true)
    super.init (cocoaControl: self.mCocoaPopUpButton, size: inSize)

    self.mCocoaPopUpButton.autoenablesItems = false
    if let cell = self.mCocoaPopUpButton.cell as? NSPopUpButtonCell {
      cell.arrowPosition = .arrowAtBottom
    }

    self.mCocoaPopUpButton.bezelStyle = .rounded

    self.mCocoaPopUpButton.addItem (withTitle: inTitle)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func removeAllItems () {
    while self.mCocoaPopUpButton.numberOfItems > 1 {
      self.mCocoaPopUpButton.removeItem (at: self.mCocoaPopUpButton.numberOfItems - 1)
    }
    self.invalidateSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendItem (title inTitle : String,
                          menuItemActionTarget inTarget : AnyObject?,
                          menuItemActionSelector inSelector : Selector?,
                          represendedObject inRepresentedObject : Any?) -> Self {
    self.mCocoaPopUpButton.addItem (withTitle: inTitle)
    self.invalidateSimpleLayout ()
    let item = self.mCocoaPopUpButton.lastItem
    item?.target = inTarget
    item?.action = inSelector
    item?.tag = self.mCocoaPopUpButton.numberOfItems - 1
    item?.representedObject = inRepresentedObject
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { self.mCocoaPopUpButton.fittingSize }

  public override var hStretchingResistance : HorizontalStretchingResistance { .high }

  public override var vAlignment : VerticalAlignmentInHorizontalStack {
    let size = self.smallestSize
    let r = NSRect (origin: .zero, size: size)
    let alignmentRect = self.mCocoaPopUpButton.alignmentRect (forFrame: r)
    let baseLine = self.mCocoaPopUpButton.lastBaselineOffsetFromBottom + alignmentRect.origin.y
    return .lastBaseline (baseLine)
  }

  public override var vStretchingResistance : VerticalStretchingResistance { .high }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $items binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mItemsController : EBObservablePropertyController? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_items (_ inObject : EBObservableProperty <StringArray>) -> Self {
    self.mItemsController = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self] in self?.update (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func update (from model : EBObservableProperty <StringArray>) {
    switch model.selection {
    case .empty, .multiple :
      self.enable (fromValueBinding: false)
    case .single (let titleArray) :
      self.enable (fromValueBinding: true)
      self.removeAllItems ()
//      while self.mCocoaPopUpButton.numberOfItems > 1 {
//        self.mCocoaPopUpButton.removeItem (at: self.mCocoaPopUpButton.numberOfItems - 1)
//      }
      for itemTitle in titleArray {
        self.mCocoaPopUpButton.addItem (withTitle: itemTitle)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

