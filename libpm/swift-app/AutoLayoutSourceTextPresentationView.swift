//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

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
      drawsBackground: true,
      editable: true,
      textStorage: inDocument.mTextStorage,
      horizontalScroller: true,
      verticalScroller: true,
      minWidth: 500,
      minHeight: 400
    )
    super.init ()
    self.mDocument = inDocument
    self.mSourceTextView.setTextViewDelegate (self)
  //--- Set custom ruler view to scrollview
    self.mSourceTextView.createVerticalRulerView { SWIFT_TextViewRulerView (scrollView: $0) }
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
      self?.mSourceTextView.verticalRulerViewNeedsDisplay ()
    }

    _ = self.set (margins: .zero)
      .appendView (topHStack)
      .appendView (self.mSourceTextView)
//  //--- Ajouter un observateur pour être averti du changement de la couleur de fond
//    self.mBackgroundObserver = EBSimpleObserver (object: prefsEditorBackColor) { [weak self] in
//      self?.mSourceTextView.backgroundColor = prefsEditorBackColor.propval
//      self?.mSourceTextView.needsDisplay = true
//    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func makeFirstResponder (of inWindow : NSWindow) {
    inWindow.makeFirstResponder (self.mSourceTextView.cocoaView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var selectedRange : NSRange { self.mSourceTextView.selectedRange }

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
    self.mSourceTextView.verticalRulerViewNeedsDisplay ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   BaseTextViewDelegate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func willDraw (_ inDirtyRect : NSRect, _ inCocoaTextWiew : InternalCocoaTextView) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public func didDraw (_ inDirtyRect : NSRect, _ inCocoaTextWiew : InternalCocoaTextView) {
//    if let layoutManager = inCocoaTextWiew.layoutManager,
//       let textContainer = inCocoaTextWiew.textContainer {
//     //-------- Note: ruler view and text view are both flipped
//      let selectedRange : NSRange = inCocoaTextWiew.selectedRange
//    //-------- Compute layout
//      layoutManager.ensureLayout (for: textContainer)
//    //---
//      let lineFragmentRect = layoutManager.lineFragmentRect (
//        forGlyphAt: layoutManager.glyphIndexForCharacter (at: selectedRange.location),
//        effectiveRange: nil
//      )
//      let r = NSRect (
//        x: inCocoaTextWiew.bounds.origin.x,
//        y: lineFragmentRect.origin.y,
//        width: inCocoaTextWiew.bounds.width,
//        height: lineFragmentRect.height
//      )
//      let color = NSColor (calibratedRed: 0.0, green: 0.0, blue: 1.0, alpha: 0.1)
//      color.setFill ()
//      NSBezierPath.fill (r)
//    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setSelectedRange (_ inRange : NSRange) {
    self.mSourceTextView.setSelectedRange (inRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectedRangeDidChange (_ inSelectedRange : NSRange,
                               _ inCocoaWiew : InternalCocoaTextView) {
    self.mDocument?.selectedRangeDidChange ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
