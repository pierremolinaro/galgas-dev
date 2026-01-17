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
  @State private var mPopUpDatas_High : [IdentifiableString] = []
  @State private var mPopUpDatas_Low : [IdentifiableString] = []
  @State private var mSelectedPopUp_High : Int = 0
  @State private var mSelectedPopUp_Low : Int = 0

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
          Picker ("", selection: self.$mSelectedPopUp_High) {
            ForEach (self.mPopUpDatas_High, id: \.id) {
              Text ($0.attributedString.string).tag ($0.id)
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
          popUpData: self.$mPopUpDatas_High
        )
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
            Picker("", selection: self.$mSelectedPopUp_Low) {
              ForEach (self.mPopUpDatas_Low, id: \.id) {
                Text ($0.attributedString.string).tag ($0.id)
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
            popUpData: self.$mPopUpDatas_Low
          )
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
