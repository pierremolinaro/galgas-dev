//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 11/09/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct ProjectDocument : FileDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // MODEL
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var mString : String {
    didSet { self.saveDocument () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // PROPERTIES
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mUserInterfaceSetting = UserInterfaceSetting ()

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
    DispatchQueue.main.async {
      self.mUserInterfaceSetting.writeGUISettings ()
    }
    let data = self.mString.data (using: .utf8)!
    return FileWrapper (regularFileWithContents: data)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func saveDocument () {
    DispatchQueue.main.async {
//    print ("Save")
      if let doc = NSDocumentController.shared.currentDocument {
        doc.save (
          to: doc.fileURL!,
          ofType: doc.fileType!,
          for: .saveOperation
        ) { error in
          if let error = error {
            print ("Erreur:", error)
          }else{
  //          print ("Document sauvegardé.")
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
