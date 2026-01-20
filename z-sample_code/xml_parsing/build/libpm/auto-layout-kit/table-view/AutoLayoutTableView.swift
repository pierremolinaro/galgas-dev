//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 25/06/2021.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

public class AutoLayoutTableView : AutoLayoutVerticalStackView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private final let mView : BaseView
  private final let mCocoaScrollView : InternalCocoaScrollView
  private final let mCocoaTableView : InternalCocoaTableView
  private final var mAddButton : AutoLayoutButton? = nil
  private final var mRemoveButton : AutoLayoutButton? = nil
  private final weak var mDelegate : (any AutoLayoutTableViewDelegate)? = nil // SHOULD BE WEAK
  private final var mRowCountCallBack : Optional < () -> Int > = nil

  private final var mTransmitSelectionChangeToDelegate = true

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
    self.mCocoaTableView = InternalCocoaTableView (size: inSize)
    self.mCocoaScrollView = InternalCocoaScrollView ()
    self.mView = BaseView (withCocoaView: self.mCocoaScrollView)
    super.init ()
    _ = self.set (margins: .zero).appendView (self.mView)
  //--- Configure table view
    self.mCocoaTableView.myTableView = self
    self.mCocoaTableView.focusRingType = .none
    self.mCocoaTableView.isEnabled = true
//    self.mCocoaTableView.clipsToBounds = true
    self.mCocoaTableView.gridStyleMask = [.solidHorizontalGridLineMask, .solidVerticalGridLineMask]
    self.mCocoaTableView.usesAlternatingRowBackgroundColors = true
    self.mCocoaTableView.columnAutoresizingStyle = .uniformColumnAutoresizingStyle
    self.mCocoaTableView.usesAutomaticRowHeights = true
    _ = self.setIntercellSpacing (horizontal: 5, vertical: 5)
  //--- Configure scroll view
    self.mCocoaScrollView.drawsBackground = false // Scroll view has no background
    self.mCocoaScrollView.hasHorizontalScroller = false
    self.mCocoaScrollView.hasVerticalScroller = true
    self.mCocoaScrollView.borderType = .noBorder
