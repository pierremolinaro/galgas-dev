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
  @Binding private var mSelectionBinding : UUID?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (node inNode : SWIFT_FileNode, selection inSelectionBinding : Binding <UUID?>) {
    self.mNode = inNode
    self._mSelectionBinding = inSelectionBinding
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    if self.mNode.isDirectory {
      DisclosureGroup (isExpanded: self.$mNode.mIsExpanded) {
        if let children = self.mNode.mChildren {
          ForEach (children, id: \.self.id) { child in
            SWIFT_FileNodeView (node: child, selection: self.$mSelectionBinding)
            .padding (.leading, 4)
          }
        }else{
          ProgressView ().onAppear { self.mNode.loadChildren () }
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
    HStack {
      self.fileIcon (for: self.mNode.mURL)
      if self.mNode.mIsRenaming {
        self.fileNameEditor ()
      }else{
        Text (self.mNode.mURL.lastPathComponent)
      }
      Spacer()
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
        (self.mShowFileOperationError, self.mErrorMessage) = self.mNode.rename (to: self.mTemporaryNameForRenaming)
      }
      self.mNode.mIsRenaming = false
    })
    .frame (minWidth: 100)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder private func contextMenuItems () -> some View {
    Button ("Reveal in Finder" ) { self.mNode.revealInFinder () }
    Divider ()
    Button ("New Empty File" ) { self.mNode.newEmptyFile () }
    Button ("New Folder" ) {
      (self.mShowFileOperationError, self.mErrorMessage) = self.mNode.newFolder ()
    }
    Divider ()
    Button ("Rename…" ) { self.mNode.mIsRenaming = true }
    Button ("Duplicate" ) {
      (self.mShowFileOperationError, self.mErrorMessage) = self.mNode.duplicate ()
    }
    Divider ()
    Button ("Move to Trash", role: .destructive) {
      (self.mShowFileOperationError, self.mErrorMessage) = self.mNode.moveToTrash ()
    }
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

}

//--------------------------------------------------------------------------------------------------
