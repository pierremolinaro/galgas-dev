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

class SWIFT_TextSyntaxViewCurrentSettings : ObservableObject {
  @Published var mBottomViewIsVisible = true
  @Published var mTopViewSelection = NSRange ()
  @Published var mBottomViewSelection = NSRange ()
}

//--------------------------------------------------------------------------------------------------

struct SWIFT_TextSyntaxColoringView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

 // @ObservedObject, sinon les @Published ne sont pas observées
  @ObservedObject private var mSharedTextModel : SWIFT_SharedTextModel

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ObservedObject private var mTextSyntaxViewCurrentSettings : SWIFT_TextSyntaxViewCurrentSettings

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (_ inSharedTextModel : SWIFT_SharedTextModel,
        currentSettings inCurrentSettings : SWIFT_TextSyntaxViewCurrentSettings) {
    self.mSharedTextModel = inSharedTextModel
    self.mTextSyntaxViewCurrentSettings = inCurrentSettings
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some View {
    VStack {
      HStack {
        Button ("Undo") { self.mSharedTextModel.undo () }
        .disabled (!self.mSharedTextModel.canUndo)
        Button ("Redo") { self.mSharedTextModel.redo () }
        .disabled (!self.mSharedTextModel.canRedo)
        Spacer ()
      }.padding (8)
      VSplitView {
        SWIFT_LexicalHilitingTextEditor (
          self.mSharedTextModel,
          selectionBinding: self.$mTextSyntaxViewCurrentSettings.mTopViewSelection
        )
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
          SWIFT_LexicalHilitingTextEditor (
            self.mSharedTextModel,
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
