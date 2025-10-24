//--------------------------------------------------------------------------------------------------

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

//fileprivate var gSourceDocumentArray = [SWIFT_SourceDocument] ()

//--------------------------------------------------------------------------------------------------

struct ProjectDocumentView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Binding private var mDocument : ProjectDocument
  private let mProjectFileURL : URL
  @StateObject var mProjectSharedTextModel : SWIFT_SharedTextModel
  @State private var mProjectTextSyntaxViewCurrentSettings = SWIFT_TextSyntaxViewCurrentSettings ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @StateObject private var mRootDirectoryNode : SWIFT_RootDirectoryNode
  @State private var mSingleSelection : SWIFT_FileNodeID?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (document inDocumentBinding : Binding <ProjectDocument>,
        fileURL inFileURL : URL) {
    print ("INIT ProjectDocumentView")
    self._mDocument = inDocumentBinding
    self.mProjectFileURL = inFileURL
    let projectSharedTextModel = SWIFT_SharedTextModel (
      scanner: ScannerFor_galgasScanner3 (),
      string: inDocumentBinding.mString.wrappedValue
    )
    self._mProjectSharedTextModel = StateObject (wrappedValue: projectSharedTextModel)
//    self.mCurrentSharedTextModel = projectSharedTextModel
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
//      SWIFT_TextSyntaxColoringView (
//        model: self.mProjectSharedTextModel,
//        currentSettings: self.$mProjectTextSyntaxViewCurrentSettings
//      )
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var sidebarView : some View {
    VStack {
      Button ("Project") { self.mSingleSelection = nil }
      ScrollViewReader { (proxy : ScrollViewProxy) in
        List (selection: self.$mSingleSelection) {
          ForEach (self.mRootDirectoryNode.mChildren, id: \.self.id) { child in
            SWIFT_FileNodeView (node: child, selection: self.$mSingleSelection)
          }
        }
        .onChange (of: self.mSingleSelection) { (_, newValue) in
          if let selectedID = newValue {
            DispatchQueue.main.async { proxy.scrollTo (selectedID, anchor: .center) }
          }
        }
        .listStyle (.sidebar)
        .frame (minWidth: 400, minHeight: 500)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var detailView : some View {
//    if let fileNodeID = self.mSingleSelection {
//      if let stm = self.mRootDirectoryNode.findOrAddSourceText (forNodeID: fileNodeID) {
//        SWIFT_TextSyntaxColoringView (
//          model: stm,
//          currentSettings: self.mRootDirectoryNode.findOrAddSourceSettings (forNodeID: fileNodeID)
//        )
//      }else{
//        EmptyView ()
//      }
//    }else{
      SWIFT_TextSyntaxColoringView (
        model: self.mProjectSharedTextModel,
        currentSettings: self.$mProjectTextSyntaxViewCurrentSettings
      )
//    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func fileSelectionDidChange (_ inProxy : ScrollViewProxy) {
    if let selectedID = self.mSingleSelection {
      DispatchQueue.main.async {
        inProxy.scrollTo (selectedID, anchor: .center)
      }
//      self.mCurrentSharedTextModel = self.mRootDirectoryNode.findOrAddSourceText (forNodeID: selectedID)
    }else{

    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
