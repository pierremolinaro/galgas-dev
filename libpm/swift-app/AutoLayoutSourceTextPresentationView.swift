//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSourceTextPresentationView : AutoLayoutVerticalStackView { //, NSTextViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mEntryPopUpButton = AutoLayoutPopUpButton (size: .regular)
  private let mRevealInFinderPullDownButton = AutoLayoutPullDownButton (title: "Reveal in Finder", size: .regular)
  private let mSourceTextView : BaseTextView
  var sourceTextView : BaseTextView { return self.mSourceTextView }
  private var mBackgroundObserver : EBSimpleObserver? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (textStorage inTextStorage : NSTextStorage,
        undoManager inUndoManager : UndoManager) {
    self.mSourceTextView = BaseTextView (
      drawsBackground: true,
      editable: true,
      textStorage: inTextStorage,
      horizontalScroller: true,
      verticalScroller: true,
      minWidth: 300,
      minHeight: 400
    )
    super.init ()
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
    self.mSourceTextView.setUndoManager (inUndoManager)
    self.mSourceTextView.setTextViewDidChangeSelectionAction { [weak self] in
      self?.selectPopUpItemFollowingTextSelection ()
      self?.mSourceTextView.verticalRulerViewNeedsDisplay ()
    }

    _ = self.set (margins: .zero)
      .appendView (topHStack)
      .appendView (self.mSourceTextView)
  //--- Populate mRevealInFinderPullDownButton
//    public func appendItem (title inTitle : String,
//                          menuItemActionTarget inTarget : AnyObject?,
//                          menuItemActionSelector inSelector : Selector?,
//                          represendedObject inRepresentedObject : Any?) -> Self {

//// §    self.mSourceTextView.set (undoManager: inUndoManager)
//    self.mSourceTextView.delegate = self
//  //--- Ajouter un observateur pour être averti du changement de la couleur de fond
//    self.mBackgroundObserver = EBSimpleObserver (object: prefsEditorBackColor) { [weak self] in
//      self?.mSourceTextView.backgroundColor = prefsEditorBackColor.propval
//      self?.mSourceTextView.needsDisplay = true
//    }
//  //--- Configure vertical stack view
//    _ = self.set (topMargin: 8)
//      .appendView (AutoLayoutHorizontalStackView ().appendView (self.mEntryPopUpButton).set (rightMargin: 8))
//      .appendView (self.mScrollView)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final func makeFirstResponder (of inWindow : NSWindow) {
    inWindow.makeFirstResponder (self.mSourceTextView.cocoaView)
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

//  func textViewDidChangeSelection (_ inNotification : Notification) { // NSTextViewDelegate
//    self.selectPopUpItemFollowingTextSelection ()
//    self.mSourceTextView.verticalRulerViewNeedsDisplay ()
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lineHeightDidChange () {
    self.mSourceTextView.verticalRulerViewNeedsDisplay ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
