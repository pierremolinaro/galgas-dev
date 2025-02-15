//
//  SWIFT_buildIndexingDictionaryArray.swift
//  galgas-ide
//
//  Created by Pierre Molinaro on 15/02/2025.
//
//--------------------------------------------------------------------------------------------------

import Foundation
import AppKit

//--------------------------------------------------------------------------------------------------

extension AutoLayoutSourceTextPresentationView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Every plist list is a dictionary: the key is the indexed to token; the
  // associated value is an NSArray of NSString that has the following format:
  //   "kind:line:locationIndex:length:sourceFileFullPath"
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor func buildIndexingDictionaryArray () -> [[String : [String]]] {
    let fm = FileManager ()
    var result = [[String : [String]]] ()
  //--- Save all sources
    NSDocumentController.shared.saveAllDocuments (nil)
  //--- Project file path directory
    let indexingDescriptors : [String : String] = indexingDescriptorDictionary ()
    var optProjectFilePath : String? = nil
    var optIndexingSuffix : String? = nil
    for document in SWIFT_DocumentController.myDocuments () {
      if let url = document.fileURL, let indexingSuffix = indexingDescriptors [url.path.pathExtension] {
        optProjectFilePath = url.path
        optIndexingSuffix = indexingSuffix
      }
    }
  //--- index directory
    if let projectFilePath = optProjectFilePath,
       let indexingSuffix = optIndexingSuffix,
       let appDelegate = NSApp.delegate as? SWIFT_AppDelegate {
      let projectFileDirectory = projectFilePath.deletingLastPathComponent
      let projectFileName = projectFilePath.lastPathComponent
      let projectFileNameModified = projectFileName.replacingOccurrences (of: ".", with: "-")
      let modifiedIndexingSuffix = indexingSuffix.replacingOccurrences (of: "*", with: projectFileNameModified)
      let indexingDirectory = projectFileDirectory + "/" + modifiedIndexingSuffix
      try? fm.createDirectory (
        atPath: indexingDirectory,
        withIntermediateDirectories: true,
        attributes: nil
      )
    //--- Handled extensions
      let handledExtensions = Set (SWIFT_DocumentController.supportedDocumentExtensions)
    //--- All files in source directory
      let compilerToolPath = appDelegate.compilerToolPath
      let relativePathes = try? fm.subpathsOfDirectory (atPath: projectFileDirectory)
      var availableDictionaryPathArray = [String] ()
      let opq = OperationQueue ()
      for relativeFilePath in relativePathes ?? [] {
        let fullFilePath = projectFileDirectory + "/" + relativeFilePath
        if handledExtensions.contains (fullFilePath.pathExtension) {
        //--- Index file path
          let indexFileFullPath = indexingDirectory + "/" + fullFilePath.lastPathComponent + ".plist"
        //--- Parse source file ?
          if !fm.fileExists (atPath: indexFileFullPath) { // Parse source file
            let op = IndexingOperation (
              path: fullFilePath,
              compilerToolPath: compilerToolPath,
              indexFileFullPath: indexFileFullPath
            )
            opq.addOperation (op)
            availableDictionaryPathArray.append (indexFileFullPath)
          }else if self.sourceFile (fullFilePath, newerThanFile: indexFileFullPath) {
            try? fm.removeItem (atPath: indexFileFullPath)
            let op = IndexingOperation (
              path: fullFilePath,
              compilerToolPath: compilerToolPath,
              indexFileFullPath: indexFileFullPath
            )
            opq.addOperation (op)
            availableDictionaryPathArray.append (indexFileFullPath)
          }else{
            availableDictionaryPathArray.append (indexFileFullPath)
          }
        }
      }
    //--- Wait operations are completed
      opq.waitUntilAllOperationsAreFinished ()
    //--- Parse available dictionaries
      for fullPath in availableDictionaryPathArray {
        if let dict = NSDictionary (contentsOfFile: fullPath) as? [String : [String]] {
          result.append (dict)
        }
      }
    }
    return result ;
  }

//--------------------------------------------------------------------------------------------------

fileprivate func sourceFile (_ inFile1 : String,
                             newerThanFile inFile2 : String) -> Bool {
  let fm = FileManager ()
  var result = true
  if let file1_dictionary = try? fm.attributesOfItem (atPath: inFile1),
     let file1_modificationDate = file1_dictionary [.modificationDate] as? Date,
     let file2_dictionary = try? fm.attributesOfItem (atPath: inFile2),
     let file2_modificationDate = file2_dictionary [.modificationDate] as? Date {
    result = file1_modificationDate > file2_modificationDate
  }
  return result
}

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

fileprivate final class IndexingOperation : Operation, @unchecked Sendable {

  private let path : String
  private let compilerToolPath : String
  private let indexFileFullPath : String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (path inPath : String,
        compilerToolPath inCompilerToolPath : String,
        indexFileFullPath inIndexFileFullPath : String) {
    self.path = inPath
    self.compilerToolPath = inCompilerToolPath
    self.indexFileFullPath = inIndexFileFullPath
    super.init ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func main () {
  //--- Command line tool does actually exist ?
    if !self.compilerToolPath.isEmpty {
    //--- Build argument array
      var arguments = [String] ()
      arguments.append (self.path)
      arguments.append ("--mode=indexing:" + indexFileFullPath)
    //--- Create task
      let task = Process ()
      task.launchPath = self.compilerToolPath
      task.arguments = arguments
    //--- Start task
      task.launch ()
    //--- Wait the task is completed
      task.waitUntilExit ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
