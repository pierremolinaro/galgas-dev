//
//  Created by Pierre Molinaro on 03/11/2021.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
// During development changing the UTI can confuse the LaunchServices database. You can try to reset it by running:
//
// /System/Library/Frameworks/CoreServices.framework/Frameworks/LaunchServices.framework/Support/lsregister -kill -r -domain local -domain system -domain user
//
//--------------------------------------------------------------------------------------------------

class SWIFT_DocumentController : NSDocumentController {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func openDocument (withContentsOf inURL : URL,
                              display inDisplay : Bool,
                              completionHandler inCompletionHandler : @escaping @Sendable (NSDocument?, Bool, (any Error)?) -> Void) {
    super.openDocument (withContentsOf: inURL, display: false) { (inDocument : NSDocument?, alreadyOpened : Bool, error : Error?) in
      if inDisplay, let document = inDocument as? SWIFT_SingleDocument {
        DispatchQueue.main.async {
          self.noteNewRecentDocumentURL (inURL) // Ajout explicite au menu 'Open Recent'
          _ = SWIFT_SingleWindow (withDocument: document)
        }
      }
      inCompletionHandler (inDocument, alreadyOpened, error)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static func myDocuments () -> [SWIFT_SingleDocument] {
    var result = [SWIFT_SingleDocument] ()
    for doc in NSDocumentController.shared.documents {
      if let document = doc as? SWIFT_SingleDocument {
        result.append (document)
      }
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Save all documents
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction override func saveAllDocuments (_ inSender : Any?) { // Invoked from menu item
    Self.mySaveAllDocuments ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static func mySaveAllDocuments () {
    for doc in NSDocumentController.shared.documents {
      if let document = doc as? SWIFT_SingleDocument {
        if document.isDocumentEdited {
          document.save (nil)
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static func closeUnreferencedDocuments () {
    for testedDocument in self.myDocuments () {
      var n = 0
      for w in NSApp.windows {
        if let window = w as? SWIFT_SingleWindow {
          n += window.tabsReferencing (document: testedDocument)
        }
      }
      if n == 0 {
        DispatchQueue.main.async { testedDocument.close () }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static var supportedDocumentExtensions : [String] {
    var result = [String] ()
    if let infoDictionary = Bundle.main.infoDictionary,
       let allDocumentTypes = infoDictionary ["CFBundleDocumentTypes"] as? [NSDictionary],
       let allExportedIdentifierDicts = infoDictionary ["UTExportedTypeDeclarations"] as? [NSDictionary] {
       var extensionDictionary = [String : [String]] ()
       for exportedIdentifierDict in allExportedIdentifierDicts {
         if let typeIdentifier = exportedIdentifierDict ["UTTypeIdentifier"] as? String,
           let typeSpecification = exportedIdentifierDict ["UTTypeTagSpecification"] as? NSDictionary,
           let extensions = typeSpecification ["public.filename-extension"] as? [String] {
           extensionDictionary [typeIdentifier] = extensions
         }
       }
       for docTypeDict in allDocumentTypes {
         if let documentTypes = docTypeDict ["LSItemContentTypes"] as? [String],
            let documentTypeRole = docTypeDict ["CFBundleTypeRole"] as? String,
            documentTypeRole == "Editor" {
          for docType in documentTypes {
            result += extensionDictionary [docType, default: []]
          }
        }
      }
    }
 //   Swift.print ("supportedDocumentExtensions \(result)")
    let r = Set <String> (result)
    return [String] (r)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // L'implémentation de noteNewRecentDocument par NSDocument appelle la méthode
  // noteNewRecentDocumentURL. En interceptant noteNewRecentDocument, le menu 'Open Recent'
  // n'est plus alimenté. On l'alimente en appelant noteNewRecentDocumentURL explicitement dans
  // openDocument, voir ci-dessus.
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func noteNewRecentDocument (_ inDocument : NSDocument) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
