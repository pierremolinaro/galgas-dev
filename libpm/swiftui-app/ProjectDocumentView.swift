//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

struct ProjectDocumentView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum SidebarSelectedItem : CaseIterable {
    case fileList, compileLog, issues

    var systemImageName : String {
      switch self {
      case .fileList: return "folder"
      case .compileLog: return "hammer"
      case .issues: return "exclamationmark.triangle"
      }
    }

  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mProjectFileURL : URL

  @State private var mSidebarSelectedItem = SidebarSelectedItem.fileList
  @StateObject var mProjectTextModel : SWIFT_SharedTextModel
  @StateObject private var mProjectCompiler = ProjectCompiler ()

  @Binding private var mDocument : ProjectDocument
  @StateObject private var mRootDirectoryNode : SWIFT_RootDirectoryNode

  @State private var mSelectedIssue : UUID? = nil
  @State private var mScrollSourceViewToLine : Int? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (document inDocumentBinding : Binding <ProjectDocument>,
        fileURL inFileURL : URL) {
    self._mDocument = inDocumentBinding
    self.mProjectFileURL = inFileURL
    let projectSharedTextModel = SWIFT_SharedTextModel (
      scanner: scannerFor (extension: inFileURL.pathExtension),
      initialString: inDocumentBinding.mString.wrappedValue
    )
    self._mProjectTextModel = StateObject (wrappedValue: projectSharedTextModel)
    let rootDirectoryNode = SWIFT_RootDirectoryNode (
      url: inFileURL.deletingLastPathComponent ().appendingPathComponent ("galgas-sources")
    )
    self._mRootDirectoryNode = StateObject (wrappedValue: rootDirectoryNode)
    projectSharedTextModel.setWriteFileCallback (self.projectDocumentStringDidChange)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ObservedObject private var mProjectDocumentSaveScheduler = ProjectDocumentSaveScheduler ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func projectDocumentStringDidChange (_ inString : String) {
    self.mDocument.mString = inString
    self.mProjectDocumentSaveScheduler.scheduleProjectDocumentSaveOperation ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    NavigationSplitView () {
      self.sidebarView
      .navigationSplitViewColumnWidth (min: 150, ideal: 250, max: 500)
    }detail: {
      self.detailView
      .toolbar {
         ToolbarItemGroup (placement: .principal) {
           if let fileNodeID = self.mRootDirectoryNode.mSelectedFileNodeID {
             Text (self.mRootDirectoryNode.fileLastPathComponent (forNodeID: fileNodeID)).font (Font (NSFont.titleBarFont(ofSize: 0)))
             if self.mRootDirectoryNode.isFileEdited (forNodeID: fileNodeID) {
               Text ("— Edited").font (Font (NSFont.titleBarFont(ofSize: 0)))
            }
          }
        }
      }
    }
  //--- Save all edited files
    .onReceive (NotificationCenter.default.publisher (for: Notification.Name.mySaveAllCommand)) { _ in
      self.mRootDirectoryNode.saveAllEditedFiles ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var sidebarView : some View {
    VStack {
      Picker("", selection: self.$mSidebarSelectedItem) {
        ForEach (SidebarSelectedItem.allCases, id: \.self) { Image (systemName: $0.systemImageName).tag($0) }
      }.pickerStyle (.segmented)
      switch self.mSidebarSelectedItem {
      case .fileList :
        VStack {
          HStack {
            Spacer ().frame (width: 8)
            Button ("Project \(self.mProjectFileURL.lastPathComponent)") { self.mRootDirectoryNode.mSelectedFileNodeID = nil }
            Spacer ()
          }
          Divider ()
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
      case .compileLog :
        SWIFT_CompileLogView (
          attributedString: self.mProjectCompiler.compileLog,
          issueArray: self.mProjectCompiler.issueArray
        )
      case .issues:
        List (self.mProjectCompiler.issueArray, id: \.id, selection: self.$mSelectedIssue) { issue in
          issue.view
        }
        .onChange (of: self.mSelectedIssue) { (_, _) in
           if let selectedIssueID = self.mSelectedIssue,
              let idx = self.mProjectCompiler.issueArray.firstIndex (where: { $0.id == selectedIssueID }) {
             let fileURL = self.mProjectCompiler.issueArray [idx].fileURL
             self.mRootDirectoryNode.mSelectedFileNodeID = SWIFT_FileNodeID (url: fileURL)
             self.mScrollSourceViewToLine = self.mProjectCompiler.issueArray [idx].line
          }
        }
      }
    }
    .toolbar (removing: .sidebarToggle)
    .toolbar { self.sidebarViewToolbar () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private func sidebarViewToolbar () -> some View {
    if self.mProjectCompiler.isCompilingProject {
      ProgressView ().progressViewStyle (.circular).controlSize (.small)
    }else{
      Button (action: self.compileProject) { Label ("Compile", systemImage: "hammer") }
      .help (LocalizedStringKey ("Compile the project"))
      .keyboardShortcut ("B", modifiers: .command)
    }
    Button (action: self.mProjectCompiler.cancelCompilation) { Label ("Stop", systemImage: "stop.circle") }
    .help (LocalizedStringKey ("Cancel compilation"))
    .disabled (!self.mProjectCompiler.isCompilingProject)
    if self.mProjectCompiler.errorCount > 0 {
      Text ("⚠\(self.mProjectCompiler.errorCount)").foregroundColor(.red).bold()
    }
    if self.mProjectCompiler.warningCount > 0 {
      Text ("⚠\(self.mProjectCompiler.warningCount)").foregroundColor(.orange).bold()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func compileProject () {
    self.mRootDirectoryNode.saveAllEditedFiles ()
    self.mSidebarSelectedItem = SidebarSelectedItem.compileLog
    self.mProjectCompiler.compile (projectURL: self.mProjectFileURL)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var detailView : some View {
    if let fileNodeID = self.mRootDirectoryNode.mSelectedFileNodeID {
      if let stm = self.mRootDirectoryNode.findOrAddSourceText (forNodeID: fileNodeID) {
        SWIFT_TextSyntaxColoringView (
          model: stm,
          issueArray: self.mProjectCompiler.issueArray,
          url: self.mRootDirectoryNode.fileURL (forID: fileNodeID),
          scrollToLine: self.mScrollSourceViewToLine
        )
        .id (fileNodeID) // Force le rafraîchissement à chaque changement de fileNodeID
      }else{
        EmptyView ()
      }
    }else{
      SWIFT_TextSyntaxColoringView (
        model: self.mProjectTextModel,
        issueArray: self.mProjectCompiler.issueArray,
        url: self.mProjectFileURL,
        scrollToLine: nil
      )
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

fileprivate final class ProjectDocumentSaveScheduler : ObservableObject {

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSaveScheduled = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func scheduleProjectDocumentSaveOperation () {
    if !self.mSaveScheduled {
      self.mSaveScheduled = true
      DispatchQueue.main.asyncAfter (deadline: .now () + AUTOMATIC_SAVE_DELAY) { self.saveProjectDocument () }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func saveProjectDocument () {
    self.mSaveScheduled = false
    NSApp.sendAction (#selector(NSDocument.save(_:)), to: nil, from: nil)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
