//
//  ProjectDocumentView.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 11/09/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

struct ProjectDocumentView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Binding private var mDocument : ProjectDocument
  private var mFileURL : URL
  @ObservedObject var mProjectSharedTextModel : SWIFT_SharedTextModel

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @StateObject private var mRootNode : SWIFT_FileNode
  @State private var mSingleSelection : UUID?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (document inDocumentBinding : Binding <ProjectDocument>, fileURL inFileURL : URL) {
    self._mDocument = inDocumentBinding
    self.mFileURL = inFileURL
    self._mRootNode = StateObject (
      wrappedValue: SWIFT_FileNode (
        url: inFileURL.deletingLastPathComponent ().appendingPathComponent ("galgas-sources"),
        isExpanded: true
      )
    )
    self.mProjectSharedTextModel = SWIFT_SharedTextModel (
      scanner: ScannerFor_galgasScanner3 (),
      stringBinding: inDocumentBinding.mString
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    NavigationSplitView () {
      self.sidebarView
      .navigationSplitViewColumnWidth (min: 150, ideal: 250, max: 500)
    }detail: {
      if let fileNodeID = self.mSingleSelection, let fileURL = self.mRootNode.fileURL (forID: fileNodeID) {
        VStack {
          Spacer ()
          VStack {
            Spacer ()
            Text (fileURL.path())
            Spacer ()
          }
          Spacer ()
        }
      }else{
        SWIFT_TextSyntaxColoringView (self.mProjectSharedTextModel)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var sidebarView : some View {
    VStack {
      Button ("Project") { self.mSingleSelection = nil }
      List (selection: self.$mSingleSelection) {
        if let children = self.mRootNode.mChildren {
          ForEach (children, id: \.self.id) { child in
            SWIFT_FileNodeView (node: child, selection: self.$mSingleSelection)
          }
        }else{
          ProgressView ("Chargement...").onAppear { self.mRootNode.loadChildren () }
        }
      }
      .frame (minWidth: 400, minHeight: 500)
      .listStyle (.sidebar)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

