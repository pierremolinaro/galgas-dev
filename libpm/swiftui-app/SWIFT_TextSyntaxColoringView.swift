//
//  SWIFT_TextSyntaxColoringView.swift
//  text-syntax-coloring
//
//  Created by Pierre Molinaro on 08/08/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SWIFT_TextSyntaxColoringView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

 // @ObservedObject, sinon les @Published ne sont pas observées
  @ObservedObject private var mSharedTextModel : SWIFT_SharedTextModel

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mBottomViewIsVisible = true

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (_ inSharedTextModel : SWIFT_SharedTextModel) {
    self.mSharedTextModel = inSharedTextModel
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
        SWIFT_LexicalHilitingTextEditor (self.mSharedTextModel)
        .focusedValue (
          \.activeView,
          ActiveViewKeyStructValue (
            sharedTextModel: self.mSharedTextModel,
            canUndo: self.mSharedTextModel.canUndo,
            canRedo: self.mSharedTextModel.canRedo
          )
        )
        .conditionalOverlay (condition: !self.mBottomViewIsVisible, alignment: .topTrailing) {
          HStack {
            Button ("+") { self.mBottomViewIsVisible = true }
            Spacer ().frame (width: 15)
          }
        }
        if self.mBottomViewIsVisible {
          SWIFT_LexicalHilitingTextEditor (self.mSharedTextModel)
          .focusedValue (
            \.activeView,
            ActiveViewKeyStructValue (
              sharedTextModel: self.mSharedTextModel,
              canUndo: self.mSharedTextModel.canUndo,
              canRedo: self.mSharedTextModel.canRedo
            )
          )
          .overlay (alignment: .topTrailing) { HStack { Button ("-") { self.mBottomViewIsVisible = false } ; Spacer ().frame (width: 15) } }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
