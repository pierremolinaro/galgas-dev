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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SWIFT_SharedTextModel) {
    self.mSharedTextModel = inSharedTextModel
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some View {
    VSplitView {
//      TextEditor (text: self.$mSharedTextModel.mDocumentString)
      SWIFT_LexicalHilitingTextEditor (
        model: self.mSharedTextModel,
        selectionBinding: self.$mSharedTextModel.mTopViewSelection
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
            selectionBinding: self.$mSharedTextModel.mBottomViewSelection
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
