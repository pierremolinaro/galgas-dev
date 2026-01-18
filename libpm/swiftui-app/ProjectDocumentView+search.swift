//
//  ProjectDocumentView+search.swift
//  galgas-ide-swiftui
//
//  Created by Pierre Molinaro on 18/01/2026.
//
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension ProjectDocumentView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func performSearch () {
    if !self.mSearchString.isEmpty {
      self.mSearchMessage = "Searching…"
      self.mSelectedSearchResultID = nil
      self.mSearchResults.removeAll ()
      self.mRootDirectoryNode.saveAllEditedFiles ()
      self.mProjectDocumentSaveScheduler.saveProjectDocument {
        RunLoop.main.run (until: Date ()) // For updating UI
      //--- Search in project file
        self.search (inFileURL: self.mProjectFileURL, fileNodeID: nil)
      //---
        let fm = FileManager ()
        let directoryURL = self.mProjectFileURL.deletingLastPathComponent ().appending (path: "galgas-sources")
        if let subpaths = try? fm.subpathsOfDirectory (atPath: directoryURL.path()) {
          for subpath in subpaths.sorted () {
            let url = directoryURL.appendingPathComponent (subpath)
            if projectFileExtensions.contains (url.pathExtension) {
              self.search (inFileURL: url, fileNodeID: SourceFileNodeID (url: url))
            }
          }
        }
      }
      var resultCount = 0
      for result in self.mSearchResults {
        resultCount += result.mEntries.count
      }
      if resultCount == 0 {
        self.mSearchMessage = "No result"
      }else if resultCount == 1 {
        self.mSearchMessage = "1 result in 1 file"
      }else{
        var s = "\(resultCount) results in "
        if self.mSearchResults.count == 1 {
          s += "1 file"
        }else{
          s += "\(self.mSearchResults.count) files"
        }
        self.mSearchMessage = s
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func search (inFileURL inURL : URL, fileNodeID inFileNodeID : SourceFileNodeID?) {
    if let contents = try? String (contentsOf: inURL, encoding: .utf8) {
      var entries = [SearchResultItem] ()
      var searchStartIndex = contents.startIndex
      while searchStartIndex < contents.endIndex,
          let foundRange : Range <String.Index> = contents.range (of: self.mSearchString, range: searchStartIndex ..< contents.endIndex),
          !foundRange.isEmpty {
        let lineRange = contents.lineRange (for: foundRange)
        var lineContents = String (contents [lineRange])
        lineContents.removeLast ()
        let startLocation : Int = contents.distance (from: contents.startIndex, to: foundRange.lowerBound)
        let endLocation : Int = contents.distance (from: contents.startIndex, to: foundRange.upperBound)
        let nsRange = NSRange (location: startLocation, length: endLocation - startLocation)
        let lineAndColumn = LineAndColumn (for: contents, at: startLocation)
        let r = SearchResultItem (
          fileNodeID: inFileNodeID,
          lineContents: lineContents,
          range: nsRange,
          startLineAndColumn: lineAndColumn
        )
        entries.append (r)
        searchStartIndex = foundRange.upperBound
      }
      if entries.count > 0 {
        self.mSearchResults.append (SearchResultNode (fileName: inURL.lastPathComponent, entries: entries))
      }
    }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func searchViewForSidebar () -> some View {
    VStack {
      HStack {
        Spacer ().frame (width: 6)
        Text ("Search")
        TextField ("", text: self.$mSearchString)
        .multilineTextAlignment (.center)
        .textFieldStyle (.roundedBorder)
        .overlay (alignment: .leading) {
          Image (systemName: "magnifyingglass")
          .foregroundStyle (.secondary)
          .padding (.leading, 8)
        }
        .onSubmit { self.performSearch () }
        Spacer ().frame (width: 6)
      }
      Divider ()
      Text (self.mSearchMessage).foregroundStyle (.secondary)
      Divider ()
      List (self.mSearchResults, id: \.id, selection: self.$mSelectedSearchResultID) { node in
        SearchResultNodeView (
          node: node,
          selectedResultItemID: self.$mSelectedSearchResultID,
          selectedFileNodeID: self.$mRootDirectoryNode.mSelectedFileNodeID
        )
      }
      Spacer ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
