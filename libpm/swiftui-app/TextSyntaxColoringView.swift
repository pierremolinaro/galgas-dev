//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 08/08/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

struct TextSyntaxColoringView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mIssueArray : [CompilationIssue]

  @ObservedObject private var mSharedTextModel : SharedTextModel

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State var mTopViewSelection = NSRange ()
  @State private var mTopViewPopUpMenuItems : [IdentifiableAttributedString] = []

  @State private var mTopViewSelectedPopUp : Int = 0
  private var mUserTopViewSelectedPopUp : Binding<Int> {
    Binding (
      get: { self.mTopViewSelectedPopUp },
      set: { newValue in
        if self.mTopViewSelectedPopUp != newValue {
          self.mTopViewSelectedPopUp = newValue
          self.mTopViewSelection = NSRange (location: newValue, length: 0)
        }
      }
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mBottomViewPopUpMenuItems : [IdentifiableAttributedString] = []
  @State var mBottomViewSelection = NSRange ()

  @State private var mBottomViewSelectedPopUp : Int = 0
  private var mUserBottomViewSelectedPopUp : Binding<Int> {
    Binding (
      get: { self.mBottomViewSelectedPopUp },
      set: { newValue in
        if self.mBottomViewSelectedPopUp != newValue {
          self.mBottomViewSelectedPopUp = newValue
          self.mBottomViewSelection = NSRange (location: newValue, length: 0)
        }
      }
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SharedTextModel,
        issueArray inIssueArray : [CompilationIssue],
        url inSourceFileURL : URL?) {
    self.mSharedTextModel = inSharedTextModel
    var issueArray = [CompilationIssue] ()
    for issue in inIssueArray {
      if issue.fileURL == inSourceFileURL {
        issueArray.append (issue)
      }
    }
    self.mIssueArray = issueArray
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some View {
    VSplitView {
      VStack {
        Spacer ().frame (height: 6)
        HStack {
          Picker ("", selection: self.mUserTopViewSelectedPopUp) {
            ForEach (self.mTopViewPopUpMenuItems, id: \.id) { entry in
              Text (entry.attributedString).tag (entry.id)
            }
          }.pickerStyle (.menu)
          Button ("+") { self.mSharedTextModel.mBottomViewIsVisible = true }
          .disabled (self.mSharedTextModel.mBottomViewIsVisible)
          Spacer ().frame (width: 6)
        }
        LexicalHilitingTextEditor (
          model: self.mSharedTextModel,
          selectionBinding: self.$mTopViewSelection,
          issueArray: self.mIssueArray,
          installScrollToLineNotificationObserver: true,
          popUpMenuItemsBinding: self.$mTopViewPopUpMenuItems
        )
        .onChange (of: self.mTopViewSelection.location) {
        //--- Select popup menu according to current selection staret
          let currentLocation = self.mTopViewSelection.location
          var newSelectedID = 0
          for item in self.mTopViewPopUpMenuItems {
            if currentLocation < item.id {
              self.mTopViewSelectedPopUp = newSelectedID
              return
            }else{
              newSelectedID = item.id
            }
          }
          self.mTopViewSelectedPopUp = newSelectedID
        }
        .focusedValue (
          \.activeView,
          ActiveViewKeyStructValue (
            sharedTextModel: self.mSharedTextModel,
            canUndo: self.mSharedTextModel.canUndo,
            canRedo: self.mSharedTextModel.canRedo
          )
        )
      }
      if self.mSharedTextModel.mBottomViewIsVisible {
        VStack {
          Spacer ().frame (height: 6)
          HStack {
            Picker ("", selection: self.mUserBottomViewSelectedPopUp) {
              ForEach (self.mBottomViewPopUpMenuItems, id: \.id) {
                Text ($0.attributedString).tag ($0.id)
              }
            }.pickerStyle (.automatic)
            Button ("-") { self.mSharedTextModel.mBottomViewIsVisible = false }
            Spacer ().frame (width: 6)
          }
          LexicalHilitingTextEditor (
            model: self.mSharedTextModel,
            selectionBinding: self.$mBottomViewSelection,
            issueArray: self.mIssueArray,
            installScrollToLineNotificationObserver: false,
            popUpMenuItemsBinding: self.$mBottomViewPopUpMenuItems
          )
        .onChange (of: self.mBottomViewSelection.location) {
          let currentLocation = self.mBottomViewSelection.location
          var newSelectedID = 0
          for item in self.mBottomViewPopUpMenuItems {
            if currentLocation < item.id {
              self.mBottomViewSelectedPopUp = newSelectedID
              return
            }else{
              newSelectedID = item.id
            }
          }
          self.mBottomViewSelectedPopUp = newSelectedID
        }
          .focusedValue (
            \.activeView,
            ActiveViewKeyStructValue (
              sharedTextModel: self.mSharedTextModel,
              canUndo: self.mSharedTextModel.canUndo,
              canRedo: self.mSharedTextModel.canRedo
            )
          )
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
