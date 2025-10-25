//
//  SWIFT_RootDirectoryNode.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 23/10/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

final class SWIFT_RootDirectoryNode : ObservableObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published var mURL : URL
  @Published private(set) var mChildren : [SWIFT_FileNode]
  @Published var mSelectedFileNodeID : SWIFT_FileNodeID? = nil
  private var mStream : FSEventStreamRef? = nil

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (url inURL : URL) {
    self.mURL = inURL
    self.mChildren = []
    noteObjectAllocation (self)
    self.loadChildren ()
    self.startMonitoring ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor deinit { // Stop monitoring
    self.stopMonitoring ()
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func loadChildren () {
    do{
      let contents = try FileManager.default.contentsOfDirectory (
        at: self.mURL,
        includingPropertiesForKeys: nil,
        options: [.skipsHiddenFiles]
      )
      let sortedContents = contents.sorted {
        $0.lastPathComponent.localizedCompare ($1.lastPathComponent) == .orderedAscending
      }
      self.mChildren = sortedContents.map { SWIFT_FileNode (url: $0, rootNode: self) }
    }catch{
      print("Erreur lors de la lecture du dossier: \(error)")
      self.mChildren = []
    }
    var nodeIDSet = Set <SWIFT_FileNodeID> ()
    self.buildNodeIDSet (&nodeIDSet)
    if let fileNodeID = self.mSelectedFileNodeID, !nodeIDSet.contains (fileNodeID) {
      self.mSelectedFileNodeID = nil
    }
    for nodeID in self.mSourceTextDictionary.keys {
      if !nodeIDSet.contains (nodeID) {
        self.mSourceTextDictionary [nodeID] = nil
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func buildNodeIDSet (_ ioNodeIDSet : inout Set <SWIFT_FileNodeID>) {
    for child in self.mChildren {
      child.buildNodeIDSet (&ioNodeIDSet)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mEventStreamCallback : FSEventStreamCallback = { streamRef, clientCallbackInfo, numEvents, eventPathsPtr, eventFlags, _ in
    guard let info = clientCallbackInfo else { return }
    let watcher = Unmanaged <SWIFT_RootDirectoryNode>.fromOpaque (info).takeUnretainedValue ()
    watcher.loadChildren ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func startMonitoring () {
  //--- Use an FSEvent for tracking Canari System Library changes
    let pathsToWatch : [String] = [self.mURL.path]
  //--- Latency
    let latency : CFTimeInterval = 0.25 // Latency in seconds
    var context = FSEventStreamContext ()
    context.info = UnsafeMutableRawPointer (Unmanaged.passUnretained (self).toOpaque ())
  //--- Flags
    let streamCreationFlags = FSEventStreamCreateFlags (
      kFSEventStreamCreateFlagFileEvents // Pour les événements de fichiers
    )
  //--- Créer un flux d'événements pour chaque répertoire à surveiller
    self.mStream = FSEventStreamCreate (
      kCFAllocatorDefault,
      self.mEventStreamCallback,
      &context,
      pathsToWatch as CFArray,
      FSEventStreamEventId (kFSEventStreamEventIdSinceNow),
      latency,
      streamCreationFlags
    )
  //-- Lancer le flux d'événements sur le thread principal
    FSEventStreamSetDispatchQueue (self.mStream!, DispatchQueue.main)
    FSEventStreamStart (self.mStream!)
//    print ("Surveillance démarrée")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func stopMonitoring () {
    if let stream = self.mStream  {
      FSEventStreamStop (stream)
      FSEventStreamInvalidate (stream)
      self.mStream = nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func fileURL (forID inID : SWIFT_FileNodeID) -> URL? {
    for child in self.mChildren {
      if let url = child.fileURL (forID: inID) {
        return url
      }
    }
    return nil
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Directory expansion
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mExpandedDictionary : [SWIFT_FileNodeID : Bool] = [:]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func setExpanded (_ inExpanded : Bool, forDirectoryID inID : SWIFT_FileNodeID) {
    self.mExpandedDictionary [inID] = inExpanded
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isExpanded (forDirectoryID inID : SWIFT_FileNodeID) -> Bool {
    return self.mExpandedDictionary [inID] ?? false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: Source text dictionary
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mSourceTextDictionary : [SWIFT_FileNodeID : SWIFT_SharedTextModel] = [:]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func findOrAddSourceText (forNodeID inID : SWIFT_FileNodeID) -> SWIFT_SharedTextModel? {
    if let stm = self.mSourceTextDictionary [inID] {
      return stm
    }else if let fileURL = self.fileURL (forID: inID),
             let data = try? Data (contentsOf: fileURL),
             let str = String (data: data, encoding: .utf8) {
      let stm = SWIFT_SharedTextModel (
        scanner: ScannerFor_galgasScanner3 (),
        string: str
      )
      self.mSourceTextDictionary [inID] = stm
      return stm
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
