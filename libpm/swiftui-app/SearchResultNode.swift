//
//  SearchResultNode.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 18/01/2026.
//
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

struct SearchResultNode : Identifiable {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let id : UUID = UUID ()
  let fileName : String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private(set) var mEntries : [SearchResultItem]
//  @Published var mIsExpanded : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (fileName inFileName : String, entries inEntries : [SearchResultItem]) {
    self.fileName = inFileName
    self.mEntries = inEntries
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
