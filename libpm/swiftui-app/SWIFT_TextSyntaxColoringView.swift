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
  @Binding private var mTextSyntaxViewCurrentSettingsBinding : SWIFT_TextSyntaxViewCurrentSettings

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SWIFT_SharedTextModel,
        currentSettings inCurrentSettingsBinding : Binding <SWIFT_TextSyntaxViewCurrentSettings>) {
    self.mSharedTextModel = inSharedTextModel
    self._mTextSyntaxViewCurrentSettingsBinding = inCurrentSettingsBinding
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mTopViewSelection : NSRange = NSRange ()
  @State private var mBottomViewSelection : NSRange = NSRange ()

  var body: some View {
    VSplitView {
//      TextEditor (text: self.$mSharedTextModel.mDocumentString)
      SWIFT_LexicalHilitingTextEditor (
        model: self.mSharedTextModel,
        selectionBinding: self.$mTopViewSelection
//        selectionBinding: self.$mTextSyntaxViewCurrentSettingsBinding.mTopViewSelection
      )
      .onAppear { self.mTopViewSelection = self.mTextSyntaxViewCurrentSettingsBinding.mTopViewSelection }
//      .onChange (of: self.mTopViewSelection) { self.mTextSyntaxViewCurrentSettingsBinding.mTopViewSelection = self.mTopViewSelection }
      .focusedValue (
        \.activeView,
        ActiveViewKeyStructValue (
          sharedTextModel: self.mSharedTextModel,
          canUndo: self.mSharedTextModel.canUndo,
          canRedo: self.mSharedTextModel.canRedo
        )
      )
      .conditionalOverlay (condition: !self.mTextSyntaxViewCurrentSettingsBinding.mBottomViewIsVisible, alignment: .topTrailing) {
        HStack {
          Button ("+") { self.mTextSyntaxViewCurrentSettingsBinding.mBottomViewIsVisible = true }
          Spacer ().frame (width: 15)
        }
      }
      if self.mTextSyntaxViewCurrentSettingsBinding.mBottomViewIsVisible {
        VStack {
          Spacer ().frame (height: 12)
          SWIFT_LexicalHilitingTextEditor (
            model: self.mSharedTextModel,
            selectionBinding: self.$mBottomViewSelection
//            selectionBinding: self.$mTextSyntaxViewCurrentSettingsBinding.mBottomViewSelection
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
              Button ("-") { self.mTextSyntaxViewCurrentSettingsBinding.mBottomViewIsVisible = false }
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
