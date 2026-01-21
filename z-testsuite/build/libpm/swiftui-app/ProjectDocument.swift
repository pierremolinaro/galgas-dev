//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 11/09/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct ProjectDocument : FileDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // MODEL
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var mString : String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    self.mString = ""
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (configuration inConfiguration : ReadConfiguration) throws {
    if let data = inConfiguration.file.regularFileContents,
       let str = String (data: data, encoding: .utf8) {
      self.mString = str
    }else{
      throw CocoaError (.fileReadCorruptFile)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func fileWrapper (configuration inWriteConfiguration : WriteConfiguration) throws -> FileWrapper {
    let data = self.mString.data (using: .utf8)!
    return FileWrapper (regularFileWithContents: data)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
