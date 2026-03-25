//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct CompileLogView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mAttributedString : AttributedString
  private let mAutoScroll : Bool
  @State private var mScrollToBottomID = UUID ()  // unique pour chaque mise à jour

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (attributedString inAttributedString : AttributedString,
        autoScroll inAutoScroll : Bool) {
    self.mAttributedString = inAttributedString
    self.mAutoScroll = inAutoScroll
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    ScrollViewReader { proxy in
      ScrollView {
        Text (self.mAttributedString)
        .textSelection (.enabled)
        .frame (maxWidth: .infinity, alignment: .leading)
        .id (self.mScrollToBottomID) // unique pour chaque mise à jour
        .frame (maxWidth: .infinity, alignment: .leading)
      }
      .background (Color.black.opacity (0.025))
      .onChange (of: self.mAutoScroll) {
        if self.mAutoScroll {
          proxy.scrollTo (self.mScrollToBottomID, anchor: .bottom)
        }
      }
      .onChange (of: self.mAttributedString) {
        if self.mAutoScroll {
          DispatchQueue.main.async {
            proxy.scrollTo (self.mScrollToBottomID, anchor: .bottom)
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
