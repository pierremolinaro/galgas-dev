//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension ProjectDocumentView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func populate (contextualMenu inMenu : NSMenu,
                 forString inTokenString : String,
                 withIndexingTitles inIndexingTitles : [String]) {
  //--- Save source files
    self.mRootDirectoryNode.saveAllEditedFiles ()
  //--- Indexing dictionary
    let dictionaryArray = self.buildIndexingDictionaryArray ()
  //--- Build array of all references of given token
    var allReferences = [String] ()
    for currentIndexDictionary in dictionaryArray {
      if let references = currentIndexDictionary [inTokenString] {
        allReferences += references
      }
    }
  //--- Build dictionary for the given token, organized by Kind
    var kindDictionary = [Int : [String]] ()
    for descriptor in allReferences {
      let components = descriptor.components (separatedBy: ":")
      if let kind = Int (components [0]) {
        kindDictionary [kind] = kindDictionary [kind, default: []] + [descriptor]
      }
    }
//    print (kindDictionary)
  //--- Build Menu
//    if (! hasAtomicSelection) {
//      NSMenuItem * item = [inMenu addItemWithTitle:@"Select all token characters" action:@selector (selectAllTokenCharacters:) keyEquivalent:@""] ;
//      [item setTarget:inTextDisplayDescriptor.textView] ;
//      [item setRepresentedObject:[NSValue valueWithRange:inSelectedRange]] ;
//    }
  //---
    inMenu.addItem (.separator ())
    if kindDictionary.isEmpty {
      let title = "No index for '\(inTokenString)'"
      inMenu.addItem (withTitle: title, action: nil, keyEquivalent: "")
    }else{
      let titleAttributes : [NSAttributedString.Key : Any] = [
        .font : NSFont.boldSystemFont (ofSize: NSFont.smallSystemFontSize)
      ]
      for kindIndex in kindDictionary.keys.sorted () {
        if kindIndex >= 0, kindIndex < inIndexingTitles.count {
          let str = NSAttributedString (string: inIndexingTitles [kindIndex], attributes: titleAttributes)
          inMenu.addItem (withTitle: "", action: nil, keyEquivalent: "")
          inMenu.items.last?.attributedTitle = str
          for reference : String in kindDictionary [kindIndex]! {
            let components = reference.split (separator: ":")
            let line = components [1]
            let file = (components [4].description as NSString).lastPathComponent
            inMenu.addItem (
              withTitle: "  " + file + ", line" + line,
              action: #selector (RootDirectoryNode.indexingContextualMenuAction (_:)),
              keyEquivalent: ""
            )
            inMenu.items.last?.target = self.mRootDirectoryNode
            inMenu.items.last?.representedObject = reference
          }
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Indexing dictionary
  // Every plist list is a dictionary: the key is the indexed to token; the
  // associated value is an NSArray of NSString that has the following format:
  //   "kind:line:locationIndex:length:sourceFileFullPath"
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor func buildIndexingDictionaryArray () -> [[String : [String]]] {
    let fm = FileManager ()
    var result = [[String : [String]]] ()
  //--- Create indexing directory
    let indexingDirURL = self.mProjectFileURL.deletingLastPathComponent().appending (path: "build/indexes-new")
    try? fm.createDirectory (
      at: indexingDirURL,
      withIntermediateDirectories: true,
      attributes: nil
    )
  //--- Project file path directory
    let sourceDirectoryURL = self.mProjectFileURL.deletingLastPathComponent ().appending (path: "galgas-sources")
    if let subpaths = try? fm.subpathsOfDirectory (atPath: sourceDirectoryURL.path()) {
      let commandLineToolInvocation : CommandLineToolInvocation = commandLineToolInvocation ()
      let compilerToolURL = commandLineToolInvocation.tool
      var availableDictionaryURLArray = [URL] ()
      let opq = OperationQueue ()
      for subpath in subpaths {
        let sourceFileURL = sourceDirectoryURL.appending (path: subpath)
        if projectFileExtensions.contains (sourceFileURL.pathExtension) {
          let indexFileURL = indexingDirURL.appending (path: subpath).appendingPathExtension ("plist")
          if let indexDate = modificationDate (of: indexFileURL) {
            let sourceDate = modificationDate (of: sourceFileURL)!
            if sourceDate > indexDate {
              let op = IndexingOperation (
                sourceURL: sourceFileURL,
                compilerToolURL: compilerToolURL,
                indexFileURL: indexFileURL
              )
              opq.addOperation (op)
            }
          }else{
            let op = IndexingOperation (
              sourceURL: sourceFileURL,
              compilerToolURL: compilerToolURL,
              indexFileURL: indexFileURL
            )
            opq.addOperation (op)
          }
          availableDictionaryURLArray.append (indexFileURL)
        }
      }
      opq.waitUntilAllOperationsAreFinished ()
    //--- Parse available dictionaries
      for url in availableDictionaryURLArray {
        if let dict = NSDictionary (contentsOf: url) as? [String : [String]] {
          result.append (dict)
        }
      }
    }

//    var optProjectFilePath : String? = nil
//    var optIndexingSuffix : String? = nil
//    for document in SWIFT_DocumentController.myDocuments () {
//      if let url = document.fileURL, let indexingSuffix = indexingDescriptors [url.path.pathExtension] {
//        optProjectFilePath = url.path
//        optIndexingSuffix = indexingSuffix
//      }
//    }
//  //--- index directory
//    if let projectFilePath = optProjectFilePath,
//       let indexingSuffix = optIndexingSuffix,
//       let appDelegate = NSApp.delegate as? SWIFT_AppDelegate {
//      let projectFileDirectory = projectFilePath.deletingLastPathComponent
//      let projectFileName = projectFilePath.lastPathComponent
//      let projectFileNameModified = projectFileName.replacingOccurrences (of: ".", with: "+")
//      let modifiedIndexingSuffix = indexingSuffix.replacingOccurrences (of: "*", with: projectFileNameModified)
//      let indexingDirectory = projectFileDirectory + "/" + modifiedIndexingSuffix
//      try? fm.createDirectory (
//        atPath: indexingDirectory,
//        withIntermediateDirectories: true,
//        attributes: nil
//      )
//    //--- Handled extensions
//      let handledExtensions = Set (SWIFT_DocumentController.supportedDocumentExtensions)
//    //--- All files in source directory
//      let compilerToolPath = appDelegate.compilerToolPath
//      let relativePathes = try? fm.subpathsOfDirectory (atPath: projectFileDirectory)
//      var availableDictionaryPathArray = [String] ()
//      let opq = OperationQueue ()
//      for relativeFilePath in relativePathes ?? [] {
//        let fullFilePath = projectFileDirectory + "/" + relativeFilePath
//        if handledExtensions.contains (fullFilePath.pathExtension) {
//        //--- Index file path
//          let indexFileFullPath = indexingDirectory + "/" + fullFilePath.lastPathComponent + ".plist"
//        //--- Parse source file ?
//          if !fm.fileExists (atPath: indexFileFullPath) { // Parse source file
//            let op = IndexingOperation (
//              path: fullFilePath,
//              compilerToolPath: compilerToolPath,
//              indexFileFullPath: indexFileFullPath
//            )
//            opq.addOperation (op)
//            availableDictionaryPathArray.append (indexFileFullPath)
//          }else if self.sourceFile (fullFilePath, newerThanFile: indexFileFullPath) {
//            try? fm.removeItem (atPath: indexFileFullPath)
//            let op = IndexingOperation (
//              path: fullFilePath,
//              compilerToolPath: compilerToolPath,
//              indexFileFullPath: indexFileFullPath
//            )
//            opq.addOperation (op)
//            availableDictionaryPathArray.append (indexFileFullPath)
//          }else{
//            availableDictionaryPathArray.append (indexFileFullPath)
//          }
//        }
//      }
//    //--- Wait operations are completed
//      opq.waitUntilAllOperationsAreFinished ()
//    //--- Parse available dictionaries
//      for fullPath in availableDictionaryPathArray {
//        if let dict = NSDictionary (contentsOfFile: fullPath) as? [String : [String]] {
//          result.append (dict)
//        }
//      }
//    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  @objc fileprivate func indexingMenuAction (_ inMenuItem : NSMenuItem) {
//    if let str = inMenuItem.representedObject as? String {
//      let components = str.split (separator: ":")
//      let locationIndexStr = components [2]
//      let lengthStr = components [3]
//      let file = String (components [4])
//      if let locationIndex = Int (locationIndexStr),
//       let length = Int (lengthStr),
//       let window = self.mSourceTextView.window as? SWIFT_SingleWindow {
//        window.findOrAddTab (
//          forURL: URL (fileURLWithPath: file),
//          range: NSRange (location: locationIndex, length: length),
//          postAction: nil
//        )
//      }
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate func modificationDate (of url: URL) -> Date? {
    if let attributes = try? FileManager.default.attributesOfItem (atPath: url.path),
       let date = attributes [.modificationDate] as? Date {
      return date
    }else{
      return nil
    }
}

//--------------------------------------------------------------------------------------------------
