//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension ProjectDocumentView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func compileProject () {
    self.mRootDirectoryNode.saveAllEditedFiles ()
    self.mSidebarSelectedItem = SidebarSelectedItem.compileLog
    self.mIssues.removeAll ()
    self.mProjectCompiler.compile (
      projectURL: self.mProjectFileURL,
      appendIssueCallBack: { self.mIssues.append ($0) }
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
