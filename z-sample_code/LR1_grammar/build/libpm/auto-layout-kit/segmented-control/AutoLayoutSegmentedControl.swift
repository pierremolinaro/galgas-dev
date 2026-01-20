//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 22/01/2022.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSegmentedControl : BaseControl {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mCocoaSegmentedControl : NSSegmentedControl

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (titles inTitles : [String] = [],
        equalWidth inEqualWidth : Bool = false,
        size inSize : NSControl.ControlSize) {
    self.mCocoaSegmentedControl = NSSegmentedControl (frame: .zero)
    super.init (cocoaControl: self.mCocoaSegmentedControl, size: inSize)
    if inEqualWidth {
      self.mCocoaSegmentedControl.segmentDistribution = .fillEqually
    }
    self.mCocoaSegmentedControl.segmentCount = inTitles.count
    var idx = 0
    for title in inTitles {
      self.mCocoaSegmentedControl.setLabel (title, forSegment: idx)
      idx += 1
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setSegmentStyle (_ inStyle : NSSegmentedControl.Style) -> Self {
    self.mCocoaSegmentedControl.segmentStyle = inStyle //.capsule // .separated
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final public func addTab (title inTitle : String,
                            image inImage : NSImage? = nil,
                            tooltip inTooltipString : String) -> Self {
    let idx = self.mCocoaSegmentedControl.segmentCount
    self.mCocoaSegmentedControl.segmentCount += 1
    self.mCocoaSegmentedControl.setLabel (inTitle, forSegment: idx)
    self.mCocoaSegmentedControl.setImage (inImage, forSegment: idx)
    self.mCocoaSegmentedControl.setImageScaling (.scaleProportionallyUpOrDown, forSegment: idx)
    self.mCocoaSegmentedControl.setToolTip (inTooltipString, forSegment: idx)
    if idx == 0 {
      self.setSelectedSegment (atIndex: 0)
    }
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setImage (_ inImage : NSImage?, forSegment inIndex : Int) {
    self.mCocoaSegmentedControl.setImage (inImage, forSegment: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var selectedSegment : Int { self.mCocoaSegmentedControl.selectedSegment }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setSelectedSegment (atIndex inIndex : Int) {
    if self.mCocoaSegmentedControl.segmentCount > 0 {
      if inIndex < 0 {
        self.mCocoaSegmentedControl.selectedSegment = 0
      }else if inIndex >= self.mCocoaSegmentedControl.segmentCount {
        self.mCocoaSegmentedControl.selectedSegment = self.mCocoaSegmentedControl.segmentCount - 1
      }else{
        self.mCocoaSegmentedControl.selectedSegment = inIndex
      }
//      self.selectedSegmentDidChange (nil)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // SELECTED TAB DID CHANGE
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @objc private func selectedSegmentDidChange (_ _ : Any?) {
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func runAction () {
    self.mSelectedSegmentController?.updateModel (withValue: self.mCocoaSegmentedControl.indexOfSelectedItem)
    super.runAction ()
  }

//  override func sendAction (_ action : Selector?, to : Any?) -> Bool {
//    self.mSelectedSegmentController?.updateModel (self.indexOfSelectedItem)
//    return super.sendAction (action, to: to)
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $selectedSegment binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSelectedSegmentController : EBGenericReadWritePropertyController <Int>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func bind_selectedSegment (_ inObject : EBObservableMutableProperty <Int>) -> Self {
    self.mSelectedSegmentController = EBGenericReadWritePropertyController <Int> (
      observedObject: inObject,
      callBack: { [weak self] in self?.updateSelectedTab (inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateSelectedTab (_ inObject : EBObservableMutableProperty <Int>) {
    switch inObject.selection {
    case .single (let v) :
      self.enable (fromValueBinding: true)
      self.setSelectedSegment (atIndex: v)
    case .empty :
      self.enable (fromValueBinding: false)
    case .multiple :
      self.enable (fromValueBinding: false)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var hAlignment : HorizontalAlignmentInVerticalStack { .center }

  public override var hStretchingResistance : HorizontalStretchingResistance { .lowest }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
