//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SearchResultNodeView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State var mNode : SearchResultNode
  @Binding private var mSelectedResultItemID : UUID?
  @Binding var mSelectedFileNodeID : SourceFileNodeID?
  @Binding var mSearchResultSections : Set <UUID>

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (node inNode : SearchResultNode,
        selectedResultItemID inSelectedResultItemID : Binding <UUID?>,
        selectedFileNodeID inSelectedFileNodeID : Binding <SourceFileNodeID?>,
        searchResultSections inSearchResultSections : Binding <Set <UUID>>) {
    self.mNode = inNode
    self._mSelectedResultItemID = inSelectedResultItemID
    self._mSelectedFileNodeID = inSelectedFileNodeID
    self._mSearchResultSections = inSearchResultSections
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    DisclosureGroup (isExpanded: Binding (
      get: { self.mSearchResultSections.contains (self.mNode.id) },
      set: { expanded in
        if expanded {
          self.mSearchResultSections.insert (self.mNode.id)
        } else {
          self.mSearchResultSections.remove (self.mNode.id)
        }
      })) {
      ForEach (self.mNode.mEntries, id: \.self.id) { entry in
        SearchResultItemView (
          entry: entry,
          selectedResultItemID: self.$mSelectedResultItemID,
          selectedFileNodeID: self.$mSelectedFileNodeID
        )
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
