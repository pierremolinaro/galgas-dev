//
//  ProjectDocument.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 11/09/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let galgas3Project = UTType (exportedAs: "name.pcmolinaro.pierre.galgas-ide.galgas3Project")
}

//--------------------------------------------------------------------------------------------------

struct ProjectDocument : FileDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  static let readableContentTypes : [UTType] = [.galgas3Project]

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // MODEL
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var mString : String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init () {
    self.mString = ""
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (configuration inConfiguration : ReadConfiguration) throws {
    if let data = inConfiguration.file.regularFileContents,
       let str = String (data: data, encoding: .utf8) {
      self.mString = str
    }else{
      throw CocoaError (.fileReadCorruptFile)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func fileWrapper (configuration inWriteConfiguration : WriteConfiguration) throws -> FileWrapper {
    let data = self.mString.data (using: .utf8)!
    return FileWrapper (regularFileWithContents: data)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
