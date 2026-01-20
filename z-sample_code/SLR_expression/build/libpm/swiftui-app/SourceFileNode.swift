//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 20/10/2025.
//--------------------------------------------------------------------------------------------------

import Foundation
import Combine
import AppKit

//--------------------------------------------------------------------------------------------------

final class SourceFileNode : Identifiable, ObservableObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let id : SourceFileNodeID
  @Published var mURL : URL
  @Published private(set) var mChildren : [SourceFileNode] = []
  @Published var mIsRenaming : Bool = false
  @Published var mIsEdited : Bool = false
  private(set) weak var mRootNode : RootDirectoryNode?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @Published var mIsExpanded : Bool {
    didSet {
      self.mRootNode?.setExpanded (self.mIsExpanded, forDirectoryID: self.id)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (url inURL : URL, rootNode inRootNode : RootDirectoryNode?) {
    self.mURL = inURL
    self.mRootNode = inRootNode
    self.id = SourceFileNodeID (url: inURL)
    self.mIsExpanded = inRootNode?.isExpanded (forDirectoryID: self.id) ?? false
    if self.isDirectory {
      self.loadChildren ()
    }
    noteObjectAllocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  deinit {
    noteObjectDeallocation (self)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  fileprivate func loadChildren () {
    if let contents = try? FileManager.default.contentsOfDirectory (
        at: self.mURL,
        includingPropertiesForKeys: nil,
        options: [.skipsHiddenFiles]
      ) {
      let sortedContents = contents.sorted {
        $0.lastPathComponent.localizedCompare ($1.lastPathComponent) == .orderedAscending
      }
      self.mChildren = sortedContents.map { SourceFileNode (url: $0, rootNode: self.mRootNode) }
    }else{
      self.mChildren = []
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func buildNodeIDSet (_ ioNodeIDSet : inout Set <SourceFileNodeID>) {
    ioNodeIDSet.insert (self.id)
    for child in self.mChildren {
      child.buildNodeIDSet (&ioNodeIDSet)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var isDirectory : Bool {
    var isDir: ObjCBool = false
    FileManager.default.fileExists (atPath: self.mURL.path, isDirectory: &isDir)
    return isDir.boolValue
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func fileURL (forID inID : SourceFileNodeID) -> URL? {
    if self.id == inID {
      return self.mURL
    }else if self.isDirectory {
      for child in self.mChildren {
        if let url = child.fileURL (forID: inID) {
          return url
        }
      }
      return nil
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func propagateFileEditionState (_ inEditedFileIDSet : Set <SourceFileNodeID>) {
     let edited = inEditedFileIDSet.contains (self.id)
     if self.mIsEdited != edited {
       DispatchQueue.main.async { self.mIsEdited = edited }
     }
     for child in self.mChildren {
       child.propagateFileEditionState (inEditedFileIDSet)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
