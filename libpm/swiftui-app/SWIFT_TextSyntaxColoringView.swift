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

  @ObservedObject private var mSharedTextModel : SWIFT_SharedTextModel
  private let mIssueArray : [SWIFT_Issue]

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
      SWIFT_LexicalHilitingTextEditor (
        model: self.mSharedTextModel,
        selectionBinding: self.$mSharedTextModel.mTopViewSelection,
        issueArray: self.mIssueArray,
        installScrollToLineNotificationObserver: true
      )
      .focusedValue (
        \.activeView,
        ActiveViewKeyStructValue (
          sharedTextModel: self.mSharedTextModel,
          canUndo: self.mSharedTextModel.canUndo,
          canRedo: self.mSharedTextModel.canRedo
        )
      )
      .conditionalOverlay (condition: !self.mSharedTextModel.mBottomViewIsVisible, alignment: .topTrailing) {
        HStack {
          Button ("+") { self.mSharedTextModel.mBottomViewIsVisible = true }
          Spacer ().frame (width: 15)
        }
      }
      if self.mSharedTextModel.mBottomViewIsVisible {
        VStack {
          Spacer ().frame (height: 12)
          SWIFT_LexicalHilitingTextEditor (
            model: self.mSharedTextModel,
            selectionBinding: self.$mSharedTextModel.mBottomViewSelection,
            issueArray: self.mIssueArray,
            installScrollToLineNotificationObserver: false
          )
          .focusedValue (
            \.activeView,
            ActiveViewKeyStructValue (
              sharedTextModel: self.mSharedTextModel,
              canUndo: self.mSharedTextModel.canUndo,
              canRedo: self.mSharedTextModel.canRedo
            )
          )
          .overlay (alignment: .topTrailing) {
            HStack {
              Button ("-") { self.mSharedTextModel.mBottomViewIsVisible = false }
              Spacer ().frame (width: 15)
            }
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
