//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class BaseTabView : BaseView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate let mCocoaTabView : Internal_NSTabView

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (size inSize : NSControl.ControlSize) {
    self.mCocoaTabView = Internal_NSTabView ()
    super.init (withCocoaView: self.mCocoaTabView)

    self.mCocoaTabView.controlSize = inSize
    self.mCocoaTabView.mBaseTabView = self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setType (_ inType : NSTabView.TabType) -> Self {
    self.mCocoaTabView.tabViewType = inType
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Tabs
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mTabArray = [BaseView] ()
  public var tabArray : [BaseView] { self.mTabArray }
  public var selectedTab : BaseView? {
    if let s = self.mCocoaTabView.selectedTabViewItem {
      return self.mTabArray [self.mCocoaTabView.indexOfTabViewItem (s)]
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final public func addTab (title inTitle : String,
                            image inImage : NSImage? = nil,
                            tooltip inTooltipString : String? = nil,
                            contentView inContentView : BaseView) -> Self {
    _ = self.appendView (inContentView)
    inContentView.setHidden (self.mCocoaTabView.numberOfTabViewItems != 0)
    let item = NSTabViewItem ()
    item.label = inTitle
    item.image = inImage
    item.toolTip = inTooltipString
    item.view = inContentView.cocoaView
    inContentView.cocoaView.autoresizingMask = [.width, .height]
    self.mTabArray.append (inContentView)
    self.mCocoaTabView.addTabViewItem (item)
    if self.mCocoaTabView.numberOfTabViewItems == 1 {
      self.selectTab (atIndex: 0)
    }
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func selectTab (atIndex inIndex : Int) {
    if self.mCocoaTabView.numberOfTabViewItems > 0 {
      if inIndex < 0 {
        self.mCocoaTabView.selectTabViewItem (at: 0)
      }else if inIndex >= self.mCocoaTabView.numberOfTabViewItems {
        self.mCocoaTabView.selectLastTabViewItem (nil)
      }else{
        self.mCocoaTabView.selectTabViewItem (at: inIndex)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // SELECTED TAB DID CHANGE
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func selectedTabDidChange () {
    let s = self.mCocoaTabView.selectedTabViewItem
    for view in self.subViews {
      view.setHidden (view.cocoaView !== s?.view)
    }
    self.mSelectedTabIndexController?.updateModel (withValue: self.indexOfSelectedItem)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var indexOfSelectedItem : Int {
    if let s = self.mCocoaTabView.selectedTabViewItem {
      return self.mCocoaTabView.indexOfTabViewItem (s)
    }else{
      return -1
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { self.layoutFeatures.smallestSize }

  public override var hAlignment : HorizontalAlignmentInVerticalStack { self.layoutFeatures.hAlignment }

  public override var hStretchingResistance : HorizontalStretchingResistance { self.layoutFeatures.hStretchingResistance }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { self.layoutFeatures.vAlignment }

  public override var vStretchingResistance : VerticalStretchingResistance { self.layoutFeatures.vStretchingResistance }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLayoutFeaturesCache : LayoutFeatures? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var layoutFeatures : LayoutFeatures {
    if let lf = self.mLayoutFeaturesCache {
      return lf
    }else{
    //--- Compute minimum content size
      var minSize = NSSize.zero
      for tab in self.mTabArray {
        let s = tab.smallestSize
        if minSize.width < s.width {
          minSize.width = s.width
        }
        if minSize.height < s.height {
          minSize.height = s.height
        }
      }
    //--- Add difference between current tabview size and current content size
      minSize.width  += self.mCocoaTabView.frame.size.width  - self.mCocoaTabView.contentRect.size.width
      minSize.height += self.mCocoaTabView.frame.size.height - self.mCocoaTabView.contentRect.size.height
      let lf = LayoutFeatures (
        smallestSize: minSize,
        hAlignment: .fill,
        hStretchingResistance: .low,
        vAlignment: .fill,
        vStretchingResistance: .low
      )
      self.mLayoutFeaturesCache = lf
      return lf
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override func computeSimpleLayout (withFrame inFrame : NSRect) {
    super.computeSimpleLayout (withFrame: inFrame)
    for item in self.mTabArray {
      item.computeSimpleLayout (withFrame: self.mCocoaTabView.contentRect)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Set image
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setImage (_ inImage : NSImage?, forTab inTabIndex : Int) {
    if (inTabIndex >= 0) && (inTabIndex < self.mCocoaTabView.tabViewItems.count) {
      let tab = self.mCocoaTabView.tabViewItems [inTabIndex]
      tab.image = inImage
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $segmentImage binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSegmentImageController = [Int : EBObservablePropertyController] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func bind_segmentImage (_ inObject : EBObservableProperty <NSImage>, segmentIndex inSegmentIndex : Int) -> Self {
    self.mSegmentImageController [inSegmentIndex] = EBObservablePropertyController (
      observedObjects: [inObject],
      callBack: { [weak self, inSegmentIndex] in self?.updateImage (from: inObject, tabIndex: inSegmentIndex) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func updateImage (from inObject : EBObservableProperty <NSImage>,
                                tabIndex inTabIndex : Int) {
    switch inObject.selection {
    case .empty, .multiple :
      self.setImage (nil, forTab: inTabIndex)
    case .single (let v) :
      self.setImage (v.isValid ? v : nil, forTab: inTabIndex)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  $selectedTab binding
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSelectedTabIndexController : EBGenericReadWritePropertyController <Int>? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func bind_selectedTab (_ inObject : EBObservableMutableProperty <Int>) -> Self {
    self.mSelectedTabIndexController = EBGenericReadWritePropertyController <Int> (
      observedObject: inObject,
      callBack: { [weak self] in self?.update (from: inObject) }
    )
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func update (from inObject : EBObservableMutableProperty <Int>) {
    switch inObject.selection {
    case .empty :
      ()
    case .single (let v) :
      self.selectTab (atIndex: v)
    case .multiple :
      ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate class Internal_NSTabView : NSTabView, NSTabViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  weak var mBaseTabView : BaseTabView? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
    noteObjectAllocation (self)
    self.delegate = self // NSTabViewDelegate
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder: NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  NSTabViewDelegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor func tabView (_ tabView : NSTabView,
                           didSelect inTabViewItem : NSTabViewItem?) {
    self.mBaseTabView?.selectedTabDidChange ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
