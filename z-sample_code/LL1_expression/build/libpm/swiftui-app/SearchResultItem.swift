//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

struct SearchResultItem : Identifiable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let id : UUID = UUID ()
  let fileNodeID : SourceFileNodeID?
  let lineContents : AttributedString
  let range : NSRange
  let startLineAndColumn : LineAndColumn

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (fileNodeID inFileNodeID : SourceFileNodeID?,
        lineContents inLineContents : AttributedString,
        rangeInSourceString inRange : NSRange,
        startLineAndColumn inStartLineAndColumn : LineAndColumn) {
    self.lineContents = inLineContents
    self.range = inRange
    self.startLineAndColumn = inStartLineAndColumn
    self.fileNodeID = inFileNodeID
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
