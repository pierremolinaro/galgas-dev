//--------------------------------------------------------------------------------------------------
//
//  Created by Pierre Molinaro on 04/11/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit
import MyAutoLayoutKit

//--------------------------------------------------------------------------------------------------

@MainActor final class SWIFT_DisplayDescriptor {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mSourcePresentationView : AutoLayoutSourceTextPresentationView
  let mDocument : SWIFT_SingleDocument

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (withDocument inDocument : SWIFT_SingleDocument) {
    self.mDocument = inDocument
    self.mSourcePresentationView = AutoLayoutSourceTextPresentationView (
      textStorage: inDocument.mTextStorage,
      undoManager: inDocument.mUndoManager
    )
    noteObjectAllocation (self)
    inDocument.append (displayDescriptor: self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func populateEntryPopUpButton (with inItems : [(NSAttributedString, Int)]) {
    self.mSourcePresentationView.populateEntryPopUpButton (with: inItems)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lineHeightDidChange () {
    self.mSourcePresentationView.lineHeightDidChange ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   pathFromSelection
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func pathFromSelection () -> String? {
  //--- Get source string
    let sourceString : NSString = self.mSourcePresentationView.sourceTextView.string as NSString
    let length = sourceString.length
  //--- Get selection
    var selection = self.mSourcePresentationView.sourceTextView.selectedRange
  //--- A selection is available ?
    var ok = selection.location != NSNotFound
    if ok && (selection.length > 1) && (sourceString.character (at: selection.location) == ASCII.quotation.rawValue) {
      selection.location += 1
      selection.length -= 1
    }
    if ok && (selection.length > 1) && (sourceString.character (at: selection.location + selection.length - 1) == ASCII.quotation.rawValue) {
      selection.length -= 1
    }
  //--- Check there is end of line within the selection
    if ok {
      var i : Int = selection.location
      while (i < (selection.location + selection.length)) && ok {
        let c : unichar = sourceString.character (at: i)
        ok = (c != ASCII.lineFeed.rawValue) && (c != ASCII.carriageReturn.rawValue)
        i += 1
      }
    }
  //--- If ok, extend selection until a '\r', '\n' or a '"'.
    if ok {
      var idx = selection.location + selection.length
      while (idx < length)
          && (sourceString.character (at: idx) != ASCII.carriageReturn.rawValue)
          && (sourceString.character (at: idx) != ASCII.lineFeed.rawValue)
          && (sourceString.character (at: idx) != ASCII.quotation.rawValue) {
        idx += 1
        selection.length += 1
      }
    }
  //--- If ok, advance selection until a '\r', '\n' or a '"'
    if ok && (selection.location > 0) {
      var idx = selection.location - 1
      while (idx > 0)
          && (sourceString.character (at: idx) != ASCII.carriageReturn.rawValue)
          && (sourceString.character (at: idx) != ASCII.lineFeed.rawValue)
          && (sourceString.character (at: idx) != ASCII.quotation.rawValue) {
        idx -= 1
        selection.location -= 1
        selection.length += 1
      }
    }
  //---
    let relativePath = sourceString.substring (with: selection)
    return ok ? relativePath : nil
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lastComponentOfFileName : String { self.mDocument.lastComponentOfFileName }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var sourcePresentationView : AutoLayoutSourceTextPresentationView { self.mSourcePresentationView }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var fileURL : URL? { self.mDocument.fileURL }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isReferencing (document inDocument : SWIFT_SingleDocument) -> Bool {
    return self.mDocument === inDocument
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  var title2 : NSAttributedString {
//    let title = self.mDocument.lastComponentOfFileName
//    let font = self.mDocument.isDocumentEdited
//      ? NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
//      : NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
//    let textAttributes : [NSAttributedString.Key : Any] = [
//      NSAttributedString.Key.font : font
//    ]
//    return NSAttributedString (string: title, attributes: textAttributes)
//  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Window Controller
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func attachWindowController (to inWindow : NSWindow) {
//    let windowController = SWIFT_SingleWindowController (window: inWindow)
//    self.mDocument.addWindowController (windowController)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func detachWindowController (from inWindow : NSWindow) {
//    if let windowController = inWindow.windowController {
//      self.mDocument.removeWindowController (windowController)
//      inWindow.windowController = nil
//    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------