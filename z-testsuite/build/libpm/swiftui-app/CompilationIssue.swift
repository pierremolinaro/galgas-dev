//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 25/12/2024.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct CompilationIssue : Identifiable {

  let id = UUID ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let fileURL : URL
  let length : Int
  let messageArray : [String]
  let kind : Kind
  let fixitArray : [MyFixitDecoder]

  private(set) var mStartLocation : Int
  private(set) var mLine : Int
  private(set) var mStartColumn : Int
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
    let startLocation : Int
    let line : Int
    let startCol : Int
    let length : Int
    let message : [String]
    let fixit : [MyFixitDecoder]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init? (jsonString inString : String) {
    if let d = try? JSONDecoder ().decode (MyDecoder.self, from: inString.data (using: .utf8)!) {
      self.fileURL = URL (fileURLWithPath: d.file)
      self.mStartLocation = d.startLocation
      self.mLine = d.line
      self.mStartColumn = d.startCol
      self.length = d.length
      self.messageArray = d.message
      self.kind = d.error ? .error : .warning
      self.fixitArray = d.fixit
    }else{
      return nil
    }
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

//  mutating func updateLocationForPreviousRange (editedRange inEditedRange : NSRange,
//                                                changeInLength inChangeInLength : Int,
//                                                updatedString inString : String) {
//    if self.mIsValid {
//      print ("update \(inEditedRange) \(inChangeInLength)")
//      let previousRange = NSRange (
//        location: inEditedRange.location,
//        length: inEditedRange.length - inChangeInLength
//      )
//      let issueRange = NSRange (location: self.mStartLocation, length: self.length)
//      if let _ = issueRange.intersection (previousRange) {
//      //--- Edition occurs into issue range : make issue invalid
//        self.mIsValid = false
//      }else if issueRange.location >= (previousRange.location + previousRange.length) {
//      //--- Edition occurs before issue range : translate it
//        self.mStartLocation += inChangeInLength
//        let lineColumn = inString.lineAndColumn (forLocation: self.mStartLocation)
//        self.mLine = lineColumn.line
//        self.mStartColumn = lineColumn.column
//      }
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @MainActor func storeItemsToMenu (_ inMenu : NSMenu,
//                                    _ inCocoaTextView : NSTextView,
//                                    _ inSelectionRange : NSRange) {
//  //--- Suggestion Attributes
//    let suggestionAttributes : [NSAttributedString.Key : Any] = [
//      .foregroundColor : NSColor.brown,
//      .font : NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
//    ]
//  //--- Title Attributes
//    let titleAttributes : [NSAttributedString.Key : Any] = [
//      .foregroundColor : self.color,
//      .font : NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
//    ]
//  //--- subtitle Attributes
//    let subtitleAttributes : [NSAttributedString.Key : Any] = [
//      .foregroundColor : self.color,
//      .font : NSFont.systemFont (ofSize: NSFont.smallSystemFontSize)
//    ]
//  //--- Extract
//    var first = true
//    for str in self.messageArray {
//      let attributedString : NSAttributedString
//      if first {
//        first = false
//        attributedString = NSAttributedString (
//          string: "\u{27A4} " + str, // ➤
//          attributes: titleAttributes
//        )
//      }else{
//         attributedString = NSAttributedString (
//          string: "  " + str,
//          attributes: subtitleAttributes
//        )
//      }
//      let menuItem = NSMenuItem (title: "", action: nil, keyEquivalent: "")
//      menuItem.attributedTitle = attributedString
//      inMenu.addItem (menuItem)
//    //--- Suggestions
//      for fixit in self.fixitArray {
//        let attributedString = NSAttributedString (
//          string: "  " + fixit.messageString,
//          attributes: suggestionAttributes
//        )
//        let menuItem = NSMenuItem (title: "", action: #selector (Self.fixItAction(_:)), keyEquivalent: "")
//        menuItem.representedObject = (fixit, inCocoaTextView, inSelectionRange)
//        menuItem.target = self
//        menuItem.attributedTitle = attributedString
//        inMenu.addItem (menuItem)
//      }
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @MainActor @objc func fixItAction (_ inSender : Any?) {
//    if let menuItem = inSender as? NSMenuItem,
//       let (fixit, cocoaTextView, selectedRange) = menuItem.representedObject as? (MyFixitDecoder, NSTextView, NSRange) {
//      switch fixit.kind {
//      case .replace :
//        cocoaTextView.insertText (fixit.action, replacementRange: selectedRange)
//      case .remove :
//        cocoaTextView.insertText ("", replacementRange: selectedRange)
//      case .insertAfter :
//        let r = NSRange (location: selectedRange.location + selectedRange.length, length: 0)
//        cocoaTextView.insertText (fixit.action, replacementRange: r)
//      case .insertBefore :
//        let r = NSRange (location: selectedRange.location, length: 0)
//        cocoaTextView.insertText (fixit.action, replacementRange: r)
//      }
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder func view () -> some View {
    HStack {
      Spacer ().frame (width: ISSUE_MARK_WIDTH)
      Circle ()
      .fill (Color (self.mIsValid ? self.color : .gray))
      .frame (width: ISSUE_MARK_WIDTH * 2.0, height: ISSUE_MARK_WIDTH * 2.0)
      VStack {
        HStack {
          Text (self.fileURL.lastPathComponent).bold ()
          .frame(maxWidth: .infinity, alignment: .leading)
          .lineLimit (nil)
          Spacer ()
        }
        HStack {
          Text ("Line: \(self.mLine), column: \(self.mStartColumn)").italic (!self.mIsValid)
          Spacer ()
        }
        Divider ()
        HStack {
          Text (self.messageArray.joined(separator: "\n"))
          .frame(maxWidth: .infinity, alignment: .leading)
          .lineLimit (nil)
          Spacer ()
        }
      }
    }
    .background (RoundedRectangle (cornerRadius: 10.0).stroke(Color (self.color), lineWidth: 1.0))
    .contentShape(Rectangle()) // rend toute la ligne cliquable
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
