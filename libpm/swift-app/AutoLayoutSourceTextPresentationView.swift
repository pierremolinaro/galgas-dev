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
  //   BaseTextViewDelegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func willDrawTextView (_ inDirtyRect : NSRect, _ inCocoaTextWiew : InternalCocoaTextView) {
  //--- Draw page guide
    if gShowPageGuide.propval,
       !self.mSourceTextView.string.isEmpty,
       let textAttributes = self.mSourceTextView.textStorage?.fontAttributes (in: NSMakeRange (0, 0)) {
      let pageGuideColumn = gPageGuideColumn.propval
      let str = String (repeating: "0", count: pageGuideColumn)
      let s = str.size (withAttributes: textAttributes)
      let column = rint (s.width) + 0.5
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

}

//--------------------------------------------------------------------------------------------------
