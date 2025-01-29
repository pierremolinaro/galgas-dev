//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 27/01/2025.
//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

protocol OutlineViewClickableChildProtocol : AnyObject {
  func handleMouseDown ()
}

//--------------------------------------------------------------------------------------------------

protocol OutlineViewChildProtocol : AnyObject {
  func childView (forColumn inColumn : NSTableColumn) -> NSView
}

//--------------------------------------------------------------------------------------------------

protocol OutlineViewNodeProtocol : OutlineViewChildProtocol {
  func childrenCount () -> Int
  func child (atIndex inIndex : Int) -> AnyObject
}

//--------------------------------------------------------------------------------------------------

public class AutoLayoutOutlineView : AutoLayoutVerticalStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private final let mView : BaseView
  private final let mCocoaScrollView : PrivateCocoaScrollView
  private final let mCocoaOutlineView : PrivateCocoaOutlineView
//  private final var mAddButton : AutoLayoutButton? = nil
//  private final var mRemoveButton : AutoLayoutButton? = nil

//  private final weak var mDelegate : (any AutoLayoutTableViewDelegate)? = nil // SHOULD BE WEAK
//  private final var mRowCountCallBack : Optional < () -> Int > = nil
//  private final var mTransmitSelectionChangeToDelegate = true

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
               addControlButtons inAddControlButtons : Bool) {
    self.mMinSize = NSSize (width: CGFloat (inMinWidth), height: CGFloat (inMinHeight))
    self.mHStretching = inHStretching
    self.mHorizontalDisposition = inHorizontalDisposition
    self.mVStretching = inVStretching
    self.mVerticalDisposition = inVerticalDisposition
    self.mCocoaOutlineView = PrivateCocoaOutlineView (size: inSize)
    self.mCocoaScrollView = PrivateCocoaScrollView ()
    self.mView = BaseView (withCocoaView: self.mCocoaScrollView)
    super.init ()
    _ = self.set (margins: .zero).appendView (self.mView)
  //--- Configure table view
    self.mCocoaOutlineView.myOutlineView = self
    self.mCocoaOutlineView.focusRingType = .none
    self.mCocoaOutlineView.isEnabled = true
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
  //  Configure table view
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func configure (allowsEmptySelection inAllowsEmptySelection : Bool,
                               allowsMultipleSelection inAllowsMultipleSelection : Bool,
                               rowCountCallBack inRowCountCallBack : @escaping () -> Int,
                               delegate inDelegate : (any AutoLayoutTableViewDelegate)?) {
    self.mCocoaOutlineView.allowsEmptySelection = inAllowsEmptySelection
    self.mCocoaOutlineView.allowsMultipleSelection = inAllowsMultipleSelection
//    self.mRowCountCallBack = inRowCountCallBack
//    self.mDelegate = inDelegate
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Source Data
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mContentArray = [AnyObject] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setContentArray (_ inContentArray : [AnyObject]) {
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

  func setBackgroundColor (_ inColor : NSColor) -> Self {
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

  final var selectedRow : Int { return self.mCocoaOutlineView.selectedRow }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func selectRowIndexes (_ inIndexes : IndexSet, byExtendingSelection extend : Bool) {
    self.mCocoaOutlineView.selectRowIndexes (inIndexes, byExtendingSelection: extend)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public final func beginUpdates () {
//    self.mCocoaOutlineView.beginUpdates ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public final func endUpdates () {
//    self.mCocoaOutlineView.endUpdates ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @objc final func addEntryAction (_ inUnusedSender : Any?) {
//    self.mDelegate?.tableViewDelegate_addEntry ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @objc final func removeSelectedEntriesAction (_ _ : Any?) {
//    self.mDelegate?.tableViewDelegate_removeSelectedEntries ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final var columnCount : Int {
//    return self.mCocoaOutlineView.tableColumns.count
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var font : NSFont? {
    return self.mCocoaOutlineView.font
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var controlSize : NSControl.ControlSize {
    return self.mCocoaOutlineView.controlSize
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func appendTableColumn (_ inColumn : AutoLayoutTableColumn) {
//  //--- Add Column
//    self.mCocoaOutlineView.addTableColumn (inColumn)
//  //--- Update table view sort descriptors
//    if let s = inColumn.sortDescriptorPrototype {
//      self.mCocoaOutlineView.sortDescriptors.append (s)
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func scrollRowToVisible (row inRow : Int) {
    self.mCocoaOutlineView.scrollRowToVisible (inRow)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public final func sortAndReloadData () {
//  //--- Current selected row
//    let currentSelectedRow = self.mCocoaOutlineView.selectedRow // < 0 if no selected row
//  //--- Reload; reloading change selection, so we temporary disable transmitting selection change to delegate
//    self.mTransmitSelectionChangeToDelegate = false
//    self.mDelegate?.tableViewDelegate_beginSorting ()
//    for descriptor in self.mCocoaOutlineView.sortDescriptors.reversed () {
//      for tableColumn in self.mCocoaOutlineView.tableColumns {
//        if let column = tableColumn as? AutoLayoutTableColumn, column.identifier.rawValue == descriptor.key {
//          column.mSortDelegate? (descriptor.ascending)
//        }
//      }
//    }
//    self.mDelegate?.tableViewDelegate_endSorting ()
//    self.mCocoaOutlineView.reloadData ()
//    self.mTransmitSelectionChangeToDelegate = true
//  //--- Restore Selection
//    if let selectedObjectIndexes = self.mDelegate?.tableViewDelegate_indexesOfSelectedObjects () {
//      self.mCocoaOutlineView.selectRowIndexes (selectedObjectIndexes, byExtendingSelection: false)
//      if selectedObjectIndexes.isEmpty {
//        self.mDelegate?.tableViewDelegate_selectionDidChange (selectedRows: IndexSet ())
//      }
//    }else{
//      self.mCocoaOutlineView.selectRowIndexes (IndexSet (), byExtendingSelection: false)
//    }
//  //--- Ensure selection non empty ?
//    let ensureNonEmpty = (currentSelectedRow >= 0) || !self.mCocoaOutlineView.allowsEmptySelection
//    if ensureNonEmpty, self.mCocoaOutlineView.selectedRow < 0, let rowCount = self.mRowCountCallBack? (), rowCount > 0 {
//      if currentSelectedRow >= 0 {
//        if currentSelectedRow < rowCount {
//          self.mCocoaOutlineView.selectRowIndexes (IndexSet (integer: currentSelectedRow), byExtendingSelection: false)
//        }else{
//          self.mCocoaOutlineView.selectRowIndexes (IndexSet (integer: rowCount - 1), byExtendingSelection: false)
//        }
//      }else{
//        self.mCocoaOutlineView.selectRowIndexes (IndexSet (integer: 0), byExtendingSelection: false)
//      }
//    }
//  //--- Scroll to make selection visible
//    if self.mCocoaOutlineView.selectedRow >= 0 {
//      self.mCocoaOutlineView.scrollRowToVisible (self.mCocoaOutlineView.selectedRow)
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK! Function invoked by Cocoa TableView
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @MainActor final func numberOfRows () -> Int {
//    return self.mRowCountCallBack? () ?? 0
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func tableViewSelectionDidChange () {
//    if self.mTransmitSelectionChangeToDelegate {
//      self.mDelegate?.tableViewDelegate_selectionDidChange (selectedRows: self.mCocoaOutlineView.selectedRowIndexes)
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK! Dragged Types
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  final func set (draggedTypes inDraggedTypes : [NSPasteboard.PasteboardType],
//                  dragFilterCallBack inFilterCallBack : @escaping ([URL]) -> Bool,
//                  dragConcludeCallBack inCallBack : @escaping ([URL]) -> Void) {
//    self.mCocoaOutlineView.set (draggedTypes: inDraggedTypes, dragFilterCallBack: inFilterCallBack, dragConcludeCallBack: inCallBack)
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate class PrivateCocoaScrollView : NSScrollView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    super.init (frame: .zero)
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (coder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func reflectScrolledClipView (_ inClipView : NSClipView) {
    if let window = self.window {
      window.triggerDecoration ()
    }
    super.reflectScrolledClipView (inClipView)
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

//  func outlineView (_ outlineView : NSOutlineView,
//                    objectValueFor tableColumn : NSTableColumn?,
//                    byItem item : Any?) -> Any? {
//    return "Azerty"
//  }

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

  @objc private func handleMouseDown (_ inSender : Any?) {
    if let item = self.item (atRow: self.clickedRow) as? OutlineViewClickableChildProtocol {
      item.handleMouseDown ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
