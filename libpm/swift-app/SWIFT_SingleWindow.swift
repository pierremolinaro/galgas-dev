//
//  Created by Pierre Molinaro on 04/11/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

class SWIFT_SingleWindow : NSWindow, NSWindowDelegate, AutoLayoutTableViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var mTabArray = [SWIFT_DisplayDescriptor] ()
  private var mSelectedTabIndex = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   https://www.hackingwithswift.com/example-code/system/how-to-run-an-external-program-using-process
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  var mProcess : Process? = nil
//  var mProcessOutputPipe : Pipe? = nil
//  var mResultData = Data ()
//  let mBuildButton = AutoLayoutButton (title: "Build", size: .regular)
//  let mAbortButton = AutoLayoutButton (title: "Stop", size: .regular)
//  var mBuildOutputAttributeDictionary : [NSAttributedString.Key : Any]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   VIEWS
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mSourceEditionView = AutoLayoutVerticalStackView ().set (margins: .zero)

  private let mHorizontalSplitView = AutoLayoutHorizontalSplitView ()

  private let mTabListView = AutoLayoutTableView (size: .regular, minWidth: 250, addControlButtons: false)

  private var mBuildTextFontObserver : EBSimpleObserver? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (withDocument inDocument : SWIFT_SingleDocument) {
//    self.mBuildOutputAttributeDictionary = [.font : gBuildWindowFont.propval]
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
    self.configureTabListView (withDocument: inDocument)
    _ = self.mHorizontalSplitView
      .appendView (self.mTabListView)
      .appendView (self.mSourceEditionView)
    self.setRootView (self.mHorizontalSplitView)
  //---
    self.appendTab (document: inDocument, selectedRange: NSRange ())
  //--- Open other tabs ?
    self.openTabsFromUserDefaults (forDocument:  inDocument)
  //--- Select first tab
    self.selectTab (atIndex: 0)
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
        if let n = self?.mTabArray.count, n > 1 {
          return NSImage (named: NSImage.stopProgressTemplateName) ?? NSImage ()
        }else{
          return nil
        }
      },
      actionDelegate: { [weak self] in self?.closeTab (atIndex: $0) },
      title: "",
      minWidth: 30,
      maxWidth: 30,
      headerAlignment: .center,
      contentAlignment: .right
    )
//    self.mTabListView.set (
//      draggedTypes: [NSPasteboard.PasteboardType.URL, .myEntry],
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
  //--- Simple observer for setting build text font
//    self.mBuildTextFontObserver = EBSimpleObserver (object: gBuildWindowFont) {
//      [weak self] in _ = self?.mBuildOutputTextObserviewView.set (font: gBuildWindowFont.propval)
//    }
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
    DispatchQueue.main.async {
      self.mTabArray.removeAll ()
      SWIFT_DocumentController.closeUnreferencedDocuments ()
    }
    super.close ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Open from selection
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func openFromSelection (_ inUnusedSender : Any?) {
    let displayDescriptor : SWIFT_DisplayDescriptor = self.mTabArray [self.mSelectedTabIndex]
    if let p = displayDescriptor.pathFromSelection (), let fileURL = displayDescriptor.fileURL {
      let url = fileURL.deletingLastPathComponent ().appendingPathComponent (p)
      let dc = NSDocumentController.shared
      dc.openDocument (withContentsOf: url, display: false) { (_ inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
        if let document = inOptionalDocument as? SWIFT_SingleDocument {
          self.appendTabUpdatingUserDefaults (document: document, selectedRange: NSRange ())
        }
      }
    }else{
      NSSound.beep ()
    }
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
    if (inIndex >= 0) && (inIndex < self.mTabArray.count) {
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
   // Swift.print ("closeTab \(inIndex)")
    if (inIndex >= 0) && (inIndex < self.mTabArray.count) {
    //--- Supprimer l'entrée
      self.mTabArray.remove (at: inIndex)
    //--- Fermer les documents qui ne sont plus visibles (en fait, un seul peut être
    //    fermé, celui dont on vient de supprimer l'entrée, si il n'est pas référencé ailleurs)
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

  private func openFilesInNewTabs (_ inURLs : [URL], at inIndex : Int) {
    var idx = inIndex
    for url in inURLs {
      let dc = NSDocumentController.shared
      dc.openDocument (withContentsOf: url, display: false) { (inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
        if let document = inOptionalDocument as? SWIFT_SingleDocument {
          self.insertTab (document: document, at: idx)
          self.selectTab (atIndex: idx)
          idx += 1
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Actions
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
        self.openFilesInNewTabs (urls, at: self.mTabArray.count)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Utilities
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateWindowTitle () {
    var s = self.mTabArray [self.mSelectedTabIndex].lastComponentOfFileName
    if self.mTabArray.count > 1 {
      s += " — " + self.mTabArray [self.mSelectedTabIndex].lastComponentOfFileName
    }
    if self.isDocumentEdited {
      s += " ●"
    }
    self.title = s
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
//      Swift.print ("WRITE DEFAULT")
      var array = [[String : String]] ()
      for tab in self.mTabArray {
        var dict = [String : String] ()
        dict ["file"] = tab.fileURL!.path
        dict ["range"] = NSStringFromRange (tab.selectedRange)
//        Swift.print (dict)
        array.append (dict)
      }
      array.removeFirst ()
      UserDefaults.standard.set (array, forKey: self.userDefaultKey)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func openTabsFromUserDefaults (forDocument inDocument : SWIFT_SingleDocument) {
    if let tabFilePathArray = UserDefaults.standard.object (forKey: self.userDefaultKey) as? [[String : String]] {
      for tabDict in tabFilePathArray {
        if let filePath = tabDict ["file"], let rangeString = tabDict ["range"] {
          NSDocumentController.shared.openDocument (withContentsOf: URL (fileURLWithPath: filePath), display: false) { (inOptionalDocument : NSDocument?, _ : Bool, _ : Error?) in
            if let document = inOptionalDocument as? SWIFT_SingleDocument {
              self.appendTab (document: document, selectedRange: NSRangeFromString (rangeString))
            }
          }
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
          window.mTabListView.sortAndReloadData ()
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

}

//--------------------------------------------------------------------------------------------------

extension NSPasteboard.PasteboardType {
  static let myEntry = NSPasteboard.PasteboardType ("name.pcmolinaro.myEntry")
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
    return [.myEntry]
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

  static func readableTypes(for pasteboard: NSPasteboard) -> [NSPasteboard.PasteboardType] {
    return [.myEntry]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
