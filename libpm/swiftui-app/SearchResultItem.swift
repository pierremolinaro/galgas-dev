//
//  SearchResultNode.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 18/01/2026.
//
//--------------------------------------------------------------------------------------------------

import Foundation
//import Combine
//import AppKit

//--------------------------------------------------------------------------------------------------

struct SearchResultItem : Identifiable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let id : UUID = UUID ()
  let fileNodeID : SourceFileNodeID?
  let lineContents : String
  let range : NSRange
  let startLineAndColumn : LineAndColumn

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (fileNodeID inFileNodeID : SourceFileNodeID?,
        lineContents inLineContents : String,
        range inRange : NSRange,
        startLineAndColumn inStartLineAndColumn : LineAndColumn) {
    self.lineContents = inLineContents
    self.range = inRange
    self.startLineAndColumn = inStartLineAndColumn
    self.fileNodeID = inFileNodeID
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
