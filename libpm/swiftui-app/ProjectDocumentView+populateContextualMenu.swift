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
  // Every plist list is a dictionary: the key is the index to token; the
  // associated value is an Array of String that has the following format:
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
        if projectFileExtensions.contains (sourceFileURL.pathExtension.lowercased()) {
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
    return result ;
  }

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
