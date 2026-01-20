//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 27/01/2025.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class AutoLayoutOutlineView : AutoLayoutVerticalStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private final let mView : BaseView
  private final let mCocoaScrollView : InternalCocoaScrollView
  private final let mCocoaOutlineView : PrivateCocoaOutlineView

  private let mMinSize : NSSize
  private let mHStretching : HorizontalStretchingResistance
  private let mHorizontalDisposition : HorizontalAlignmentInVerticalStack
  private let mVStretching : VerticalStretchingResistance
  private let mVerticalDisposition : VerticalAlignmentInHorizontalStack

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public init (size inSize : NSControl.ControlSize,
               minWidth inMinWidth : Int = 0,
               hStretchingResistance inHStretching : HorizontalStretchingResistance = .low,
               hAlignment inHorizontalDisposition : HorizontalAlignmentInVerticalStack = .fill,
               minHeight inMinHeight : Int = 0,
               vStretchingResistance inVStretching : VerticalStretchingResistance = .low,
               vAlignment inVerticalDisposition : VerticalAlignmentInHorizontalStack = .fill,
               allowsEmptySelection inAllowsEmptySelection : Bool,
               allowsMultipleSelection inAllowsMultipleSelection : Bool) {
    self.mMinSize = NSSize (width: CGFloat (inMinWidth), height: CGFloat (inMinHeight))
    self.mHStretching = inHStretching
    self.mHorizontalDisposition = inHorizontalDisposition
    self.mVStretching = inVStretching
    self.mVerticalDisposition = inVerticalDisposition
    self.mCocoaOutlineView = PrivateCocoaOutlineView (size: inSize)
    self.mCocoaScrollView = InternalCocoaScrollView ()
    self.mView = BaseView (withCocoaView: self.mCocoaScrollView)
    super.init ()
    _ = self.set (margins: .zero).appendView (self.mView)
  //--- Configure table view
    self.mCocoaOutlineView.myOutlineView = self
    self.mCocoaOutlineView.focusRingType = .none
    self.mCocoaOutlineView.isEnabled = true
    self.mCocoaOutlineView.allowsEmptySelection = inAllowsEmptySelection
    self.mCocoaOutlineView.allowsMultipleSelection = inAllowsMultipleSelection
//    self.mCocoaOutlineView.gridStyleMask = [.solidHorizontalGridLineMask, .solidVerticalGridLineMask]
//    self.mCocoaOutlineView.usesAlternatingRowBackgroundColors = true
//    self.mCocoaOutlineView.columnAutoresizingStyle = .uniformColumnAutoresizingStyle
    self.mCocoaOutlineView.usesAutomaticRowHeights = true
    _ = self.setIntercellSpacing (horizontal: 3, vertical: 3)
  //--- Add Column
    self.mCocoaOutlineView.addTableColumn (NSTableColumn (identifier: NSUserInterfaceItemIdentifier (rawValue: "f1")))
  //--- Configure scroll view
    self.mCocoaScrollView.drawsBackground = false // Scroll view has no background
    self.mCocoaScrollView.hasHorizontalScroller = false
    self.mCocoaScrollView.hasVerticalScroller = true
    self.mCocoaScrollView.borderType = .noBorder
    self.mCocoaScrollView.documentView = self.mCocoaOutlineView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  open override var smallestSize : NSSize { self.mMinSize }

  public override var hAlignment : HorizontalAlignmentInVerticalStack { self.mHorizontalDisposition }

  public override var hStretchingResistance : HorizontalStretchingResistance { self.mHStretching }

  public override var vAlignment : VerticalAlignmentInHorizontalStack { self.mVerticalDisposition }

  public override var vStretchingResistance : VerticalStretchingResistance { self.mVStretching }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:  Make first responder
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func makeFirstResponder () -> Bool {
    return self.mCocoaOutlineView.window?.makeFirstResponder (self.mCocoaOutlineView) ?? false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Source Data
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mContentArray = [any OutlineViewNodeProtocol] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setContentArray (_ inContentArray : [any OutlineViewNodeProtocol]) {
    self.mContentArray = inContentArray
    self.mCocoaOutlineView.reloadData ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func rootNodeCount () -> Int {
    return self.mContentArray.count
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func rootNodeAtIndex (_ inIndex : Int) -> AnyObject {
    return self.mContentArray [inIndex]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Settings
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func setBackgroundColor (_ inColor : NSColor) -> Self {
    self.mCocoaOutlineView.backgroundColor = inColor
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func noHeaderView () -> Self {
    self.mCocoaOutlineView.headerView = nil
    self.mCocoaOutlineView.cornerView = nil
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setIntercellSpacing (horizontal inX : Int, vertical inY : Int) -> Self {
    self.mCocoaOutlineView.intercellSpacing = NSSize (width: inX, height: inY)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (hasHorizontalGrid inFlag : Bool) -> Self {
    if inFlag {
      self.mCocoaOutlineView.gridStyleMask.insert (.solidHorizontalGridLineMask)
    }else{
      self.mCocoaOutlineView.gridStyleMask.remove (.solidHorizontalGridLineMask)
    }
    return self
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (hasVerticalGrid inFlag : Bool) -> Self {
    if inFlag {
      self.mCocoaOutlineView.gridStyleMask.insert (.solidVerticalGridLineMask)
    }else{
      self.mCocoaOutlineView.gridStyleMask.remove (.solidVerticalGridLineMask)
    }
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (usesAlternatingRowBackgroundColors inFlag : Bool) -> Self {
    self.mCocoaOutlineView.usesAlternatingRowBackgroundColors = inFlag
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public final func set (allowsEmptySelection inFlag : Bool) -> Self {
//    self.mCocoaOutlineView.allowsEmptySelection = inFlag
//    return self
//  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public final func set (allowsMultipleSelection inFlag : Bool) -> Self {
//    self.mCocoaOutlineView.allowsMultipleSelection = inFlag
//    return self
//  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final var font : NSFont? {
    return self.mCocoaOutlineView.font
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final var controlSize : NSControl.ControlSize {
    return self.mCocoaOutlineView.controlSize
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
// PrivateCocoaOutlineView
//--------------------------------------------------------------------------------------------------

fileprivate final class PrivateCocoaOutlineView : NSOutlineView,
                                                  NSOutlineViewDelegate,
                                                  NSOutlineViewDataSource {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate weak var myOutlineView : AutoLayoutOutlineView? = nil // SHOULD BE WEAK

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // INIT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (size inSize : NSControl.ControlSize) {
    super.init (frame: .zero)
    noteObjectAllocation (self)
    self.controlSize = inSize
    self.font = NSFont.systemFont (ofSize: NSFont.systemFontSize (for: inSize))
    self.delegate = self
    self.dataSource = self
    self.target = self
    self.action = #selector (Self.handleMouseDown (_:))
//    if #available (OSX 11.0, *) {
//      self.style = .fullWidth
//    }
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

  @objc private func handleMouseDown (_ inSender : Any?) {
    if let item = self.item (atRow: self.clickedRow) as? OutlineViewClickableChildProtocol {
      item.handleMouseDown ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:   NSOutlineViewDataSource protocol
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func outlineView (_ outlineView : NSOutlineView,
                    numberOfChildrenOfItem inItem : Any?) -> Int {
    if inItem == nil {
      let n = self.myOutlineView?.rootNodeCount () ?? 0
      return n
    }else if let item = inItem as? any OutlineViewNodeProtocol {
      return item.childrenCount ()
    }else{
      return 0
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func outlineView (_ inOutlineView : NSOutlineView,
                    child inIndex : Int,
                    ofItem inItem : Any?) -> Any {
    if inItem == nil {
      return self.myOutlineView!.rootNodeAtIndex (inIndex)
    }else{
      let node = inItem as! OutlineViewNodeProtocol
      return node.child (atIndex: inIndex)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func outlineView (_ outlineView: NSOutlineView,
                    isItemExpandable inItem : Any) -> Bool {
    if let item = inItem as? OutlineViewNodeProtocol, item.childrenCount () > 0 {
      return true
    }else{
      return false
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:   NSOutlineViewDelegate protocol
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

 func outlineView (_ outlineView : NSOutlineView,
                   viewFor inTableColumn : NSTableColumn?,
                   item inItem : Any) -> NSView? {
    if let tableColumn = inTableColumn,
       let item = inItem as? OutlineViewChildProtocol {
      return item.childView (forColumn: tableColumn)
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func outlineViewSelectionDidChange (_ inNotification : Notification) {
    if let item = self.item (atRow: self.selectedRow) as? OutlineViewChildProtocol {
      item.childDidSelect ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
