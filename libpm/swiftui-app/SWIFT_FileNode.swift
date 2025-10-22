//
//  SWIFT_FileNode.swift
//  image-repertoire
//
//  Created by Pierre Molinaro on 20/10/2025.
//
//--------------------------------------------------------------------------------------------------

import Foundation
import Combine
import AppKit

//--------------------------------------------------------------------------------------------------

class SWIFT_FileNode : Identifiable, ObservableObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let id = UUID ()
  @Published var mURL : URL
  @Published var mChildren : [SWIFT_FileNode]? = nil
  @Published var mIsExpanded : Bool
  @Published var mIsRenaming : Bool = false
  private var mDirectoryMonitor : DispatchSourceFileSystemObject? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (url: URL, isExpanded : Bool) {
    self.mURL = url
    self.mIsExpanded = isExpanded
    if self.isDirectory {
      self.startMonitoring ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor deinit {
    self.stopMonitoring ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var isDirectory : Bool {
    var isDir: ObjCBool = false
    FileManager.default.fileExists (atPath: self.mURL.path, isDirectory: &isDir)
    return isDir.boolValue
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func loadChildren () {
    guard self.isDirectory else { return }
    do{
      let contents = try FileManager.default.contentsOfDirectory (
        at: self.mURL,
        includingPropertiesForKeys: nil,
        options: [.skipsHiddenFiles]
      )
      let sortedContents = contents.sorted {
        $0.lastPathComponent.localizedCompare($1.lastPathComponent) == .orderedAscending
      }
      DispatchQueue.main.async {
        self.mChildren = sortedContents.map { SWIFT_FileNode (url: $0, isExpanded: false) }
      }
    }catch{
      print("Erreur lors de la lecture du dossier: \(error)")
      self.mChildren = []
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func startMonitoring () {
    let fileDescriptor = open (self.mURL.path, O_EVTONLY)
    guard fileDescriptor != -1 else {
      print("Erreur ouverture du descripteur pour \(self.mURL.path)")
      return
    }
    self.mDirectoryMonitor = DispatchSource.makeFileSystemObjectSource (
      fileDescriptor: fileDescriptor,
      eventMask: [.write, .delete, .rename],
      queue: DispatchQueue.global()
    )
    self.mDirectoryMonitor?.setEventHandler { [weak self] in
      guard let self = self else { return }
      DispatchQueue.main.async {
        if self.mIsExpanded {
          print("🔄 Mise à jour de \(self.mURL.lastPathComponent)") // ✅ Recharger seulement si ouvert
          self.loadChildren()
        }else{
          print("📁 Changement détecté dans \(self.mURL.lastPathComponent), mais dossier fermé")
        }
      }
    }
    self.mDirectoryMonitor?.setCancelHandler { close(fileDescriptor) }
    self.mDirectoryMonitor?.resume ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func stopMonitoring() {
    self.mDirectoryMonitor?.cancel ()
    self.mDirectoryMonitor = nil
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func fileURL (forID inID : UUID) -> URL? {
    if self.isDirectory {
      if let children = self.mChildren {
        for child in children {
          if let url = child.fileURL (forID: inID) {
            return url
          }
        }
        return nil
      }else{
        return nil
      }
    }else if self.id == inID {
      return self.mURL
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: File operations
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func rename (to inNewName : String) -> (Bool, String) {
    let newURL = self.mURL.deletingLastPathComponent().appendingPathComponent (inNewName)
    do{
      try FileManager.default.moveItem (at: self.mURL, to: newURL)
      self.mURL = newURL
      return (false, "")
    }catch{
      return (true, error.localizedDescription)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func moveToTrash () -> (Bool, String) {
    do{
      try FileManager.default.trashItem (at: self.mURL, resultingItemURL: nil)
      return (false, "")
    }catch{
      return (true, error.localizedDescription)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func duplicate () -> (Bool, String) {
    do{
      let fileManager = FileManager.default

      // 1. Vérifie que le fichier existe
      guard fileManager.fileExists (atPath: self.mURL.path) else {
        throw NSError(domain: "DuplicateError", code: 1, userInfo: [NSLocalizedDescriptionKey: "Fichier non trouvé."])
      }

      let directory = self.mURL.deletingLastPathComponent ()
      let fileExtension = self.mURL.pathExtension
      let baseFilename = self.mURL.deletingPathExtension ().lastPathComponent
      let copyLabel = "copy"
      var copyName = "\(baseFilename)-\(copyLabel)"
      var destinationURL = directory.appendingPathComponent(copyName).appendingPathExtension(fileExtension)

      var copyIndex = 2

      // 2. Incrémente si fichier déjà existant
      while fileManager.fileExists (atPath: destinationURL.path) {
        copyName = "\(baseFilename)-\(copyLabel)-\(copyIndex)"
        destinationURL = directory.appendingPathComponent(copyName).appendingPathExtension(fileExtension)
        copyIndex += 1
      }

      // 3. Copie le fichier
      try fileManager.copyItem (at: self.mURL, to: destinationURL)
      return (false, "")
    }catch{
      return (true, error.localizedDescription)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func revealInFinder () {
    NSWorkspace.shared.activateFileViewerSelecting ([self.mURL])
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func newEmptyFile () {
    let fileManager = FileManager.default

    let directory = self.mURL.deletingLastPathComponent()
    let fileExtension = self.mURL.pathExtension
    let newFileLabel = "untitled"
    var newFileName = "\(newFileLabel)"
    var destinationURL = directory.appendingPathComponent(newFileName).appendingPathExtension(fileExtension)

    var index = 2

    // 2. Incrémente si fichier déjà existant
    while fileManager.fileExists (atPath: destinationURL.path) {
      newFileName = "\(newFileLabel)\(index)"
      destinationURL = directory.appendingPathComponent(newFileName).appendingPathExtension(fileExtension)
      index += 1
    }

    // 3. Copie le fichier
    fileManager.createFile (atPath: destinationURL.path, contents: nil)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func newFolder () -> (Bool, String) {
    let fileManager = FileManager.default

    let directory = self.mURL.deletingLastPathComponent()
    let newFolderLabel = "untitled"
    var newFolderName = "\(newFolderLabel)"
    var destinationURL = directory.appendingPathComponent(newFolderName)

    var index = 2

    // 2. Incrémente si fichier déjà existant
    while fileManager.fileExists (atPath: destinationURL.path) {
      newFolderName = "\(newFolderLabel)\(index)"
      destinationURL = directory.appendingPathComponent(newFolderName)
      index += 1
    }

    // 3. Copie le fichier
    do{
      try fileManager.createDirectory (at: destinationURL, withIntermediateDirectories: false)
      return (false, "")
    }catch{
      return (true, error.localizedDescription)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
