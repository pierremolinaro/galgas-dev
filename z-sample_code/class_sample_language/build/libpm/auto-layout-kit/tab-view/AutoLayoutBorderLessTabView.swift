//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 24/12/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class AutoLayoutBorderLessTabView : AutoLayoutVerticalStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mSegmentedControl : AutoLayoutSegmentedControl
  let mTabView : BaseTabView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (size inSize : NSControl.ControlSize) {
    self.mSegmentedControl = AutoLayoutSegmentedControl (size: inSize)
    self.mTabView = BaseTabView (size: inSize).setType (.noTabsNoBorder)
    super.init (hAlignment: .fill, vAlignment: .fill)
    _ = self.set (margins: .zero)
    .set (topMargin: .small)
    .appendView (self.mSegmentedControl)
    .appendView (self.mTabView)
    _ = self.mSegmentedControl.setAction { [weak self] in
      if let me = self {
        let idx = me.mSegmentedControl.selectedSegment
        me.selectTab (atIndex: idx)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setSegmentStyle (_ inStyle : NSSegmentedControl.Style) -> Self {
    _ = self.mSegmentedControl.setSegmentStyle (inStyle)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final public func addTab (title inTitle : String,
                            image inImage : NSImage? = nil,
                            tooltip inTooltipString : String,
                            contentView inContentView : BaseView) -> Self {
    _ = self.mSegmentedControl.addTab (
      title: inTitle,
      image: inImage,
      tooltip: inTooltipString
    )
    _ = self.mTabView.addTab (
      title: "",
      image: nil,
      tooltip: nil,
      contentView: inContentView
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func selectTab (atIndex inIndex : Int) {
    self.mSegmentedControl.setSelectedSegment (atIndex: inIndex)
    self.mTabView.selectTab (atIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Set image
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setImage (_ inImage : NSImage?, forTab inIndex : Int) {
    self.mSegmentedControl.setImage (inImage, forSegment: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $segmentImage binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func bind_segmentImage (_ inObject : EBObservableProperty <NSImage>, segmentIndex inSegmentIndex : Int) -> Self {
    _ = self.mTabView.bind_segmentImage (inObject, segmentIndex: inSegmentIndex)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $selectedTab binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func bind_selectedTab (_ inObject : EBObservableMutableProperty <Int>) -> Self {
    _ = self.mSegmentedControl.bind_selectedSegment (inObject)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
