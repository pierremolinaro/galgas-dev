//
//  SWIFT_SourceDocument.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 22/10/2025.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let galgas3Source = UTType (exportedAs: "name.pcmolinaro.pierre.galgas-ide.galgas3")
}

//--------------------------------------------------------------------------------------------------

struct SWIFT_SourceDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let mID : UUID
  var mSharedTextModel : SWIFT_SharedTextModel? = nil
  @State private var mSourceString : String = ""

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (id inID : UUID, url inURL : URL) {
    self.mID = inID
    self.mSourceString = ""
    self.mSharedTextModel = SWIFT_SharedTextModel (
      scanner: ScannerFor_galgasScanner3 (),
      stringBinding : self.$mSourceString
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
