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
                              completionHandler inCompletionHandler : @escaping (NSDocument?, Bool, Error?) -> Void) {
    super.openDocument (withContentsOf: inURL, display: false) { (inDocument : NSDocument?, alreadyOpened : Bool, error : Error?) in
      if inDisplay, let document = inDocument as? SWIFT_SingleDocument {
        let newWindow = SWIFT_SingleWindow (withDocument: document)
        newWindow.makeKeyAndOrderFront (nil)
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

  static func mySaveAllDocuments () {
    for doc in NSDocumentController.shared.documents {
      if let document = doc as? SWIFT_SingleDocument {
        if document.isDocumentEdited {
          document.saveGGSDocument ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static func closeUnreferencedDocuments () {
 //   Swift.print ("closeUnreferencedDocuments")
    for testedDocument in self.myDocuments () {
      var n = 0
      for w in NSApp.windows {
        if let window = w as? SWIFT_SingleWindow {
          n += window.tabsReferencing (document: testedDocument)
        }
      }
    //  Swift.print ("n \(n) for \(testedDocument.lastComponentOfFileName)")
      if n == 0 {
        DispatchQueue.main.async {
       //   Swift.print ("testedDocument.windowControllers \(testedDocument.windowControllers)")
          testedDocument.close ()
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static func supportedDocumentExtensions () -> [String] {
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
           //Swift.print ("\(typeIdentifier) -> \(extensions)")
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

}

//--------------------------------------------------------------------------------------------------
