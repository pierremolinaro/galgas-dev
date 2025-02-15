//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 25/12/2024.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

final class SWIFT_Issue {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let fileURL : URL
  let line : Int
  let startColumn : Int
  let length : Int
  let messageArray : [String]
  let kind : Kind
  let fixitArray : [MyFixitDecoder]
  let locationInBuildLogTextView : Int
  var range = NSRange ()
  private(set) var mIsValid = true

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public struct MyFixitDecoder : Decodable {
    enum FixitKind : String, Decodable {
       case replace, remove, insertAfter, insertBefore
    }
    let kind : FixitKind
    let action : String

    var messageString : String {
      var s = "Fix it: "
      switch kind {
      case .replace : s += "replace by"
      case .remove : s += "remove"
      case .insertAfter : s += "insert after"
      case .insertBefore : s += "insert before"
      }
      s += " \"" + self.action + "\""
      return s
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate struct MyDecoder : Decodable {
    let error : Bool
    let file : String
    let line : Int
    let startCol : Int
    let length : Int
    let message : [String]
    let fixit : [MyFixitDecoder]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init? (jsonString inString : String,
         _ inLocationInBuildLogTextView : Int) {
    if let d = try? JSONDecoder ().decode (MyDecoder.self, from: inString.data (using: .utf8)!) {
      self.fileURL = URL (fileURLWithPath: d.file)
      self.line = d.line
      self.startColumn = d.startCol
      self.length = d.length
      self.messageArray = d.message
      self.kind = d.error ? .error : .warning
      self.fixitArray = d.fixit
      self.locationInBuildLogTextView = inLocationInBuildLogTextView
      noteObjectAllocation (self)
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var color : NSColor {
    switch self.kind {
    case .warning : return .orange
    case .error : return .red
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum Kind { case warning, error }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateLocationForPreviousRange (_ inEditedRange : NSRange,
                                       changeInLength inChangeInLength : Int,
                                       updateDisplay ioUpdate : inout Bool) {
    if self.mIsValid {
      if let _ = self.range.intersection (inEditedRange) {
      //--- Edition occurs into issue range : make issue invalid
        self.mIsValid = false
        ioUpdate = true
      }else if self.range.location >= (inEditedRange.location + inEditedRange.length) {
      //--- Edition occurs before issue range : translate it
        self.range.location += inChangeInLength
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor func storeItemsToMenu (_ inMenu : NSMenu,
                                    _ inCocoaTextView : NSTextView,
                                    _ inSelectionRange : NSRange) {
  //--- Suggestion Attributes
    let suggestionAttributes : [NSAttributedString.Key : Any] = [
      .foregroundColor : NSColor.brown,
      .font : NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
    ]
  //--- Title Attributes
    let titleAttributes : [NSAttributedString.Key : Any] = [
      .foregroundColor : self.color,
      .font : NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
    ]
  //--- subtitle Attributes
    let subtitleAttributes : [NSAttributedString.Key : Any] = [
      .foregroundColor : self.color,
      .font : NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
    ]
  //--- Extract
    var first = true
    for str in self.messageArray {
      let attributedString : NSAttributedString
      if first {
        first = false
        attributedString = NSAttributedString (
          string: "\u{27A4} " + str, // ➤
          attributes: titleAttributes
        )
      }else{
         attributedString = NSAttributedString (
          string: "  " + str,
          attributes: subtitleAttributes
        )
      }
      let menuItem = NSMenuItem (title: "", action: nil, keyEquivalent: "")
      menuItem.attributedTitle = attributedString
      inMenu.addItem (menuItem)
    //--- Suggestions
      for fixit in self.fixitArray {
        let attributedString = NSAttributedString (
          string: "  " + fixit.messageString,
          attributes: suggestionAttributes
        )
        let menuItem = NSMenuItem (title: "", action: #selector (Self.fixItAction(_:)), keyEquivalent: "")
        menuItem.representedObject = (fixit, inCocoaTextView, inSelectionRange)
        menuItem.target = self
        menuItem.attributedTitle = attributedString
        inMenu.addItem (menuItem)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor @objc func fixItAction (_ inSender : Any?) {
    if let menuItem = inSender as? NSMenuItem,
       let (fixit, cocoaTextView, selectedRange) = menuItem.representedObject as? (MyFixitDecoder, NSTextView, NSRange) {
      switch fixit.kind {
      case .replace :
        cocoaTextView.insertText (fixit.action, replacementRange: selectedRange)
      case .remove :
        cocoaTextView.insertText ("", replacementRange: selectedRange)
      case .insertAfter :
        let r = NSRange (location: selectedRange.location + selectedRange.length, length: 0)
        cocoaTextView.insertText (fixit.action, replacementRange: r)
      case .insertBefore :
        let r = NSRange (location: selectedRange.location, length: 0)
        cocoaTextView.insertText (fixit.action, replacementRange: r)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
