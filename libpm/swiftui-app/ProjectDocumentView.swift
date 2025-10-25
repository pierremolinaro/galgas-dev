//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

struct ProjectDocumentView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Binding private var mDocument : ProjectDocument
  private let mProjectFileURL : URL
  @StateObject var mProjectTextModel : SWIFT_SharedTextModel

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @StateObject private var mRootDirectoryNode : SWIFT_RootDirectoryNode

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (document inDocumentBinding : Binding <ProjectDocument>,
        fileURL inFileURL : URL) {
    self._mDocument = inDocumentBinding
    self.mProjectFileURL = inFileURL
    let projectSharedTextModel = SWIFT_SharedTextModel (
      scanner: ScannerFor_galgasScanner3 (),
      string: inDocumentBinding.mString.wrappedValue
    )
    self._mProjectTextModel = StateObject (wrappedValue: projectSharedTextModel)
    let rootDirectoryNode = SWIFT_RootDirectoryNode (
      url: inFileURL.deletingLastPathComponent ().appendingPathComponent ("galgas-sources")
    )
    self._mRootDirectoryNode = StateObject (wrappedValue: rootDirectoryNode)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    NavigationSplitView () {
      self.sidebarView
      .navigationSplitViewColumnWidth (min: 150, ideal: 250, max: 500)
    }detail: {
      self.detailView
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var sidebarView : some View {
    VStack {
      Button ("Project") { self.mRootDirectoryNode.mSelectedFileNodeID = nil }
      ScrollViewReader { (proxy : ScrollViewProxy) in
        List (selection: self.$mRootDirectoryNode.mSelectedFileNodeID) {
          ForEach (self.mRootDirectoryNode.mChildren, id: \.self.id) { child in
            SWIFT_FileNodeView (node: child, selection: self.$mRootDirectoryNode.mSelectedFileNodeID)
          }
        }
        .onChange (of: self.mRootDirectoryNode.mSelectedFileNodeID) { self.fileSelectionDidChange (proxy) }
        .listStyle (.sidebar)
        .frame (minWidth: 400, minHeight: 500)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var detailView : some View {
    if let fileNodeID = self.mRootDirectoryNode.mSelectedFileNodeID {
      if let stm = self.mRootDirectoryNode.findOrAddSourceText (forNodeID: fileNodeID) {
        SWIFT_TextSyntaxColoringView (model: stm).id (fileNodeID)
      }else{
        EmptyView ()
      }
    }else{
      SWIFT_TextSyntaxColoringView (model: self.mProjectTextModel)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func fileSelectionDidChange (_ inProxy : ScrollViewProxy) {
    if let selectedID = self.mRootDirectoryNode.mSelectedFileNodeID {
      DispatchQueue.main.async { inProxy.scrollTo (selectedID, anchor: .center) }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