//    self.mCocoaScrollView.clipsToBounds = true
    self.mCocoaScrollView.documentView = self.mCocoaTableView
  //--- Add Control Buttons ?
    if inAddControlButtons {
      let addButton = AutoLayoutButton (title: "+", size: inSize)
        .bind_run (target: self, selector: #selector (Self.addEntryAction (_:)))
      self.mAddButton = addButton
      let removeButton = AutoLayoutButton (title: "-", size: inSize)
        .bind_run (target: self, selector: #selector (Self.removeSelectedEntriesAction (_:)))
      self.mRemoveButton = removeButton
      let hStack = AutoLayoutHorizontalStackView ()
        .set (margins: .zero)
        .appendView (addButton)
        .appendView (removeButton)
        .appendFlexibleSpace ()
      _ = self.appendView (hStack)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Layout
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public override var smallestSize : NSSize { self.mMinSize }

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
    self.mCocoaTableView.allowsEmptySelection = inAllowsEmptySelection
    self.mCocoaTableView.allowsMultipleSelection = inAllowsMultipleSelection
    self.mRowCountCallBack = inRowCountCallBack
    self.mDelegate = inDelegate
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var selectedRow : Int { return self.mCocoaTableView.selectedRow }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func selectRowIndexes (_ inIndexes : IndexSet, byExtendingSelection extend : Bool) {
    self.mCocoaTableView.selectRowIndexes (inIndexes, byExtendingSelection: extend)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func noHeaderView () -> Self {
    self.mCocoaTableView.headerView = nil
    self.mCocoaTableView.cornerView = nil
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func setIntercellSpacing (horizontal inX : Int, vertical inY : Int) -> Self {
    self.mCocoaTableView.intercellSpacing = NSSize (width: inX, height: inY)
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (hasHorizontalGrid inFlag : Bool) -> Self {
    if inFlag {
      self.mCocoaTableView.gridStyleMask.insert (.solidHorizontalGridLineMask)
    }else{
      self.mCocoaTableView.gridStyleMask.remove (.solidHorizontalGridLineMask)
    }
    return self
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (hasVerticalGrid inFlag : Bool) -> Self {
    if inFlag {
      self.mCocoaTableView.gridStyleMask.insert (.solidVerticalGridLineMask)
    }else{
      self.mCocoaTableView.gridStyleMask.remove (.solidVerticalGridLineMask)
    }
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (usesAlternatingRowBackgroundColors inFlag : Bool) -> Self {
    self.mCocoaTableView.usesAlternatingRowBackgroundColors = inFlag
    return self
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func beginUpdates () {
    self.mCocoaTableView.beginUpdates ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func endUpdates () {
    self.mCocoaTableView.endUpdates ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc final func addEntryAction (_ inUnusedSender : Any?) {
    self.mDelegate?.tableViewDelegate_addEntry ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc final func removeSelectedEntriesAction (_ _ : Any?) {
    self.mDelegate?.tableViewDelegate_removeSelectedEntries ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var columnCount : Int {
    return self.mCocoaTableView.tableColumns.count
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var font : NSFont? {
    return self.mCocoaTableView.font
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var controlSize : NSControl.ControlSize {
    return self.mCocoaTableView.controlSize
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func appendTableColumn (_ inColumn : AutoLayoutTableColumn) {
  //--- Add Column
    self.mCocoaTableView.addTableColumn (inColumn)
  //--- Update table view sort descriptors
    if let s = inColumn.sortDescriptorPrototype {
      self.mCocoaTableView.sortDescriptors.append (s)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func scrollRowToVisible (row inRow : Int) {
    self.mCocoaTableView.scrollRowToVisible (inRow)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func sortAndReloadData () {
  //--- Current selected row
    let currentSelectedRow = self.mCocoaTableView.selectedRow // < 0 if no selected row
  //--- Reload; reloading change selection, so we temporary disable transmitting selection change to delegate
    self.mTransmitSelectionChangeToDelegate = false
    self.mDelegate?.tableViewDelegate_beginSorting ()
    for descriptor in self.mCocoaTableView.sortDescriptors.reversed () {
      for tableColumn in self.mCocoaTableView.tableColumns {
        if let column = tableColumn as? AutoLayoutTableColumn, column.identifier.rawValue == descriptor.key {
          column.mSortDelegate? (descriptor.ascending)
        }
      }
    }
    self.mDelegate?.tableViewDelegate_endSorting ()
  //--- Reload
    self.mCocoaTableView.reloadData ()
    self.mTransmitSelectionChangeToDelegate = true
  //--- Restore Selection
    if let selectedObjectIndexes = self.mDelegate?.tableViewDelegate_indexesOfSelectedObjects () {
      self.mCocoaTableView.selectRowIndexes (selectedObjectIndexes, byExtendingSelection: false)
      if selectedObjectIndexes.isEmpty {
        self.mDelegate?.tableViewDelegate_selectionDidChange (selectedRows: IndexSet ())
      }
    }else{
      self.mCocoaTableView.selectRowIndexes (IndexSet (), byExtendingSelection: false)
    }
  //--- Ensure selection non empty ?
    let ensureNonEmpty = (currentSelectedRow >= 0) || !self.mCocoaTableView.allowsEmptySelection
    if ensureNonEmpty, self.mCocoaTableView.selectedRow < 0, let rowCount = self.mRowCountCallBack? (), rowCount > 0 {
      if currentSelectedRow >= 0 {
        if currentSelectedRow < rowCount {
          self.mCocoaTableView.selectRowIndexes (IndexSet (integer: currentSelectedRow), byExtendingSelection: false)
        }else{
          self.mCocoaTableView.selectRowIndexes (IndexSet (integer: rowCount - 1), byExtendingSelection: false)
        }
      }else{
        self.mCocoaTableView.selectRowIndexes (IndexSet (integer: 0), byExtendingSelection: false)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK! Function invoked by Cocoa TableView
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor final func numberOfRows () -> Int {
    return self.mRowCountCallBack? () ?? 0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func tableViewSelectionDidChange () {
    if self.mTransmitSelectionChangeToDelegate {
      self.mDelegate?.tableViewDelegate_selectionDidChange (selectedRows: self.mCocoaTableView.selectedRowIndexes)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK! Dragged Types
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public final func set (draggedTypes inDraggedTypes : [NSPasteboard.PasteboardType],
                         dragFilterCallBack inFilterCallBack : @escaping ([URL]) -> Bool,
                         dragConcludeCallBack inConcludeCallBack : @escaping ([URL]) -> Void) {
    self.mCocoaTableView.set (
      draggedTypes: inDraggedTypes,
      dragFilterCallBack: inFilterCallBack,
      dragConcludeCallBack: inConcludeCallBack
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
// InternalCocoaTableView
//--------------------------------------------------------------------------------------------------

fileprivate final class InternalCocoaTableView : NSTableView, NSTableViewDataSource, NSTableViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mDragConcludeCallBack : Optional < ([URL]) -> Void > = nil
  private var mDragFilterCallBack : Optional < ([URL]) -> Bool > = nil
  fileprivate weak var myTableView : AutoLayoutTableView? = nil // SHOULD BE WEAK

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
    if #available (OSX 11.0, *) {
      self.style = .fullWidth
    }
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
  // MARK: Drag
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func set (draggedTypes inDraggedTypes : [NSPasteboard.PasteboardType],
            dragFilterCallBack inFilterCallBack : @escaping ([URL]) -> Bool,
            dragConcludeCallBack inConcludeCallBack : @escaping ([URL]) -> Void) {
    self.registerForDraggedTypes (inDraggedTypes)
    self.mDragConcludeCallBack = inConcludeCallBack
    self.mDragFilterCallBack = inFilterCallBack
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draggingEntered (_ inSender : any NSDraggingInfo) -> NSDragOperation {
    var dragOperation : NSDragOperation = []
//    for draggedType in self.registeredDraggedTypes {
//      if let data = inSender.draggingPasteboard.data (forType: draggedType) {
//        Swift.print (data)
//      }
//    }
    if let array = inSender.draggingPasteboard.readObjects (forClasses: [NSURL.self]) as? [URL],
      let ok = self.mDragFilterCallBack? (array) {
        dragOperation = ok ? .copy : []
    }
    return dragOperation
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draggingUpdated (_ inSender : any NSDraggingInfo) -> NSDragOperation {
    return self.draggingEntered (inSender)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func draggingExited (_ inSender : (any NSDraggingInfo)?) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func prepareForDragOperation (_ inSender : any NSDraggingInfo) -> Bool {
    return true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performDragOperation (_ inSender : any NSDraggingInfo) -> Bool {
    return self.draggingEntered (inSender) == .copy
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func concludeDragOperation (_ inSender : (any NSDraggingInfo)?) {
    if let array = inSender?.draggingPasteboard.readObjects (forClasses: [NSURL.self]) as? [URL] {
      self.mDragConcludeCallBack? (array)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   NSTableViewDataSource protocol
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor final func numberOfRows (in tableView: NSTableView) -> Int {
    return self.myTableView?.numberOfRows () ?? 0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   NSTableViewDelegate protocol
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor final func tableView (_ tableView : NSTableView,
                                   viewFor inTableColumn : NSTableColumn?,
                                   row inRowIndex : Int) -> NSView? {
    if let tableColumn = inTableColumn as? AutoLayoutTableColumn {
      let view = tableColumn.configureTableCellView (forRowIndex: inRowIndex)
      return view
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //    tableView:sortDescriptorsDidChange: NSTableViewDataSource delegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func tableView (_ tableView : NSTableView,
                        sortDescriptorsDidChange oldDescriptors : [NSSortDescriptor]) {
    self.myTableView?.sortAndReloadData ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func tableViewSelectionDidChange (_ inUnusedNotification : Notification) {
    self.myTableView?.tableViewSelectionDidChange ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
