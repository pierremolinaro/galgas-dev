//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSourceTextPresentationView : AutoLayoutVerticalStackView, BaseTextViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mEntryPopUpButton = AutoLayoutPopUpButton (size: .regular)
  private let mRevealInFinderPullDownButton = AutoLayoutPullDownButton (title: "Reveal in Finder", size: .small)
  private let mSourceTextView : BaseTextView
  var sourceTextView : BaseTextView { return self.mSourceTextView }
  private var mDisplayChangeObserver : EBSimpleObserver? = nil
  private weak var mDocument : SWIFT_SingleDocument? = nil // SHOULD BE WEAK

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (withDocument inDocument : SWIFT_SingleDocument) {
    self.mSourceTextView = BaseTextView (
      drawsBackground: false,
      editable: true,
      textStorage: inDocument.mTextStorage,
      horizontalScroller: true,
      verticalScroller: true,
      minWidth: 500,
      minHeight: 400
    )
    .setUsesFindBar ()
    self.mSourceTextView.mCocoaTextView.useAllLigatures (nil)
    self.mSourceTextView.mCocoaTextView.isAutomaticQuoteSubstitutionEnabled = false
    self.mSourceTextView.mCocoaTextView.smartInsertDeleteEnabled = false
    self.mSourceTextView.mCocoaTextView.isAutomaticDashSubstitutionEnabled = false
    self.mSourceTextView.mCocoaTextView.layoutManager?.allowsNonContiguousLayout = false
    self.mSourceTextView.mCocoaTextView.layoutManager?.usesFontLeading = true
    self.mSourceTextView.mCocoaTextView.layoutManager?.backgroundLayoutEnabled = false
    self.mSourceTextView.mCocoaTextView.isRichText = false
    self.mSourceTextView.mCocoaTextView.importsGraphics = false
    self.mSourceTextView.mCocoaTextView.allowsImageEditing = false
//    self.mSourceTextView.mCocoaTextView.layoutManager?.usesScreenFonts = true
    self.mSourceTextView.mCocoaTextView.layoutManager?.showsControlCharacters = true
//    self.mSourceTextView.mCocoaTextView.layoutManager.showsInvisibleCharacters = true
    self.mSourceTextView.mCocoaTextView.isAutomaticTextReplacementEnabled = false
    super.init ()
    self.mDocument = inDocument
    self.mSourceTextView.setTextViewDelegate (self) // BaseTextViewDelegate
  //--- Set custom ruler view to scrollview
    self.mSourceTextView.createVerticalRulerView { SWIFT_TextViewRulerView (scrollView: $0, document: inDocument) }
  //--- Configure top h stack
    let topHStack = AutoLayoutHorizontalStackView ()
      .set (margins: .zero)
      .set (topMargin: .regular)
      .appendView (self.mRevealInFinderPullDownButton)
      .appendView (self.mEntryPopUpButton)
      .appendFlexibleSpace ()
  //--- Configure Text View
    self.mSourceTextView.setUndoManager (inDocument.mUndoManager)
    self.mSourceTextView.setTextViewDidChangeSelectionAction { [weak self] in
      self?.selectPopUpItemFollowingTextSelection ()
      self?.mSourceTextView.textViewNeedsDisplay ()
    }

    _ = self.set (margins: .zero)
      .appendView (topHStack)
      .appendView (self.mSourceTextView)
  //--- Ajouter un observateur pour être averti des changements de style
    DispatchQueue.main.async {
      let observedObjects : [EBObservedObject] = [gEditorBackgroundColor, gPageGuideColumn, gShowPageGuide]
      self.mDisplayChangeObserver = EBSimpleObserver (objects: observedObjects) { [weak self] in
        self?.mSourceTextView.triggerDisplay ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func makeFirstResponder (of inWindow : NSWindow) {
    inWindow.makeFirstResponder (self.mSourceTextView.cocoaView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var selectedRange : NSRange { self.mSourceTextView.selectedRange }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var selectedString : String {
    let str = self.mSourceTextView.string as NSString
    let range = self.mSourceTextView.selectedRange
    return str.substring (with: range)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  populateRevealInFinderPullDownButton
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func populateRevealInFinderPullDownButton (with inPathComponents : [String]?) {
    self.mRevealInFinderPullDownButton.removeAllItems ()
    if var array = inPathComponents {
      if array.count > 0 {
        array.removeFirst () // First is '/'
      }
      if array.count > 0 {
        array.removeLast () // Last is file name
      }
      var title = ""
      for pathComponent in array {
        title += "/" + pathComponent
        _ = self.mRevealInFinderPullDownButton.appendItem (
          title: title,
          menuItemActionTarget: self,
          menuItemActionSelector: #selector (Self.revealInFinder (_:)),
          represendedObject: title
        )
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func revealInFinder (_ inSender : Any?) {
    if let menuItem = inSender as? NSMenuItem,
       let path = menuItem.representedObject as? String {
      NSWorkspace.shared.open (URL (fileURLWithPath: path))
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  Entry pop up button
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func populateEntryPopUpButton (with inItems : [(NSAttributedString, Int)]) {
    self.mEntryPopUpButton.removeAllItems ()
    for (title, location) in inItems {
      _ = self.mEntryPopUpButton.appendItem (
        attributedTitle: title,
        menuItemActionTarget: self,
        menuItemActionSelector: #selector (Self.gotoPopUpButtonSelectedEntry (_:)),
        represendedObject: location
      )
    }
    _ = self.mEntryPopUpButton.set (enabled: inItems.count > 0)
    self.selectPopUpItemFollowingTextSelection ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func gotoPopUpButtonSelectedEntry (_ inSender : Any?) {
    if let menu = inSender as? NSMenuItem,
       let location = menu.representedObject as? Int,
       location >= 0,
       let ts = self.mSourceTextView.textStorage,
       location < ts.length {
      let range = NSRange (location: location, length: 0)
      self.mSourceTextView.setSelectedRange (range)
      self.mSourceTextView.scrollRangeToVisible (range)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func selectPopUpItemFollowingTextSelection () {
    let selectedLocation = self.mSourceTextView.selectedRange.location
    var optionalSelectedMenuItem : NSMenuItem? = self.mEntryPopUpButton.itemArray.first
    for menuItem in self.mEntryPopUpButton.itemArray {
      if let location = menuItem.representedObject as? Int, location <= selectedLocation {
        optionalSelectedMenuItem = menuItem
      }
    }
    self.mEntryPopUpButton.select (optionalSelectedMenuItem)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setSelectedRange (_ inRange : NSRange) {
    self.mSourceTextView.setSelectedRange (inRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func scrollToSelectedRange () {
    self.mSourceTextView.scrollRangeToVisible (self.mSourceTextView.selectedRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectedRangeDidChange (_ inSelectedRange : NSRange,
                               _ inCocoaTextWiew : InternalCocoaTextView) {
    self.mDocument?.selectedRangeDidChange ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func textViewNeedsDisplay () {
    self.mSourceTextView.textViewNeedsDisplay ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK:   BaseTextViewDelegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func willDrawTextView (_ inDirtyRect : NSRect, _ inCocoaTextWiew : InternalCocoaTextView) {
  //--- Draw page guide
    if gShowPageGuide.propval,
       let textAttributes = self.mDocument?.mTokenizer?.attributes (fromStyleIndex: 0),
       let textFont = textAttributes [.font] as? NSFont {
      let pageGuideColumn = gPageGuideColumn.propval
      let spaceWidth = textFont.maximumAdvancement.width
      let linePadding = inCocoaTextWiew.textContainer?.lineFragmentPadding ?? 0.0
      let column = ceil (spaceWidth * Double (pageGuideColumn) + linePadding + inCocoaTextWiew.textContainerInset.width)
      let pageRect = NSRect (x: 0.0, y: 0.0, width: column, height: NSMaxY (inCocoaTextWiew.frame))
      let pageRectToDraw = inDirtyRect.intersection (pageRect)
      if !pageRectToDraw.isEmpty {
        gEditorBackgroundColor.propval.setFill ()
        NSBezierPath.fill (pageRectToDraw)
      }
      let bp = NSBezierPath ()
      bp.move (to: NSPoint (x: column, y: NSMinY (inDirtyRect)))
      bp.line (to: NSPoint (x: column, y: NSMaxY (inDirtyRect)))
      bp.lineWidth = 0.0
      bp.lineCapStyle = .round
      NSColor.windowFrameColor.setStroke ()
      bp.stroke ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func didDrawTextView (_ inDirtyRect : NSRect, _ inCocoaTextWiew : InternalCocoaTextView) {
    if let layoutManager = inCocoaTextWiew.layoutManager,
       let ruler = self.mSourceTextView.verticalRuler as? SWIFT_TextViewRulerView,
       let issueArray = ruler.mDocument?.mIssueArray {
     //-------- Note: ruler view and text view are both flipped
      for issue in issueArray {
        if issue.mIsValid {
          let lineFragmentRect = layoutManager.lineFragmentRect (
            forGlyphAt: layoutManager.glyphIndexForCharacter (at: issue.range.location),
            effectiveRange: nil
          )
          let p1 = layoutManager.location (forGlyphAt: layoutManager.glyphIndexForCharacter (at: issue.range.location))
          let p2 = layoutManager.location (forGlyphAt: layoutManager.glyphIndexForCharacter (at: issue.range.location + issue.range.length + 1))
          let bp = NSBezierPath ()
          bp.move (to: NSPoint (x: lineFragmentRect.origin.x + p1.x, y: lineFragmentRect.maxY))
          bp.line (to: NSPoint (x: lineFragmentRect.origin.x + p2.x, y: lineFragmentRect.maxY))
          bp.lineWidth = 3.0
          bp.lineCapStyle = .round
          issue.color.setStroke ()
          bp.stroke ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectionRange (forProposedRange inProposedSelRange : NSRange,
                       granularity inGranularity : NSSelectionGranularity,
                       _ inCocoaTextWiew : InternalCocoaTextView) -> NSRange? {
    var result : NSRange? = nil
    if inGranularity == .selectByWord {
      let tokenArray = self.mDocument?.mTokenRangeArray ?? []
      var found = false
      var idx = 0
      while idx < tokenArray.count, !found {
        let token = tokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelRange.location) && (tokenRange.location <= inProposedSelRange.location)
        if (found) {
          if let atomic = self.mDocument?.mTokenizer?.atomicSelectionFor (token: token.tokenCode), atomic {
            result = tokenRange
          }else if let modifierFlags = NSApp.currentEvent?.modifierFlags, modifierFlags.contains (.option) {
            result = tokenRange
          }
        }
      }
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func didDrawVerticalScroller (_ inDirtyRect : NSRect,
                                _ inCocoaScroller : InternalVerticalScroller) {
    let cocoaTextView = self.sourceTextView.mCocoaTextView
    if let layoutManager = cocoaTextView.layoutManager,
       let issueArray = self.mDocument?.mIssueArray {
      for issue in issueArray {
        if issue.mIsValid {
          let lineFragmentRect = layoutManager.lineFragmentRect (
            forGlyphAt: layoutManager.glyphIndexForCharacter (at: issue.range.location),
            effectiveRange: nil
          )
          let bp = NSBezierPath ()
          let textViewBounds = cocoaTextView.bounds
          let scrollerBounds = inCocoaScroller.bounds
          let y = lineFragmentRect.midY * scrollerBounds.height / textViewBounds.height
          bp.move (to: NSPoint (x: scrollerBounds.minX, y: y))
          bp.line (to: NSPoint (x: scrollerBounds.maxX, y: y))
          bp.lineWidth = 1.0
          bp.lineCapStyle = .round
          issue.color.setStroke ()
          bp.stroke ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Tab, without shift, empty selection
  //        - insert spaces to align
  // Tab, without shift, non empty selection on one line
  //        - suppress selection, insert spaces to align
  // Tab, without shift, non empty selection on several lines
  //        - insert spaces at the beginning of every line to align
  // Tab, with shift
  //        - remove spaces at the beginning of every line
  //
  // Theses functions call NSTextView.insertText, it handles automatically undo and syntax coloring
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func keyDown (with inEvent : NSEvent,
                _ inCocoaTextWiew : InternalCocoaTextView,
                callSuperOnReturn outCallSuperOnReturn : inout Bool) {
    if let keys = inEvent.characters, let char = keys.first {
      let nsString = inCocoaTextWiew.string as NSString
      let alignment = gSpacesForHTab.propval
      if char == "\t", alignment > 0 { // A Tab Character, without shift ?
        outCallSuperOnReturn = false
        let selectedRange = inCocoaTextWiew.selectedRange
        let selectedString = nsString.substring (with: selectedRange)
        if selectedString.contains ("\n") {
          self.shiftRightRange (inCocoaTextWiew)
        }else{
          var spacesToInsert = alignment - selectedRange.location % alignment
          var characterAfterSelection = selectedRange.location + selectedRange.length
          while spacesToInsert > 0,
                characterAfterSelection < nsString.length,
                nsString.character (at: characterAfterSelection) == 32 { // ASCII space
            characterAfterSelection += 1
            spacesToInsert -= 1
          }
          if spacesToInsert == 0 {
            spacesToInsert = alignment
          }
          inCocoaTextWiew.insertText (
            String (repeating: " ", count: spacesToInsert),
            replacementRange: selectedRange
          )
        }
      }else if char == "\u{19}", alignment > 0 { // A Tab Character, with shift ?
        outCallSuperOnReturn = false
        self.shiftLeftRange (inCocoaTextWiew)
      }else if char == "\r", let textStorage = inCocoaTextWiew.textStorage { // A Carriage Return Character ?
        outCallSuperOnReturn = false
        let selectedRange = inCocoaTextWiew.selectedRange
        let s = textStorage.string as NSString
        var currentLineRange = s.lineRange (for: selectedRange)
      //--- Find the number of spaces at the beginning of the line
        if currentLineRange.length > (selectedRange.location - currentLineRange.location) {
          currentLineRange.length = selectedRange.location - currentLineRange.location ;
        }
      //--- Insert string
        var stringToInsert = "\n"
        while currentLineRange.length > 0, s.character (at: currentLineRange.location) == 32 {
          currentLineRange.location += 1
          currentLineRange.length -= 1
          stringToInsert += " "
        }
        inCocoaTextWiew.insertText (stringToInsert, replacementRange: selectedRange)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func mouseDown (with inEvent : NSEvent,
                  _ inCocoaTextWiew : InternalCocoaTextView,
                  callSuperOnReturn outCallSuperOnReturn : inout Bool) {
    if inEvent.modifierFlags.contains (.command) {
    //--- Select range
      let local_point = inCocoaTextWiew.convert (inEvent.locationInWindow, from: nil)
      let characterIndex = inCocoaTextWiew.characterIndexForInsertion (at: local_point)
      let selectedRange = NSRange (location: characterIndex, length: 0)
      let r = inCocoaTextWiew.selectionRange (forProposedRange: selectedRange, granularity: .selectByWord)
      inCocoaTextWiew.setSelectedRange (r)
      let menu = NSMenu (title: "")
      menu.autoenablesItems = false
    //--- Add issues
      for issue in self.mDocument?.mIssueArray ?? [] {
        if NSIntersectionRange (issue.range, r).length != NSNotFound {
          issue.storeItemsToMenu (menu, inCocoaTextWiew, r)
        }
      }
    //--- Source indexing
      self.appendToIndexingMenu (menu, r)
    //--- Display menu
      menu.font = NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
      menu.allowsContextMenuPlugIns = false
      NSMenu.popUpContextMenu (menu, with: inEvent, for: inCocoaTextWiew)
      outCallSuperOnReturn = false
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func appendToIndexingMenu (_ inMenu : NSMenu, _ inSelectedRange : NSRange) {
    let titleAttributes : [NSAttributedString.Key : Any] = [
      .font : NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
    ]
  //--- Indexing dictionary
    let dictionaryArray = self.buildIndexingDictionaryArray ()
    let tokenString = (self.mSourceTextView.string as NSString).substring (with: inSelectedRange)
  //--- Build array of all references of given token
    var allReferences = [String] ()
    for currentIndexDictionary in dictionaryArray {
      if let references = currentIndexDictionary [tokenString] {
        allReferences += references
      }
    }
  //--- Build dictionary for the given token, organized by Kind
    var kindDictionary = [Int : [String]] ()
    for descriptor in allReferences {
      let components = descriptor.components (separatedBy: ":")
      if let kind = Int (components [0]) {
        kindDictionary [kind] = kindDictionary [kind, default: []] + [descriptor]
      }
    }
  //--- Build Menu
//    if (! hasAtomicSelection) {
//      NSMenuItem * item = [inMenu addItemWithTitle:@"Select all token characters" action:@selector (selectAllTokenCharacters:) keyEquivalent:@""] ;
//      [item setTarget:inTextDisplayDescriptor.textView] ;
//      [item setRepresentedObject:[NSValue valueWithRange:inSelectedRange]] ;
//    }
  //---
    inMenu.addItem (.separator ())
    if kindDictionary.isEmpty {
      let title = "No index for '\(tokenString)'"
      inMenu.addItem (withTitle: title, action: nil, keyEquivalent: "")
    }else if let indexingTitles = self.mDocument?.mTokenizer?.indexingTitles () {
      for kindIndex in kindDictionary.keys.sorted () {
        if kindIndex >= 0, kindIndex < indexingTitles.count {
          let str = NSAttributedString (string: indexingTitles [kindIndex], attributes: titleAttributes)
          inMenu.addItem (withTitle: "", action: nil, keyEquivalent: "")
          inMenu.items.last?.attributedTitle = str
          for reference in kindDictionary [kindIndex]! {
            let components = reference.split (separator: ":")
            let line = components [1]
            let file = components [4].description.lastPathComponent
            inMenu.addItem (
              withTitle: "  " + file + ", line" + line,
              action: #selector (Self.indexingMenuAction (_:)),
              keyEquivalent: ""
            )
            inMenu.items.last?.target = self
            inMenu.items.last?.representedObject = reference
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc fileprivate func indexingMenuAction (_ inMenuItem : NSMenuItem) {
    if let str = inMenuItem.representedObject as? String {
      let components = str.split (separator: ":")
      let locationIndexStr = components [2]
      let lengthStr = components [3]
      let file = String (components [4])
      if let locationIndex = Int (locationIndexStr),
       let length = Int (lengthStr),
       let window = self.mSourceTextView.window as? SWIFT_SingleWindow {
        window.findOrAddTab (
          forURL: URL (fileURLWithPath: file),
          range: NSRange (location: locationIndex, length: length),
          postAction: nil
        )
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func shiftRightRange (_ inCocoaTextWiew : InternalCocoaTextView) {
  //--- Space string
    let spaceStringLength = gSpacesForHTab.propval
    let spaceString = String (repeating: " ", count: spaceStringLength)
    let sourceString = inCocoaTextWiew.string as NSString
  //--- Line range contains all lines
    let lineRange = sourceString.lineRange (for: inCocoaTextWiew.selectedRange)
    let lineRangeString = sourceString.substring (with: lineRange)
    let lines = lineRangeString.split (separator: "\n")
    let indentedLines = lines.map { spaceString + $0 }
    let newLineRangeString = indentedLines.joined (separator: "\n") + "\n"
    inCocoaTextWiew.insertText (newLineRangeString, replacementRange: lineRange)
    inCocoaTextWiew.setSelectedRange (NSRange (location: lineRange.location, length: newLineRangeString.count - 1))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func shiftLeftRange (_ inCocoaTextWiew : InternalCocoaTextView) {
  //--- Block comment string
    let spaceStringLength = gSpacesForHTab.propval
    let spaceString = String (repeating: " ", count: spaceStringLength)
  //--- Get source string
    let sourceString = inCocoaTextWiew.string as NSString
  //--- Line range contains all lines
    let lineRange = sourceString.lineRange (for: inCocoaTextWiew.selectedRange)
    let lineRangeString = sourceString.substring (with: lineRange)
    let lines = lineRangeString.split (separator: "\n")
    let modifiedLines = lines.map {
      var result = $0
      if result.hasPrefix (spaceString) {
        result.removeFirst (spaceStringLength)
      }
      return result
    }
    let newLineRangeString = modifiedLines.joined (separator: "\n") + "\n"
    inCocoaTextWiew.insertText (newLineRangeString, replacementRange: lineRange)
    inCocoaTextWiew.setSelectedRange (NSRange (location: lineRange.location, length: newLineRangeString.count - 1))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Indexing dictionary
  // Every plist list is a dictionary: the key is the indexed to token; the
  // associated value is an NSArray of NSString that has the following format:
  //   "kind:line:locationIndex:length:sourceFileFullPath"
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor func buildIndexingDictionaryArray () -> [[String : [String]]] {
    let fm = FileManager ()
    var result = [[String : [String]]] ()
  //--- Save all sources
    NSDocumentController.shared.saveAllDocuments (nil)
  //--- Project file path directory
    let indexingDescriptors : [String : String] = indexingDescriptorDictionary ()
    var optProjectFilePath : String? = nil
    var optIndexingSuffix : String? = nil
    for document in SWIFT_DocumentController.myDocuments () {
      if let url = document.fileURL, let indexingSuffix = indexingDescriptors [url.path.pathExtension] {
        optProjectFilePath = url.path
        optIndexingSuffix = indexingSuffix
      }
    }
  //--- index directory
    if let projectFilePath = optProjectFilePath,
       let indexingSuffix = optIndexingSuffix,
       let appDelegate = NSApp.delegate as? SWIFT_AppDelegate {
      let projectFileDirectory = projectFilePath.deletingLastPathComponent
      let projectFileName = projectFilePath.lastPathComponent
      let projectFileNameModified = projectFileName.replacingOccurrences (of: ".", with: "-")
      let modifiedIndexingSuffix = indexingSuffix.replacingOccurrences (of: "*", with: projectFileNameModified)
      let indexingDirectory = projectFileDirectory + "/" + modifiedIndexingSuffix
      try? fm.createDirectory (
        atPath: indexingDirectory,
        withIntermediateDirectories: true,
        attributes: nil
      )
    //--- Handled extensions
      let handledExtensions = Set (SWIFT_DocumentController.supportedDocumentExtensions)
    //--- All files in source directory
      let compilerToolPath = appDelegate.compilerToolPath
      let relativePathes = try? fm.subpathsOfDirectory (atPath: projectFileDirectory)
      var availableDictionaryPathArray = [String] ()
      let opq = OperationQueue ()
      for relativeFilePath in relativePathes ?? [] {
        let fullFilePath = projectFileDirectory + "/" + relativeFilePath
        if handledExtensions.contains (fullFilePath.pathExtension) {
        //--- Index file path
          let indexFileFullPath = indexingDirectory + "/" + fullFilePath.lastPathComponent + ".plist"
        //--- Parse source file ?
          if !fm.fileExists (atPath: indexFileFullPath) { // Parse source file
            let op = IndexingOperation (
              path: fullFilePath,
              compilerToolPath: compilerToolPath,
              indexFileFullPath: indexFileFullPath
            )
            opq.addOperation (op)
            availableDictionaryPathArray.append (indexFileFullPath)
          }else if self.sourceFile (fullFilePath, newerThanFile: indexFileFullPath) {
            try? fm.removeItem (atPath: indexFileFullPath)
            let op = IndexingOperation (
              path: fullFilePath,
              compilerToolPath: compilerToolPath,
              indexFileFullPath: indexFileFullPath
            )
            opq.addOperation (op)
            availableDictionaryPathArray.append (indexFileFullPath)
          }else{
            availableDictionaryPathArray.append (indexFileFullPath)
          }
        }
      }
    //--- Wait operations are completed
      opq.waitUntilAllOperationsAreFinished ()
    //--- Parse available dictionaries
      for fullPath in availableDictionaryPathArray {
        if let dict = NSDictionary (contentsOfFile: fullPath) as? [String : [String]] {
          result.append (dict)
        }
      }
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func sourceFile (_ inFile1 : String,
                               newerThanFile inFile2 : String) -> Bool {
    let fm = FileManager ()
    var result = true
    if let file1_dictionary = try? fm.attributesOfItem (atPath: inFile1),
       let file1_modificationDate = file1_dictionary [.modificationDate] as? Date,
       let file2_dictionary = try? fm.attributesOfItem (atPath: inFile2),
       let file2_modificationDate = file2_dictionary [.modificationDate] as? Date {
      result = file1_modificationDate > file2_modificationDate
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class IndexingOperation : Operation, @unchecked Sendable {

  private let path : String
  private let compilerToolPath : String
  private let indexFileFullPath : String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (path inPath : String,
        compilerToolPath inCompilerToolPath : String,
        indexFileFullPath inIndexFileFullPath : String) {
    self.path = inPath
    self.compilerToolPath = inCompilerToolPath
    self.indexFileFullPath = inIndexFileFullPath
    super.init ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func main () {
  //--- Command line tool does actually exist ?
    if !self.compilerToolPath.isEmpty {
    //--- Build argument array
      var arguments = [String] ()
      arguments.append (self.path)
      arguments.append ("--mode=indexing:" + indexFileFullPath)
    //--- Create task
      let task = Process ()
      task.launchPath = self.compilerToolPath
      task.arguments = arguments
    //--- Start task
      task.launch ()
    //--- Wait the task is completed
      task.waitUntilExit ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
