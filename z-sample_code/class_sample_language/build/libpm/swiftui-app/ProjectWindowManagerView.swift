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
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
