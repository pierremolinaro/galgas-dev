//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SearchResultItemView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mEntry : SearchResultItem
  @Binding private var mSelectedResultItemID : UUID?
  @Binding var mSelectedFileNodeID : SourceFileNodeID?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (entry inEntry : SearchResultItem,
        selectedResultItemID inSelectedResultItemID : Binding <UUID?>,
        selectedFileNodeID inSelectedFileNodeID : Binding <SourceFileNodeID?>) {
    self.mEntry = inEntry
    self._mSelectedResultItemID = inSelectedResultItemID
    self._mSelectedFileNodeID = inSelectedFileNodeID
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    Button {
      self.mSelectedResultItemID = self.mEntry.id
      self.mSelectedFileNodeID = self.mEntry.fileNodeID
      ScrollSourceToLineNotification.notify (location: self.mEntry.range.location)
    } label: {
      VStack {
        Text ("Line \(self.mEntry.startLineAndColumn.line), column \(self.mEntry.startLineAndColumn.column)")
        Text (self.mEntry.lineContents)
        .frame (maxWidth: .infinity, alignment: .leading)
        .lineLimit (nil)
      }
    }
    .buttonStyle (.plain)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

