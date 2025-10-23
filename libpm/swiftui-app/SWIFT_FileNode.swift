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

  let id : SWIFT_FileNodeID
  @Published var mURL : URL
  @Published private(set) var mChildren : [SWIFT_FileNode] = []
  @Published var mIsRenaming : Bool = false
  private weak var mRootNode : SWIFT_RootDirectoryNode?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published var mIsExpanded : Bool {
    didSet {
      self.mRootNode?.setExpanded (self.mIsExpanded, forDirectoryID: self.id)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (url inURL : URL, rootNode inRootNode : SWIFT_RootDirectoryNode?) {
    self.mURL = inURL
    self.mRootNode = inRootNode
    self.id = SWIFT_FileNodeID (url: inURL)
    self.mIsExpanded = inRootNode?.isExpanded (forDirectoryID: self.id) ?? false
    if self.isDirectory {
      self.loadChildren ()
    }
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
      self.mChildren = sortedContents.map { SWIFT_FileNode (url: $0, rootNode: self.mRootNode) }
    }catch{
      print("Erreur lors de la lecture du dossier: \(error)")
      self.mChildren = []
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var isDirectory : Bool {
    var isDir: ObjCBool = false
    FileManager.default.fileExists (atPath: self.mURL.path, isDirectory: &isDir)
    return isDir.boolValue
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func fileURL (forID inID : SWIFT_FileNodeID) -> URL? {
    if self.isDirectory {
      for child in self.mChildren {
        if let url = child.fileURL (forID: inID) {
          return url
        }
      }
      return nil
    }else if self.id == inID {
      return self.mURL
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
