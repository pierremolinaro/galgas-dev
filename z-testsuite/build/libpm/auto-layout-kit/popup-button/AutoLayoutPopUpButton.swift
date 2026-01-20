//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
//   AutoLayoutPopUpButton
//--------------------------------------------------------------------------------------------------

public class AutoLayoutPopUpButton : BaseControl {

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

  public func removeAllItems () {
    self.mCocoaPopUpButton.removeAllItems ()
    self.invalidateSimpleLayout ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func appendItem (title inTitle : String) -> Self {
    self.mCocoaPopUpButton.addItem (withTitle: inTitle)
    self.invalidateSimpleLayout ()
    return self
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

  public func appendItem (attributedTitle inTitle : NSAttributedString,
                          menuItemActionTarget inTarget : AnyObject?,
                          menuItemActionSelector inSelector : Selector?,
                          represendedObject inRepresentedObject : Any?) -> Self {
    self.mCocoaPopUpButton.addItem (withTitle: "")
    self.invalidateSimpleLayout ()
    let item = self.mCocoaPopUpButton.lastItem
    item?.attributedTitle = inTitle
    item?.target = inTarget
    item?.action = inSelector
    item?.tag = self.mCocoaPopUpButton.numberOfItems - 1
    item?.representedObject = inRepresentedObject
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var itemArray : [NSMenuItem] { self.mCocoaPopUpButton.itemArray }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func select (_ inItem : NSMenuItem?) {
    self.mCocoaPopUpButton.select (inItem)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Action
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final private var mAction : Optional < (Int) -> Void > = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setAction (_ inAction : @escaping (Int) -> Void) -> Self {
    self.mAction = inAction
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func runAction () {
    super.runAction ()
    let indexOfSelectedItem = self.mCocoaPopUpButton.indexOfSelectedItem
    self.mValueController?.updateModel (withValue: indexOfSelectedItem)
    self.mAction? (indexOfSelectedItem)
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
  //  $selectedIndex binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mValueController : EBGenericReadWritePropertyController <Int>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func bind_selectedIndex (_ inObject : EBObservableMutableProperty <Int>) -> Self {
    self.mValueController = EBGenericReadWritePropertyController <Int> (
      observedObject: inObject,
      callBack: { [weak self] in self?.updateIndex (inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateIndex (_ inObject : EBObservableProperty <Int>) {
    switch inObject.selection {
    case .empty, .multiple :
      self.enable (fromValueBinding: false)
    case .single (let v) :
      if self.mCocoaPopUpButton.numberOfItems == 0 {
        self.enable (fromValueBinding: false)
      }else if v >= 0, v < self.mCocoaPopUpButton.numberOfItems {
        self.mCocoaPopUpButton.selectItem (at: v)
        self.enable (fromValueBinding: true)
      }else{
        self.mCocoaPopUpButton.selectItem (at: 0)
        self.enable (fromValueBinding: true)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
