//
//  SWIFT_FileNodeView.swift
//  image-repertoire
//
//  Created by Pierre Molinaro on 20/10/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

struct SWIFT_FileNodeView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ObservedObject var mNode : SWIFT_FileNode
  @State private var mTemporaryNameForRenaming = ""

  @State private var mShowFileOperationError = false
  @State private var mErrorMessage = ""
  @Binding private var mSelectionBinding : SWIFT_FileNodeID?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (node inNode : SWIFT_FileNode,
        selection inSelectionBinding : Binding <SWIFT_FileNodeID?>) {
    self.mNode = inNode
    self._mSelectionBinding = inSelectionBinding
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    if self.mNode.isDirectory {
      DisclosureGroup (isExpanded: self.$mNode.mIsExpanded) {
        ForEach (self.mNode.mChildren, id: \.self.id) { child in
          SWIFT_FileNodeView (node: child, selection: self.$mSelectionBinding)
          .padding (.leading, 4)
        }
      } label: {
        self.rowView ()
      }
    }else{
      self.rowView ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private func rowView () -> some View {
    VStack {
      HStack {
        if self.mNode.mIsEdited {
          Text ("●")
        }
        self.fileIcon (for: self.mNode.mURL)
        if self.mNode.mIsRenaming {
          self.fileNameEditor ()
        }else{
          Text (verbatim: "\(self.mNode.mURL.lastPathComponent)")
        }
        Spacer ()
      }
    }
    .onTapGesture (count: 1) {
      if self.mSelectionBinding != self.mNode.id {
        self.mNode.mIsRenaming = true
        self.mSelectionBinding = self.mNode.id
        self.mTemporaryNameForRenaming = self.mNode.mURL.lastPathComponent
      }
    }
    .contextMenu { self.contextMenuItems () }
    .sheet (isPresented: self.$mShowFileOperationError) { self.presentFileOperationError () }
    .onDrag { // encode the item ID
      return NSItemProvider (item: self.mNode.mURL as NSURL, typeIdentifier: UTType.fileURL.identifier)
    }
    .onDrop (of: [.fileURL], isTargeted: nil) { providers in
      self.handleDrop (providers: providers)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private func fileNameEditor () -> some View {
    TextField ("", text: self.$mTemporaryNameForRenaming, onCommit: {
      if !self.mTemporaryNameForRenaming.isEmpty,
             self.mTemporaryNameForRenaming != self.mNode.mURL.lastPathComponent {
        self.rename (to: self.mTemporaryNameForRenaming)
      }
      self.mNode.mIsRenaming = false
    })
    .frame (minWidth: 100)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private func contextMenuItems () -> some View {
    Button ("Reveal in Finder" ) { self.revealInFinder () }
    Divider ()
    Button ("New Empty File" ) { self.newEmptyFile () }
    Button ("New Folder" ) { self.newFolder () }
    Divider ()
    Button ("Rename…" ) { self.mNode.mIsRenaming = true }
    Button ("Duplicate" ) { self.duplicate () }
    Divider ()
    Button ("Move to Trash", role: .destructive) { self.moveToTrash () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func presentFileOperationError () -> some View {
    VStack {
      Text ("File Error").bold ()
      Spacer ()
      Text (self.mErrorMessage)
      Spacer ()
      Button ("Ok") { self.mShowFileOperationError = false }
      .keyboardShortcut (.defaultAction)
    }.padding (12)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func fileIcon (for url : URL) -> some View {
    let nsImage : NSImage = NSWorkspace.shared.icon (forFile: url.path)
    nsImage.size = NSSize (width: 16, height: 16)
    return Image (nsImage: nsImage)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func handleDrop (providers inItemProviders : [NSItemProvider]) -> Bool {
    // print ("performDrop")
    var found = false
    for provider in inItemProviders {
      if provider.hasItemConformingToTypeIdentifier (UTType.fileURL.identifier) {
        found = true
        provider.loadItem (forTypeIdentifier: UTType.fileURL.identifier, options: nil) { (item, error) in
          let optDroppedURL : URL?
          if let data = item as? Data,
            let url = NSURL(absoluteURLWithDataRepresentation: data, relativeTo: nil) as URL? {
            optDroppedURL = url
          }else if let url = item as? URL {
            optDroppedURL = url
          }else{
            optDroppedURL = nil
          }
//          print ("droppedURL: \(String(describing: optDroppedURL)) --> \(self.mNode.mURL.path)")
          if let droppedURL = optDroppedURL {
            DispatchQueue.main.async {
              do {
                if self.mNode.isDirectory {
                  let targetURL = self.mNode.mURL.appendingPathComponent (droppedURL.lastPathComponent)
//                  print ("dir: moving \(droppedURL) to \(targetURL)")
                  try FileManager.default.moveItem (at: droppedURL, to: targetURL)
                }else{
                  let targetURL = self.mNode.mURL.deletingLastPathComponent().appendingPathComponent (droppedURL.lastPathComponent)
//                  print ("file: moving \(droppedURL) to \(targetURL)")
                  try FileManager.default.moveItem (at: droppedURL, to: targetURL)
                }
              }catch{
                 self.mShowFileOperationError = true
                 self.mErrorMessage = error.localizedDescription
              }
            }
          }
        }
      }
    }
    return found
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //MARK: File operations
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func rename (to inNewName : String) {
    let newURL = self.mNode.mURL.deletingLastPathComponent().appendingPathComponent (inNewName)
    do{
      try FileManager.default.moveItem (at: self.mNode.mURL, to: newURL)
      let renamedFileID = SWIFT_FileNodeID (url: newURL)
      self.mNode.mRootNode?.loadChildrenAndSelect (renamedFileID)
    }catch{
      self.mShowFileOperationError = true
      self.mErrorMessage = error.localizedDescription
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func moveToTrash () {
    do{
      try FileManager.default.trashItem (at: self.mNode.mURL, resultingItemURL: nil)
    }catch{
      self.mShowFileOperationError = true
      self.mErrorMessage = error.localizedDescription
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func duplicate () {
    do{
      let fileManager = FileManager.default

      // 1. Vérifie que le fichier existe
      guard fileManager.fileExists (atPath: self.mNode.mURL.path) else {
        throw NSError (domain: "DuplicateError", code: 1, userInfo: [NSLocalizedDescriptionKey: "Fichier non trouvé."])
      }

      let directory = self.mNode.mURL.deletingLastPathComponent ()
      let fileExtension = self.mNode.mURL.pathExtension
      let baseFilename = self.mNode.mURL.deletingPathExtension ().lastPathComponent
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
      try fileManager.copyItem (at: self.mNode.mURL, to: destinationURL)
      let duplicatedFileID = SWIFT_FileNodeID (url: destinationURL)
      self.mNode.mRootNode?.loadChildrenAndSelect (duplicatedFileID)
    }catch{
      self.mShowFileOperationError = true
      self.mErrorMessage = error.localizedDescription
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func revealInFinder () {
    NSWorkspace.shared.activateFileViewerSelecting ([self.mNode.mURL])
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func newEmptyFile () {
    let fileManager = FileManager.default

    let directory = self.mNode.mURL.deletingLastPathComponent()
    let fileExtension = self.mNode.mURL.pathExtension
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
  //--- Select the new file
    let newFileID = SWIFT_FileNodeID (url: destinationURL)
    self.mNode.mRootNode?.loadChildrenAndSelect (newFileID)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func newFolder () {
    let fileManager = FileManager.default

    let directory = self.mNode.mURL.deletingLastPathComponent ()
    let newFolderLabel = "untitled"
    var newFolderName = "\(newFolderLabel)"
    var destinationURL = directory.appendingPathComponent (newFolderName)

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
    //--- Select the new folder
      let newFolderID = SWIFT_FileNodeID (url: destinationURL)
      self.mNode.mRootNode?.loadChildrenAndSelect (newFolderID)
    }catch{
      self.mShowFileOperationError = true
      self.mErrorMessage = error.localizedDescription
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
