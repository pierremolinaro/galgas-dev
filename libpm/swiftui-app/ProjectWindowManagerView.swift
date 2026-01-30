//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 11/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct ProjectWindowManagerView : View {

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mProjectFileURL : URL
  @Binding private var mDocument : ProjectDocument
  @State private var mIssues : [CompilationIssue] = []
  @State private var mInitialResizingDone = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (document inDocumentBinding : Binding <ProjectDocument>,
        projectFileURL inFileURL : URL) {
    self._mDocument = inDocumentBinding
    self.mProjectFileURL = inFileURL
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    ProjectDocumentView (
      document: self.$mDocument,
      projectFileURL: self.mProjectFileURL,
      issuesBinding: self.$mIssues
    )
    .focusedSceneValue (
      \.activeDocument,
      ActiveDocumentFocusedValue (
        projectURL: self.mProjectFileURL,
      )
    )
    .onAppear { self.resizeOnceAndInstallFrameObservers () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func resizeOnceAndInstallFrameObservers () {
    if !self.mInitialResizingDone {
      self.mInitialResizingDone = true
      let guiSettingsURL = self.mProjectFileURL
        .deletingLastPathComponent ()
        .appendingPathComponent ("build")
        .appendingPathComponent ("helpers")
        .appendingPathComponent ("gui-settings.json")
      self.mDocument.mUserInterfaceSetting.setProjectSettingsURL (guiSettingsURL)
      if let window = NSApplication.shared.windows.first (where: { $0.isKeyWindow }) {
      //--- Apply document setting
        if let r = self.mDocument.mUserInterfaceSetting.projectWindowFrame {
          window.setFrame (r, display: true)
        }
      //--- Add window frame change observers
        NotificationCenter.default.addObserver (
          self.mDocument.mUserInterfaceSetting,
          selector: #selector (UserInterfaceSetting.projectWindowFrameDidChange (_:)),
          name: NSWindow.didResizeNotification,
          object: window
        )
        NotificationCenter.default.addObserver (
          self.mDocument.mUserInterfaceSetting,
          selector: #selector (UserInterfaceSetting.projectWindowFrameDidChange (_:)),
          name: NSWindow.didMoveNotification,
          object: window
        )
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  func guiSettingsURL () -> URL {
//    return self.mProjectFileURL
//      .deletingLastPathComponent ()
//      .appendingPathComponent ("build")
//      .appendingPathComponent ("helpers")
//      .appendingPathComponent ("gui-settings.json")
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
