//
//  Created by Pierre Molinaro on 04/11/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

class SWIFT_SingleWindow : NSWindow, NSWindowDelegate, AutoLayoutTableViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mTabArray = [SWIFT_DisplayDescriptor] ()
  private var mSelectedTabIndex = -1

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   https://www.hackingwithswift.com/example-code/system/how-to-run-an-external-program-using-process
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mProcess : Process? = nil
  private var mProcessOutputPipe : Pipe? = nil
  private var mResultData = Data ()
  private let mBuildButton = AutoLayoutButton (title: "🔨", size: .regular)
  private let mAbortButton = AutoLayoutButton (title: "🛑", size: .regular)
  private var mBuildHasBeenAborted = false
  private var mIssueArray = [SWIFT_Issue] ()
  private let mWarningCountTextField = AutoLayoutStaticLabel (title: "", bold: false, size: .regular, alignment: .center).setTextColor (.orange)
  private let mErrorCountTextField = AutoLayoutStaticLabel (title: "", bold: true, size: .regular, alignment: .center).setTextColor (.red)
  private var mWarningCount = 0
  private var mErrorCount = 0
  private let mProgressIndicator = SpinningProgressIndicator (size: 20, displayedWhenStopped: false)
  private var mCurrentBuildOutputColor = NSColor.black

  let mBuildWindowFont = EBPreferenceProperty <NSFont> (
    defaultValue: NSFont.userFixedPitchFont (ofSize: 10.0)!,
    prefKey: "build-log-font"
  )

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   VIEWS
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mSourceEditionView = AutoLayoutVerticalStackView ().set (margins: .zero)

  private let mHorizontalSplitView = AutoLayoutHorizontalSplitView ()

  private let mInspectorTabView = AutoLayoutBorderLessTabView (size: .regular)

  private let mBuildLogTextView = AutoLayoutStaticTextView (
    drawsBackground: true,
    horizontalScroller: false,
    verticalScroller: true
  ).setSelectable (true)

  private let mSearchInFilesView = AutoLayoutVerticalStackView ()
  private let mSearchTextField = AutoLayoutSearchField (minWidth: 100, bold: false, size: .regular)
    .setRecentsAutosaveName ("SearchTextFieldRecents")
  private let mSearchResultLabel = AutoLayoutStaticLabel (title: "", bold: false, size: .small, alignment: .center)
  private let mSearchResultOutlineView = AutoLayoutOutlineView (size: .small, allowsEmptySelection: true, allowsMultipleSelection: false)
    .noHeaderView ()
    .setBackgroundColor (.clear)

  private var mSearchResults = [FileSearchResult] ()

  private let mBuildLogTextViewRuler : SWIFT_BuildLogViewRuler

  private let mTabListView = AutoLayoutTableView (size: .regular, minWidth: 250, addControlButtons: false)

  private var mBuildTextFontObserver : EBSimpleObserver? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (withDocument inDocument : SWIFT_SingleDocument) {
    self.mBuildLogTextView.createVerticalRulerView { SWIFT_BuildLogViewRuler (scrollView: $0) }
    self.mBuildLogTextViewRuler = self.mBuildLogTextView.verticalRuler as! SWIFT_BuildLogViewRuler

    super.init (
      contentRect: NSRect (x: 0, y: 0, width: 800, height: 500),
      styleMask: [.titled, .closable, .miniaturizable, .resizable],
      backing: .buffered,
      defer: true
    )
    noteObjectAllocation (self)

    self.delegate = self // NSWindowDelegate
    self.isReleasedWhenClosed = false
    self.setFrameAutosaveName ("WindowFrameFor_" + (inDocument.fileURL?.path ?? ""))
  //--- Build user interface
    _ = self.mBuildButton.setAction { [weak self] in self?.buildAction (nil) }
    self.mAbortButton.setAction { [weak self] in self?.abortBuildAction () }
      .setHidden (true)
    _ = self.mInspectorTabView
    .addTab (
      title: "📁",
      tooltip: "Files",
      contentView: self.mTabListView
    )
    .addTab (
      title: "🔨",
      tooltip: "Build",
      contentView: self.mBuildLogTextView
    )
    .addTab (
      title: "🔍",
      tooltip: "Search in files",
      contentView: self.mSearchInFilesView
    )

    _ = self.mSearchInFilesView
      .set (spacing: .zero)
      .appendView (self.mSearchTextField)
      .appendView (self.mSearchResultLabel)
      .appendView (self.mSearchResultOutlineView)

    self.configureTabListView (withDocument: inDocument)
    let vStack = AutoLayoutVerticalStackView ()
    .set (margins: .zero)
    .set (spacing: .zero)
    .appendView (
      AutoLayoutHorizontalStackView ()
        .set (margins: .zero)
        .appendView (self.mBuildButton)
        .appendView (self.mErrorCountTextField)
        .appendView (self.mWarningCountTextField)
        .appendFlexibleSpace ()
        .appendView (self.mProgressIndicator)
        .appendView (self.mAbortButton)
      )
    .appendSeparator ()
    .appendView (self.mInspectorTabView)
    _ = self.mHorizontalSplitView
      .appendView (vStack)
      .appendView (self.mSourceEditionView)
    self.setRootView (self.mHorizontalSplitView)
  //---
    self.appendTab (document: inDocument, selectedRange: NSRange ())
  //--- Open other tabs ?
    self.openTabsFromUserDefaults (forDocument: inDocument)
  //--- Select first tab
    self.selectTab (atIndex: 0)
  //--- Configuring recent search menu
    let cellMenu = NSMenu (title: NSLocalizedString ("Search Menu", comment: "Search Menu title"))
    var item = NSMenuItem (
      title: NSLocalizedString ("Clear", comment: "Clear menu title"),
      action: nil,
      keyEquivalent: ""
    )
    item.tag = NSSearchField.clearRecentsMenuItemTag
    cellMenu.insertItem (item, at: 0)
    item = NSMenuItem.separator ()
    item.tag = NSSearchField.recentsTitleMenuItemTag
    cellMenu.insertItem (item, at: 1)
    item = NSMenuItem (
      title: NSLocalizedString ("Recent Searches", comment: "Recent Searches menu title"),
      action: nil,
      keyEquivalent: ""
    )
    item.tag = NSSearchField.recentsTitleMenuItemTag
    cellMenu.insertItem (item, at: 2)
    item = NSMenuItem (
      title: "Recents",
      action: nil,
      keyEquivalent:""
    )
    item.tag = NSSearchField.recentsMenuItemTag
    cellMenu.insertItem (item, at: 3)
    _ = self.mSearchTextField.setSearchMenuTemplate (cellMenu: cellMenu)
      .setAction { [weak self] in self?.performSearchInFiles () }
    DispatchQueue.main.async {
      self.makeKeyAndOrderFront (nil)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func configureTabListView (withDocument inDocument : SWIFT_SingleDocument) {
    self.mTabListView
    .noHeaderView ()
    .setIntercellSpacing (horizontal: 0, vertical: 5)
    .set (hasHorizontalGrid : false)
    .set (hasVerticalGrid : false)
    .set (usesAlternatingRowBackgroundColors: false)
    .configure (
      allowsEmptySelection: false,
      allowsMultipleSelection: false,
      rowCountCallBack: { [weak self] in self?.mTabArray.count ?? 0 },
      delegate: self
    )
    self.mTabListView.addColumn_AttributedString (
      valueGetterDelegate: { [weak self] in
        return self?.mTabArray [$0].title ?? NSAttributedString ()
      },
      title: "",
      minWidth: 80,
      maxWidth: 2000,
      headerAlignment: .center,
      contentAlignment: .left
    )
    self.mTabListView.addColumn_ButtonImage (
      valueGetterDelegate: { [weak self] (_ inRow : Int) in
        if inRow > 0, let n = self?.mTabArray.count, n > 1 {
          return NSImage (named: NSImage.stopProgressTemplateName) ?? NSImage ()
        }else{
          return nil
        }
      },
      actionDelegate: { [weak self] (_ inRow : Int) in self?.closeTab (atIndex: inRow) },
      title: "",
      minWidth: 25,
      maxWidth: 25,
      headerAlignment: .center,
      contentAlignment: .right
    )
    self.mTabListView.set (
      draggedTypes: [.URL, .myPasteboardEntry],
      dragFilterCallBack: { (inURLs) -> Bool in
        for url in inURLs {
          if !SWIFT_DocumentController.supportedDocumentExtensions.contains (url.pathExtension) {
            return false
          }
        }
        return true
      },
      dragConcludeCallBack: { [weak self] (inURLs) in
        self?.openFilesInNewTabs (inURLs, atIndex: self?.mTabArray.count ?? 0)
      }
    )
//      dragSourceCallBack : { [weak self] (_ inRow : Int) -> NSPasteboardWriting? in
//        if let uwSelf = self, let fileURL = uwSelf.mTabArray [inRow].fileURL {
//          let pw = FileEntryPasteboard (path: fileURL.path, index: inRow)
//          return pw as NSPasteboardWriting?
//        }else{
//          return nil
//        }
//      },
//      dragDestinationValidationCallBack: { (inTargetTableView : NSTableView, inInfo : NSDraggingInfo, inRow : Int, inDropOperation : NSTableView.DropOperation) -> NSDragOperation in
//      //--- L'affichage indique que le drop se fait au dessus de l'item, pas sur l'item
//        inTargetTableView.setDropRow (inRow, dropOperation: .above)
//      //--- La table view insére temporairement un espace pour indiquer où le drop aura lieu
//        inTargetTableView.draggingDestinationFeedbackStyle = .gap
//      //---
//        let draggingPasteboard = inInfo.draggingPasteboard
//        if let urls = draggingPasteboard.readObjects (forClasses: [NSURL.self]) as? [URL], urls.count > 0 {
//          let fileExtensions = SWIFT_DocumentController.supportedDocumentExtensions ()
//          var idx = 0
//          var ok = false
//          while (idx < urls.count) && !ok {
//            ok = fileExtensions.contains (urls [idx].pathExtension)
//            idx += 1
//          }
//          NSCursor.dragCopy.set ()
//          return .copy
//        }else if let pbItems = draggingPasteboard.readObjects (forClasses: [FileEntryPasteboard.self]) as? [FileEntryPasteboard], pbItems.count > 0 {
//          let sourceAndTargetIdentical : Bool
//          if let draggingSource = inInfo.draggingSource as? NSTableView, draggingSource === inTargetTableView {
//            sourceAndTargetIdentical = true
//          }else{
//            sourceAndTargetIdentical = false
//          }
//          let copy = NSEvent.modifierFlags.contains (.option) || !sourceAndTargetIdentical
//          if copy {
//            NSCursor.dragCopy.set ()
//          }else{
//            NSCursor.arrow.set ()
//          }
//          return copy ? .copy : .move
//        }else{
//          return []
//        }
//      },
//      dragDestinationConcludeCallBack: { [weak self] (inTargetTableView : NSTableView, inInfo : NSDraggingInfo, inTargetRow : Int, inDropOperation : NSTableView.DropOperation) -> Bool in
//        let draggingPasteboard = inInfo.draggingPasteboard
//        if let uwSelf = self {
//          if let urls = draggingPasteboard.readObjects (forClasses: [NSURL.self]) as? [URL], urls.count > 0 {
//            uwSelf.openFilesInNewTabs (urls, at: inTargetRow)
//            return true
//          }else if let pbItems = draggingPasteboard.readObjects (forClasses: [FileEntryPasteboard.self]) as? [FileEntryPasteboard], pbItems.count == 1 {
//            let sourceAndTargetIdentical : Bool
//            if let draggingSource = inInfo.draggingSource as? NSTableView, draggingSource == inTargetTableView {
//              sourceAndTargetIdentical = true
//            }else{
//              sourceAndTargetIdentical = false
//            }
//            let copy = NSEvent.modifierFlags.contains (.option) || !sourceAndTargetIdentical
//            if copy { // Drag and drop from same table view
//              let pathURL = URL (fileURLWithPath: pbItems [0].path)
//              uwSelf.openFilesInNewTabs ([pathURL], at: inTargetRow)
//            }else{
//              let sourceRowIndex = pbItems [0].index
//              uwSelf.moveTab (fromRow: sourceRowIndex, toRow: inTargetRow)
//            }
//            return true
//          }else{
//            return false
//          }
//        }else{
//          return false
//        }
//      }
//    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Close Window
  //  Cette fonction est appelée lorsque l'utilisateur clique dans le bouton de fermeture de la fenêtre
  //  ou lorsqu'il invoque "Close" dans le menu fichier
  //  Attention, il semble que cette fonction n'est pas obligatoirement appelée dans le main thread
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func close () {
    for tab in self.mTabArray {
      if tab.mDocument.isDocumentEdited {
        tab.mDocument.save (nil)
      }
    }
    self.mTabArray.removeAll ()
    DispatchQueue.main.async {
      SWIFT_DocumentController.closeUnreferencedDocuments ()
    }
    super.close ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Tabs
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func nextTab (_ inUnusedSender : Any?) {
    let idx = (self.mSelectedTabIndex + 1) % self.mTabArray.count
    self.selectTab (atIndex: idx)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectTab (atIndex inIndex : Int) {
    if inIndex >= 0, inIndex < self.mTabArray.count { //, self.mSelectedTabIndex != inIndex {
      self.mSelectedTabIndex = inIndex
    //--- Remove all subviews of base view
      while self.mSourceEditionView.subViews.count > 0 {
        self.mSourceEditionView.subViews [0].removeFromSuperView ()
      }
    //--- Add new selected view
      let presentationView = self.mTabArray [self.mSelectedTabIndex].sourcePresentationView
      _ = self.mSourceEditionView.appendView (presentationView)
    //--- Scroll to make selected range visible
      DispatchQueue.main.async {
        self.mTabArray [self.mSelectedTabIndex].scrollSelectedRangeToVisible ()
      }
    //--- Make the text view first responder
      presentationView.makeFirstResponder (of: self)
    //--- UpDate Window Title
      self.updateWindowTitle ()
      self.mTabListView.selectRowIndexes (IndexSet (integer: inIndex), byExtendingSelection: false)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendTab (document inDocument : SWIFT_SingleDocument,
                  selectedRange inSelectedRange : NSRange) {
    let dd = SWIFT_DisplayDescriptor (withDocument: inDocument, selectedRange: inSelectedRange)
    self.mTabArray.append (dd)
    self.mTabListView.sortAndReloadData ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func appendTabUpdatingUserDefaults (document inDocument : SWIFT_SingleDocument,
                                      selectedRange inSelectedRange : NSRange) {
    let dd = SWIFT_DisplayDescriptor (withDocument: inDocument, selectedRange: inSelectedRange)
    self.mTabArray.append (dd)
    self.mTabListView.sortAndReloadData ()
    self.updateUserDefaults ()
    self.selectTab (atIndex: self.mTabArray.count - 1)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func insertTab (document inDocument : SWIFT_SingleDocument, at inIndex : Int) {
    self.mTabArray.insert (SWIFT_DisplayDescriptor (withDocument: inDocument, selectedRange: NSRange ()), at: inIndex)
    self.mTabListView.sortAndReloadData ()
    self.updateUserDefaults ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func moveTab (fromRow inSourceIndex : Int, toRow inTargetIndex : Int) {
  //  Swift.print ("moveTab \(inSourceIndex) -> \(inTargetIndex)")
    if inSourceIndex < inTargetIndex {
      let x = self.mTabArray.remove (at: inSourceIndex)
      self.mTabArray.insert (x, at: inTargetIndex - 1)
      self.mTabListView.beginUpdates ()
      self.mTabListView.sortAndReloadData ()
      self.selectTab (atIndex: inTargetIndex - 1)
      self.mTabListView.endUpdates ()
      self.updateUserDefaults ()
    }else if inSourceIndex > inTargetIndex {
      let x = self.mTabArray.remove (at: inSourceIndex)
      self.mTabArray.insert (x, at: inTargetIndex)
      self.mTabListView.beginUpdates ()
      self.mTabListView.sortAndReloadData ()
      self.selectTab (atIndex: inTargetIndex)
      self.mTabListView.endUpdates ()
      self.updateUserDefaults ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tabsReferencing (document inDocument : SWIFT_SingleDocument) -> Int {
    var result = 0
    for displayDescriptor in self.mTabArray {
      if displayDescriptor.isReferencing (document: inDocument) {
        result += 1
      }
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func closeTab (atIndex inIndex : Int) {
    if inIndex >= 0, inIndex < self.mTabArray.count {
    //--- Enregistrer tous les documents
      SWIFT_DocumentController.mySaveAllDocuments ()
    //--- Supprimer l'entrée
      self.mTabArray.remove (at: inIndex)
    //--- Fermer les documents qui ne sont plus visibles
    //    En fait, un seul peut être fermé, celui dont on vient de supprimer l'entrée,
    //    si il n'est pas référencé ailleurs
      SWIFT_DocumentController.closeUnreferencedDocuments ()
    //--- Mettre à jour la sélection
      if inIndex == self.mTabArray.count {
        self.selectTab (atIndex: self.mTabArray.count - 1)
      }else{
        self.selectTab (atIndex: inIndex)
      }
     self.mTabListView.sortAndReloadData ()
     self.updateUserDefaults ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func openFilesInNewTabs (_ inURLs : [URL], atIndex inIndex : Int) {
    var idx = inIndex
    for url in inURLs {
      let dc = NSDocumentController.shared
      dc.openDocument (withContentsOf: url, display: false) { (inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
        if let document = inOptionalDocument as? SWIFT_SingleDocument {
          DispatchQueue.main.async {
            self.insertTab (document: document, at: idx)
            self.selectTab (atIndex: idx)
            idx += 1
            self.mInspectorTabView.selectTab (atIndex: 0)
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func findOrAddTab (forIssue inIssue : SWIFT_Issue) {
    var found = false
    for idx in 0 ..< self.mTabArray.count {
      let dd = self.mTabArray [idx]
      if !found, dd.fileURL == inIssue.fileURL {
        self.selectTab (atIndex: idx)
        let range = self.mTabArray [idx].mDocument.mTextStorage.rangeFor (
          line: inIssue.line,
          startColumn: 0,
          length: 0
        )
        self.mTabArray [idx].sourcePresentationView.setSelectedRange (range)
        self.mTabArray [idx].sourcePresentationView.scrollToSelectedRange ()
        found = true
      }
    }
    if !found {
      let dc = NSDocumentController.shared
      let line = inIssue.line
      dc.openDocument (withContentsOf: inIssue.fileURL, display: false) { (_ inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
        if let document = inOptionalDocument as? SWIFT_SingleDocument {
          DispatchQueue.main.async {
            self.appendTabUpdatingUserDefaults (document: document, selectedRange: NSRange ())
            let idx = self.mTabArray.count - 1
            let range = self.mTabArray [idx].mDocument.mTextStorage.rangeFor (
              line: line,
              startColumn: 0,
              length: 0
            )
            self.mTabArray [idx].sourcePresentationView.setSelectedRange (range)
            self.mTabArray [idx].sourcePresentationView.scrollToSelectedRange ()
            for issue in self.mIssueArray {
              document.appendIssue (issue)
            }
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func findOrAddTab (forURL inURL : URL,
                     range inRange : NSRange,
                     postAction inPostAction : (@Sendable () -> Void)?) {
    var found = false
    for idx in 0 ..< self.mTabArray.count {
      let dd = self.mTabArray [idx]
      if !found, dd.fileURL == inURL {
        self.selectTab (atIndex: idx)
        self.mTabArray [idx].sourcePresentationView.setSelectedRange (inRange)
        self.mTabArray [idx].sourcePresentationView.scrollToSelectedRange ()
        inPostAction? ()
        found = true
      }
    }
    if !found {
      let dc = NSDocumentController.shared
      dc.openDocument (withContentsOf: inURL, display: false) { (_ inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
        if let document = inOptionalDocument as? SWIFT_SingleDocument {
          DispatchQueue.main.async {
            self.appendTabUpdatingUserDefaults (document: document, selectedRange: inRange)
            let idx = self.mTabArray.count - 1
            self.mTabArray [idx].sourcePresentationView.setSelectedRange (inRange)
            self.mTabArray [idx].sourcePresentationView.scrollToSelectedRange ()
            for issue in self.mIssueArray {
              document.appendIssue (issue)
            }
            inPostAction? ()
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Actions
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func useSelectionForFindInFiles (_ inSender : Any?) {
    let idx = self.mSelectedTabIndex
    if idx >= 0, idx < self.mTabArray.count {
      let tab = self.mTabArray [idx]
      let selection = tab.selectedString
      if !selection.isEmpty {
        self.mSearchTextField.stringValue = selection
        self.mInspectorTabView.selectTab (atIndex: 2)
        _ = self.mSearchTextField.makeFirstResponder ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func findInFiles (_ inSender : Any?) {
    self.mInspectorTabView.selectTab (atIndex: 2)
    _ = self.mSearchTextField.makeFirstResponder ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func saveDocument (_ inSender : Any?) {
    for tab in self.mTabArray {
      tab.mDocument.save (inSender)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func openDocumentInNewTab (_ inUnusedSender : Any?) {
    NSDocumentController.shared.beginOpenPanel { (inOptionalURLs : [URL]?) in
      if let urls = inOptionalURLs {
        DispatchQueue.main.async {
         self.openFilesInNewTabs (urls, atIndex: self.mTabArray.count)
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Open from selection
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func openFromSelectionInTab (_ inUnusedSender : Any?) {
    let displayDescriptor : SWIFT_DisplayDescriptor = self.mTabArray [self.mSelectedTabIndex]
    if let p = displayDescriptor.pathFromSelection (), let fileURL = displayDescriptor.fileURL {
      self.mInspectorTabView.selectTab (atIndex: 0)
      let url = fileURL.deletingLastPathComponent ().appendingPathComponent (p)
      var found = false
      for idx in 0 ..< self.mTabArray.count {
        let dd = self.mTabArray [idx]
        if !found, dd.fileURL == url {
          self.selectTab (atIndex: idx)
          found = true
        }
      }
      if !found {
        let dc = NSDocumentController.shared
        dc.openDocument (withContentsOf: url, display: false) { (_ inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
          if let document = inOptionalDocument as? SWIFT_SingleDocument {
            DispatchQueue.main.async {
              self.appendTabUpdatingUserDefaults (document: document, selectedRange: NSRange ())
            }
          }
        }
      }else{
        NSSound.beep ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func commentAction (_ inUnusedSender : Any?) {
    if self.mSelectedTabIndex >= 0, self.mSelectedTabIndex < self.mTabArray.count {
      let dd = self.mTabArray [self.mSelectedTabIndex]
      dd.commentSelection ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func uncommentAction (_ inUnusedSender : Any?) {
    if self.mSelectedTabIndex >= 0, self.mSelectedTabIndex < self.mTabArray.count {
      let dd = self.mTabArray [self.mSelectedTabIndex]
      dd.uncommentSelection ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func gotoLineAction (_ inUnusedSender : Any?) {
    if self.mSelectedTabIndex >= 0, self.mSelectedTabIndex < self.mTabArray.count {
      let dd : SWIFT_DisplayDescriptor = self.mTabArray [self.mSelectedTabIndex]
      let currentLine = dd.currentLine
      let lineCount = dd.lineCount
      if lineCount > 1 {
        let panel = NSPanel (
          contentRect: NSRect (x: 0.0, y: 0.0, width: 400.0, height: 150.0),
          styleMask: [.titled],
          backing: .buffered,
          defer: false
        )
        let title = AutoLayoutStaticLabel (title: "Goto Line", bold: true, size: .regular, alignment: .center)
        let lineProperty = EBStandAloneProperty <Int> (currentLine)
        let intField = AutoLayoutIntField (minWidth: 100, size: .regular)
          .setMin (1)
          .setMax (lineCount)
          .bind_value (lineProperty, sendContinously: true)
        let rangeLabel = AutoLayoutStaticLabel (title: "(1 - \(lineCount))", bold: false, size: .regular, alignment: .center)
        let intFieldLine = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .appendView (intField)
          .appendView (rangeLabel)
        let okButton = AutoLayoutSheetDefaultOkButton (title: "Goto Line", size: .regular, sheet: panel)
        let cancelButton = AutoLayoutSheetCancelButton (title: "Cancel", size: .regular)
        let lastLine = AutoLayoutHorizontalStackView ()
          .set (margins: .zero)
          .appendView (cancelButton)
          .appendFlexibleSpace ()
          .appendView (okButton)
        let mainView = AutoLayoutVerticalStackView ()
          .appendView (title)
          .appendFlexibleSpace ()
          .appendView (intFieldLine)
          .appendView (lastLine)
      //--- Set autolayout view to panel
        panel.setRootView (mainView)
        RunLoop.current.run (until: Date ()) 
        self.beginSheet (panel) { (inResponse : NSApplication.ModalResponse) in
          if inResponse == .stop {
            DispatchQueue.main.async {
              dd.selectLineStart (lineProperty.propval)
            }
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Utilities
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateWindowTitle () {
    var s = self.mTabArray [0].lastComponentOfFileName
    if self.mSelectedTabIndex > 0 {
      s += " — " + self.mTabArray [self.mSelectedTabIndex].lastComponentOfFileName
    }
    if self.isDocumentEdited {
      s += " ●"
    }
    self.title = s
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Search in files
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  class FileSearchResult : OutlineViewNodeProtocol {

    private let mFilePath : String
    private let mIndexArray : [FileEntrySearchResult]
    private weak var mWindow : SWIFT_SingleWindow?

    init (_ inFilePath : String,
          indexArray inIndexArray : [FileEntrySearchResult],
          window inWindow : SWIFT_SingleWindow) {
      self.mFilePath = inFilePath
      self.mIndexArray = inIndexArray
      self.mWindow = inWindow
      noteObjectAllocation (self)
    }

    deinit {
      noteObjectDeallocation (self)
    }

    @MainActor func childView (forColumn inColumn : NSTableColumn) -> NSView {
      let text = NSTextField ()
      text.drawsBackground = false
      text.isBordered = false
      text.isEditable = false
      text.alignment = .left
      text.stringValue = String (self.mIndexArray.count) + ": " + self.mFilePath.lastPathComponent
      text.toolTip = self.mFilePath
      return text
    }

    func childDidSelect () {
      let w = self.mWindow
      w?.findOrAddTab (forURL: URL (fileURLWithPath: self.mFilePath), range: NSRange ()) {
        DispatchQueue.main.async {
          _ = w?.mSearchResultOutlineView.makeFirstResponder ()
        }
      }
    }

    func childrenCount () -> Int {
      return self.mIndexArray.count
    }
    
    func child (atIndex inIndex: Int) -> AnyObject {
      return self.mIndexArray [inIndex]
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  class FileEntrySearchResult : OutlineViewChildProtocol {
    private let mFilePath : String
    private let mRange : NSRange
    private let mLine : String
    private weak var mWindow : SWIFT_SingleWindow?

    init (_ inFilePath : String,
          _ inRange : NSRange,
          _ inLine : String,
          window inWindow : SWIFT_SingleWindow) {
      self.mFilePath = inFilePath
      self.mRange = inRange
      self.mLine = inLine
      self.mWindow = inWindow
      noteObjectAllocation (self)
    }

    deinit {
      noteObjectDeallocation (self)
    }

    func childView (forColumn inColumn : NSTableColumn) -> NSView {
      let text = NSTextField ()
      text.drawsBackground = false
      text.isBordered = false
      text.isEditable = false
      text.alignment = .left
      text.stringValue = self.mLine
      text.toolTip = text.stringValue
      return text
    }

    func childDidSelect () {
      let w = self.mWindow
      w?.findOrAddTab (forURL: URL (fileURLWithPath: self.mFilePath), range: self.mRange) {
        DispatchQueue.main.async {
          _ = w?.mSearchResultOutlineView.makeFirstResponder ()
        }
      }
    }

  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func performSearchInFiles () {
    NSDocumentController.shared.saveAllDocuments (nil)
    let searchedString = self.mSearchTextField.stringValue
    if !searchedString.isEmpty, !self.mTabArray.isEmpty, let firstTabURL = self.mTabArray [0].fileURL {
      let directory : URL = firstTabURL.deletingLastPathComponent ()
      self.mSearchResultLabel.stringValue = "Searching…"
      self.mSearchResults.removeAll (keepingCapacity: true)
      self.mSearchResultOutlineView.setContentArray (self.mSearchResults)
      RunLoop.main.run (until: Date ())
      let extensionSet = SWIFT_DocumentController.supportedDocumentExtensions
      let enumerator = FileManager ().enumerator (atPath: directory.path)
      while let file = enumerator?.nextObject () as? String {
        if extensionSet.contains (file.pathExtension) {
          let fullPath = directory.path + "/" + file
          self.search (searchedString, inFile: fullPath)
        }
      }
      if self.mSearchResults.count == 0 {
        self.mSearchResultLabel.stringValue = "Not found"
      }else{
        var count = 0
        for result in self.mSearchResults {
          count += result.childrenCount ()
        }
        var s : String
        if count == 1 {
          s = "1 result"
        }else{
          s = "\(count) results"
        }
        s += " in "
        if self.mSearchResults.count == 1 {
          s += "1 file"
        }else{
          s += "\(self.mSearchResults.count) files"
        }
        self.mSearchResultLabel.stringValue = s
        self.mSearchResultOutlineView.setContentArray (self.mSearchResults)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func search (_ inSearchedString : String,
                       inFile inFullPath : String) {
    if let contents = try? String (contentsOfFile: inFullPath, encoding: .utf8) {
      var indices = [FileEntrySearchResult] ()
      var searchStartIndex = contents.startIndex
      while searchStartIndex < contents.endIndex,
          let range : Range <String.Index> = contents.range (of: inSearchedString, range: searchStartIndex ..< contents.endIndex),
          !range.isEmpty {
        let lineRange = contents.lineRange (for: range)
        var line = String (contents [lineRange])
        line.removeLast ()
        let startRange : Int = contents.distance (from: contents.startIndex, to: range.lowerBound)
        let endRange : Int = contents.distance (from: contents.startIndex, to: range.upperBound)
        let nsRange = NSRange (location: startRange, length: endRange - startRange)
        indices.append (FileEntrySearchResult (inFullPath, nsRange, line, window: self))
        searchStartIndex = range.upperBound
      }
      if indices.count > 0 {
        self.mSearchResults.append (FileSearchResult (inFullPath, indexArray: indices, window: self))
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: User Defaults
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSetUpDone = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var userDefaultKey : String { "CONFIG:" + self.mTabArray [0].fileURL!.path }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateUserDefaults () {
    if self.mSetUpDone && (self.mTabArray.count > 0) {
      var fileArray = [[String : String]] ()
      for tab in self.mTabArray {
        var dict = [String : String] ()
        dict ["file"] = tab.fileURL!.path
        dict ["range"] = NSStringFromRange (tab.selectedRange)
        fileArray.append (dict)
      }
      fileArray.removeFirst () // Remove first tab
      var globalDict = [String : Any] ()
      globalDict ["tabs"] = fileArray
      globalDict ["range"] = NSStringFromRange (self.mTabArray [0].selectedRange)
      globalDict ["selectedIndex"] = self.mSelectedTabIndex
      globalDict ["windowRect"] = NSStringFromRect (self.frame)
      UserDefaults.standard.set (globalDict, forKey: self.userDefaultKey)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func openTabsFromUserDefaults (forDocument inDocument : SWIFT_SingleDocument) {
    if let globalDict = UserDefaults.standard.object (forKey: self.userDefaultKey) as? [String : Any],
       let tabFilePathArray = globalDict ["tabs"] as? [[String : String]],
       let selectedTabIndex = globalDict ["selectedIndex"] as? Int,
       let tab0RangeString = globalDict ["range"] as? String {
      DispatchQueue.main.async {
        self.mTabArray [0].setSelectedRange (NSRangeFromString (tab0RangeString))
        if let str = globalDict ["windowRect"] as? String {
          let r = NSRectFromString (str)
          self.setFrame (r, display: true, animate: false)
        }
      }
      for tabDict in tabFilePathArray {
        if let filePath = tabDict ["file"], let rangeString = tabDict ["range"] {
          NSDocumentController.shared.openDocument (withContentsOf: URL (fileURLWithPath: filePath), display: false) { (inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
            if let document = inOptionalDocument as? SWIFT_SingleDocument {
              DispatchQueue.main.async {
                self.appendTab (document: document, selectedRange: NSRangeFromString (rangeString))
              }
            }
          }
        }
      }
      DispatchQueue.main.async {
        if selectedTabIndex >= 0, selectedTabIndex < self.mTabArray.count {
          self.selectTab (atIndex: selectedTabIndex)
        }
      }
    }
    self.mSetUpDone = true
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: AutoLayoutTableViewDelegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tableViewDelegate_selectionDidChange (selectedRows inSelectedRows: IndexSet) {
    if inSelectedRows.count == 1, let idx = inSelectedRows.first {
      self.selectTab (atIndex: idx)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tableViewDelegate_indexesOfSelectedObjects () -> IndexSet {
    return .init ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tableViewDelegate_addEntry () {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tableViewDelegate_removeSelectedEntries () {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tableViewDelegate_beginSorting () {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tableViewDelegate_endSorting () {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Cette fonction est appelée par SWIFT_SingleDocument quand l'état d'édition d'un document a changé
  //MARK: Document Edition State Did Change
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  class func documentEditionStateDidChange () {
    for w in NSApp.windows {
      if let window = w as? SWIFT_SingleWindow {
        DispatchQueue.main.async {
    // §      window.mTabListView.sortAndReloadData ()
          window.editionStateDidChange ()
          window.updateUserDefaults ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func editionStateDidChange () {
    var documentIsEdited = false
    for descriptor in self.mTabArray {
      if descriptor.mDocument.isDocumentEdited {
        documentIsEdited = true
      }
    }
    self.isDocumentEdited = documentIsEdited
    self.updateWindowTitle ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectedRangeDidChange (forDocument inDocument : SWIFT_SingleDocument) {
    self.updateUserDefaults ()
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func buildAction (_ inUnusedSender : Any?) {
    SWIFT_DocumentController.mySaveAllDocuments ()
    self.mResultData.removeAll (keepingCapacity: true)
    _ = self.mBuildButton.set (enabled: false)
    self.mProgressIndicator.startAnimation ()
    self.mAbortButton.setHidden (false)
    self.mIssueArray.removeAll (keepingCapacity: true)
    self.mBuildLogTextViewRuler.setIssueArray ([])
    for document in SWIFT_DocumentController.myDocuments () {
      document.removeAllIssues ()
    }
    self.mBuildLogTextView.clear ()
    _ = self.mBuildLogTextView.setFont (self.mBuildWindowFont.propval)
    self.mInspectorTabView.selectTab (atIndex: 1)
    self.mCurrentBuildOutputColor = .black
    self.mBuildHasBeenAborted = false
    self.mWarningCount = 0
    self.mErrorCount = 0
    self.mWarningCountTextField.setHidden (true)
    self.mErrorCountTextField.setHidden (true)
 //--- Create task
    let process = Process ()
    self.mProcess = process
  //--- Command and arguments
    let (command, arguments) = commandLineForBuildProcess ()
    process.executableURL = URL (fileURLWithPath: command)
    let sourceFile = self.mTabArray [0].fileURL!.path
    process.arguments = arguments + [sourceFile, "--swift-app-json-output"]
  //--- Set standard output notification
    let pipe = Pipe ()
    self.mProcessOutputPipe = pipe
    process.standardOutput = pipe
    process.standardError = pipe
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (Self.getDataFromTaskOutput(_:)),
      name: FileHandle.readCompletionNotification,
      object: pipe.fileHandleForReading
    )
    pipe.fileHandleForReading.readInBackgroundAndNotify ()
  //---
    NotificationCenter.default.addObserver (
      self,
      selector: #selector (Self.taskDidTerminate (_:)),
      name: Process.didTerminateNotification,
      object: process
    )
  //--- Start process
    process.launch ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func getDataFromTaskOutput (_ inNotification : NSNotification) {
    if let dictionary = inNotification.userInfo as? [String : Any],
       let data = dictionary [NSFileHandleNotificationDataItem] as? Data,
       let fileHandle = inNotification.object as? FileHandle {
      if !data.isEmpty {
        self.appendBuildOutputData (data)
        fileHandle.readInBackgroundAndNotify ()
      }else{
        NotificationCenter.default.removeObserver (
          self,
          name: FileHandle.readCompletionNotification,
          object: self.mProcessOutputPipe?.fileHandleForReading
        )
        self.mProcessOutputPipe?.fileHandleForReading.closeFile ()
        self.mProcessOutputPipe = nil
        if self.mBuildHasBeenAborted {
          self.mBuildLogTextView.appendErrorString ("Aborted.")
        }else{
          self.mBuildLogTextView.appendSuccessString ("Done.")
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func taskDidTerminate (_ inNotification : NSNotification) {
    if let process = self.mProcess {
      NotificationCenter.default.removeObserver (
        self,
        name: Process.didTerminateNotification,
        object: process
      )
      self.mProcess = nil
    }
//    self.mBuildButton.setHidden (false)
    _ = self.mBuildButton.set (enabled: true)
    self.mAbortButton.setHidden (true)
    self.mProgressIndicator.stopAnimation ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func abortBuildAction () {
    self.mBuildHasBeenAborted = true
    self.mProcess?.terminate ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendBuildOutputData (_ inData : Data) {
    self.mResultData.append (inData)
    var loop = true
    while loop {
    //--- Look for first line feed
      let endIndex = self.mResultData.endIndex
      var idx = self.mResultData.startIndex
      var ok = false
      while !ok, idx < endIndex {
        ok = self.mResultData [idx] == ASCII.lineFeed.rawValue
        idx += 1
      }
      if !ok {
        loop = false
      }else{
        let data = self.mResultData [self.mResultData.startIndex ..< idx]
        self.processBuildOutputString (data)
        self.mResultData.removeSubrange (self.mResultData.startIndex ..< idx)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mBuildOutputCurrentColor = NSColor.black
  private var mBuildOutputIsBold = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func processBuildOutputString (_ inData : Data) {
    if let string = String (data: inData, encoding: .utf8) {
      if string.hasPrefix ("red:") {
        let str = String (string.dropFirst ("red:".count))
        self.mBuildLogTextView.appendMessageString (str, color: .systemRed, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("green:") {
        let str = String (string.dropFirst ("green:".count))
        self.mBuildLogTextView.appendMessageString (str, color: NSColor (calibratedRed: 0.0, green: 0.5, blue: 0.0, alpha: 1.0), bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("magenta:") {
        let str = String (string.dropFirst ("magenta:".count))
        self.mBuildLogTextView.appendMessageString (str, color: .magenta, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("orange:") {
        let str = String (string.dropFirst ("orange:".count))
        self.mBuildLogTextView.appendMessageString (str, color: .systemOrange, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("blue:") {
        let str = String (string.dropFirst ("blue:".count))
        self.mBuildLogTextView.appendMessageString (str, color: .systemBlue, bold: self.mBuildOutputIsBold)
      }else if string.hasPrefix ("json:") {
        let str = String (string.dropFirst ("json:".count))
        let locationInBuildTextView = (self.mBuildLogTextView.string as NSString).length
        self.appendIssue (jsonString: str, locationInBuildTextView)
      }else{
        var str = string
        var displayString = ""
        var loop = true
        while loop {
          if str.hasPrefix ("\u{1B}[") {
            self.mBuildLogTextView.appendMessageString (displayString, color: self.mBuildOutputCurrentColor, bold: self.mBuildOutputIsBold)
            displayString = ""
            str = String (str.dropFirst ("\u{1B}[".count))
            if str.hasPrefix ("30m") {
              str = String (str.dropFirst ("30m".count))
              self.mBuildOutputCurrentColor = .black
            }else if str.hasPrefix ("31m") {
              str = String (str.dropFirst ("31m".count))
              self.mBuildOutputCurrentColor = .systemRed
            }else if str.hasPrefix ("32m") {
              str = String (str.dropFirst ("32m".count))
              self.mBuildOutputCurrentColor = .systemGreen
            }else if str.hasPrefix ("33m") {
              str = String (str.dropFirst ("33m".count))
              self.mBuildOutputCurrentColor = .systemYellow
            }else if str.hasPrefix ("34m") {
              str = String (str.dropFirst ("34m".count))
              self.mBuildOutputCurrentColor = .systemBlue
            }else if str.hasPrefix ("35m") {
              str = String (str.dropFirst ("35m".count))
              self.mBuildOutputCurrentColor = .magenta
            }else if str.hasPrefix ("36m") {
              str = String (str.dropFirst ("36m".count))
              self.mBuildOutputCurrentColor = .cyan
            }else if str.hasPrefix ("0m") {
              str = String (str.dropFirst ("0m".count))
              self.mBuildOutputCurrentColor = .black
              self.mBuildOutputIsBold = false
            }else if str.hasPrefix ("1m") {
              str = String (str.dropFirst ("1m".count))
              self.mBuildOutputIsBold = true
            }else{
              self.mBuildOutputCurrentColor = .black
            }
          }else if !str.isEmpty {
            let c = str.removeFirst ()
            displayString.append (c)
          }else{
            loop = false
          }
        }
        self.mBuildLogTextView.appendMessageString (displayString, color: self.mBuildOutputCurrentColor, bold: self.mBuildOutputIsBold)
      }
    }else{
      self.mBuildLogTextView.appendMessageString ("<<invalid output>>\n", color: self.mCurrentBuildOutputColor, bold: true)
    }
    self.mBuildLogTextView.scrollToEndOfText ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func appendIssue (jsonString inString : String,
                            _ inLocationInBuildLogTextView : Int) {
    if let issue = SWIFT_Issue (jsonString: inString, inLocationInBuildLogTextView) {
      self.mBuildLogTextView.appendMessageString (
        "\(issue.fileURL.path):\(issue.line):\(issue.startColumn)\n",
        color: issue.color,
        bold: true
     )
      for str in issue.messageArray {
        self.mBuildLogTextView.appendMessageString (str + "\n", color: issue.color, bold: true)
      }
      for fixit in issue.fixitArray {
        self.mBuildLogTextView.appendMessageString ("  " + fixit.messageString + "\n", color: .systemBrown, bold: false)
      }
    //--- Note issue on user interface
      self.mIssueArray.append (issue)
      for document in SWIFT_DocumentController.myDocuments () {
        document.appendIssue (issue)
      }
      self.mBuildLogTextViewRuler.setIssueArray (self.mIssueArray)
      switch issue.kind {
      case .warning :
        self.mWarningCount += 1
        self.mWarningCountTextField.stringValue = "⚠\(self.mWarningCount)"
        self.mWarningCountTextField.setHidden (false)
      case .error :
        self.mErrorCount += 1
        self.mErrorCountTextField.stringValue = "⚠\(self.mErrorCount)"
        self.mErrorCountTextField.setHidden (false)
      }
    }else{
      self.mBuildLogTextView.appendMessageString ("<<invalid \(inString)>>\n", color: .systemRed, bold: true)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate extension NSPasteboard.PasteboardType {
  static let myPasteboardEntry = NSPasteboard.PasteboardType ("name.pcmolinaro.myEntry")
}

//--------------------------------------------------------------------------------------------------
// Attention, les types des propriétés doivent être acceptés dans une property list
//--------------------------------------------------------------------------------------------------

fileprivate final class FileEntryPasteboard : NSObject, NSPasteboardWriting, NSPasteboardReading {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Implémentation du protocole NSPasteboardWriting (pour le drag source)
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    let path : String // Pas URL, non accepté dans une property list
    let index : Int

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (path : String, index : Int) {
    self.path = path
    self.index = index
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func writableTypes (for pasteboard: NSPasteboard) -> [NSPasteboard.PasteboardType] {
    return [.myPasteboardEntry]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func pasteboardPropertyList (forType type: NSPasteboard.PasteboardType) -> Any? {
    let dictionary : NSDictionary = [
      "path" : self.path,
      "idx" : self.index
    ]
    return try? PropertyListSerialization.data (fromPropertyList: dictionary, format: .binary, options: 0)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Implémentation du protocole NSPasteboardReading (pour le drag destination)
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init? (pasteboardPropertyList inPropertyList : Any, ofType inType: NSPasteboard.PasteboardType) {
    if let data = inPropertyList as? Data,
       let dictionary = try? PropertyListSerialization.propertyList (from: data, options: [], format: nil) as? NSDictionary,
       let p = dictionary ["path"] as? String,
       let idx = dictionary ["idx"] as? Int {
      self.path = p
      self.index = idx
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static func readableTypes (for pasteboard: NSPasteboard) -> [NSPasteboard.PasteboardType] {
    return [.myPasteboardEntry]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
