//
//  SWIFT_TextSyntaxColoringView.swift
//  text-syntax-coloring
//
//  Created by Pierre Molinaro on 08/08/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

struct SWIFT_TextSyntaxColoringView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mIssueArray : [SWIFT_Issue]

  @ObservedObject private var mSharedTextModel : SWIFT_SharedTextModel
  @State private var mTopViewPopUpMenuItems : [IdentifiableAttributedString] = []
  @State private var mBottomViewPopUpMenuItems : [IdentifiableAttributedString] = []
  @State private var mTopViewSelectedPopUp : Int = 0
  @State private var mBottomViewSelectedPopUp : Int = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SWIFT_SharedTextModel,
        issueArray inIssueArray : [SWIFT_Issue],
        url inSourceFileURL : URL?) {
    self.mSharedTextModel = inSharedTextModel
    var issueArray = [SWIFT_Issue] ()
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
          Picker ("", selection: self.$mTopViewSelectedPopUp) {
            ForEach (self.mTopViewPopUpMenuItems, id: \.id) {
              Text ($0.attributedString).tag ($0.id)
            }
          }.pickerStyle (.menu)
          Button ("+") { self.mSharedTextModel.mBottomViewIsVisible = true }
          .disabled (self.mSharedTextModel.mBottomViewIsVisible)
          Spacer ().frame (width: 6)
        }
        SWIFT_LexicalHilitingTextEditor (
          model: self.mSharedTextModel,
          selectionBinding: self.$mSharedTextModel.mTopViewSelection,
          issueArray: self.mIssueArray,
          installScrollToLineNotificationObserver: true,
          popUpMenuItemsBinding: self.$mTopViewPopUpMenuItems
        )
        .onChange (of: self.mSharedTextModel.mTopViewSelection.location) {
          let currentLocation = self.mSharedTextModel.mTopViewSelection.location
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
            Picker ("", selection: self.$mBottomViewSelectedPopUp) {
              ForEach (self.mBottomViewPopUpMenuItems, id: \.id) {
                Text ($0.attributedString).tag ($0.id)
              }
            }.pickerStyle (.automatic)
            Button ("-") { self.mSharedTextModel.mBottomViewIsVisible = false }
            Spacer ().frame (width: 6)
          }
          SWIFT_LexicalHilitingTextEditor (
            model: self.mSharedTextModel,
            selectionBinding: self.$mSharedTextModel.mBottomViewSelection,
            issueArray: self.mIssueArray,
            installScrollToLineNotificationObserver: false,
            popUpMenuItemsBinding: self.$mBottomViewPopUpMenuItems
          )
        .onChange (of: self.mSharedTextModel.mBottomViewSelection.location) {
          let currentLocation = self.mSharedTextModel.mBottomViewSelection.location
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
