//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

struct ScrollSourceToLineNotificationObject {
  let location : Int
}

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
  @StateObject var mSharedTextModel : SWIFT_SharedTextModel
  @StateObject private var mProjectCompiler = ProjectCompiler ()

  @Binding private var mDocument : ProjectDocument
  @StateObject private var mRootDirectoryNode : SWIFT_RootDirectoryNode

  @State private var mSelectedIssue : UUID? = nil
  @Binding private var mIssues : [SWIFT_Issue]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (document inDocumentBinding : Binding <ProjectDocument>,
        projectFileURL inProjectFileURL : URL,
        issuesBinding inIssuesBinding : Binding <[SWIFT_Issue]>) {
    self._mDocument = inDocumentBinding
    self.mProjectFileURL = inProjectFileURL
    self._mIssues = inIssuesBinding
    let projectSharedTextModel = SWIFT_SharedTextModel (
      scanner: scannerFor (extension: inProjectFileURL.pathExtension),
      initialString: inDocumentBinding.mString.wrappedValue,
      fileURL: inProjectFileURL,
      issuesBinding: inIssuesBinding
    )
    self._mSharedTextModel = StateObject (wrappedValue: projectSharedTextModel)
    let rootDirectoryNode = SWIFT_RootDirectoryNode (
      url: inProjectFileURL.deletingLastPathComponent ().appendingPathComponent ("galgas-sources"),
      issuesBinding: inIssuesBinding
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
      self.mProjectDocumentSaveScheduler.saveProjectDocument (completionHandler: nil)
    }
  //--- Show issue in sidebar
    .onReceive (NotificationCenter.default.publisher (for: Notification.Name.myShowIssueInSidebar)) {
      if let issueID = $0.object as? UUID {
        self.mSelectedIssue = issueID
        self.mSidebarSelectedItem = .issues
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var sidebarView : some View {
    VStack {
      HStack {
        Picker("", selection: self.$mSidebarSelectedItem) {
          ForEach (SidebarSelectedItem.allCases, id: \.self) { Image (systemName: $0.systemImageName).tag($0) }
        }.pickerStyle (.segmented)
        Spacer ().frame (width: 6)
      }
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
          issueArray: self.mIssues
        )
      case .issues:
        if self.mIssues.isEmpty {
          Text ("No Issue").frame (maxHeight: .infinity).foregroundStyle (.secondary)
        }else{
          List (self.mIssues, id: \.id, selection: self.$mSelectedIssue) { issue in
            Button {
              self.mSelectedIssue = issue.id
              self.showSelectedIssueInSource ()
            } label: {
              issue.view.frame(maxWidth: .infinity, alignment: .leading)
            }
            .buttonStyle (.plain)
          }
        }
      }
    }
    .toolbar (removing: .sidebarToggle)
    .toolbar { self.sidebarViewToolbar () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func showSelectedIssueInSource () {
    DispatchQueue.main.async {
      if let selectedIssueID = self.mSelectedIssue,
        let idx = self.mIssues.firstIndex (where: { $0.id == selectedIssueID }) {
        let fileURL = self.mIssues [idx].fileURL
        if fileURL == self.mProjectFileURL {
          self.mRootDirectoryNode.mSelectedFileNodeID = nil // Affiche le projet
        }else{
          self.mRootDirectoryNode.mSelectedFileNodeID = SWIFT_FileNodeID (url: fileURL)
        }
        let object = ScrollSourceToLineNotificationObject (location: self.mIssues [idx].mStartLocation)
        DispatchQueue.main.async {
          NotificationCenter.default.post (name: .myScrollSourceToLocation, object: object)
        }
      }
    }
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
    if self.mSidebarSelectedItem == .fileList {
      self.mSidebarSelectedItem = SidebarSelectedItem.compileLog
    }
    self.mIssues.removeAll ()
    self.mProjectDocumentSaveScheduler.saveProjectDocument {
      self.mProjectCompiler.compile (
        projectURL: self.mProjectFileURL,
        appendIssueCallBack: { self.mIssues.append ($0) }
      )
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private var detailView : some View {
    if let fileNodeID = self.mRootDirectoryNode.mSelectedFileNodeID {
      if let stm = self.mRootDirectoryNode.findOrAddSourceText (forNodeID: fileNodeID) {
        SWIFT_TextSyntaxColoringView (
          model: stm,
          issueArray: self.mIssues,
          url: self.mRootDirectoryNode.fileURL (forID: fileNodeID)
        )
        .id (fileNodeID) // Force le rafraîchissement à chaque changement de fileNodeID
      }else{
        EmptyView ()
      }
    }else{ // Edit project file
      SWIFT_TextSyntaxColoringView (
        model: self.mSharedTextModel,
        issueArray: self.mIssues,
        url: self.mProjectFileURL
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
      DispatchQueue.main.asyncAfter (deadline: .now () + AUTOMATIC_SAVE_DELAY) {
        self.saveProjectDocument (completionHandler: nil)
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func saveProjectDocument (completionHandler inCompletionHandler: (() -> Void)?) {
    if self.mSaveScheduled {
      self.mSaveScheduled = false
      if let doc = NSDocumentController.shared.currentDocument {
        doc.save (
          to: doc.fileURL!,
          ofType: doc.fileType!,
          for: .saveOperation
        ) { error in
          if let error = error {
            print ("Erreur:", error)
          }else{
            inCompletionHandler? ()
          }
        }
      }
    }else{
      inCompletionHandler? ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
