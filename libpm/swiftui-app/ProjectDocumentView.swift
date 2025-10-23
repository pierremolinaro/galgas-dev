//--------------------------------------------------------------------------------------------------

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

fileprivate var gSourceDocumentArray = [SWIFT_SourceDocument] ()

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
      stringBinding: inDocumentBinding.mString
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
    if let fileNodeID = self.mSingleSelection, let fileURL = self.mRootDirectoryNode.fileURL (forID: fileNodeID) {
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
      SWIFT_TextSyntaxColoringView (
        self.mProjectSharedTextModel,
        currentSettings: self.mProjectTextSyntaxViewCurrentSettings
      )
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  func findOrAddTextModel (forID inFileNodeID : UUID) -> SWIFT_SharedTextModel? {
//    if let fileURL = self.mRootNode.fileURL (forID: inFileNodeID) {
//    //--- Find document
//      var idx = 0
//      var found = false
//      while !found, idx < gSourceDocumentArray.count {
//        found = gSourceDocumentArray [idx].mID == inFileNodeID
//        idx += 1
//      }
////      if !found {
////        let config = try FileDocument.ReadConfiguration (file: FileWrapper (url: fileURL, options: []))
////        let newDocument = try SWIFT_SourceDocument (configuration: config)
////
////
////      }
//    }else{
//      return nil
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
