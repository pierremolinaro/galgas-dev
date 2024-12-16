//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

final class AutoLayoutSourceTextPresentationView : AutoLayoutVerticalStackView { //, NSTextViewDelegate {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mEntryPopUpButton = AutoLayoutPopUpButton (pullsDown: false, size: .regular)
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
  //--- Configure Text View
    self.mSourceTextView.setUndoManager (inUndoManager)
    self.mSourceTextView.setTextViewDidChangeSelectionAction { [weak self] in
      self?.selectPopUpItemFollowingTextSelection ()
      self?.mSourceTextView.verticalRulerViewNeedsDisplay ()
    }

    _ = self.set (margins: .zero)
      .appendView (self.mSourceTextView)
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
  //  Entry pop up button
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func populateEntryPopUpButton (with inItems : [(NSAttributedString, Int)]) {
    self.mEntryPopUpButton.removeAllItems ()
//    for (title, location) in inItems {
//      self.mEntryPopUpButton.addItem (withTitle: "")
//      let menuItem : NSMenuItem = self.mEntryPopUpButton.lastItem!
//      menuItem.attributedTitle = title
//      menuItem.tag = location
//      menuItem.target = self
//      menuItem.action = #selector (Self.gotoPopUpButtonSelectedEntry (_:))
//    }
//    self.mEntryPopUpButton.isEnabled = inItems.count > 0
//    self.selectPopUpItemFollowingTextSelection ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func gotoPopUpButtonSelectedEntry (_ inSender : Any?) {
    if let menu = inSender as? NSMenuItem {
      let location = menu.tag
      if location >= 0, let ts = self.mSourceTextView.textStorage, location < ts.length {
        let range = NSRange (location: location, length: 0)
        self.mSourceTextView.setSelectedRange (range)
        self.mSourceTextView.scrollRangeToVisible (range)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func selectPopUpItemFollowingTextSelection () {
//    let selectedLocation = self.mSourceTextView.selectedRange.location
////    Swift.print ("selectedLocation \(selectedLocation)")
//    var optionalSelectedMenuItem : NSMenuItem? = self.mEntryPopUpButton.itemArray.first
//    for menuItem in self.mEntryPopUpButton.itemArray {
////      Swift.print ("  menuItem.tag \(menuItem.tag)")
//      if menuItem.tag <= selectedLocation {
//        optionalSelectedMenuItem = menuItem
////        Swift.print ("  match")
//      }else{
//        break
//      }
//    }
//    self.mEntryPopUpButton.select (optionalSelectedMenuItem)
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
