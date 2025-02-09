//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSourceTextPresentationView : AutoLayoutVerticalStackView, BaseTextViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mEntryPopUpButton = AutoLayoutPopUpButton (size: .regular)
  private let mRevealInFinderPullDownButton = AutoLayoutPullDownButton (title: "Reveal in Finder", size: .small)
  private let mSourceTextView : BaseTextView
  var sourceTextView : BaseTextView { return self.mSourceTextView }
  private var mBackgroundObserver : EBSimpleObserver? = nil
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
  //--- Ajouter un observateur pour être averti du changement de la couleur de fond
    self.mBackgroundObserver = EBSimpleObserver (objects: [gEditorBackgroundColor, gPageGuideColumn, gShowPageGuide]) { [weak self] in
      self?.mSourceTextView.triggerDisplay ()
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

  func lineHeightDidChange () {
    self.mSourceTextView.textViewNeedsDisplay ()
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
                               _ inCocoaWiew : InternalCocoaTextView) {
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
//       let spaceWidth = (inCocoaTextWiew.layoutManager as? NSLayoutManager)?.spaceWidth,
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
                       _ inCocoaWiew : InternalCocoaTextView) -> NSRange {
    var result = inProposedSelRange
    if inGranularity == .selectByWord, inProposedSelRange.length != 0 {
      let tokenArray = self.mDocument?.mTokenRangeArray ?? []
      var found = false
      var idx = 0
      while idx < tokenArray.count, !found {
        let token = tokenArray [idx]
        idx += 1
        let range = token.range
        found = ((range.location + range.length) > inProposedSelRange.location) && (range.location <= inProposedSelRange.location)
        if (found) {
          if let atomic = self.mDocument?.mTokenizer?.atomicSelectionFor (token: token.tokenCode), atomic {
            result = range
          }else{
            let modifierFlags = NSApp.currentEvent?.modifierFlags ?? NSEvent.ModifierFlags ()
            let altAndCmdOn = modifierFlags.contains (.command) && modifierFlags.contains (.option)
            if altAndCmdOn {
              result = range
            }
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
                _ inCocoaWiew : InternalCocoaTextView,
                callSuperOnReturn outCallSuperOnReturn : inout Bool) {
    if let keys = inEvent.characters, let char = keys.first {
      let nsString = inCocoaWiew.string as NSString
      let alignment = gSpacesForHTab.propval
      if char == "\t", alignment > 0 { // A Tab Character, without shift ?
        outCallSuperOnReturn = false
        let selectedRange = inCocoaWiew.selectedRange
        let selectedString = nsString.substring (with: selectedRange)
        if selectedString.contains ("\n") {
          self.shiftRightRange (inCocoaWiew)
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
          inCocoaWiew.insertText (
            String (repeating: " ", count: spacesToInsert),
            replacementRange: selectedRange
          )
        }
      }else if char == "\u{19}", alignment > 0 { // A Tab Character, with shift ?
        outCallSuperOnReturn = false
        self.shiftLeftRange (inCocoaWiew)
//      case 13 : // A Carriage Return Character ?
//        { const NSRange selectedRange = [self selectedRange] ;
//          NSString * s = self.textStorage.string ;
//          NSRange currentLineRange = [s lineRangeForRange:selectedRange] ;
//        //--- Find the number of spaces at the beginning of the line
//          if (currentLineRange.length > selectedRange.location - currentLineRange.location) {
//            currentLineRange.length = selectedRange.location - currentLineRange.location ;
//          }
//        //--- Insert string
//          NSMutableString * stringToInsert = [NSMutableString new] ;
//          [stringToInsert appendString: @"\n"] ;
//          while ((currentLineRange.length > 0) && ([s characterAtIndex:currentLineRange.location] == ' ')) {
//            currentLineRange.location ++ ;
//            currentLineRange.length -- ;
//            [stringToInsert appendString: @" "] ;
//          }
//          [self insertText:stringToInsert] ;
//        }break ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func shiftRightRange (_ inCocoaWiew : InternalCocoaTextView) {
  //--- Space string
    let spaceStringLength = gSpacesForHTab.propval
    let spaceString = String (repeating: " ", count: spaceStringLength)
    let sourceString = inCocoaWiew.string as NSString
  //--- Line range contains all lines
    let lineRange = sourceString.lineRange (for: inCocoaWiew.selectedRange)
    let lineRangeString = sourceString.substring (with: lineRange)
    let lines = lineRangeString.split (separator: "\n")
    let indentedLines = lines.map { spaceString + $0 }
    let newLineRangeString = indentedLines.joined (separator: "\n") + "\n"
    inCocoaWiew.insertText (newLineRangeString, replacementRange: lineRange)
    inCocoaWiew.setSelectedRange (NSRange (location: lineRange.location, length: newLineRangeString.count - 1))
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func shiftLeftRange (_ inCocoaWiew : InternalCocoaTextView) {
  //--- Block comment string
    let spaceStringLength = gSpacesForHTab.propval
    let spaceString = String (repeating: " ", count: spaceStringLength)
  //--- Get source string
    let sourceString = inCocoaWiew.string as NSString
  //--- Line range contains all lines
    let lineRange = sourceString.lineRange (for: inCocoaWiew.selectedRange)
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
    inCocoaWiew.insertText (newLineRangeString, replacementRange: lineRange)
    inCocoaWiew.setSelectedRange (NSRange (location: lineRange.location, length: newLineRangeString.count - 1))



//    let mutableSourceString : NSMutableAttributedString = inCocoaWiew.textStorage!
//    let sourceString = mutableSourceString.string as NSString
//  //--- Final selection range
//    var finalSelectedRange = initialSelectedRange
//  //--- Get line range that is affected by the operation
//    let lineRange = sourceString.lineRange (for: initialSelectedRange)
//    var currentLineRange = sourceString.lineRange (for: NSRange (location: lineRange.location + lineRange.length - 1, length: 1))
//    var loop = true
//    while loop {
//      let lineString : NSString = sourceString.substring (with: currentLineRange) as NSString
//      if lineString.compare (spaceString, options: .literal, range: NSRange (location: 0, length: spaceStringLength)) == .orderedSame {
//        mutableSourceString.replaceCharacters (in: NSRange (location: currentLineRange.location, length: spaceStringLength), with:"")
//      //--- Examen du nombre de caractères à l'intérieur de la sélection
//        let withinSelectionCharacterCount =
//          min (currentLineRange.location + spaceStringLength, finalSelectedRange.location + finalSelectedRange.length)
//        -
//          max (currentLineRange.location, finalSelectedRange.location)
//        if withinSelectionCharacterCount > 0 {
//          finalSelectedRange.length -= withinSelectionCharacterCount
//        }
//      //--- Examen du nombre de caractères avant la sélection
//        let beforeSelectionCharacterCount = finalSelectedRange.location - currentLineRange.location
//        if beforeSelectionCharacterCount > 0 {
//          finalSelectedRange.location -= min (spaceStringLength, beforeSelectionCharacterCount)
//        }
//      }
//      if currentLineRange.location > 0 {
//        currentLineRange = sourceString.lineRange (for: NSRange (location: currentLineRange.location - 1, length: 1))
//      }
//      loop = (currentLineRange.location > 0) && (currentLineRange.location >= lineRange.location)
//    }
//  //--- Update selected range
//    inCocoaWiew.setSelectedRange (finalSelectedRange)
  //--- Register undo
//    [documentData.textSyntaxColoring.undoManager
//      registerUndoWithTarget:self
//      selector:@selector (shiftRightRange:)
//      object:[NSValue valueWithRange:finalSelectedRange]
//    ] ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
