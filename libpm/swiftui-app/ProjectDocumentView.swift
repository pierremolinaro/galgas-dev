//--------------------------------------------------------------------------------------------------

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

//fileprivate var gSourceDocumentArray = [SWIFT_SourceDocument] ()

//--------------------------------------------------------------------------------------------------

struct ProjectDocumentView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Binding private var mDocument : ProjectDocument
  private var mProjectFileURL : URL
  @ObservedObject var mProjectSharedTextModel : SWIFT_SharedTextModel
  @StateObject private var mProjectTextSyntaxViewCurrentSettings = SWIFT_TextSyntaxViewCurrentSettings ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @StateObject private var mRootDirectoryNode : SWIFT_RootDirectoryNode
  @State private var mSingleSelection : SWIFT_FileNodeID?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (document inDocumentBinding : Binding <ProjectDocument>, fileURL inFileURL : URL) {
    self._mDocument = inDocumentBinding
    self.mProjectFileURL = inFileURL
    self.mProjectSharedTextModel = SWIFT_SharedTextModel (
      scanner: ScannerFor_galgasScanner3 (),
      string: inDocumentBinding.mString.wrappedValue
    )
    self._mRootDirectoryNode = StateObject (
      wrappedValue: SWIFT_RootDirectoryNode (
        url: inFileURL.deletingLastPathComponent ().appendingPathComponent ("galgas-sources")
      )
    )
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
      Button ("Project") { self.mSingleSelection = nil }
      ScrollViewReader { proxy in
        List (selection: self.$mSingleSelection) {
          ForEach (self.mRootDirectoryNode.mChildren, id: \.self.id) { child in
            SWIFT_FileNodeView (node: child, selection: self.$mSingleSelection)
          }
        }
        .onChange (of: self.mSingleSelection) { (newOptSelectedID, _) in
          if let selectedID = newOptSelectedID {
            DispatchQueue.main.async {
              proxy.scrollTo (selectedID, anchor: .center)
            }
          }
        }
        .listStyle (.sidebar)
        .frame (minWidth: 400, minHeight: 500)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var detailView : some View {
    if let fileNodeID = self.mSingleSelection {
      if let stm = self.mRootDirectoryNode.findOrAddSourceText (forNodeID: fileNodeID) {
        SWIFT_TextSyntaxColoringView (
          id: fileNodeID,
          stm,
          currentSettings: self.mRootDirectoryNode.findOrAddSourceSettings (forNodeID: fileNodeID)
        )
      }else{
        EmptyView ()
      }
    }else{
      SWIFT_TextSyntaxColoringView (
        id: SWIFT_FileNodeID (url: self.mProjectFileURL),
        self._mProjectSharedTextModel,
        currentSettings: self.mProjectTextSyntaxViewCurrentSettings
      )
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
