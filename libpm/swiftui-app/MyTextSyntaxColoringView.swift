//
//  ContentView.swift
//  text-syntax-coloring
//
//  Created by Pierre Molinaro on 08/08/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct MyTextSyntaxColoringView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

 // @ObservedObject, sinon les @Published ne sont pas observées
  @ObservedObject private var mSharedTextModel : SWIFT_SharedTextModel

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mEditorViewArray : [EditorViewObject]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (_ inSharedTextModel : SWIFT_SharedTextModel) {
    self.mSharedTextModel = inSharedTextModel
    self.mEditorViewArray = [
//      EditorViewObject (SWIFT_LexicalHilitingTextEditor (inSharedTextModel)),
      EditorViewObject (SWIFT_LexicalHilitingTextEditor (inSharedTextModel))
    ]
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
        ForEach (self.mEditorViewArray.indices, id: \.self) { (index : Int) in
          VStack {
            Divider ()
            HStack {
              Spacer ()
              Button ("+⬆︎") { self.insertAbove (index: index) }
              Button ("+⬇︎") { self.insertBelow (index: index) }
              if self.mEditorViewArray.count > 1 {
                Button ("-") { self.remove (atIndex: index) }
              }
            }
            self.mEditorViewArray [index].mView
            .focusedValue (
              \.activeView,
              ActiveViewKeyStructValue (
                sharedTextModel: self.mSharedTextModel,
                canUndo: self.mSharedTextModel.canUndo,
                canRedo: self.mSharedTextModel.canRedo
              )
            )
            .frame (minWidth: 300, minHeight: 100)
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func insertBelow (index inIndex : Int) {
    self.mEditorViewArray.insert (
      EditorViewObject (SWIFT_LexicalHilitingTextEditor (self.mSharedTextModel)),
      at: inIndex + 1
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func insertAbove (index inIndex : Int) {
    self.mEditorViewArray.insert (
      EditorViewObject (SWIFT_LexicalHilitingTextEditor (self.mSharedTextModel)),
      at: inIndex
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func remove (atIndex inIndex : Int) {
    self.mEditorViewArray.remove (at: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

//#Preview {
//  MyTextSyntaxColoringView (
//    SWIFT_SharedTextModel (
//      scanner: ScannerFor_galgasScanner3 (),
//      string: ""
//    )
//  )
//}

//--------------------------------------------------------------------------------------------------

fileprivate class EditorViewObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mView : SWIFT_LexicalHilitingTextEditor

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (_ inView : SWIFT_LexicalHilitingTextEditor) {
    self.mView = inView
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
