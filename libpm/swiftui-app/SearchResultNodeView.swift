//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SearchResultNodeView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ObservedObject var mNode : SearchResultNode
  @Binding private var mSelectedResultItemID : UUID?
  @Binding var mSelectedFileNodeID : SourceFileNodeID?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (node inNode : SearchResultNode,
        selectedResultItemID inSelectedResultItemID : Binding <UUID?>,
        selectedFileNodeID inSelectedFileNodeID : Binding <SourceFileNodeID?>) {
    self.mNode = inNode
    self._mSelectedResultItemID = inSelectedResultItemID
    self._mSelectedFileNodeID = inSelectedFileNodeID
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    DisclosureGroup (isExpanded: self.$mNode.mIsExpanded) {
      ForEach (self.mNode.mEntries, id: \.self.id) { entry in
        SearchResultItemView (
          entry: entry,
          selectedResultItemID: self.$mSelectedResultItemID,
          selectedFileNodeID: self.$mSelectedFileNodeID)
      }
    } label: {
      HStack {
        VStack {
          Text ("\(self.mNode.mEntries.count)")
          Spacer ()
        }
        VStack {
          Text ("\(self.mNode.fileName)")
          .bold ()
          .frame (maxWidth: .infinity, alignment: .leading)
          .lineLimit (nil)
          Spacer ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
