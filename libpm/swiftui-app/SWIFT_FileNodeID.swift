//
//  SWIFT_FileNodeID.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 23/10/2025.
//
//--------------------------------------------------------------------------------------------------

import Foundation
import Combine
import AppKit

//--------------------------------------------------------------------------------------------------

struct SWIFT_FileNodeID : Hashable, CustomStringConvertible {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mID : UInt64

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (url inURL : URL) {
    var statInfo = stat ()
    if stat (inURL.path, &statInfo) == 0 {
      self.mID = UInt64 (statInfo.st_ino)
    }else{
      self.mID = 0
      print ("Zero pour \(inURL)")
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var description : String {
    "\(self.mID.displayString)"
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
