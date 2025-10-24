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
  @ObservedObject private var mTextSyntaxViewCurrentSettings : SWIFT_TextSyntaxViewCurrentSettings

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SWIFT_SharedTextModel,
        currentSettings inCurrentSettings : SWIFT_TextSyntaxViewCurrentSettings) {
    self.mSharedTextModel = inSharedTextModel
    self.mTextSyntaxViewCurrentSettings = inCurrentSettings
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some View {
    VSplitView {
//      TextEditor (text: self.$mSharedTextModel.mDocumentString)
      SWIFT_LexicalHilitingTextEditor (
        model: self.mSharedTextModel,
//        selectionBinding: self.$mTopViewSelection
        selectionBinding: self.$mTextSyntaxViewCurrentSettings.mTopViewSelection
      )
//      .onAppear { self.mTopViewSelection = self.mTextSyntaxViewCurrentSettingsBinding.mTopViewSelection }
//      .onChange (of: self.mTopViewSelection) { self.mTextSyntaxViewCurrentSettingsBinding.mTopViewSelection = self.mTopViewSelection }
      .focusedValue (
        \.activeView,
        ActiveViewKeyStructValue (
          sharedTextModel: self.mSharedTextModel,
          canUndo: self.mSharedTextModel.canUndo,
          canRedo: self.mSharedTextModel.canRedo
        )
      )
      .conditionalOverlay (condition: !self.mTextSyntaxViewCurrentSettings.mBottomViewIsVisible, alignment: .topTrailing) {
        HStack {
          Button ("+") { self.mTextSyntaxViewCurrentSettings.mBottomViewIsVisible = true }
          Spacer ().frame (width: 15)
        }
      }
      if self.mTextSyntaxViewCurrentSettings.mBottomViewIsVisible {
        VStack {
          Spacer ().frame (height: 12)
          SWIFT_LexicalHilitingTextEditor (
            model: self.mSharedTextModel,
//            selectionBinding: self.$mBottomViewSelection
            selectionBinding: self.$mTextSyntaxViewCurrentSettings.mBottomViewSelection
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
              Button ("-") { self.mTextSyntaxViewCurrentSettings.mBottomViewIsVisible = false }
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
