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
  let message : String
  let kind : Kind
  let locationInBuildLogTextView : Int
  var range = NSRange ()
  private(set) var mIsValid = true

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (fileURL inFileURL : URL,
        line inLine : Int,
        startColumn inStartColumn : Int,
        length inLength : Int,
        message inMessage : String,
        kind inKind : Kind,
        locationInBuildLogTextView inLocationInBuildLogTextView : Int) {
    self.fileURL = inFileURL
    self.line = inLine
    self.startColumn = inStartColumn
    self.length = inLength
    self.message = inMessage
    self.kind = inKind
    self.locationInBuildLogTextView = inLocationInBuildLogTextView
    noteObjectAllocation (self)
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

  enum Kind { case warning ; case error }

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

}

//--------------------------------------------------------------------------------------------------
