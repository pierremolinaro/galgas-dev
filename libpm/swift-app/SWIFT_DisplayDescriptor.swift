//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 04/11/2021.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

@MainActor final class SWIFT_DisplayDescriptor {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mSourcePresentationView : AutoLayoutSourceTextPresentationView
  let mDocument : SWIFT_SingleDocument

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (withDocument inDocument : SWIFT_SingleDocument,
        selectedRange inSelectedRange : NSRange) {
    self.mDocument = inDocument
    self.mSourcePresentationView = AutoLayoutSourceTextPresentationView (withDocument: inDocument)
    noteObjectAllocation (self)
    inDocument.appendDisplayDescriptor (self)
    DispatchQueue.main.async {
      self.mSourcePresentationView.sourceTextView.setSelectedRange (inSelectedRange)
      self.mSourcePresentationView.sourceTextView.scrollRangeToVisible (inSelectedRange)
    }
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

  func textViewNeedsDisplay () {
    self.mSourcePresentationView.textViewNeedsDisplay ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   pathFromSelection
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func pathFromSelection () -> String? {
  //--- Get source string
    let sourceString : String = self.mSourcePresentationView.sourceTextView.string
    let nsSourceString : NSString = sourceString as NSString
    let length = nsSourceString.length
  //--- Get selection
    var selection = self.mSourcePresentationView.sourceTextView.selectedRange
  //--- A selection is available ?
    var ok = selection.location != NSNotFound
    if ok && (selection.length > 1) && (nsSourceString.character (at: selection.location) == ASCII.quotation.rawValue) {
      selection.location += 1
      selection.length -= 1
    }
    if ok && (selection.length > 1) && (nsSourceString.character (at: selection.location + selection.length - 1) == ASCII.quotation.rawValue) {
      selection.length -= 1
    }
  //--- Check there is end of line within the selection
    if ok {
      var i : Int = selection.location
      while (i < (selection.location + selection.length)) && ok {
        let c : unichar = nsSourceString.character (at: i)
        ok = (c != ASCII.lineFeed.rawValue) && (c != ASCII.carriageReturn.rawValue)
        i += 1
      }
    }
  //--- If ok, extend selection until a '\r', '\n' or a '"'.
    if ok {
      var idx = selection.location + selection.length
      while (idx < length)
          && (nsSourceString.character (at: idx) != ASCII.carriageReturn.rawValue)
          && (nsSourceString.character (at: idx) != ASCII.lineFeed.rawValue)
          && (nsSourceString.character (at: idx) != ASCII.quotation.rawValue) {
        idx += 1
        selection.length += 1
      }
    }
  //--- If ok, advance selection until a '\r', '\n' or a '"'
    if ok && (selection.location > 0) {
      var idx = selection.location - 1
      while (idx > 0)
          && (nsSourceString.character (at: idx) != ASCII.carriageReturn.rawValue)
          && (nsSourceString.character (at: idx) != ASCII.lineFeed.rawValue)
          && (nsSourceString.character (at: idx) != ASCII.quotation.rawValue) {
        idx -= 1
        selection.location -= 1
        selection.length += 1
      }
    }
  //---
    let relativePath = sourceString.nsSubstring (with: selection)
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

  var title : NSAttributedString {
    let title = self.mDocument.lastComponentOfFileName
    let font = self.mDocument.isDocumentEdited
      ? NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
      : NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
    let textAttributes : [NSAttributedString.Key : Any] = [
      NSAttributedString.Key.font : font
    ]
    return NSAttributedString (string: title, attributes: textAttributes)
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var currentLine : Int { self.sourcePresentationView.currentLine }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineCount : Int { self.sourcePresentationView.lineCount }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func selectLineStart (_ inLineIndex : Int) {
    self.sourcePresentationView.selectLineStart (inLineIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var selectedRange : NSRange { self.sourcePresentationView.selectedRange }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var selectedString : String { self.sourcePresentationView.selectedString }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setSelectedRange (_ inRange : NSRange) {
    self.sourcePresentationView.setSelectedRange (inRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func scrollSelectedRangeToVisible () {
    self.sourcePresentationView.sourceTextView.scrollRangeToVisible (self.selectedRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Comment / Uncomment
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func commentSelection () {
    let newRange = self.mDocument.commentRange (self.selectedRange)
    self.setSelectedRange (newRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func uncommentSelection () {
    let newRange = self.mDocument.uncommentRange (self.selectedRange)
    self.setSelectedRange (newRange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
